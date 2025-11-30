#include<iostream>
using namespace std;
int main(){
	int Number=10;
	int i=0;
	do{
		if(i%2 != 0){
			cout<< i <<endl;
		}
		i++;
	}while(i<=Number);
	
	return 0;
}
