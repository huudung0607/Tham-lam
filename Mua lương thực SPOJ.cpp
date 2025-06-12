
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
	int n, s, m; cin >> n >> s >> m;
	int sum = m * s;
	int dicho = s - s / 7;
	int phaidi = ceil(1.00 * sum / n);
	if (phaidi <= dicho) {
		cout << phaidi;
	}
	else cout << -1;
}

