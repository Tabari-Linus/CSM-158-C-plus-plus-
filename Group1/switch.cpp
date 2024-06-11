#include <iostream>
using namespace std;

int main(){
  char grade;
cout<< "Welcome to the interview room q" <<endl;
cout << "Enter your grade: ";
cin >> grade;
switch (grade)
{
case 'A':
case 'a':
    cout<<"Your grade is witthin the range 100 - 70.\nYou are welcome to the interview.";
    break;
case 'B':
case 'b':
    cout<<"Your grade is witthin the range 60 - 69. \nYou are welcome to the interview.";
    break;
case 'C':
case 'c':
    cout<<"Your grade is witthin the range 50 - 59. \nYou are welcome to the interview.";
    break;
case 'D':
    cout<<"Your grade is witthin the range 40 - 49. \nYou are welcome to the interview.";
    break;
case 'F':
    cout<<"Your grade is witthin the range 0 - 39. \nYou are welcome to the interview.";
    break;

default:
    cout<<"Please enter your grade again.";
    break;
}
return 0;
}