#include<iostream>
using namespace std;

class Balok{
	public:
		double length; 
		double width; 
		double height; 
		void print(){
			cout<<"Printing Balok Object"<<endl;
		}
};

int main()
{
	Balok obj1, obj2; 
	double volume = 0.0; 
	
	
	
	obj1.height = 13.0;
	obj1.length = 7.0;
	obj1.width = 5.0;
	
	

	obj2.height = 10.0;
	obj2.length = 8.0;
	obj2.width =12.0;
	
	
	
	volume = obj1.height * obj1.length * obj1.width;
	cout<<"Volume of Balok1 : "<< volume <<endl;
	
	

	volume = obj2.height * obj2.length * obj2. width;
	cout<<"Volume of Balok2 : "<< volume <<endl;
}
