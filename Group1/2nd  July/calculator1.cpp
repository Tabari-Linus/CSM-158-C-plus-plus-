#include <iostream>
using namespace std;
double num1 = 0, num2 = 0, result=0;
char op;
double calculator(double number1 , double number2, char op);
double pow(double number1 , double number2);


int main(){
    // cout<<"Enter first number: ";
    // cin>> num1;
    // cout<<"\nEnter Second Number: ";
    // cin>>num2;
    // cout<< "Enter operator: ";
    // cin>> op;
    // cout<< calculator(num1,num2,op)<<endl;
    cout<<"Enter first number: ";
    cin>> num1;
    cout<<"\nEnter Second Number: ";
    cin>>num2;
    cout<<"the power of the number is :" <<pow(num1,num2)<<endl;
    return 0;
}

double calculator(double number1, double number2, char op){
    if (op == '+'){
        return number1 + number2;
    }
    else if(op == '-'){
        return number1 - number2;
    }
    else if(op == '*')
    {
        return number1 * number2;
    }
    else if(op == '/')
    {
        return number1 / number2;
    }
    else if(op == '^')
    {
        double results=1;
        for(int i = 0; i<number2;i++){
            results = results * number1;
        }
        return results;
    }
    // double sumresults = number1 + number2;
    // return sumresults;
}


double pow(double number1, double number2){
        double results=1;
        for(int i = 0; i<number2;i++){
            results = results * number1;
        }
        return results;
}
