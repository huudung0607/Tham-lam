
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
	int k;
	string s;
	cin >> k >> s;
	map<char, int> mp;
	for (auto x : s) {
		mp[x]++;
	}
	priority_queue<int> pq;
	for (pair<char, int> p : mp) {
		pq.push(p.second);
	}
	while (k-- && pq.size()) {
		int maxfreq = pq.top();
		pq.pop();
		if (maxfreq - 1 > 0) {
			pq.push(maxfreq - 1);
		}
	}
	long long sum = 0;
	while (pq.size()) {
		int fre = pq.top();
		pq.pop();
		sum += 1ll * fre * fre;
	}
	cout << sum;
}

