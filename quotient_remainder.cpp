#include<iostream>
using namespace std;

int main(){

    int divisor, dividend, quotent, remainder; // used to define numerical variabiles  holding whole numbers

    cout<<"Enter the dividend: ";
    cin>>dividend;

    cout<<"Enter the divisor: ";
    cin>>divisor;

    quotent= dividend/divisor;
    remainder=dividend%divisor;

    cout<<"The value of the Quotent: "<<quotent<<endl;
    cout<<"The value of the Remainder: "<<remainder;

    return 0;
}
