#include <iostream>

#define endl "\n"
#define MAX 510
using namespace std;

int N;
int Triangle[MAX][MAX];
int DP[MAX][MAX];

int Max(int A, int B) { if (A > B) return A; return B; }

void Input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> Triangle[i][j];
        }
    }
}

void Solution()
{
    DP[1][1] = Triangle[1][1];
    for (int i = 2; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1) DP[i][j] = DP[i - 1][j] + Triangle[i][j];
            else if (j == i) DP[i][j] = DP[i - 1][j - 1] + Triangle[i][j];
            else DP[i][j] = Max(DP[i - 1][j - 1] + Triangle[i][j], DP[i - 1][j] + Triangle[i][j]);
        }
    }
    int Answer = 0;
    for (int i = 1; i <= N; i++) Answer = Max(Answer, DP[N][i]);
    cout << Answer << endl;
}

void Solve()
{
    Input();
    Solution();
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("Input.txt", "r", stdin);
    Solve();

    return 0;
}


