#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_froward(Node *head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {

        cout << tmp->val << " " << " ";
        tmp = tmp->next;

        /* code */
    }
    cout << endl;
}

void delete_at_any(Node *head, int idx)
{

    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(25);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    delete_at_any(head, 1);

    print_froward(head);

    return 0;
}
