
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
	string s; cin >> s;
	vector<int> v;
	s += '0';
	int cnt = 0;
	for (auto x : s) {
		if (x == '1') cnt++;
		else if (cnt) {
			v.push_back(cnt);
			cnt = 0;
		}
	}
	sort(v.rbegin(), v.rend());
	int ans = 0;
	for (int i = 0; i < v.size(); i += 2) {
		ans += v[i];
	}
	cout << ans;
}

