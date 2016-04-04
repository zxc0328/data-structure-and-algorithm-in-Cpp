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
	int x = -1, y = 0, cur = 0;
         
        while (cur < max) {
            for (; x + 1 < count && data[x + 1][y] == 0; data[y][++x] = ++cur);
            for (; y + 1 < count && data[x][y + 1] == 0; data[++y][x] = ++cur);
            for (; x - 1 >= 0 && data[y][x - 1] == 0; data[y][--x] = ++cur);
            for (; y - 1 >= 0 && data[y - 1][x] == 0; data[--y][x] = ++cur);
        }

	for (int i=0;i<count;i++){
		for(int j=0;j<count;j++){
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}