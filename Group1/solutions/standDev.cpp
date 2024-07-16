#include <iostream>
#include <cmath>
using namespace std;
int N;



int main(){
    
    cout<< "Enter the number of elements: ";
    cin >> N;
    double values[N];
    double variance;
    double average=0, sum=0, stdDev =0, element = 0;

    for(int i=0; i<N; i++){    
    cout<< "Enter the  number: ";
    cin >> element;
    values[i] = element;
    sum =sum + element;
    }
    cout<<"The sum of the elements is : "<< sum<<endl;
    average = sum/N;
    cout<<"The average of the elements is : "<< average<<endl;
    
    for(int i=0;i<N;i++){
        variance += pow((values[i] - average),2);
    }
    variance = variance/N;
    cout<<"The variance of the elements is : "<< variance<<endl;

    stdDev = sqrt(variance);
    cout<<"The standard of the elements is : "<< floor(stdDev)<<endl;
    return 0;
}