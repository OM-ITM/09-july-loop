// check given number is prime or not.
#include<iostream>
using namespace std;
int main(void){
	int num,t;
	cout<<"enter a number: ";
	cin>>num;
	if(num==1 || num==0){
	cout<<num<<" is not a prime number";
	}
	else if(num==2){
		cout<<"2 is a prime number";
	}
	else{
	
		for(int i=2; i<num; i++){
		if(num%i==0){
			t=1;
			break;
		}
		
		}
		if(t==1){
			cout<<num<<" is not a prime number";
		
		}
		else{
			cout<<num<<" is a prime number";
		}
	}
}
