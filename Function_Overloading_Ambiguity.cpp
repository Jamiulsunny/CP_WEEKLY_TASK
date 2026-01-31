#include<iostream>
using namespace std ;

void registerMember ( int id) {

cout <<" Member ID: " << id << endl;

}

void registerMember (int &id){

cout << " Reference ID : " << id <<endl ;

}

int main () {

    int x =10;

    registerMember (20);
     
    return 0;
}