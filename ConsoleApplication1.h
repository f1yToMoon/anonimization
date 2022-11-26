#include <iostream>
#include <unordered_map>
using namespace std;
//int k = 0;
int Kanon(vector<vector<string>> cont) {
	cout << "start Kanon\n";
	int k;
	string s, ss;
	unordered_map<string, int> mp;
	for (int i = 0; i < 10; ++i) {
		s += cont[1][i];
	}
	mp.insert(pair<std::string, int>(s, 1));
	for (int i = 1; i < 50000; ++i) {
		if (i % 100 == 0) {
			cout << i << "\n";
		}
		for (int j = 0; j < 10; ++j) {
			ss += cont[i][j];
		}
		const char* c1 = ss.c_str();
		for (auto& e : mp) {
			const char* c2 = e.first.c_str();
			if (strcmp(c1, c2) == 0) {
				e.second++;
			}
			else {
				mp.insert(pair<std::string, int>(ss, 1));
			}
		}
	}
	k = mp.begin()->second;
	cout << "finish Kanon\n";
	return k;
}

