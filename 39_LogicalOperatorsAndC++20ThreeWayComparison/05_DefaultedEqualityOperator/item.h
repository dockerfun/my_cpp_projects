#ifndef ITEM_H
#define ITEM_H

class Item {
public:
    Item()=default;
    Item(int i) : Item(i,i,i){} //For implicit converison
    Item(int a_param, int b_param, int c_param) 
        : a(a_param), b(b_param), c(c_param){}

    //Equality, default: member wise comparison for equality
    bool operator==(const Item& right_operand) const = default;

    /* default member wise comparison */
    /*bool operator==(const Item& right_operand) const {
        if((a==right_operand.a) && (b==right_operand.b) && (c==right_operand.c)){
            return true;
        }
        return false;
    }*/
private:
    int a{1};
    int b{2};
    int c{3};
};

#endif //ITEM_H