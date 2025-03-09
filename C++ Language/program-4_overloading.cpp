#include<iostream>
//method overloading
using namespace std;

class overloadEx{
	public:
	int add(int a){
		return a;
	}
	int add(int a,int b){
		return a+b;
	}
	int add(int a,int b,int c){
		return a+b+c;
	}
};
int main(){
	overloadEx ex;
	cout<<"value is : "<<ex.add(10) <<endl;
	cout<<"addition is :"<<ex.add(10,10)<<endl;
	cout<<"addition is :"<<ex.add(10,10,20)<<endl;
}
