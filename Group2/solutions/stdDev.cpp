#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N = 0;
    cout<< "Enter number of elements: ";
    cin >>N;

    double values[N];
    double sum=0, average=0, variance=0,stdDev =0, element=0;

    for (int i = 0; i < N; i++)
    {
        cout<< "Enter a number: ";
        cin>>element;
        values[i]= element;
        sum = sum + element;
    }

    cout << "The sum of the number is :"<< sum<< endl;
    average = sum/N;
    cout << "The average of the numbers is :"<< average<< endl;
    for(int i=0; i<N; i++){
        variance =variance +  pow(values[i]-average, 2);
    }

    variance = variance/N;
    cout << "The variance of the numbers is :"<< variance<< endl;

    stdDev = sqrt(variance);
    cout << "The standard deviation of the numbers is :"<< floor(stdDev)<< endl;


    return 0;
}