#include<iostream>
#include<string>
using namespace std;
int main(){
	int mynum[4] = {10, 20, 30, 40};
	cout << mynum[0] << "\n";
	
	//	using loop
	for(int i=0; i<4; i++){
		cout << mynum[i] << "\t";
	}
	return 0;
}
