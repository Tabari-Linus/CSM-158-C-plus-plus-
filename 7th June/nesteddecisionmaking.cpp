#include <iostream>
using namespace std;

string shortcode;
int choice1;
int choice2;
// int choice3;
int main(){
   
   cout<<"###### WELCOME TO MY MOMO APP ########"<<endl;
   cout <<"Enter your short:"<<endl;
   cin>>shortcode;

   if (shortcode == "*170#")
   {
    cout<<"1. Transfer Money\n2. Momo Pay & PayBill\n3. Airtime & Bundles\n4. Allow Cashout\n5. Financial Services\n6. My wallet"<<endl;
    cin>>choice1;
    if (choice1 == 1)
    {
        cout<<"1. Momo User\n2. NoneMomo User\n3. SendWithCare\n4. Favourite\n5. Other Networks\n6. Bank Account";
        cin>>choice2;
    }
    else if (choice1==2)
    {
        cout<<"1. Momo Pay\n2. Pay Bill\n3. GHQR\n4. Fuels\n5. Ghana.gov\n";
        cin>>choice2;
    }
    else if (choice1==3)
    {
        cout<<"1. Airtime\n2. Internet Bundles\n3. Fixed Broadband\n4. Schedule Airtime\n5. Just4U";
        cin>>choice2;
    }
    else
    {
        cout<<"Invalid Option";
    }
   }
   else{
    cout<<"The code is not recognized, please check and try again.";
   }
   
    
    return 0;
}