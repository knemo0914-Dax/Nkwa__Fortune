#include<iostream>
using namespace std;
int main(){
	int NUM1,NUM2,NUM3;
	cout << "Enter the First Number: ";
	cin >> NUM1;
    cout << "Enter the Second Number: ";
	cin >> NUM2;
	cout << "Enter the Third Number: ";
	cin >> NUM3;
	
	if(NUM1 > NUM2 && NUM1 > NUM3){
		cout << NUM1 <<" is greater than " << NUM2 <<" and " << NUM3 <<endl;
	}else if(NUM2 > NUM1 && NUM2 > NUM3){
		cout << NUM2 <<" is greater than " << NUM1 <<" and " << NUM3 <<endl;	
	}else if(NUM3 > NUM1 && NUM3 > NUM2){
		cout << NUM3 <<" is greater than " << NUM1 <<" and " << NUM2 <<endl;
	}
	return 0;
}
