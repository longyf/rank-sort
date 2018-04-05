#ifndef my_rank_h
#define my_rank_h
#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
void myrank(T num[], int length, int r[]) {

	if (num==nullptr||length<=0)
		throw invalid_argument("Check the input array.");

	for (int i=0; i!=length; ++i) {
		r[i]=0;
	}

	for (int i=0; i!=length-1; ++i) {
		for (int j=i+1; j!=length; ++j) {
			if (num[i]>num[j]) ++r[i];
			else ++r[j];
		}
	}

}
#endif
