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

int trap(vector<int> &height)
{
      int n = height.size();
      vector<int> maxFromFront(n);
      vector<int> maxFromRear(n);

      int currFront = height[0];
      int currRear = height[n - 1];
      for (int i = 0; i < n; i++)
      {
            currFront = max(currFront, height[i]);
            currRear = max(currRear, height[n - i - 1]);

            maxFromFront[i] = currFront;
            maxFromRear[n - i - 1] = currRear;
      }

      int ans = 0;
      for (int i = 0; i < n; i++)
            ans += min(maxFromFront[i], maxFromRear[i]) - height[i];

      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

      int trappedWater = trap(height);

      cout << "Trapped water: " << trappedWater << endl;

      return 0;
}
