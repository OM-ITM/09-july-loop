// print sum of natural number upto n.
#include<iostream>
using namespace std;
int main(void){
	int take,sum=0;
	cin>>take;
	if(take<=0){
		cout<<"please enter number greater than 0";
	}
	else{
		for(int i=1; i!=take+1; i++){
			sum=sum+i;
		}cout<<"sum of all natural number upto to "<<take<<"="<<sum;
	}
}
