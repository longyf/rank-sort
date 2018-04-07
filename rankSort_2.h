#ifndef rank_sort_2_h
#define rank_sort_2_h
#include <iostream>
#include "myrank.h"
#include <stdexcept>
using namespace std;

//in-place rearrange
template <class T>
void rankSort_2(T num[], int length, int r[]) {
	if (num==nullptr||r==nullptr||length<=0) 
		throw invalid_argument("Pay attention to the inputs.");

	int i=0;
	while (i!=length) {
		if (r[i]==i) {
			++i;
		}
		else {
			swap(num[i],num[r[i]]);
			//这一句话不能放在前边，否则r[i]改变之后再用num[r[i]]访问r[i]会出问题。
			swap(r[i],r[r[i]]);
		}
	}

}
#endif
