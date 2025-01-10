// simple calculator
#include<iostream>
using namespace std;
int main(){
	char op;
	double num1,num2;
	
	cout<<"enter an operator(+,-,*,/):";
	cin>>op;
	cout<<"Enter two number:";
	cin>>num1>>num2;
	
	switch(op){
		case'+':
			cout<<num1+num2<<endl;
		break;
	    case'-':
			cout<<num1-num2<<endl;
		break;
	    case'*':
			cout<<num1*num2<<endl;
		break;
	    case'/':
		 if(num2==0){
			cout<<"Error,Divisible by zero"<<endl;
	   	 }else{
		   cout<<num1/num2<<endl;
		}
		break;
		
		default:
			cout<<"invalid operator"<<endl;
		
	}
	return 0;
} 
