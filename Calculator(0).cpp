#include<iostream>
using namespace std;

void Addition(){
	int Number_1,Number_2,Sum;
	cout << "Enter a number";
	cin>> Number_1;
	cout << "Enter another number";
	cin>> Number_2;
	Sum = Number_1 + Number_2;
	cout << Number_1 << "+" << Number_2 <<"=" <<Sum <<endl;
}
void Subtraction(){
	int Num1,Num2,Difference;
	cout << "Enter a number";
	cin>> Num1;
	cout << "Enter another number";
	cin>> Num2;
	Difference = Num1 - Num2;
	cout << Num1 << "-" << Num2 <<"=" <<Difference <<endl;
}
void Division(){
	int Divident,Divisor;
	float Quotient;
	cout << "Enter a number";
	cin>> Divident;
	cout << "Enter another number";
	cin>> Divisor;
	Quotient = Divident/Divisor;
	cout << Divident << "/" << Divisor <<"=" << Quotient <<endl;	
}
void Multiplication(){
	int Numb1,Numb2,Product;
	cout << "Enter a number";
	cin>> Numb1;
	cout << "Enter another number";
	cin>> Numb2;
	Product = Numb1*Numb2;
	cout << Numb1 << "*" << Numb2 <<"=" << Product <<endl;
}

int main(){
	int choice;
	cout <<"Make a choice" <<endl;
	cout <<"1. Addition" <<endl <<"2. Subtraction" <<endl <<"3. Division" <<endl <<"4. Multiplication" <<endl;
	cin >>choice;
	if (choice==1){
		Addition();
	}else if(choice==2){
		Subtraction();
	}else if(choice==3){
		Division();
	}else if(choice==4){
		Multiplication();
	}else{
		cout <<"Invalid input" <<endl;
	}
	return main();
}
