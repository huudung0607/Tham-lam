
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
	map<char, int> mp;
	int maxfreq = 0;
	for (auto x : s) {
		mp[x]++;
		maxfreq = max(maxfreq, mp[x]);
	}
	if (maxfreq <= (s.length() + 1) / 2) cout << "YES";
	else cout << "NO";

}

