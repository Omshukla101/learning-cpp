#include<iostream>
using namespace std;

int main(){
double num1 , num2;
char operation;

cout<<"Enter an operator (+,-,*,/):";
cin>>operation;
cout<<"Enter the first number:";
cin>>num1;
cout<<"Enter the second number:";
cin>>num2;

switch(operation){
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
			cout<<"Error"<<endl;
		}
		else{
			cout<<num1/num2 <<endl;
		}
	break;
	default:
		cout<<"invalid operator"<< endl;
}
return 0;
}


