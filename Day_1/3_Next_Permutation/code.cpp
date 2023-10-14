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

void nextPermutation(vector<int> &nums)
{
      int n = nums.size();

      int index = -1;
      for (int i = 0; i < n - 1; i++)
      {
            if (nums[i] < nums[i + 1])
            {
                  index = i;
                  // break;
            }
      }

      if (index == -1)
      {
            for (int j = 0; j < n / 2; j++)
            {
                  swap(nums[j], nums[n - j - 1]);
            }
            return;
      }

      for (int i = n - 1; i > index; i--)
      {
            if (nums[i] > nums[index])
            {
                  swap(nums[i], nums[index]);
                  break;
            }
      }
      index++;
      int m = n - 1;
      while (index < m)
      {
            swap(nums[index], nums[m]);
            index++;
            m--;
      }
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums = {2, 1, 5, 4, 3, 0, 0};
      nextPermutation(nums);

      cout << "The next permutation is: [";
      for (auto it : nums)
      {
            cout << it << " ";
      }
      cout << "]" << endl;
      return 0;
}
