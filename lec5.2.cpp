#include<iostream>
using namespace std;

class X{
	private :
		float f;
		float c;
		
	public :
	
	  void setdata(float c){

	  	this -> c=c;
	  	cout << "the feranhit  is :" <<(c * 9/5 ) + 32 << endl;
	  }
	
	
};
class Y : public X
{
     void getdata(){
     	cout << "the kelvin  is :" <<(f - 32) * 5 / 9 + 273.15 << endl;
	 }
};
class Z : public Y
{
	
};

int main(){
float c;
		   
	       cout << "Enter celsius :" << endl;
	       cin>>c;
	Z z1;
	z1.setdata(c);
	
}
