#include <iostream>
using namespace std;
void greet(), greetings(string name);
string Monthword(int monthnumber), name;
int monthnumber;

int main(){
    // greet();
    // cout<<"Enter your name: ";
    // cin>>name;
    // greetings(name);

    cout<<"Enter the month number : ";
    cin>>monthnumber;
    string monthw = Monthword(monthnumber);
    cout<<monthw;
    return 0;
}



void greet(){
    cout<< "Good Morning..!!,  How are you doing?\n";
}

void greetings(string name){
    cout<< "Good Morning "<<name<<"..!!,  How are you doing?\n";
}


string Monthword(int monthnumber){
    if (monthnumber == 1)
    {
        return "January";
    }
    else if (monthnumber == 2)
    {
        return "February";
    }
    
    
}