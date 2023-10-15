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

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
      int n = intervals.size();
      sort(intervals.begin(), intervals.end());

      vector<vector<int>> ans;

      int first = intervals[0][0];
      int last = intervals[0][1];

      for (int i = 1; i < n; i++)
      {
            if (intervals[i][0] <= last && last < intervals[i][1])
                  last = intervals[i][1];
            else if (last < intervals[i][0])
            {
                  ans.push_back({first, last});
                  first = intervals[i][0];
                  last = intervals[i][1];
            }
      }
      ans.push_back({first, last});
      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
      vector<vector<int>> ans = merge(arr);
      cout << "The merged intervals are: " << endl;
      for (auto it : ans)
      {
            cout << "[" << it[0] << ", " << it[1] << "] ";
      }
      cout << endl;
      return 0;
}
