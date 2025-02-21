#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;

		arr.push_back(num);
	}

	sort(arr.begin(), arr.end(), greater<>());

	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << '\n';
	}
	
	return 0;
}