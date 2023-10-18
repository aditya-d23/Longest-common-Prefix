#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
	string str = "";
	sort(strs.begin(), strs.end());
	int n = strs.size();
	string first = strs[0];
	string last = strs[n - 1];
	for (int i = 0; i < min(strs[0].size(), strs[n - 1].size()); i++) {
		if (first[i] != last[i]) {
			return str;
		}
		else {
			str += first[i];
		}
	}
	return str;
}
int main() {
	vector<string> strs = { "flower", "flow", "flight" };
	cout << longestCommonPrefix(strs);
}