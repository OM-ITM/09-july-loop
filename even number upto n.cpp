//all even number 1 to n.
#include<iostream>
using namespace std;
int main(void){
	int get,j=0;
	cin>>get;
	if(get==0 || get==1){
		cout<<"please enter number greater than 1";
	}
	else{
		for(int i=2; i!=get+1; i++ ){
			if(i%2==0){
			cout<<i<<endl;
			j++;
		}
	}
	cout<<"total even number="<<j;
	}
}
