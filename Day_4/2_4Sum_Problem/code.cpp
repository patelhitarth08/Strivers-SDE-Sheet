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

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
      sort(nums.begin(), nums.end());
      int n = nums.size();
      vector<vector<int>> ans;
      for (int i = 0; i < n; i++)
      {
            if (i > 0 && nums[i] == nums[i - 1])
                  continue;

            for (int j = i + 1; j < n; j++)
            {
                  if (j > i + 1 && nums[j] == nums[j - 1])
                        continue;

                  long long sum = nums[i] + nums[j];
                  long long remainedSum = target - sum;
                  int start = j + 1;
                  int end = n - 1;
                  while (start < end)
                  {
                        if (nums[start] + nums[end] == remainedSum)
                        {
                              ans.push_back({nums[i], nums[j], nums[start], nums[end]});
                              start++;
                              end--;
                              while (start < end && nums[start] == nums[start - 1])
                                    start++;
                              while (start < end && nums[end] == nums[end + 1])
                                    end--;
                        }
                        else if (nums[start] + nums[end] < remainedSum)
                              start++;
                        else
                              end--;
                  }
            }
      }
      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
      int target = 9;
      vector<vector<int>> ans = fourSum(nums, target);
      cout << "The quadruplets are: \n";
      for (auto it : ans)
      {
            cout << "[";
            for (auto ele : it)
            {
                  cout << ele << " ";
            }
            cout << "] ";
      }
      cout << "\n";

      return 0;
}
