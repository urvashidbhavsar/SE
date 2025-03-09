#include<iostream>
using namespace std;

class plane{
	public:
	 void flying(){
	 	cout << "plane is fly"<<endl;
	 }
};
class bird : public plane{
	public:
		void flying(){
			cout<<"bird is also flying"<<endl;
		}
};

int main(){
	bird b;
	b.flying();
}
