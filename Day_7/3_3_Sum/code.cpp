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

vector<vector<int>> threeSum(vector<int> &nums)
{
      int n = nums.size();

      sort(nums.begin(), nums.end());

      set<vector<int>> unique;
      vector<vector<int>> ans;
      for (int i = 0; i < n; i++)
      {
            int f = i + 1;
            int l = n - 1;
            int sum = 0;
            while (f < l)
            {
                  sum = nums[i] + nums[f] + nums[l];
                  if (sum == 0)
                  {
                        unique.insert({nums[i], nums[f], nums[l]});
                        f++;
                        l--;
                  }
                  else if (sum < 0)
                        f++;
                  else
                        l--;
            }
      }

      for (auto c : unique)
            ans.push_back(c);

      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums = {-1, 0, 1, 2, -1, -4};

      vector<vector<int>> result = threeSum(nums);

      cout << "Unique triplets with sum 0:" << endl;
      for (const vector<int> &triplet : result)
      {
            cout << "[";
            for (int i = 0; i < triplet.size(); ++i)
            {
                  cout << triplet[i];
                  if (i < triplet.size() - 1)
                        cout << ", ";
            }
            cout << "]";
            if (&triplet != &result.back())
                  cout << ", ";
      }
      cout << endl;

      return 0;
}
