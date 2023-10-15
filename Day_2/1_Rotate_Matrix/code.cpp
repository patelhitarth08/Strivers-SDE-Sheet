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

void reverse(vector<int> &v)
{
      int i = 0;
      int j = v.size() - 1;

      while (i < j)
      {
            swap(v[i], v[j]);
            i++;
            j--;
      }
}

void rotate(vector<vector<int>> &matrix)
{
      int n = matrix.size();

      for (int i = 0; i < n; i++)
      {
            for (int j = i + 1; j < n; j++)
            {
                  swap(matrix[i][j], matrix[j][i]);
            }
      }

      for (int i = 0; i < n; i++)
            reverse(matrix[i]);
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<vector<int>> arr;
      arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
      rotate(arr);
      cout << "Rotated Image" << endl;
      for (int i = 0; i < arr.size(); i++)
      {
            for (int j = 0; j < arr[0].size(); j++)
            {
                  cout << arr[i][j] << " ";
            }
            cout << endl;
      }

      return 0;
}
