// print odd number upto n.
#include<iostream>
using namespace std;
int main(void){
	int get,j=0;
	cin>>get;
	if(get==0){
		cout<<"error: enter number greater than 0";
	}
	else if(get>=1){
		for(int i=1; i!=get+1; i++){
			 if(i%2!=0){
				cout<<i<<endl;
				j++;
			}
			}cout<<"total odd numbers are\t"<<j;
		}
		else{
			cout<<"error";
		}	
		
	}	
	

