/*Assigment C++:2
  Author: Gal Hilu, ID:315477802
*/
using namespace std;
#include "Complex.h"
#include <cmath>

Complex::Complex(float r, float i) {
    re=r;
    im=i;
    return;
}
float Complex::getRad() {
    return sqrt(pow(re,2)+pow(im,2));
}

float Complex::getPhase(){
    float deg;
    if(re!=0)
        deg= atan(abs(im)/abs(re));
    else {
        if (im > 0)
            return 90;
        if (im < 0)
            return 270;
        else
            return 0;
    }
    if (re>0&&im>0)
        return deg;
    if(re<0&&im>0)
        return deg+90;
    if(re<0&&im<0)
        return deg+180;
    if(re>0&&im<0)
        return deg+270;
    return 0;
}

Complex Complex::operator+(Complex num) {
    return (Complex(re+num.re,im+num.im));
}
Complex Complex::operator-(Complex num){
    return (Complex(re-num.re,im-num.im));
}
Complex Complex::operator*(Complex num){
    return (Complex(re*num.re-im*num.im,re*num.im+im*num.im));
}
Complex Complex::operator~(){
    return Complex(re,-im);
}
bool Complex::operator==(Complex num){
    if(re==num.re&&im==num.im)
        return true;
    else
        return false;
}
Complex Complex::operator/(Complex num){
    int denominator,r,i;
    Complex numerator(re,im);
    denominator=(num*(~num)).re;
    numerator= numerator*(~num);
    numerator.re=numerator.re/denominator;
    numerator.im=numerator.im/denominator;
    return numerator;
}
