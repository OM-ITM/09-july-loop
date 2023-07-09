// hollow reactangle.
#include<iostream>
using namespace std;
int main(void){
	int l,b;
	cin>>l>>b;
	for(int i=0; i<b; i++){
		for(int j=0; j<l; j++){
			if(i==0 || i==b-1){
			cout<<"*";
			}
			else if(j==0 || j==l-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}cout<<endl;
	}
}
