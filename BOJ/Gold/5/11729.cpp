#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int n)
{
    if (1 == n)
    {
        cout << a << ' ' << b << '\n';
        return;
    }

    hanoi(a, 6 - a - b, n - 1);
    cout << a << ' ' << b << '\n';
    hanoi(6 - a - b, b, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    cout << static_cast<int>(pow(2, N) - 1) << '\n';

    hanoi(1, 3, N);

    return 0;
}