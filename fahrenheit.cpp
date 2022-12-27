#include<iostream>
using namespace std;
class Fahrenheit{
	float f;
	public:
		friend void operator>>(istream& fin,Fahrenheit& fobj);
		friend void operator<<(ostream& fout,Fahrenheit& fobj);
		operator float(){
			return(f-62)*5/9;
		}
		
};
void operator >> (istream& fin,Fahrenheit& fobj){
	fin>>fobj.f;
	
}
void operator<<(ostream& fout,Fahrenheit& fobj){
	fout<<fobj.f;

}
class Celsius{
	float c;
	public:
		Celsius(Fahrenheit &f){
			c=f;
		}
		friend void operator>>(istream& fin,Celsius& fobj);
		friend void operator<<(ostream& fout,Celsius& fobj);
		
};
void operator>>(istream& fin,Celsius& fobj){
	fin>>fobj.c;
	
}
void operator<<(ostream& fout,Celsius& fobj){
	fout<<fobj.c;
	
}
int main(){
	Fahrenheit f1;
	Celsius c1(f1);
	
	cout<<"The temperature in fahrenheit is:";
	cin>>f1;

	cout<<"The temperature in celsius is:";
	cout<<c1;
	return 0;
}
