#include <iostream>
#include <cmath>
using namespace std;
double getElementsNsum(double arry[],int n);
double findVariance(double values[], int n, double avg);


int main(){
    int N=0;
    cout<< "Enter the number of elements: ";
    cin >> N;
    double values[N];
    double variance;
    double average=0, sum=0, stdDev =0, element = 0;
    sum = getElementsNsum(values,N);
    cout<<"The sum of the elements is : "<< sum<<endl;
    average = sum/N;
    cout<<"The average of the elements is : "<< average<<endl;
    variance = findVariance(values, N, average);

    variance = variance/N;
    cout<<"The variance of the elements is : "<< variance<<endl;

    stdDev = sqrt(variance);
    cout<<"The standard of the elements is : "<< floor(stdDev)<<endl;
    return 0;
    return 0;
}


double getElementsNsum(double arry[],int n ){
    double  sum=0,element = 0;
    for(int i=0; i<n; i++){    
        cout<< "Enter the  number: ";
        cin >> element;
        arry[i] = element;
        sum =sum + element;
    }
    return sum;
}

double findVariance(double values[], int n, double avg){
    double variance=0;
    for(int i=0; i<n; i++){
        // variance = variance + pow(values[i]  - avg, 2) ;
         variance += pow((values[i] - avg),2);
    }
    return variance;
}