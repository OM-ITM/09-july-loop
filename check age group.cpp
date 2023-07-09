//check enter age belong in which categorie baby, school, adult.
#include<iostream>
using namespace std;
int main(){
	int age;
	cin>>age;
	if(age<=0){
		cout<<"enter correct age";
		
	}
	else if(age<=5){
		cout<<"Baby age";
	}
	else if(age>5 && age<18){
		cout<<"School age";
	}
	else{
		cout<<"adult";
		
	}
	
}
