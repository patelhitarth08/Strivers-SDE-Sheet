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

int lengthOfLongestSubstring(string s)
{
      int n = s.length();
      vector<int> mp(256, -1);
      int len = 0;
      int left = 0, right = 0;

      while (right < n)
      {
            if (mp[s[right]] != -1)
                  left = max(mp[s[right]] + 1, left);

            mp[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
      }
      return len;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      string str = "JayShreeRam";
      cout << "The length of the longest substring without repeating characters is " << lengthOfLongestSubstring(str) << endl;

      return 0;
}
