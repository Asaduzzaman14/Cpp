#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long val;
    Node *next;

    Node(long long val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, long long val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

long long findDiff(Node *head)
{
    if (head == NULL)
        return 0;

    long long mn = head->val, mx = head->val;
    Node *temp = head;

    while (temp != NULL)
    {
        mn = min(mn, temp->val);
        mx = max(mx, temp->val);
        temp = temp->next;
    }
    return mx - mn;
}

int main()
{
    Node *head = NULL;
    long long val;

    while (cin >> val && val != -1)
    {
        insertAtTail(head, val);
    }

    cout << findDiff(head) << endl;
    return 0;
}
