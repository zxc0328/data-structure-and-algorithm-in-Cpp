/**
 * quick sort in cpp
 * work for int array
 * by zindex
 */
#include <iostream>
#include <algorithm>

using namespace std;

void quicksort(int data[],int first,int last) {
	int lower = first+1,upper = last;
	swap(data[first],data[(first+last)/2]);
	int bound = data[first];
	while (lower <= upper) {
		while (data[lower] < bound)
			lower++;
		while (data[upper] > bound)
			upper--;
		if (lower < upper)
			swap(data[lower++],data[upper--]);
		else lower++;
	}
	swap(data[upper],data[first]);
	if (first < upper-1)
		quicksort(data,first,upper-1);
	if (upper+1 < last)
		quicksort(data,upper+1,last);
}

void quicksort(int data[],int n) {
	int i, max;
	if (n < 2)
		return;
	for (i=1,max=0;i<n;i++) {
		if (data[max] < data[i])
			max = i;
	}
	swap(data[n-1],data[max]);
	quicksort(data,0,n-2);
}

int main() {
	int input[10] = {3,2,4,2,7,3,434,344,43,43};
	quicksort(input,10);
	for (int i=0;i<10;i++){
		cout << input[i] << endl;
	}
	return 0;
}