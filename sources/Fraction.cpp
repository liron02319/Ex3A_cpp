#include "Fraction.hpp"
#include <climits>
#include <iostream>

namespace ariel{

  
    //// "outline" constructor implementation:
    Fraction::Fraction(int deno, int nume){
        
    if (deno == 0 && nume != 0){
        throw std::invalid_argument("denominator can not be 0");
    }
    if (deno > INT_MAX || nume > INT_MAX){
        throw std::overflow_error("The Number is too big,need to be int");
    }
        this->denominator = 1;
        this->numerator = 1; 


    }
     
     
    //get functions

    int Fraction::getNumerator(){
        return this->numerator;
    }            
            
    int Fraction::getDenominator(){
        return this->denominator; 
    }
  

    std::ostream& operator<<(std::ostream& output, const Fraction& frac){
        return output; 
    }
    std::istream& operator>>(std::istream& input , Fraction& frac){
        return input;
    }

    //fraction to fraction 
    Fraction Fraction::operator+(const Fraction& fraction){
        return *this;
    } 

    Fraction Fraction::operator-(const Fraction& fraction){
        return *this;
    }
     Fraction Fraction::operator/(const Fraction& fraction){
        return *this;
    }
    Fraction Fraction::operator*(const Fraction& fraction){
        return *this;
    } 
    
    //fraction to float 
    Fraction Fraction::operator+(const float num){
        return *this;
    }
    Fraction Fraction::operator-(const float num){
        return *this;
    }

    Fraction Fraction::operator/(const float num){
    return *this;
    }

    Fraction Fraction::operator*(const float num){
        return *this;
    }


    // float to fraction 
    Fraction operator+(const float num, const Fraction& fraction){
        return fraction; 
    }

    Fraction operator-(const float num, const Fraction& fraction){
        return fraction;
    }
    Fraction operator/(const float num, const Fraction& fraction){
        return fraction;
    }
    Fraction operator*(const float num, const Fraction& fraction){
        return fraction;
    }



    
    Fraction& Fraction::operator++(){
        return *this;
    }

    Fraction& Fraction::operator--(){
        return *this;
    } 
   
    Fraction Fraction::operator++(int){
        return *this;
    } 
    Fraction Fraction::operator--(int){
        return *this;
    }


    //----------------------------------------
    // Comparison operators
    //----------------------------------------
    // fraction to fraction 
    bool operator==(const Fraction& fraction1, const Fraction& fraction2){
        return false; 
    }
    bool operator>(const Fraction& fraction1, const Fraction& fraction2){
        return false; 
    }
    bool operator>=(const Fraction& fraction1, const Fraction& fraction2){
        return false; 
    }
    
      bool operator<(const Fraction& fraction1, const Fraction& fraction2){
        return false; 
    }
    bool operator<=(const Fraction& fraction1, const Fraction& fraction2){
        return false; 
    }

    // float to fraction
    bool operator==(const float, const Fraction& fraction){
        return false; 
    }
    
     bool operator>(const float, const Fraction& fraction){
        return false;
    }
    bool operator>=(const float, const Fraction& fraction){
        return false; 
    }
    bool operator<(const float, const Fraction& fraction){
        return false; 
    }
    bool operator<=(const float, const Fraction& fraction){
        return false; 
    }
     // fraction to float 
    bool operator==(const Fraction& fraction1, const float num){
        return false; 
    }
    bool operator>(const Fraction& fraction1, const float num){
        return false; 
    }
    bool operator>=(const Fraction& fraction1, const float num){
        return false; 
    }
    bool operator<(const Fraction& fraction1, const float num){
        return false; 
    }
     bool operator<=(const Fraction& fraction1, const float num){
        return false; 
    }






}











