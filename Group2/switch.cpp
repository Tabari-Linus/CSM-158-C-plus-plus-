#include <iostream>
using namespace std;

int main()
{
char grade;
cout<<"Welcome to the interview roomQ"<<endl;
cout<< "Enter your grade for CSM 158: ";
cin>>grade;

switch (grade)
    {
    case 'A':
    case 'a':
        cout<< "Your grade is within the range of 100 - 70\nYou've qualified to be interviewed.";
        break;
    case 'B':
    case 'b':
        cout<< "Your grade is within the range of 60 - 69\nYou've qualified to be interviewed.";
        break;
    case 'C':
    case 'c':
        cout<< "Your grade is within the range of 50 - 59\nYou've qualified to be interviewed.";
        break;
    case 'D':
    case 'd':
        cout<< "Your grade is within the range of 40 - 49\nYou've qualified to be interviewed.";
        break;
    case 'F':
    case 'f':
        cout<< "Your grade is within the range of 0 - 39\nYou've qualified to be interviewed.";
        break;
    default:
        cout<<"Invalid grade inputted, please re-enter your grade: "; 
        break;
    }
return 0;    
}
