#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<pii>
#define ff first
#define ss second
#define forn(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define endl "\n"
#define MOD 1000000007
#define MAX 100005
#define int ll

void setZeroes(vector<vector<int>> &matrix)
{
      int m = matrix.size();
      int n = matrix[0].size();

      vector<int> rows(m, 0);
      vector<int> columns(n, 0);

      for (int i = 0; i < m; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  if (matrix[i][j] == 0)
                  {
                        rows[i] = 1;
                        columns[j] = 1;
                  }
            }
      }

      for (int i = 0; i < m; i++)
      {
            if (rows[i] == 1)
            {
                  for (int j = 0; j < n; j++)
                  {
                        matrix[i][j] = 0;
                  }
            }
      }

      for (int i = 0; i < n; i++)
      {
            if (columns[i] == 1)
            {
                  for (int j = 0; j < m; j++)
                  {
                        matrix[j][i] = 0;
                  }
            }
      }
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
      int n = matrix.size();
      int m = matrix[0].size();
      setZeroes(matrix);

      cout << "The Final matrix is: \n";
      for (auto it : matrix)
      {
            for (auto ele : it)
            {
                  cout << ele << " ";
            }
            cout << "\n";
      }

      return 0;
}