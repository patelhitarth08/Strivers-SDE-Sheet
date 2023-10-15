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

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
      for (int i = m; i < m + n; i++)
            nums1.push_back(nums2[i - m]);
      sort(nums1.begin(), nums1.end());
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums1 = {1, 4, 8, 10};
      vector<int> nums2 = {2, 3, 9};
      int m = 4, n = 3;
      merge(nums1, m, nums2, n);
      cout << "The merged array is: " << endl;
      for (int i = 0; i < m + n; i++)
            cout << nums1[i] << " ";

      cout << endl;
      return 0;
}
