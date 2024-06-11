#include <iostream>
using namespace std;

int main(){
    
    // int arrayname[]={1,2,3,4,5};
    // cout<<arrayname[3]<<endl;


    int arrayNames[5][5]={
        {22,2,3,4,5},
        {23,2,33,4,5},
        {1,2,37,4,5},
        {34,2,73,4,5},
        {45,2,53,4,5}};
    for (int j = 0; j < 5; j++)
    {
        cout <<"   ###### ##### #####  "<<j<<endl;
       for(int i=0;i<5;i++){
            cout <<"i "<<i<<endl;
            cout<<arrayNames[j][i]<<endl;
        } 
        
    }
    
    

    

    

    
    return 0;
}