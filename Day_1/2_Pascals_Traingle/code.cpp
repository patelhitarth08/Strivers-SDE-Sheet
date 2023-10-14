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

vector<int> makeRow(vector<int> &prevRow)
{
      vector<int> newRow;
      newRow.push_back(1);

      int n = prevRow.size();
      for (int i = 0; i < n - 1; i++)
            newRow.push_back(prevRow[i] + prevRow[i + 1]);

      newRow.push_back(1);
      return newRow;
}

vector<vector<int>> generate(int numRows)
{
      vector<vector<int>> ans;

      vector<int> v1(1, 1);
      ans.push_back(v1);
      if (numRows == 1)
            return ans;

      vector<int> v2(2, 1);
      ans.push_back(v2);
      if (numRows == 2)
            return ans;

      for (int i = 2; i < numRows; i++)
            ans.push_back(makeRow(ans[i - 1]));

      return ans;
}
signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      int numRows = 1;
      vector<vector<int>> ans = generate(numRows);

      cout << "Pascal's Traingle for n = " << numRows << endl;
      for (auto it : ans)
      {
            for (auto ele : it)
            {
                  cout << ele << " ";
            }
            cout << endl;
      }
      cout << endl;

      numRows = 2;
      ans = generate(numRows);

      cout << "Pascal's Traingle for n = " << numRows << endl;
      for (auto it : ans)
      {
            for (auto ele : it)
            {
                  cout << ele << " ";
            }
            cout << endl;
      }
      cout << endl;

      numRows = 3;
      ans = generate(numRows);

      cout << "Pascal's Traingle for n = " << numRows << endl;
      for (auto it : ans)
      {
            for (auto ele : it)
            {
                  cout << ele << " ";
            }
            cout << endl;
      }

      cout << endl;

      numRows = 5;
      ans = generate(numRows);

      cout << "Pascal's Traingle for n = " << numRows << endl;
      for (auto it : ans)
      {
            for (auto ele : it)
            {
                  cout << ele << " ";
            }
            cout << "\n";
      }

      return 0;
}