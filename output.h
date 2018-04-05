#ifndef output_h
#define output_h
#include <iostream>
using namespace std;

template <class T>
void output(T num[], int length) {
	for (int i=0; i!=length; ++i) {
		cout<<num[i]<<" ";
	}
	cout<<endl;
}
#endif
