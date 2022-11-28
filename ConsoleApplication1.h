#include <iostream>
#include <unordered_map>
#include <iostream>
#include <map>
using namespace std;
int Kanon(vector<vector<string>> cont) {
	cout << "start Kanon\n";
	int k = 0;
	string s, ss;
	unordered_map<int, size_t> counts;
	map<string, int> mp;

	for (int i = 0; i < 50000; ++i) {
		for (int j = 0; j < 10; ++j) {
			ss += cont[i][j];
		}
		mp.insert(pair<string, int>(ss, 1));
	}

	for (const auto& kvp : mp) {
		counts[kvp.second]++;
	}

	for (const auto& kvp : counts) {
		if (kvp.second > 0)
			std::cout << kvp.first << "->" << kvp.second << '\n';
	}

	cout << "finish Kanon\n";
	return k;
}
