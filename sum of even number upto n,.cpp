// sum of even numbers upto n.
#include<iostream>
using namespace std;

int main(void){
	int num1, sum=0;
	cout<<"enter a number greater than 1:\t";
	cin>>num1;
	if (num1<=0 || num1==1){
		cout<<"Error: enter integer greater than 1";
		
	}
	else{
		for(int i=2; i!= num1+1; i++){
			if(i%2==0){
				sum=sum+i;
			}
		}cout<<sum;
	}
	
}
