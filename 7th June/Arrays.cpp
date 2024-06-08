#include <iostream>
using namespace std;

int age;
int ages[5];
int main(){
   
    // cout<<"Enter your age: ";
    // cin>>ages[0];
    // cout<<"Enter your age: ";
    // cin>>ages[1];
    // cout<<"Enter your age: ";
    // cin>>ages[2];
    // cout<<"Enter your age: ";
    // cin>>ages[3];
    // cout<<"Enter your age: ";
    // cin>>ages[4];
    // cout<<"You are "<<ages[0]<<" years olds!\n";
    // cout<<"You are "<<ages[1]<<" years olds!\n";
    // cout<<"You are "<<ages[2]<<" years olds!\n";
    // cout<<"You are "<<ages[3]<<" years olds!\n";
    // cout<<"You are "<<ages[4]<<" years olds!\n";

    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter your age: ";
        cin>>ages[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"You are "<<ages[i]<<" years olds!\n";
    }

    
    return 0;
}