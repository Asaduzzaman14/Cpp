#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert at tail
void insertAtTail(Node *&head, int val)
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

// compare two linked lists
bool areSame(Node *head1, Node *head2)
{
    Node *t1 = head1;
    Node *t2 = head2;

    while (t1 != NULL && t2 != NULL)
    {
        if (t1->val != t2->val)
            return false; // mismatch found
        t1 = t1->next;
        t2 = t2->next;
    }

    // if one list is longer
    if (t1 != NULL || t2 != NULL)
        return false;

    return true; // all matched
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    int val;

    // first list input
    while (cin >> val && val != -1)
    {
        insertAtTail(head1, val);
    }

    // second list input
    while (cin >> val && val != -1)
    {
        insertAtTail(head2, val);
    }

    if (areSame(head1, head2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
