#include <bits/stdc++.h>
using namespace std;



int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		string str;
		getline(cin, str);

		if ("." == str)
			break;


		stack<bool> S;

		int loop = str.size();
		bool good = true;

		for (int i = 0; i < loop; ++i)
		{
			// ¿©´Â °ýÈ£
			if ('(' == str[i])
			{
				S.push(0);
			}
			else if ('[' == str[i])
			{
				S.push(1);
			}

			// ´Ý´Â °ýÈ£
			else if (')' == str[i])
			{
				if (!S.size() || 0 != S.top())
				{
					good = false;
					break;
				}
				else
				{
					S.pop();
				}
			}
			else if (']' == str[i])
			{
				if (!S.size() || 1 != S.top())
				{
					good = false;
					break;
				}
				else
				{
					S.pop();
				}
			}
		}

		if (good && !S.size())
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
	
	return 0;
}