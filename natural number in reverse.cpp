#include<iostream>
using namespace std;

int main(void){
	int take;
	cin>>take;
/*	for(; take!=0; take--){// with for loop
		cout<<take<<endl;
	}*/


/*while(take!=0){ // with while loop
	cout<<take<<endl;
	take--;
}*/

do{  // with do while loop.
	cout<<take<<endl;
	take--;
}while(take!=0);
}
