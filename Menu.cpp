
using namespace std;
#include "Menu.h"
Menu::Menu() {}

int Menu::inrange(int messg){
    int num;
    if (messg==1) {
        cout << "index range start from 1; i.e., 1,2,3...." << endl;
        cout << "insert index of first number:";
    }
    if (messg==2)
        cout<<"insert index of second number:";
    if (messg==3){
        cout << "index range start from 1; i.e., 1,2,3...." << endl;
        cout << "insert index of complex number: " << endl;
    }
    if (messg==4){
        cout << "index range start from 1; i.e., 1,2,3...." << endl;
        cout << "insert index for printing its parameters: " << endl;
    }
    while (1) {
        cin >> num;
        if (num-1 <= vec.Vector.size())
            break;
        cout << "not in range, try again" << endl;
    }
    return num-1;
}

void Menu::printmenu(){
    cout<<"======================================="<<endl;
    cout<<"<1> add a new complex number"<<endl;
    cout<<"<2> print all numbers"<<endl;
    cout<<"<3> +"<<endl;
    cout<<"<4> -"<<endl;
    cout<<"<5> /"<<endl;
    cout<<"<6> *"<<endl;
    cout<<"<7> ~"<<endl;
    cout<<"<8> polar coordinate"<<endl;
    cout<<"<9> exit"<<endl;
    cout<<"======================================="<<endl;
    return;
}
void Menu::mainMenu() {
    int choise;
    float re,im,num1,num2;
    while (1){
        printmenu();
        cin>>choise;
        switch (choise) {
            case 1: {
                cout << "please insert complex number:" << endl;
                cout << "real:";
                cin >> re;
                cout << "imaginary: ";
                cin >> im;
                Complex temp(re, im);
                vec.Vector.insert(vec.Vector.end(), temp);
                continue;
            }
            case 2:
                vec.printElements();
                continue;
            case 3:
                num1= inrange(1);
                num2= inrange(2);
                cout<<"("<<vec[num1]<<")+("<<vec[num2]<<")="<<vec[num1]+vec[num2]<<endl;
                continue;
            case 4:
                num1= inrange(1);
                num2= inrange(2);
                cout<<"("<<vec[num1]<<")-("<<vec[num2]<<")="<<vec[num1]-vec[num2]<<endl;
                continue;
            case 5:
                num1= inrange(1);
                num2= inrange(2);
                if (vec[num2].im==0&&vec[num2].re==0){
                    cout<<"complex division by zero is not allowed"<<endl;
                    continue;
                }
                cout<<"("<<vec[num1]<<")/("<<vec[num2]<<")="<<vec[num1]/vec[num2]<<endl;
                continue;
            case 6:
                num1= inrange(1);
                num2= inrange(2);
                cout<<"("<<vec[num1]<<")*("<<vec[num2]<<")="<<vec[num1]*vec[num2]<<endl;
                continue;
            case 7:
                num1= inrange(3);
                cout<<"The conjugate of "<<vec[num1]<<" is "<<~vec[num1]<<endl;
                continue;
            case 8:
                num1= inrange(4);
                cout<<"phase(degree): "<<vec[num1].getPhase()<<endl;
                cout<<"radius: "<<vec[num1].getRad()<<endl;
                continue;
            case 9:
                cout << "bye bye!" << endl;
                return;

        }
        cout<<"invalid command pick again."<<endl;
    }
}
