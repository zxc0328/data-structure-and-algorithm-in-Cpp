// linked list in C++, STL version
// by zindex

#include <iostream>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	list<int> lst1;
	for (int j=1;j<=5;j++) {
		lst1.push_back(j);
	}
	lst1.reverse();
	list<int>::iterator i1;
	for (i1 = lst1.begin();i1 != lst1.end(); i1++) {
		cout << *i1 << endl;
	}
	return 0;
}