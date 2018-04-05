#include <iostream>
using namespace std;

int main() {
	int a=1;
	const int b=2;

	int c=b;
	cout<<"c= "<<c<<endl;

	const int d=a;
	cout<<"d= "<<d<<endl;

	return 0;
}
