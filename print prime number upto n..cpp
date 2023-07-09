// print all prime number 1 to n.
#include<iostream>
using namespace std;

/*int main(void){
	int num,t,j;
	cout<<"enter a number: ";
	cin>>num;
		for(int i=1; i<num+1; i++){
		t=1;
		
		if(i==1){
			t=0;
		}
			for(j=2; j<i; j++){
				if(i%j==0){
				t=0;
				break;	
			}			
			}
		if(t==1) {
			cout<<j<<",";
		}
	}
}*/

int main(void){
	
	int facto,num,i;
	cout<<"enter a number: ";
	cin>>num;
		for(i=1; i<=num; i++){
			facto=0;
			for(int j=1; j<=i; j++){
				if(i%j==0){
					facto++;
				}
			}
			if(facto==2){
		cout<<i<<",";
		}
		}
	
}


