#include<iostream>
#include<cmath>
using namespace std;

double valumesquare(double length,double height,double width){
	return length*width*height;
}
double volumecone(double radius,double height){
	return (1.0 / 3.0) * M_PI * radius * radius * height;
}
double volumecube(double side){
	return side*side*side;
}
int main(){
 int choice;
 double side, radius, height, length, width; 
 cout << "Choose a shape to calculate the volume:\n1. Cube\n2. Cone\n3. Rectangular\n Enter your choice (1/2/3): ";
cin >> choice;
 cin>>choice;
 
 switch(choice){

  case 1:
  cout<<"Enter the side legth of cube"<<endl;
  cin>>side;
  cout<<"The volume of cube is:"<<volumecube(side)<<endl;	
  
  case 2:
  cout<<"enter radius of cone :"<<endl;
  cin>>radius;
  cout<<"enter height of cone :"<<endl;
  cin>>height;
  cout<<"the volume of cone is :"<<volumecone(radius,height)<<endl;
  
  case 3:
  cout<<"enter length of square"<<endl;
  cin>>length;
  cout<<"enter width of square :"<<endl;
  cin>>width;
  cout<<"enter height of square :"<<endl;
  cin>>height;
  cout<<"the volume of square is :"<<valumesquare(length,width,height)<<endl;
}
return 0;
}

