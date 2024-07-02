#include <iostream>
using namespace std;
void greetings();
void greetingwithname(string name);
string MonthWord(int month);
string name;
int month;

int main(){
    greetings();

    cout<<"Enter a name: ";
    cin>>name;
    greetingwithname(name);
    cout<< "Enter month number: ";
    cin>> month;
    string monthname = MonthWord(month);
    cout<<monthname<<endl;
    return 0;
}


void greetings(){
    cout<<"Good Morning, How are you doing?\n";
}

void greetingwithname(string name){
    cout<<"Good Morning,"<<name<<", How are you doing?\n";
}

string MonthWord(int month){
    string monthword;
   
    month = month-1;
    switch (month)
    {
    case 0:
        monthword = "January";
        break;
    case 1:
        monthword = "February";
        break;
    case 2:
        monthword = "March";
        break;
    case 3:
        monthword = "April";
        break;
    case 4:
        monthword = "May";
        break;
    case 5:
        monthword = "June";
        break;
    case 6:
        monthword = "July";
        break;
    case 7:
        monthword = "August";
        break;
    case 8:
        monthword = "September";
        break;
    case 9:
        monthword = "October";
        break;
    case 10:
        monthword = "November";
        break;
    case 11:
        monthword = "December";
        break;
    default:
        monthword = "Invalid Month numbers.";
        break;
    }
    return monthword;
}