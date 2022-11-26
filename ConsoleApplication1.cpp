#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "ConsoleApplication1.h"

using namespace std;

int main()
{
	vector<vector<string>> content;
	vector<string> row, FIO, passportNum, from, to, dateFrom, dateTo, voyage, place, cost, bankNum;
	string line, word;

	fstream fout;
	string s = "1,1,1,1,1,1,1,1,1,1";
	srand(time(nullptr));
	fout.open("reference1.csv", std::ios::out | std::ios::trunc);
	for (int i = 0; i < 50000; ++i) {
		fout << s << "\n";
	}

	/*fstream file("reference1.csv", ios::in);
	if (file.is_open()) {
		while (getline(file, line)) {
			row.clear();
			stringstream str(line);

			while (getline(str, word, ',')) {
				row.push_back(word);
			}
			content.push_back(row);
		}
	} else {
		cout << "Could not open the file\n";
	} 
	for (int i = 0; i < content.size(); ++i) {
		for (int j = 0; j < 10; ++j) {
			switch (j)
			{
			case 0: 
				FIO.push_back(content[i][j]);
				break;
			case 1:
				passportNum.push_back(content[i][j]);
				break;
			case 2:
				from.push_back(content[i][j]);
				break;
			case 3:
				to.push_back(content[i][j]);
				break;
			case 4:
				dateFrom.push_back(content[i][j]);
				break;
			case 5:
				dateTo.push_back(content[i][j]);
				break;
			case 6:
				voyage.push_back(content[i][j]);
				break;
			case 7:
				place.push_back(content[i][j]);
				break;
			case 8:
				cost.push_back(content[i][j]);
				break;
			case 9:
				bankNum.push_back(content[i][j]);
			}
		}
	}*/
	//Kanon(content);
	//cout << k;

	/*for (int i = 0; i < 50000; ++i) {
		passportNum[i].erase(6, 6);
		passportNum[i] = passportNum[i] + to_string("XXXXXX");
	}*/

	return 0;

}
