#include <iostream>
using namespace std;

int main(){
    int number;
    int sum;
    std::cout<<"#############"<<endl;
    for (int I=0; I<5; I++){
        std::cout<< "Enter the next number : " ;
        cin>> number;
        if (number < 0){
            continue;
        }
        else if (number == 100)
        {
            break;
        }
        else{
            sum +=number;
        }
    }
    cout<<sum/5;
return 0;
}