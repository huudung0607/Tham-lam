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
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<long long, vector<long long>, greater<long long>> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		q.push(x);
	}
	long long ans = 0;
	while (q.size() > 1)
	{
		long long x = q.top();
		q.pop();
		long long y = q.top();
		q.pop();
		ans += x + y;
		q.push(x + y);
	}
	cout << ans;
}
