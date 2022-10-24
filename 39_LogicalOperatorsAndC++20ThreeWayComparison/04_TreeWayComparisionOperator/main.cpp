#include <iostream>

int main(){
    
    /* code */
    {
        std::string m1{"Hello"};
        std::string m2{"World"};

        auto result = m1.compare(m2);
        if(result>0){
            std::cout << "m1 > m2" << std::endl;
        }else if(result==0){
            std::cout <<"m1 == m2" << std::endl;
        }else{
            std::cout << "m1 < m2" << std::endl;
        }

        std::cout << " done " << std::endl;
    }
    //three way comparison operator
    {
        int n1{4};
        int n2{7};

        auto result2 = (n1 <=> n2);

        std::cout << std::boolalpha;
        std::cout << "n1 > n2 : " << ((n1 <=> n2)>0) << std::endl;
        std::cout << "n1 >= n2 : " << ((n1 <=> n2)>=0) << std::endl;
        std::cout << "n1 == n2 : " << ((n1 <=> n2)==0) << std::endl;
        std::cout << "n1 < n2 : " << ((n1 <=> n2)<0) << std::endl;
        std::cout << "n1 <= n2 : " << ((n1 <=> n2)<=0) << std::endl;
    }

    /**
     * Return types:
     *  Strong ordering: A type that can be used to describe absolute equality in comparisons. E.g.: for the fundamental type "int" we can have absolute equality.
     * */   

    //Example
    int n3{3};
    int n4{6};

    //Either of the comparisons below will always be true. Only the though
    std::cout << "n3>n4: " << (n3>n4) << std::endl;
    std::cout << "n3 == n4: " << (n3 == n4) << std::endl;
    std::cout << "n3 < n4: " << (n3 < n4) << std::endl;  

    /**
     * Weak ordering: A type taht can be used to describe NON absolute equality (equivalence) in comparisions. 
     * E.g.: Two things "Hello" and "HELLO" may be considered equivalent but not equal.
    */

    //Example
    std::string msg1{"Hello"};
    std::string msg2{"HELLO"};
    //Either of the comparisons below will always be true. Only one though
    std::cout << "msg1 > msg2: " << (msg1 > msg2) << std::endl;//greater
    std::cout << "msg1 == msg2: " << (msg1 == msg2) << std::endl;//equivalent
    std::cout << "msg1 < msg2: " << (msg1 < msg2) << std::endl;//less

    /**
     * Partial ordering: A type that can be used to describe incomparable values for a certain type.
    */

   //Example
   double d1 {11.1};
   double d2 {std::numeric_limits<double>::quiet_NaN()}; //runs with Clang compiler

   //d1 is neither >, < or == to d2 .
   std::cout << std::boolalpha;
   std::cout << "d1 > d2: " << (d1>d2) << std::endl;//false
   std::cout << "d1 == d2: " << (d1==d2) << std::endl;//false
   std::cout << "d1 < d2: " << (d1<d2) << std::endl; //false
   auto result3 = d1 <=> d2;

 
    
    return 0;
}