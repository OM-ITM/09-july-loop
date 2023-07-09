// print square, cube , and square root of all number from 1 to n.
#include<iostream>
#include<math.h>
using namespace std;
int main(void){
	
int sqr,cube;
float root;
int num;
cout<<"enter number: ";
	cin>>num;
for(int i=1; i<=num; i++){
	sqr=i*i;
	cube=i*i*i;
	root=sqrt(i);
	cout<<i<<endl<<"square= "<<sqr<<"\tcube= "<<cube<<"\t root= "<<root<<endl;
	
}

}
