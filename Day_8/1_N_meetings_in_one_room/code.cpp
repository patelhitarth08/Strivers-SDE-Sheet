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

int maximumMeetings(vector<int> &start, vector<int> &end)
{
      int n = start.size();
      vector<pair<int, int>> meeting(n);

      for (int i = 0; i < n; i++)
            meeting[i] = {start[i], end[i]};

      sort(meeting.begin(), meeting.end(), [](pair<int, int> &left, pair<int, int> &right)
           { return left.second < right.second; });

      int ans = 1;
      int lastEnd = meeting[0].second;
      for (int i = 1; i < n; i++)
      {
            if (lastEnd < meeting[i].first)
            {
                  lastEnd = meeting[i].second;
                  ans++;
            }
      }

      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> start = {1, 3, 0, 5, 8, 5};
      vector<int> end = {2, 4, 6, 7, 9, 9};

      int maxMeetings = maximumMeetings(start, end);

      cout << "Maximum Meetings that can be conducted: " << maxMeetings << endl;

      return 0;
}
