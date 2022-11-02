#include <iostream>
#include "boxcontainer.h"

class Item{
    friend std::ostream& operator<<(std::ostream& out, const Item& operand);
public:
    // Allocate dynamic memory
    Item():m_data{new int}{

    }
    Item(int value):m_data{new int(value)}{

    }

    // Copy member
    // Copy constructor
    Item(const Item& source) : m_data{new int}{
        std::cout << "Item copy constructor copying data..." << std::endl;
        *m_data = (*source.m_data);
    }

    // Copy assignment operator
    Item& operator=(const Item& right_operand){
        std::cout << "Item copy assignment operator copying data..." << std::endl;
        if(&right_operand != this){
            *m_data=(*right_operand.m_data);
        }
        return *this;
    }

    // Move members
    Item(Item&& source){
        std::cout << "Item move constructor moving data..." << std::endl;
        // Steel the pointer
        m_data = source.m_data;
        // Reset the source pointer
        source.m_data = nullptr;
    }

    Item& operator=(Item&& right_operand){
        std::cout << "Item move assignment operator moving data..." << std::endl;
        if(&right_operand != this){
            // Steel the pointer
            m_data = right_operand.m_data;
            // Reset the source pointer
            right_operand.m_data = nullptr;
        }
        return *this;
    }

private:
    int *m_data{nullptr};
};

std::ostream& operator<<(std::ostream& out, const Item& operand){
    out << "Item : [ " << (*operand.m_data) << " ]";
    return out;
}

Item get_value(){
    return Item(22); // Return an Item object as value
}

void do_something(Item&& item){
    std::cout << "Do something move version called..." << std::endl;
    //Item internal = item; // Copy semantics
    Item internal = std::move(item);
    std::cout << "internal : " << internal << std::endl;
}

int main(){
    
    /* code */
    // Item&& rvalue_ref{get_value()};

    // /* Will the move constructor be called? */
    // //Item item1(rvalue_ref);

    // std::cout << "--------" << std::endl;

    // /* We do not have rvalue */
    // /* In this way the compiler will consider this param as an rvalue */
    // do_something(std::move(rvalue_ref)); // this is an lvalue without std::move

    BoxContainer<Item> items;
    items.add(std::move(get_value()));


    std::cout << "End" << std::endl;

    return 0;
} 