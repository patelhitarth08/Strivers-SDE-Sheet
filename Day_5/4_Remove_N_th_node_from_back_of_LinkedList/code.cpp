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

ListNode *removeNthFromEnd(ListNode *head, int n)
{
      ListNode *current = head;
      int count = 0;
      while (current->next != NULL)
      {
            current = current->next;
            count++;
      }
      count++;
      current = head;

      int target = count - n;
      count = 0;
      while (count != target)
      {
            if (count)
                  current = current->next;
            count++;
      }
      ListNode *temp;
      if (target)
      {
            temp = current->next;
            current->next = temp->next;
      }
      else
      {
            head = head->next;
      }


      return head;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      ListNode *head = new ListNode(1);
      ListNode *current = head;
      for (int i = 2; i <= 5; i++)
      {
            current->next = new ListNode(i);
            current = current->next;
      }

      cout << "Original Linked List: ";
      current = head;
      while (current != nullptr)
      {
            cout << current->val;
            if (current->next != nullptr)
            {
                  cout << " -> ";
            }
            current = current->next;
      }
      cout << endl;

      int n = 2;

      head = removeNthFromEnd(head, n);

      cout << "Linked List after removing the " << n << "th node from the end: ";
      current = head;
      while (current != nullptr)
      {
            cout << current->val;
            if (current->next != nullptr)
            {
                  cout << " -> ";
            }
            current = current->next;
      }
      cout << endl;

      return 0;
}
