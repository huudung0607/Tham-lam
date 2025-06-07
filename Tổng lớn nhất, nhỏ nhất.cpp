
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
long long xuly(string num, char p, char q) {
	for (auto& x : num) {
		if (x == p) {
			x = q;
		}
	}
	return stoll(num);
}
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << xuly(s1, '5', '6') + xuly(s2, '5', '6') << " ";
	cout << xuly(s1, '6', '5') + xuly(s2, '6', '5');
}

