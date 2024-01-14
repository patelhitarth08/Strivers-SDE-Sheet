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

class ListNode
{
public:
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *detectCycle(ListNode *head)
{

      if (head == NULL || head->next == NULL)
            return NULL;

      ListNode *slow = head;
      ListNode *fast = head;

      while (fast->next != NULL && fast->next->next != NULL)
      {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                  break;
      }

      if (fast->next == NULL || fast->next->next == NULL)
            return NULL;

      ListNode *curr = head;
      while (curr != slow)
      {
            curr = curr->next;
            slow = slow->next;
      }

      return curr;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      ListNode *head1 = new ListNode(1);
      head1->next = new ListNode(2);
      head1->next->next = new ListNode(3);
      head1->next->next->next = new ListNode(4);
      head1->next->next->next->next = head1->next;

      ListNode *cycleStart1 = detectCycle(head1);
      cout << "Example 1: " << (cycleStart1 ? "Cycle starts at node " + to_string(cycleStart1->val) : "No cycle") << endl;

      ListNode *head2 = new ListNode(1);
      head2->next = new ListNode(2);
      head2->next->next = new ListNode(3);
      head2->next->next->next = new ListNode(4);

      ListNode *cycleStart2 = detectCycle(head2);
      cout << "Example 2: " << (cycleStart2 ? "Cycle starts at node " + to_string(cycleStart2->val) : "No cycle") << endl;

      return 0;
}
