
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>chan, le;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		if (x % 2 == 0) chan.push_back(x);
		else le.push_back(x);
	}
	if (chan.size() % 2 == 0) {
		cout << "YES"; 
	}
	else {
		set<int> se;
		for (auto x : chan) {
			se.insert(x);
		}
		int ok = 0;
		for (auto x : le) {
			if (se.count(x - 1) || se.count(x + 1)) {
				ok = 1;
			}
		}
		if (ok) cout << "YES";
		else cout << "NO";
	}

}

