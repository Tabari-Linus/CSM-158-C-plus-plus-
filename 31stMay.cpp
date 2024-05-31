#include <iostream>
using namespace std;

/*
Hourswork N
Numberchildren nChild
Salary  Sal
incomeT
NHCL 
dirictTax
Edufund

Condition
N< 40 regular
Sal = N * 5
 > 40 term overtime
Sal  = 40 *5 +( (1.5 *5)*(N-40))
incomeT = 0.15 * Sal
NHCL = 0.025*Sal
dirictTax = 0.01 *Sal
Condition 
nChild > 3
 EduFund = (nChild - 3) * 0.5
Deduc = incomeT+NHCL+DIcT_+EduFund
Netpay = Sal - Deduc

*/

//Inputs
double Hourswork ;
int Numberchildren;

//Output
double GrossySalary;
double incomeTax ;
double NHCL;
double dirictTax;
double Edufund;
double Netpay;
double totalDeduction;

int main(){

    cout << "INput the number hours worked: ";
    cin >> Hourswork;
    cout << "Enter your number of children: ";
    cin >> Numberchildren;

    /*
    Condition
        N< 40 regular
        Sal = N * 5
        > 40 term overtime
        Sal  = 40 *5 +( (1.5 *5)*(N-40))
    */
   if (Hourswork > 40){
    GrossySalary = 40 * 5 + ((1.5 * 5)* (Hourswork-40));
   }else{
    GrossySalary = 5 * Hourswork;
   }

/*
 Condition
nChild > 3
 EduFund = (nChild - 3) * 0.5
*/
    if(Numberchildren > 3){
        Edufund = (Numberchildren-3) * 0.5;
    }

/*
incomeT = 0.15 * Sal
NHCL = 0.025*Sal
dirictTax = 0.01 *Sal
*/
    incomeTax = 0.15 *GrossySalary;
    NHCL = 0.025 * GrossySalary;
    dirictTax = 0.01* GrossySalary;

/*
Deduc = incomeT+NHCL+DIcT_+EduFund
Netpay = Sal - Deduc
*/
    totalDeduction = incomeTax + NHCL + dirictTax+ Edufund;
    Netpay = GrossySalary - totalDeduction;
    

    cout << "Total deduction \t"<< " Netpay \t"<< " GrossPay "<<endl;
    cout <<totalDeduction<<"\t\t\t|"<< Netpay <<"\t\t|"<<GrossySalary<<endl;
    cout <<totalDeduction<<"\t\t\t|"<< Netpay <<"\t\t|"<<GrossySalary<<endl;
    cout <<totalDeduction<<"\t\t\t|"<< Netpay <<"\t\t|"<<GrossySalary<<endl;
    cout <<totalDeduction<<"\t\t\t|"<< Netpay <<"\t\t|"<<GrossySalary<<endl;
    cout <<totalDeduction<<"\t\t\t|"<< Netpay <<"\t\t|"<<GrossySalary<<endl;
    cout <<totalDeduction<<"\t\t\t|"<< Netpay <<"\t\t|"<<GrossySalary<<endl;
    cout <<totalDeduction<<"\t\t\t|"<< Netpay <<"\t\t|"<<GrossySalary<<endl;
    
    

    return 0;
}

// 40  40*5 = 200  3 = 
// 45  (200 + 37.5) 4  0.5