#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

namespace ariel{

    class Fraction{

        private:
            int numerator;  
            int denominator; 

        public:

            //Fraction();

            // "outline" constructor
            Fraction(int deno, int nume);

            // get functions
            int getNumerator();
            int getDenominator();
            // set functions
            int setNumerator(); 
            int setDenominator(); 


            // output  
            friend std::ostream& operator<< (std::ostream& output, const Fraction& fraction);

            // input 
            friend std::istream& operator>> (std::istream& input, Fraction& fraction);



            // "Outline" methods
            // Requested functions

            //fraction to fraction 
            Fraction operator+(const Fraction& other);  
            Fraction operator-(const Fraction& other) ; 
            Fraction operator/(const Fraction& other);
            Fraction operator*(const Fraction& other); 
            
            //fraction to float 
            Fraction operator+(float other);
            Fraction operator-(float other); 
            Fraction operator/(float other);
            Fraction operator*(float other) ;
            
            //float to fraction 
            friend Fraction operator+(float number, const Fraction& fraction);
            friend Fraction operator-(float number, const Fraction& fraction);
            friend Fraction operator/(float number, const Fraction& fraction);
            friend Fraction operator*(float number, const Fraction& fraction);
            
            
            Fraction operator++(int); 
            Fraction operator--(int); 

            Fraction& operator++(); 
            Fraction& operator--(); 


            // Compare operators
            // fraction to fraction 
            friend bool operator==(const Fraction& num1, const Fraction& num2);
            friend bool operator>(const Fraction& num1, const Fraction& num2);
            friend bool operator>=(const Fraction& num1, const Fraction& num2);
            friend bool operator<(const Fraction& num1, const Fraction& num2);
            friend bool operator<=(const Fraction& num1, const Fraction& num2);

            //float to fraction
            friend bool operator==(float num, const Fraction& fraction);
            friend bool operator>(float num, const Fraction& fraction);
            friend bool operator>=(float num, const Fraction& fraction);
            friend bool operator<(float num, const Fraction& fraction);
            friend bool operator<=(float num, const Fraction& fraction);
            
             // fraction to float 
            friend bool operator==(const Fraction& fraction, float num);
            friend bool operator>(const Fraction& fraction, float num);
            friend bool operator>=(const Fraction& fraction, float num);
            friend bool operator<(const Fraction& fraction, float num);
            friend bool operator<=(const Fraction& fraction, float num);            
            
    };
}
        
#endif
