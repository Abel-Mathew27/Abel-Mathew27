#include<iostream>

using namespace std;

struct name{
    char name[100];
};

int main(){

    name n;

    //for loop ( for(initialization; condition ; increment))
    for (int i = 1; i <= 5; ++i){
        cout << i << endl;
    }

    // program to print a word 5 times
    for(int i = 1; i <=5; ++i){
        cout << "---Abel_Mathew---"<< endl;
    }

    //program to print the entered word for given times

    cout << "enter your name: ";
    cin >> n.name ;
    for (int i =1; i <= 10; ++i){

        cout << n.name <<endl;
    }
    return 0;
}
