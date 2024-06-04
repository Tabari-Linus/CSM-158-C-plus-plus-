#include <iostream>
using namespace std;
int main(){
int count=0;
int age=0;
double sum=0;


while (true)
{
    cout<< "Enter your age: ";
    cin>>age;
    if (age < 0)
        continue;

    if (age ==100)
        break;

    
    sum = sum + age;
    count++;
}

cout <<sum<<endl;
cout<<count<<endl;
double average = sum/count;
cout<<average;


return 0;
}