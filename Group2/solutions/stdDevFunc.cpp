#include <iostream>
#include <cmath>
using namespace std;
// Function prototypes
double getElementsNSum(double arry[], int n);
double getVariance(double arry[], double avg, int n);

int main(){
    int N = 0;
    cout<< "Enter number of elements: ";
    cin >>N;

    double values[N];
    double sum=0, average=0, variance=0,stdDev =0;
    // calling the getElementNSum
    sum = getElementsNSum(values, N);

    cout << "The sum of the number is :"<< sum<< endl;
    average = sum/N;
    cout << "The average of the numbers is :"<< average<< endl;
    // variance = getVariance(values,average,N);
    // variance = variance/N;

    // calling the getVariance
    variance = getVariance(values,average,N)/N;

    cout << "The variance of the numbers is :"<< variance<< endl;
    //finding the standard
    stdDev = sqrt(variance);
    cout << "The standard deviation of the numbers is :"<< stdDev<< endl;

    return 0;
}

// Function body for getting elements and finding the sum
double getElementsNSum(double arry[], int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout<< "Enter a number: ";
        cin>>arry[i];
        sum = sum + arry[i];
    }
    return sum;
}
// Function body for getVarience logic
double getVariance(double arry[], double avg, int n){
    double variance = 0;
    for(int i=0; i<n; i++){
        variance =variance + pow(arry[i]-avg, 2);
    }
    return variance;
}