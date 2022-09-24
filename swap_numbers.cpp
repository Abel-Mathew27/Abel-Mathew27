//the swaping program with pre-defined input
#include<iostream>

using namespace std;

int main(){

    int a=5, b=10, temp;

    //Bdefore swapping process:-
    cout<<"Before Swap: "<<endl;
    cout<<"a = "<<a<<"b = "<<b<<endl;

    //swaping:-
    temp = a;
    a = b;
    b = temp;

    //swaping is done here:-
    cout<<"After Swap: "<<endl;
    cout<<"a = "<<a<<"b = "<<b<<endl;


//the swaping program with input given by the user:-




    int ab, cd, temp1;

    cout<<"Enter the value for A = ";
    cin>>ab;

    cout<<"Enter the value for B = ";
    cin>>cd;

    cout<<"Before Swaping: "<<endl;
    cout<<"A = "<<ab<<" B = "<<cd<<endl;

    temp1 = ab;
    ab = cd;
    cd = temp1;

    cout<<"After Swaping: "<<endl;
    cout<<"A = "<<ab<<" B = "<<cd<<endl;
}