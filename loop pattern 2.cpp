//number half pyramid.

#include<iostream>
using namespace std;

int main(){
	int run;
	cin>>run;
	for(int i=1; i<run+1; i++){
		for(int j=1; j<=i; j++){
			cout<<i;
		}cout<<endl;
	}
}
