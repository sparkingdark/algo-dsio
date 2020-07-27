#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *link;
};

class linked_list
{
private:
    node *head, *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *temp = new node;
        temp->data = n;
        temp->link = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->link = temp;
            tail = tail->link;
        }
    }

    void concatenate(node *a,node *b)
    {
        if( a != NULL && b!= NULL )
        {
            if (a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
    }

    void front(int n)
    {
        node *tmp = new node;
        tmp -> data = n;
        tmp -> next = head;
        head = tmp;
    }

    void after(node *a, int value)
    {
        node* p = new node;
        p->data = value;
        p->next = a->next;
        a->next = p;
    }

    void delete1 (node *before_del)
    {
        node* temp;
        temp = before_del->next;
        before_del->next = temp->next;
        delete temp;
    }

    void display()
    {
        node *p = head;

        while (p != NULL)
        {
            cout << p->data <<endl;;

            p = p->link;
        }
        cout<<endl;
    }
};

int main(int argc, char const *argv[])
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.add_node(4);
    a.add_node(5);
    a.add_node(6);
    a.display();
    linked_list b;
    b.add_node(9);
    b.add_node(10);
    a.concatenate(a.gethead(),b.gethead());
    a.display();
    a.front(20);
    a.after(30);
    a.display();
    a.delete1(a.gethead()->next);
    a.display();
}
