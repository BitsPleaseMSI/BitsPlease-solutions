/* Amit Bansal - @amitbansal7 */
#include <bits/stdc++.h>
using namespace std;
bool ans;

void solve(vector<vector<int> >A, int i, int j)
{
    if (i < 0 || j < 0 || i >= A.size() || j >= A[0].size() || A[i][j] == 0 || ans)
        return;

    if (A[i][j] == 2)
    {
        ans = 1;
        return;
    }
    A[i][j] = 0;
    solve(A, i + 1, j);
    solve(A, i - 1, j);
    solve(A, i, j - 1);
    solve(A, i, j + 1);
    A[i][j] = 1;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int> >A(n, vector<int>(n,0));
        int a,b;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> A[i][j];
                if(A[i][j] == 1)
                {
                    a = i;
                    b = j;
                }
            }
        }

        ans = 0;
        solve(A, a, b);
        cout << ans << endl;
    }
    return 0;
}
