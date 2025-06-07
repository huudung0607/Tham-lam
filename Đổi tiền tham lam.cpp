
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
int money[] = { 1000,500,200,100,50,20,10,5,2,1 };
int main()
{
	int i = 0;
	int n;
	cin >> n;
	int cnt = 0;
	while (n) {
		cnt += n / money[i];
		n = n % money[i];
		i++;
	}
	cout << cnt;
}

