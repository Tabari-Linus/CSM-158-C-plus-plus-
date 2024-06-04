#include <iostream>
using namespace std;

int main(){
    int number0fnumbers;
    cout<< "Enter the number of eveb numbers yo want to print: " ;
    cin>> number0fnumbers;
    int sum=0;
    cout<<"#############"<<endl;
    for (int I=2; I<=(number0fnumbers*2); I=I+2){
        cout<< I<<endl;
        sum +=I;
    }
    cout<<sum/number0fnumbers;
return 0;
}