#include "boxcontainer.h"

BoxContainer::BoxContainer(size_t capacity){
    m_items = new value_type[capacity];
    m_capacity = capacity;
    m_size=0;
}

BoxContainer::BoxContainer(const BoxContainer& source){
    //Set up the new Box
    m_items=new value_type[source.m_capacity];
    m_capacity=source.m_capacity;
    m_size=source.m_size;

    // Copy items from source over
    for(size_t i{};i<source.size();++i){
        m_items[i]=source.m_items[i];
    }
}

BoxContainer::~BoxContainer(){
    delete[] m_items;
}

void BoxContainer::stream_insert(std::ostream& out)const{
    out << "BoxContainer [size: " << m_size << ", capacity: " << m_capacity << ", items: ";
    for(size_t i{0};i<m_size;++i){
        out << m_items[i] << " ";
    }
    std::cout << "]";
}

 void BoxContainer::expand(size_t new_capacity){
    std::cout << "Expanding to: " << new_capacity << std::endl;
    value_type *new_items_container;

    if(new_capacity <= m_capacity){ 
        return; // The needed capacity is already there
    }

    // Allocate new (larger) memory from old array to new
    new_items_container = new value_type[new_capacity];
    
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

void BoxContainer::add(const value_type& item){
    if(m_size==m_capacity){
        expand(m_size+5);
    }
    m_items[m_size] = item;
    ++m_size;
}

bool BoxContainer::remove_item(const value_type& item){
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

size_t BoxContainer::remove_all(const value_type& item){
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

void BoxContainer::operator+=(const BoxContainer& operand){
    if((m_size+operand.size())>m_capacity){
        expand(m_size+operand.size());
    }

    // Copy elements
    for(size_t i{0};i<operand.m_size;++i){
        m_items[m_size+i]=operand.m_items[i];
    }
    m_size+=operand.m_size;
}

BoxContainer operator +(const BoxContainer& left, const BoxContainer& right){
    BoxContainer result(left.size() + right.size());
    result+=left;
    result+=right;
    return result;
}

void BoxContainer::operator=(const BoxContainer& source){
    value_type *new_items;

    // Check for self-assignment:
    if(this == &source)
        return;

    if(m_capacity!=source.m_capacity){
        new_items=new value_type[source.m_capacity];
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