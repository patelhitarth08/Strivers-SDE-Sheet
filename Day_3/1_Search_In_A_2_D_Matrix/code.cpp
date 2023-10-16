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

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
      int n = matrix.size();
      int m = matrix[0].size();

      int i = 0;
      int j = n - 1;
      int targetRow = 0;

      while (i <= j)
      {
            int mid = (i + j) / 2;
            if (matrix[mid][0] == target)
                  return true;
            else if (target < matrix[mid][0])
            {
                  if (mid > 0 && target > matrix[mid - 1][0])
                  {
                        targetRow = mid - 1;
                        break;
                  }
                  j = mid - 1;
            }
            else if (matrix[mid][0] < target)
            {
                  if (mid == n - 1 || (mid < n - 1 && target < matrix[mid + 1][0]))
                  {
                        targetRow = mid;
                        break;
                  }

                  i = mid + 1;
            }
      }

      i = 0;
      j = m - 1;

      while (i <= j)
      {
            int mid = (i + j) / 2;
            if (target < matrix[targetRow][mid])
                  j = mid - 1;
            else if (target > matrix[targetRow][mid])
                  i = mid + 1;
            else
                  return true;
      }
      return false;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
      searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
      return 0;
}
