#ifndef BOXCONTAINER_H
#define BOXCONTAINER_H

#include <iostream>
#define __T template <typename T, size_t maximum>

/**
 * CLASS WRAPPING ON TOP OF RAW ARRAY
*/
__T class BoxContainer{
    static const size_t DEFAULT_CAPACITY = 5;
    static const size_t EXPAND_STEPS = 5;
public:
    BoxContainer(size_t capacity = DEFAULT_CAPACITY);
    BoxContainer(const BoxContainer<T, maximum>& container);
    ~BoxContainer();   

    // Helper getter methods
    size_t size()const{return m_size;}
    size_t capacity()const{return m_capacity;}

    void expand(size_t new_capacity);// expanding
    void add(const T& item);// add
    bool remove_item(const T& item);// remove
    size_t remove_all(const T& item); // remove all

    // += operator
    void operator+=(const BoxContainer<T, maximum>& operand);
    // = operator
    void operator=(const BoxContainer<T, maximum>& source);

    T get_item(size_t index)const{
        return m_items[index];
    }
private:
    T * m_items;
    size_t m_size{};
    size_t m_capacity{};
};

__T BoxContainer<T, maximum>::BoxContainer(size_t capacity){
    m_items = new T[capacity];
    m_capacity = capacity;
    m_size=0;
}

__T BoxContainer<T, maximum>::BoxContainer(const BoxContainer<T, maximum>& source){
    //Set up the new Box
    m_items=new T[source.m_capacity];
    m_capacity=source.m_capacity;
    m_size=source.m_size;

    // Copy items from source over
    for(size_t i{};i<source.size();++i){
        m_items[i]=source.m_items[i];
    }
}

__T BoxContainer<T, maximum>::~BoxContainer(){
    delete[] m_items;
}

__T void BoxContainer<T, maximum>::expand(size_t new_capacity){
    std::cout << "Expanding to: " << new_capacity << std::endl;
    T *new_items_container;

    if(new_capacity <= m_capacity){ 
        return; // The needed capacity is already there
    }

    // Allocate new (larger) memory from old array to new
    new_items_container = new T[new_capacity];
    
    for(size_t i{0};i<m_size;++i){
        new_items_container[i]=m_items[i];
    }

    // Delete the old array
    delete[] m_items;

    // Make the current box wrap around the new array
    m_items=new_items_container;

    // Use the new capacity
    m_capacity = new_capacity;
}

__T void BoxContainer<T, maximum>::add(const T& item){
    if(m_size==m_capacity){
        expand(m_size+5);
    }
    m_items[m_size] = item;
    ++m_size;
}

__T bool BoxContainer<T, maximum>::remove_item(const T& item){
    // Find the target item
    int index{-1};
    for(size_t i{0};i<m_size;++i){
        if(m_items[i]==item){
            index=i;
            break;
        }
    }
    if(index==-1){
        return false;
    }

    // The item is located at m_items[index] if we fall here

    m_items[index]=m_items[m_size-1]; // Override with the last item
    m_size--;
    return true;
}

__T size_t BoxContainer<T, maximum>::remove_all(const T& item){
    size_t remove_count{};

    bool removed = remove_item(item);
    if(removed){
        ++remove_count;
    }

    while(removed){
        removed=remove_item(item);
        if(removed){
            ++remove_count;
        }
    }
    return remove_count;
}

__T void BoxContainer<T, maximum>::operator+=(const BoxContainer<T, maximum>& operand){
    if((m_size+operand.size())>m_capacity){
        expand(m_size+operand.size());
    }

    // Copy elements
    for(size_t i{0};i<operand.m_size;++i){
        m_items[m_size+i]=operand.m_items[i];
    }
    m_size+=operand.m_size;
}

__T BoxContainer<T, maximum> operator +(const BoxContainer<T, maximum>& left, const BoxContainer<T, maximum>& right){
    BoxContainer result(left.size() + right.size());
    result+=left;
    result+=right;
    return result;
}

__T void BoxContainer<T, maximum>::operator=(const BoxContainer& source){
    T *new_items;

    // Check for self-assignment:
    if(this == &source)
        return;

    if(m_capacity!=source.m_capacity){
        new_items=new T[source.m_capacity];
        delete[] m_items;
        m_items=new_items;
        m_capacity=source.m_capacity;
    }

    //copy the items over from source
    for(size_t i{};i<source.size();++i){
        m_items[i]=source.m_items[i];
    }
    m_size=source.m_size;
}

__T inline std::ostream& operator<<(std::ostream& out, const BoxContainer<T, maximum>& operand){
    out << "BoxContainer : [ size : " << operand.size() << ", items : ";

    for(size_t i{}; i<operand.size(); ++i){
        out << operand.get_item(i) << " ";
    }
    out << "]";
    return out;
 }

#endif