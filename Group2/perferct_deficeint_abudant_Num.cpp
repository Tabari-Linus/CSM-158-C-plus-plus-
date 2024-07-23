#include <iostream>
using namespace std;
int number=0 , sum=0;

int main(){
    //number to check if perfect, deficient, abundant
    cout<<"Please enter number to determine if it's abundant, perfect, or deficient: ";
    cin>>number;

    for(int i=1; i<number; i++){
        if(number%i == 0)
            sum = sum + i;
    }

    if(sum==number)
        cout<<"The number "<<number<<" divisors sum upto "<<sum<<" so the number"<<"is a perfect number";
    else if(sum<number)
        cout<<"The number "<<number<<" divisors sum upto "<<sum<<" so the number"<<"is a deficeint number";
    else
        cout<<"The number "<<number<<" divisors sum upto "<<sum<<" so the number"<<" is a abundant number";


    return 0;
}