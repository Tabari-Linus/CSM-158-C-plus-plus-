#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N = 0;
    cout<< "Enter number of elements: ";
    cin >>N;

    double values[1];
    double sum=0, average=0, variance=0,stdDev =0, element=0;

    for (int i = 0; i < 5; i++)
    {
        cout<< "Enter a number: ";
        cin>> values[i]
       
        sum = sum + values[i];
    }