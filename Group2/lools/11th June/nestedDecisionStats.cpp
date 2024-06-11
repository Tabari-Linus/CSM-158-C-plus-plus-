#include <iostream>
using namespace std;

string shortcode;
int option1;
int option2;
int main(){
    cout<<"#######B WElcome to Mini Momoo..! B########"<<endl;
    cout<<"Please Enter your shortcode: ";
    cin>>shortcode;
    
    if(shortcode == "*170#"){
        cout<<"1. Transfer Money\n2. Momo Pay & PayBill\n3. Airtime & Bundles\n4. Allow Cashout\n5. Financial Services\n6. My wallet"<<endl;
        cin>>option1;
        if (option1==1)
        {
            cout<<"1. Momo User\n2. NoneMomo User\n3. SendWithCare\n4. Favourite\n5. Other Networks\n6. Bank Account"<<endl;
            cin>>option2;
            if(option2 == 1){
                cout<<"1. Momo Pay\n2. Pay Bill\n3. GHQR\n4. Fuels\n5. Ghana.gov\n";
            }
        }else if (option1==2)
        {
            cout<<"You  selected option 2";
        }
        
        
    }
    else{
        cout<<"Invalid Shortcode";
    }
    return 0;
}