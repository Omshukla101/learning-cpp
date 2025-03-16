#include<iostream>
using namespace std;

int main(){
	
	int n;
	int evensum =0, oddsum=0;
	
	cout<<"Enter a natural number:";
	cin>> n;
	
	for(int i=0; i<=n ; i++){
		if(i%2==0){
			evensum +=i;
		}else{
			oddsum +=i;
		}
	}
	
	cout<<"sum of the even number is:"<<evensum<<endl;
	cout<<"sum of the odd number is:"<<oddsum<<endl;
	return 0;
}
