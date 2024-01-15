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

ListNode *rotateRight(ListNode *head, int k)
{
      if (head == NULL || head->next == NULL || k == 0)
            return head;

      int len = 1;
      ListNode *tail = head;

      while (tail->next != NULL)
      {
            tail = tail->next;
            len++;
      }
      k = k % len;
      if (k == 0)
            return head;

      int count = len - k;
      ListNode *temp = head;

      while (count > 1)
      {
            temp = temp->next;
            count--;
      }

      tail->next = head;
      head = temp->next;
      temp->next = NULL;

      return head;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      ListNode *head = new ListNode(1);
      head->next = new ListNode(2);
      head->next->next = new ListNode(3);
      head->next->next->next = new ListNode(4);
      head->next->next->next->next = new ListNode(5);

      cout << "Original Linked List: ";
      ListNode *current = head;
      while (current != nullptr)
      {
            cout << current->val;
            if (current->next != nullptr)
                  cout << " -> ";
            current = current->next;
      }
      cout << endl;

      int k = 2;
      ListNode *rotatedList = rotateRight(head, k);

      cout << "Rotated Linked List (by " << k << " positions): ";
      current = rotatedList;
      while (current != nullptr)
      {
            cout << current->val;
            if (current->next != nullptr)
                  cout << " -> ";
            current = current->next;
      }
      cout << endl;

      return 0;
}
