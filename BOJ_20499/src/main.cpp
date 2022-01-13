#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string line;
	cin >> line;
	const auto& n = line.length();

	auto s1 = int{ -1 };
	for (int i = 0; i < n; ++i) {
		if ('/' == line[i]) {
			s1 = i;
			break;
		}
	}

	const auto& k = stoi(line.substr(0, s1));

	auto s2 = int{ -1 };
	for (int i = s1 + 1; i < n; ++i) {
		if ('/' == line[i]) {
			s2 = i;
			break;
		}
	}

	const auto& d = stoi(line.substr(s1 + 1, s2 - s1 - 1));

	const auto& a = stoi(line.substr(s2 + 1, n - s2 - 1));

	if (0 == d || k + a < d) {
		cout << "hasu";
	}
	else {
		cout << "gosu";
	}

	return 0;
}