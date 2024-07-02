#include <iostream>
using namespace std;
double num1 = 0, num2 = 0, result=0;
char op;
double sum(double number1 , double number2);
double sub(double number1 , double number2);


int main(){
    cout<<"Enter first number: ";
    cin>> num1;
    cout<<"\nEnter Second Number: ";
    cin>>num2;
    cout<< "Enter operator: ";
    cin>> op;
    if (op == '+'){
        cout<<sum(num1,num2)<<endl;
    }
    else if(op == '-'){
        cout<<sub(num1,num2)<<endl;
    }
    return 0;
}

double sum(double number1, double number2){
    double sumresults = number1 + number2;
    return sumresults;
}


double sub(double number1, double number2){
    double sumresults = number1 - number2;
    return sumresults;
}
