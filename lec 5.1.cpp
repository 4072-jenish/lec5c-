#include<iostream>
using namespace std;

class X{
	private :
		int a;
		int b;
		int c;
		
	public :
	
	  void setdata(int a,int b,int c){
	  	
	  	this -> a=a;
	  	this -> b=b;
	  	this -> c=c;
	  	
	       cout << "the Qube of A is :" << a*a*a << endl;
	       cout << "the Qube of B is :" << b*b*b << endl;
	       cout << "the Qube of C is :" << c*c*c << endl;
	  }
	
	
};
class Y : public X
{

};

int main(){
	int a,b,c;
		       cout << "Enter your Number :" << endl;
	       cin>>a;
	       cout << "Enter your Number :" << endl;
	       cin>>b;
	       cout << "Enter your Number :" << endl;
	       cin>>c;
	Y  Y1;
	Y1.setdata(a,b,c);
	
}
