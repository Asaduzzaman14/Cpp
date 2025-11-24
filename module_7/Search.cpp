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
void insertAtTail(Node *&head, Node *&tail, long long val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int findIndex(Node *head, long long X)
{
    Node *temp = head;
    int index = 0;
    while (temp != NULL)
    {
        if (temp->val == X)
            return index;
        temp = temp->next;
        index++;
    }
    return -1;
}

int main()
{
    int Test;
    cin >> Test;
    while (Test--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        long long val;

        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insertAtTail(head, tail, val);
        }

        long long X;
        cin >> X;

        cout << findIndex(head, X) << endl;
        Node *temp;

        while (head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
    return 0;
}
