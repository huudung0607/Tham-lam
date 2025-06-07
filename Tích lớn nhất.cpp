
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
	int n; cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long sum = 0;
	int mod = 1e9 + 7;
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
	{
		sum += 1ll * a[i] * i;
		sum %= mod;
	}
	cout << sum;
}


