#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double numbers[]={25,34,56,40,10};
    double sum=0, average=0, standdiv=0, difmeanx=0;

    for(int i=0; i<5; i++){
        sum = sum+numbers[i];
    }
    cout<<"the sum of your set of numbers is "<<sum<<endl;
    average = sum/5;
    cout<<"the average of your set of numbers is "<<average<<endl;

    for(int i=0; i<5;i++){
        difmeanx = difmeanx + pow((numbers[i]-average),2);
    }
    cout<<"the sum of difference between elements and mean is "<<difmeanx<<endl;

    standdiv = sqrt(difmeanx/5);
    cout<<"the standard deviation is "<<standdiv<<endl;
    return 0;
}
