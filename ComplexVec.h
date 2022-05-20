
#include <iostream>
#include <vector>
#include "Complex.h"
using namespace std;

class ComplexVec {
        public:
        vector<Complex> Vector;
        ComplexVec();
        void printElements();
        void insert(Complex);
        Complex operator[](int);
        private:
};



