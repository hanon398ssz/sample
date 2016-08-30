#include <iostream>
#include <algorithm>
#include <random>
#include <string>
#include <vector>

#define Number 10

using namespace std;

int main(void)
{
	string st = "ABC,DE,FGH,I";
	vector<string> a;
	vector<int>    x;

	cout << st.find(',') << endl;					// 3が返ってくる
	cout << st.find(',', 4) << endl;				// 6が返ってくる

	a.emplace_back("3");							// 3が入る
	for (size_t i = 0; i < a.size(); i++) {
		cout << "1.a = " << a[i] << endl;
	}
	a.emplace_back("Hello");						// 3のうしろにHelloが入る
	for (size_t i = 0; i < a.size(); i++) {
		cout << "2.a = " << a[i] << endl;
	}

	cout << "ABC:" << st.substr(0, 3) << endl;		// ABC
	cout << "DE:" << st.substr(4, 2) << endl;		// DE

	cout << "シャッフル前" << endl;
	for (int i = 0; i < Number; i++) {
		x.emplace_back(i);
		cout << "x = " << x[i] << endl;
	}

	shuffle(x.begin(), x.end(), mt19937_64(random_device()()));

	cout << "シャッフル後" << endl;
	for (size_t i = 0; i < x.size(); i++) {
		cout << "x = " << x[i] << endl;
	}

}