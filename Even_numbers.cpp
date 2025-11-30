#include<iostream>
#include<string>
using namespace std; 
int main(){
	int i=0;
	int number=10;
	for(i; i<=number; ++i){
		if(i%2==0){
			cout << i <<endl;
		}
	}
	return 0;
}
