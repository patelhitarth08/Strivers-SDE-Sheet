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

class Node
{
public:
      int val;
      Node *next;
      Node *random;

      Node(int _val)
      {
            val = _val;
            next = NULL;
            random = NULL;
      }
};

Node *copyRandomList(Node *head)
{
      if (head == NULL)
            return head;

      Node *curr = head;
      while (curr != NULL)
      {
            Node *temp = new Node(curr->val);
            temp->next = curr->next;
            curr->next = temp;
            curr = temp->next;
      }
      curr = head;
      while (curr != NULL)
      {
            curr->next->random = NULL;
            if (curr->random != NULL)
                  curr->next->random = curr->random->next;
            curr = curr->next->next;
      }

      Node *copyHead = new Node(0);
      copyHead->next = head->next;
      Node *copyCurr = copyHead->next;

      curr = head;
      Node *nextCurr = head->next->next;

      while (nextCurr != NULL)
      {
            curr->next = nextCurr;
            copyCurr->next = nextCurr->next;
            copyCurr = copyCurr->next;
            curr = curr->next;
            nextCurr = nextCurr->next->next;
      }

      copyCurr->next = NULL;
      curr->next = NULL;

      return copyHead->next;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      Node *head = new Node(1);
      head->next = new Node(2);
      head->next->next = new Node(3);
      head->next->next->next = new Node(4);
      head->next->next->next->next = new Node(5);

      head->random = head->next->next;
      head->next->random = head->next->next->next;
      head->next->next->random = head;
      head->next->next->next->random = head->next;
      head->next->next->next->next->random = head->next->next;

      cout << "Original Linked List with Random Pointers:" << endl;
      Node *current = head;
      while (current != nullptr)
      {
            cout << "Node(" << current->val << ", Random(";
            if (current->random != nullptr)
                  cout << current->random->val;
            else
                  cout << "NULL";
            cout << "))";
            if (current->next != nullptr)
                  cout << " -> ";
            current = current->next;
      }
      cout << endl;

      Node *copiedList = copyRandomList(head);

      cout << "\nCopied Linked List with Random Pointers:" << endl;
      current = copiedList;
      while (current != nullptr)
      {
            cout << "Node(" << current->val << ", Random(";
            if (current->random != nullptr)
                  cout << current->random->val;
            else
                  cout << "NULL";
            cout << "))";
            if (current->next != nullptr)
                  cout << " -> ";
            current = current->next;
      }
      cout << endl;

      return 0;
}
