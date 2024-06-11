#include <iostream>
using namespace std;

int ages[]={1,1,2,3,2};

int studentsages[5][5]={
    {1,1,2,3,2},
    {1,4,2,3,2},
    {1,45,2,3,2},
    {1,1,2,3,2},
    {1,1,2,3,2}};

int main(){
    // cout<<ages[1]<<endl;
    // cout<<studentsages[2][1]<<endl;
    for(int j=0; j<5;j++){
       for(int i=0; i<5;i++){
            cout<<studentsages[j][i]<<endl; 
        }
        cout<<"                   #####              "<<endl;
    }
    
    
    return 0;
}