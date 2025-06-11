
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
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<int> b(n);
	for (int i = 0; i <= n / 2; i++) {
		if (i == n - i - 1) {
			b[i] = a[i];
		}
		else {
			b[i] = min(a[i], a[n - i - 1]);
			b[n - i - 1] = max(a[i], a[n - i - 1]);
		}
	}
	for (int i = 1; i < n; i++) {
		if (b[i] < b[i - 1]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}

