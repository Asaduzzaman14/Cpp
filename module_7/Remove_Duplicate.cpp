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

// remove duplicates
void removeDuplicates(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        Node *temp = curr;
        while (temp->next != NULL)
        {
            if (temp->next->val == curr->val)
            {
                Node *delNode = temp->next;
                temp->next = temp->next->next;
                delete delNode;
            }
            else
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
}

// print list
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
    Node *head = NULL;
    int val;

    // input linked list
    while (cin >> val && val != -1)
    {
        insertAtTail(head, val);
    }

    removeDuplicates(head);
    printList(head);

    return 0;
}
