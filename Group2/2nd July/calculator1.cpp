#include <iostream>
using namespace std;
double num1 = 0, num2 = 0, result=0;
char op;
double calculator(double number1 , double number2, char op);
double pow(double number1 , double number2);

double sumarray(double number1[], int n);



int main(){
    // cout<<"Enter first number: ";
    // cin>> num1;
    // cout<<"\nEnter Second Number: ";
    // cin>>num2;
    // cout<< "Enter operator: ";
    // cin>> op;
    // cout<<calculator(num1,num2, op);

    // cout<<"Enter first number: ";
    // cin>> num1;
    // cout<<"\nEnter Second Number: ";
    // cin>>num2;
    // cout<<pow(num1,num2);

    int numberofnumbers = 3;
    double numbers[]={4,5,6};
    
    cout<<sumarray(numbers,numberofnumbers);
    return 0;
}



double calculator(double number1, double number2, char op){
    double sumresults =0;
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
    else if(op == '^'){
        double results = 1;
        for ( int i=0; i<number2; i++){
            results = results * number1;
        }
        return results;
    }
}

double pow(double number1, double number2){
 double results = 1;
        for ( int i=0; i<number2; i++){
            results = results * number1;
        }
        return results;   
}


double sumarray(double number1[], int n){
    double results = 0;
        for ( int i=0; i<n; i++){
            results = results + number1[i];
        }
        return results;   
}