#include <iostream>
#include "myrank.h"
#include "rankSort.h"
#include "output.h"
using namespace std;

int main() {
	const int length=10;
	int a[length]={2,3,5,2,6,4,8,7,9,1};
	int b[length];

	//rank
	myrank(a,length,b);
	output(b,length);

	//rank-sort
	rankSort(a,length,b);
	output(a,length);
	
	return 0;
}
