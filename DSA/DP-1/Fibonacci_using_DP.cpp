#include <iostream>
using namespace std;

int fibo_3(int n) {
	int *ans = new int[n+1];

	ans[0] = 0;
	ans[1] = 1;

	for(int i = 2; i <= n; i++) {
		ans[i] = ans[i-1] + ans[i-2];
	}

	return ans[n];
}

int main() {
	int n;
	cin >> n;
	cout << fibo_3(n) << endl;
}
