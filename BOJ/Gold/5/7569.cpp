#include <bits/stdc++.h>
using namespace std;

int M, N, H;

int day[101][101][101];

int dz[6] = { 1, -1, 0, 0, 0, 0 };
int dx[6] = { 0, 0, 1, 0, -1, 0 };
int dy[6] = { 0, 0, 0, 1, 0, -1 };

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
    cin >> M >> N >> H;

    // Init
    queue<tuple<int, int, int>> Q;

    for (int k = 0; k < H; ++k)
    {
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                cin >> day[k][i][j];

                if (1 == day[k][i][j])
                {
                    Q.push({ k, i, j });
                }
            }
        }
    }
    
    // BFS
    int Max = 1;

    while (!Q.empty())
    {
        tuple<int, int, int> cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 6; ++dir)
        {
            int nz = get<0>(cur) + dz[dir];
            int nx = get<1>(cur) + dx[dir];
            int ny = get<2>(cur) + dy[dir];

            if (nz < 0 || nz >= H || nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;
            if (-1 == day[nz][nx][ny] || day[nz][nx][ny] > 0)
                continue;

            day[nz][nx][ny] = day[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            Q.push({ nz, nx, ny });

            if (day[nz][nx][ny] > Max)
            {
                Max = day[nz][nx][ny];
            }
        }
    }

    // day[k][i][j] == 0 -> -1
    bool Check = true;

    for (int k = 0; k < H; ++k)
    {
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                if (0 == day[k][i][j])
                {
                    Check = false;
                    break;
                }
            }
        }
    }

    if (Check)
    {
        cout << Max - 1;
    }
    else
    {
        cout << -1;
    }
	
	return 0;
}