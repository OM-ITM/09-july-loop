//filled rectangle whoes length and breadth is given by user.
#include<iostream>
using namespace std;
int main(void){
	int l,b;
	cin>>l>>b;
	for(int i=0; i<b; i++){
		for(int j=0; j<l; j++){
			cout<<"*";
		}cout<<endl;
	}
}
	

