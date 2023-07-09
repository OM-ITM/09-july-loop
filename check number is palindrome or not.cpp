// to check enter number is palindrome or not.
#include<iostream>
using namespace std;
int main(void){
	int num,rev=0,con;
	cout<<"enter a number 10<: ";
	cin>>num;
	if(num<=10){
		cout<<"enter number greater than 10";
	}
	else{
	
		int num2= num;
		while(num!=0){
			con=num%10;
			rev=(rev*10)+con;
			num=num/10;
		
		}
		if(num2==rev){
			cout<<"it is palindrome";
			
		}
		else{
			cout<<num2<<" is not a palindrome";
		}
	}
}
