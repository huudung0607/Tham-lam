
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
int mp[256];
int main()
{
	string s; cin >> s;
	for (auto x : s) {
		mp[x]++;
	}
	int cnt = 0;
	for (int i = 0; i < 256; i++) {
		if (mp[i] % 2) {
			cnt++;
		}
	}
	if (cnt < 2) {
		cout << 1;
	}
	else {
		if (cnt % 2) {
			cout << 1;
		}
		else cout << 2;
	}
}

