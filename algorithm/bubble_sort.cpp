/**
 * bubble sort in C++
 * by zindex
 */

#include <iostream>
#include <algorithm>

using namespace std;

void bubblesort(int data[], int n) {
	for (int i=0;i<n-1;i++){
		for (int j=n-1;j>i;--j){
			if (data[j] < data[j-1])
				swap(data[j],data[j-1]);
		}
	}
}

int main() {
	int data[5] = {6,3,5,3,4};
	bubblesort(data,5);
	for (int i;i<5;i++){
		cout << data[i] << endl;
	}
	return 0;
}