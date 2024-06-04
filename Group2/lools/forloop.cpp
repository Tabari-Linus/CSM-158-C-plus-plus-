#include <iostream>
using namespace std;

int main(){
    int numberofnumbers;
    cout<<"Enter the number numbers you want to print: ";
    cin>>numberofnumbers;
    // while (numberofnumbers<=0)
    // {
    //     cout<<"You entered a number less than zero. Enter a positive number: ";
    //     cin>>numberofnumbers;
    // }
    
    // int even = 2;
    int sum;
    for(int I=2; I<=(numberofnumbers*2); I=2+I){
        cout << "Number: "<<I<< endl;
        sum = sum+I;
    }

    cout<<sum/numberofnumbers;
return 0;
}