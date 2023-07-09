// print table of given number upto user want.
#include<iostream>
using namespace std;
int main(void){
	int get,upto;
	cout<<"enter a number:";
	cin>>get;
	cout<<"enter limit of table:";
	cin>>upto;
	for(int i=1; i<=upto; i++){
		cout<<get*i<<endl;
	}
	
}
