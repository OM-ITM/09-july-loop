//inverse haif pyramid.
#include<iostream>
using namespace std;

int main(){
	int run;
	cin>>run;
	for(int i=0; i<run; i++){
		for(int j=run; j>i; j--){
			cout<<"*";
		}cout<<endl;
	}
}
