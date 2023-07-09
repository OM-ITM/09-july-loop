//factorial of number
#include<iostream>
using namespace std;
int main(void){
	long facto,ans=1;
	cout<<"enter a number: ";
	cin>>facto;
	if(facto<=0){
		cout<<"enter number greater than 0";
	}
	else{
	
	for(facto ; facto!=0; facto--){
		ans=ans*facto;
	}
	cout<<"Factorial= "<<ans;
	}
}
