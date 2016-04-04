// credit http://bbs.csdn.net/topics/360189623#post-370927785
// C++ port
// by zindex
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int count;
	cin >> count;
	vector<vector <int> > data(count, vector<int> (count, 0));
	int max = count*count;
	int x = 0, y = -1, cur = 0;
         
        while (cur < max) {
        		// go right
            for (; y + 1 < count && data[x][y + 1] == 0; data[x][++y] = ++cur);
        	  // go bottom
            for (; x + 1 < count && data[x + 1][y] == 0; data[++x][y] = ++cur);
            // go left
            for (; y - 1 >= 0 && data[x][y - 1] == 0; data[x][--y] = ++cur);
            // go top
            for (; x - 1 >= 0 && data[x-1][y] == 0; data[--x][y] = ++cur);
            
        }

	for (int i=0;i<count;i++){
		for(int j=0;j<count;j++){
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}