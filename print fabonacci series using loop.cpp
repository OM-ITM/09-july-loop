// print fabonacci series upto user want.
#include<iostream>
using namespace std;
int main(void){
	int upto, fabo0,fabo1=1,fabo2=0;
	cout<<"enter limit of series: ";
	cin>>upto;
	for(int i=0; i<upto; i++){
		cout<<fabo2<<",";
		fabo0=fabo2;
		fabo2=fabo1;
		fabo1=fabo2+fabo0;
		
	}
}
