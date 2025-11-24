#include <bits/stdc++.h>
using namespace std;

// void rec(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     rec(i + 1, n);
//     cout << i << endl;
// }

// int main()
// {
//     int n = 5;
//     rec(1, n);
//     return 0;
// }

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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}

void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);

    Node *temp = head;
    for (int i = 1; i < idx - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size_link_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void sort_link_list(Node *head)
{
    for (Node *temp = head; temp->next != NULL; temp = temp->next)
    {

        for (Node *j = temp->next; j != NULL; j = j->next)
        {

            // if (temp->val < j->val)
            if (temp->val < j->val)
            {
                swap(temp->val, j->val);
            }
        }
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int idx;
    while (cin >> idx >> val)
    {

        int sz = size_link_list(head);

        if (idx > sz)
        {
            cout << "Invalid\n";
            continue;
        }
        else if (idx == sz)
        {

            insert_at_tail(head, tail, val);
        }
        else if (idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else
        {
            insert_at_any_pos(head, idx, val);
        }
        print_link_list(head);
    }
}

// 10 20 30 -1
// 1 40
// 5 50
// 4 50
// 0 100
// 7 40
// 1 110
// 7 40

//

// 10 40 20 30
// Invalid
// 10 40 20 30 50
// 100 10 40 20 30 50
// Invalid
// 100 110 10 40 20 30 50
// 100 110 10 40 20 30 50 40
