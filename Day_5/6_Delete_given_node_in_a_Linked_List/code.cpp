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

void deleteNode(ListNode *node)
{
      node->val = node->next->val;
      node->next = node->next->next;
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

      // Print the original linked list
      cout << "Original Linked List: ";
      ListNode *current = head;
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

      // Select the node you want to delete (e.g., the second node)
      ListNode *nodeToDelete = head->next;

      // Call the function to delete the selected node
      deleteNode(nodeToDelete);

      // Print the linked list after deletion
      cout << "Linked List after deleting the selected node: ";
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
