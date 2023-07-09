//program to check enter number is zero, positive or negative.
#include<iostream>
using namespace std;
int main(void){
	int num,i=1,exit=0;
	while(i!=0){
		cout<<"enter a number: ";
		cin>>num;
		if(num==0){
			cout<<"zero\n";
			cout<<"press 1 for exit and 0 for continue: ";
			cin>>exit;
			if(exit==1){
				break;
			}
		}
		else if(num>0){
			cout<<num<<" is a positive\n";
			cout<<"press 1 for exit and 0 for continue: ";
			cin>>exit;
			if(exit==1){
				break;
			}
			
		}
		else{
			cout<<num<<" is negative\n";
			cout<<"press 1 for exit and 0 for continue: ";
			cin>>exit;
			if(exit==1){
				break;
			}
		}
	}
} 
