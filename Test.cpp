#include <iostream>
#include <stdexcept>
#include <string>
#include "doctest.h"
#include <sstream>

#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("CHECK CONSTRUCTOR WORK "){
    CHECK_THROWS(Fraction(3,0)); 
    CHECK_THROWS(Fraction(7,0)); 
    CHECK_NOTHROW(Fraction(1,2)); 

}

TEST_CASE("denominator can not be 0  "){
    Fraction frac(1,1);
    CHECK_THROWS(Fraction(3,0)); 
    CHECK_THROWS(Fraction(6,0)); 
    CHECK_NOTHROW(Fraction(0,0)); 
    CHECK_NOTHROW(Fraction(0,2)); 
    CHECK_THROWS(Fraction(3,0)); 


}

TEST_CASE("Check addition and substraction Check") {
    Fraction fr1(5,8);
    Fraction fr2(2,8);

    CHECK((fr1+fr2) == Fraction(7,8));
    CHECK((fr1-fr2) == Fraction(3,8));

}
   


TEST_CASE("decrement and increment check"){

    SUBCASE("decrement check"){
        Fraction a(12,6);  //2

        CHECK((--a) == 1);
        CHECK((a--) == 0);
    
    }
    SUBCASE("increment check"){
        Fraction a(12,3);  //4
        
        CHECK((++a) == 5);
        CHECK((a++) == 6);

    }
    
}

TEST_CASE("Comparison operation Check"){

    SUBCASE("fractoion to fraction"){
        Fraction a(1,6);
        Fraction b(1,4); 
        Fraction c(20,40);
        Fraction d(1,2); 

        CHECK(a<b);
        CHECK(d<=b); 
        CHECK(c==d); 
        CHECK(b>a); 
        CHECK(c>=d); 
       
    }


 SUBCASE("Fractino to binary Check"){
        Fraction a(16,26); //0.615
        Fraction b(1,2);  //0.5

        CHECK(a==0.615); 
        CHECK(b>=0.5); 
        CHECK(a>0.25); 
        CHECK(a<0.89);
        CHECK(b<=0.6); 
        
    }
    
     SUBCASE("binary to fraction Check"){
        Fraction a(30,300);//0.1
        Fraction b(1,1); 
        
        CHECK(0.02<a);
        CHECK(0.1<=a); 
        CHECK(1==b);
        CHECK(0.3>a); 
        CHECK(1>=b); 
        
        

    }
}

TEST_CASE("Fraction equal check ") {

    CHECK(Fraction(0,1) == Fraction(0,2));
    CHECK(Fraction(4,8) == Fraction(1,2));
    CHECK(Fraction(0,0) == Fraction(0,0));
}


TEST_CASE("TEST INPUT AND OUTPUT"){

    SUBCASE("input"){

        Fraction num(1,10); 
        std::stringstream input("3,9\n");
        input >> num; 
        CHECK(num == 0.333); 

    }

    SUBCASE("Output"){

        Fraction num(4,11); 
        std::stringstream output; 
        output << num; 
        CHECK(output.str() == "4/11"); 
    }
}
    


TEST_CASE("Arithmetic check"){

     SUBCASE("Fraction to binary check"){

        Fraction c(9,3); //3
        float num = 1.3;

        CHECK((c+num)==4.3); 
        CHECK((c-num)==1.7); 
        CHECK((c/num)==2.307); 
        CHECK((c*num)==3.9); 
    }   



    SUBCASE("Fraction to fraction check"){
        Fraction a(6,6); 
        Fraction b(1,2);

        CHECK((a+b)==1.5); 
        CHECK((a-b)==0.5); 
        CHECK((a/b)==2); 
        CHECK((a*b)==0.5); 
    }
   
     SUBCASE("binary to fraction check"){
        Fraction d(6,7); //0.857
        float num = 1.5;

        CHECK((num+d)==2.357); 
        CHECK((num-d)==-0.642); 
        CHECK((num/d)==0.571); 
        CHECK((num*d)==1.285); 
    }  
}


