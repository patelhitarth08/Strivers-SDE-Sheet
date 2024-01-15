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
      int data;
      Node *next;
      Node *bottom;

      Node(int x)
      {
            data = x;
            next = NULL;
            bottom = NULL;
      }
};

Node *merge(Node *a, Node *b)
{
      Node *temp = new Node(0);
      Node *res = temp;

      while (a != NULL && b != NULL)
      {
            if (a->data < b->data)
            {
                  temp->bottom = a;
                  temp = temp->bottom;
                  a = a->bottom;
            }
            else
            {
                  temp->bottom = b;
                  temp = temp->bottom;
                  b = b->bottom;
            }
      }

      if (a != NULL)
            temp->bottom = a;
      else
            temp->bottom = b;

      return res->bottom;
}

Node *flatten(Node *root)
{
      if (root == NULL || root->next == NULL)
            return root;

      root->next = flatten(root->next);

      root = merge(root, root->next);

      return root;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      Node *head = new Node(5);
      head->next = new Node(10);
      head->next->next = new Node(19);
      head->next->next->next = new Node(28);

      head->bottom = new Node(7);
      head->bottom->bottom = new Node(8);
      head->bottom->bottom->bottom = new Node(30);

      head->next->bottom = new Node(20);

      head->next->next->bottom = new Node(22);
      head->next->next->bottom->bottom = new Node(50);

      cout << "Original Multi-level Linked List:" << endl;
      Node *current = head;
      while (current != nullptr)
      {
            Node *temp = current;
            while (temp != nullptr)
            {
                  cout << temp->data << " ";
                  temp = temp->bottom;
            }
            cout << endl;
            current = current->next;
      }

      Node *flattenedList = flatten(head);

      cout << "\nFlattened Linked List:" << endl;
      while (flattenedList != nullptr)
      {
            cout << flattenedList->data << " ";
            flattenedList = flattenedList->bottom;
      }
      cout << endl;

      return 0;
}
