
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
	int n, k;
	cin >> n >> k;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	k = min(k, n - k);
	sort(a.begin(), a.end());
	long long sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (i < k)sum1 += a[i];
		else sum2 += a[i];
	}
	cout << sum2 - sum1;
}

