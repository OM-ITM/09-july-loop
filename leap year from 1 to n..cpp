//print leap year from 1 to n.
#include<iostream>
using namespace std;
int main(){
	int leap,num;
	cout<<"enter year: ";
	cin>>num;
	for(int i =1; i<=num; i++){
		
		if(i%400==0){
			cout<<i<<",";
			
		}
		else if(i%4==0){
			cout<<i<<",";
		}
}
	
	return 0;
}
