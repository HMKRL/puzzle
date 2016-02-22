#include<iostream>
using namespace std;

int map[7][7];

int main()
{
	int i, j, a, b;
	cout << "Insert map pattern:" << endl;
	for(i = 1;i < 6;++i) {
		for(j = 1;j < 6;++j) {
			cin >> map[i][j];
		}
	}
	cout << "Insert move:" << endl;
	while(cin >> a >> b) {
		map[a][b] = !map[a][b];
		map[a + 1][b] = !map[a + 1][b];
		map[a - 1][b] = !map[a - 1][b];
		map[a][b + 1] = !map[a][b + 1];
		map[a][b - 1] = !map[a][b - 1];

		for(i = 1;i < 6;i++) {
			for(j = 1;j < 6;j++) {
				if(map[i][j]) cout << "1 ";
				else cout << "0 ";
			}
			cout << endl;
		}
		cout << "Insert move:" << endl; 
	}
}
