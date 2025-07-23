
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
struct job {
	int id;
	int deadline;
	int profit;
};
bool cmp(job a, job b) {
	return a.deadline > b.deadline;
}
int main()
{
	int n; cin >> n;
	vector<job> a(n);
	int maxdl = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i].id >> a[i].deadline >> a[i].profit;
		maxdl = max(maxdl, a[i].deadline);
	}
	sort(a.begin(), a.end(), cmp);
	multiset<int>se;
	int idx = 0;
	long long sum = 0;
	for (int i = maxdl; i >= 1; i--) {
		while (idx < n && a[idx].deadline >= i) {
			se.insert(a[idx].profit);
			idx++;
		}
		if (!se.empty()) {
			int maxprofit = *se.rbegin();
			sum += maxprofit;
			auto it = se.find(maxprofit);
			se.erase(it);
		}
	}
	cout << sum;
}

