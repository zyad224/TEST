#include <iostream>
#include<vector>
#include <stack>
#include <bitset>
using namespace std;
stack<int>s;
int x;

void main()
{
	// table 1
	int **p;
	p = new int*[17];
	for (int i = 0; i < 4096; i++)
	{
		p[i] = new int[4096];
	}
	int count[16];
	for (int i = 0; i < 17; i++){
		count[i] = 0;
	}

	// filling the table
	while (true){
		cout << "input the minterm including dont cares ( one by one)" << endl;
		int x = 0;
		cin >> x;
		if (x < 0)
			break;
		bitset<16> b(x);
		unsigned int y = b.count();
		p[y][count[y]] = x;
		count[y]++;
	}

	// testing the array
	for (int i = 0; i < 17; i++){
		cout << i << " ";
		for (int j = 0; j < count[i]; j++){
			cout << p[i][j]<<" ";
		}
		cout << endl;
	}
	system("pause");




}