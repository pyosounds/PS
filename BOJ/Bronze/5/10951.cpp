#include <bits/stdc++.h>
using namespace std;

int A, B;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while (true)
	{		
		cin >> A >> B;

		if (cin.eof())
			break;

		cout << A + B << '\n';
	}

	return 0;
}