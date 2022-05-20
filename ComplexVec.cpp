
#include "ComplexVec.h"
using namespace std;

ComplexVec::ComplexVec() {}

void ComplexVec::insert(Complex num) {
    Vector.insert(Vector.end(),num);
    return;
}
Complex ComplexVec::operator[](int i) {
    return Vector[i];
}
void ComplexVec::printElements() {
    int c=1;
    for(auto i=Vector.begin();i!=Vector.end();i++){
        cout<<c<<": "<<*i<<endl;
        c++;
    }
    return;
}

