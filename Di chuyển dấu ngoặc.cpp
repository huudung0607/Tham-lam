
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
int xuly(string s) {
	stack<int> st;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') st.push(i);
		else {
			if (!st.empty()) st.pop();
			else {
				cnt++;
			}
		}
	}
	return cnt;
}
int main()
{
	string s; cin >> s;
	cout << xuly(s);
}

