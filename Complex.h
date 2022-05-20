/*Assigment C++:2
  Author: Gal Hilu, ID:315477802
*/
#include <iostream>
using namespace std;
class Complex {
        public:
        float im,re;
        Complex(float =0,float=0 );
        float getRad();
        float getPhase();
        Complex operator+(Complex);
        Complex operator-(Complex);
        Complex  operator*(Complex);
        Complex  operator/(Complex);
        bool operator==(Complex);
        Complex operator~();
        friend ostream& operator<<(ostream& os ,Complex num){
            os<<num.re<<(num.im<0?"":"+")<<num.im<<"i";
            return os;
        }
        private:
};



