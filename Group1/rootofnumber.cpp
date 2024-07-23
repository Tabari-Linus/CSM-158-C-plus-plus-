#include <iostream>
#include <cmath>
using namespace std;
double number=0, lastguess=0, newguess=0;

int main(){
    // taking user inputto find root
    cout<< "Enter the number you want to find it's root: ";
    cin>>number;

    // taking last gues from user 
    cout<< "Enter lastguess: ";
    cin>> lastguess;

    // calculating first new guess
    newguess = 0.5 * (lastguess + (number/lastguess));

    // looping and checking absolute value of the difference between 
    // newguess and lastguess is > 0.0000001
    while (abs(newguess-lastguess)>0.0000001)
    {
        lastguess = newguess;
        newguess = 0.5 * (lastguess + (number/lastguess));
    }
    
    // displaying the root of the inputted number 
    cout<<"The root of "<<number<<" is "<< newguess;
    return 0;
}