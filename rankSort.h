#ifndef rank_sort_h
#define rank_sort_h
#include <iostream>
#include "myrank.h"
#include <stdexcept>
using namespace std;

template <class T>
void rankSort(T num[], int length, int r[]) {
	if (num==nullptr||r==nullptr||length<=0)
		throw invalid_argument("Pay attention to the inputs.");

	T *temp=new T [length];
	for (int i=0; i!=length; ++i) {
		temp[r[i]]=num[i];
	}
	for (int i=0; i!=length; ++i) {
		num[i]=temp[i];
	}

	delete []temp;
}
#endif
