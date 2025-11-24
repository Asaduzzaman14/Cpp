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

// Insert at head
void insertAtHead(Node *&head, long long val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Insert at tail
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

// Delete at index
void deleteAtIndex(Node *&head, int index)
{
    if (head == NULL)
        return;

    if (index == 0)
    { // delete head
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 0; temp != NULL && i < index - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
        return; // invalid index

    Node *delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}

// Print list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;

    while (Q--)
    {
        int X;
        long long V;
        cin >> X >> V;

        if (X == 0)
            insertAtHead(head, V);
        else if (X == 1)
            insertAtTail(head, V);
        else if (X == 2)
            deleteAtIndex(head, V);

        printList(head);
    }

    return 0;
}
