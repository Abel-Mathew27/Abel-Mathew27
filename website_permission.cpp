#include<iostream>

using namespace std;

struct user_information

{
	char name[1000];
	int age;
};

int main(){
	user_information ui;
	cout << "Enter your Information,"<<endl;
	cout << "Enter your correct Name: ";
	cin >> ui.name;
	cout << "Enter your correct age: ";
	cin >> ui.age;

	if (ui.age <= 18){
		cout << "Sorry, " << endl;
	    cout << ui.name <<" Your age: " << ui.age << "will not be sufficient to know the message";
	}else{
		cout << "Congratulations, " << endl;
		cout << ui.name << " You are eligible to see the secreat message... And the message is.......  "<< endl;
		cout << "Athu..onum ella summa sonan...poi Thungu..po ";
	}

	cout << "\nDisplaying Information,"<<endl;
	cout << "Name: " << ui.name << endl;
	cout << "age: " <<ui.age << endl;

	return 0;
}
