#ifndef CHARCONTAINER_H
#define CHARCONTAINER_H

#include <iostream>
#include "streaminsertable.h"

/**
 * CLASS WRAPPING ON TOP OF RAW ARRAY
*/
class CharContainer:public StreamInsertable{
    //friend std::ostream& operator<<(const std::ostream& out, const BoxContainer& source);
    //typedef int value_type; // allows us to change what's stored in the vector on the fly
                            // can make it store int, double, etc
    using value_type = char;
    static const size_t DEFAULT_CAPACITY = 11;
public:
    CharContainer(size_t capacity = DEFAULT_CAPACITY);
    CharContainer(const CharContainer& container);
    ~CharContainer();    

    // StreamInsertable Interface
    virtual void stream_insert(std::ostream& out)const override;

    // Helper getter methods
    size_t size()const{return m_size;}
    size_t capacity()const{return m_capacity;}
    void expand(size_t new_capacity);// expanding
    void add(const value_type& item);// add
    bool remove_item(const value_type& item);// remove
    size_t remove_all(const value_type& item); // remove all

    // += operator
    void operator+=(const CharContainer& operand);
    // = operator
    void operator=(const CharContainer& source);

    //dummy helper function applicable as an example yet
    void dummy_initialize(){
        for(size_t i{}; i<10; ++i){
            m_items[i] = i+97;
        }
        m_size=10;
    }
private:
    value_type * m_items;
    size_t m_size{};
    size_t m_capacity{};
};

// + operator
CharContainer operator +(const CharContainer& left, const CharContainer& right);

#endif