#include <bits/stdc++.h>
using namespace std;

int N;
queue<int> Q;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		Q.push(i);
	}

	while (1 != Q.size())
	{
		// ���� ���� �ִ� ī�带 �ٴڿ� ������.
		Q.pop();
		if (1 == Q.size()) break;

		// ���� ���� �ִ� ī�带 ���� �Ʒ��� �ִ� ī�� ������ �ű��.
		Q.push(Q.front());
		Q.pop();
		if (1 == Q.size()) break;
	}

	cout << Q.front();

	return 0;
}