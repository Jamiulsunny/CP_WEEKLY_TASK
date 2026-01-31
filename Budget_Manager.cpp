#include <iostream>
 using namespace std;


 void processTransaction ( int &current_balance , int amount , bool is_fee = false  ) {

int temp_balance = current_balance;

if ( is_fee){

    temp_balance -=amount ; 
}else {

temp_balance += amount ;

}

if(temp_balance < 0) {

    cout <<" Insufficient Funds" << endl;


}else{

current_balance = temp_balance;

    }

 }
 int main() {

    int balance = 500 ;

processTransaction( balance, 200, false);
cout << " Balance : " << balance << endl;


processTransaction( balance, 100, false);
cout << " Balance : " << balance << endl;

processTransaction( balance, 1000, false);
cout << " Balance : " << balance << endl;
 
return 0;

}