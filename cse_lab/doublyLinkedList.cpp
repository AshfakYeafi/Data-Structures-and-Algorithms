#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct node
{
    int value;
    struct node *next;
    struct node *prev;
};
struct node *head;
struct node *tail;

void init()
{
    head = NULL;
    tail = NULL;
}

void insertFirst(int element)
{
    struct node *newItem;
    newItem = new node;
    if (head == NULL)
    {
        head = newItem;
        newItem->prev = NULL;
        newItem->value = element;
        newItem->next = NULL;
        tail = newItem;
    }
    else
    {
        newItem->next = head;
        newItem->value = element;
        newItem->prev = NULL;
        head->prev = newItem;
        head = newItem;
    }
}

void insertLast(int element)
{
    struct node *newItem;
    newItem = new node;
    newItem->value = element;
    if (head == NULL)
    {
        head = newItem;
        newItem->prev = NULL;
        newItem->next = NULL;
        tail = newItem;
    }
    else
    {
        newItem->prev = tail;
        tail->next = newItem;
        newItem->next = NULL;
        tail = newItem;
    }
}

void insertAfter(int old, int element)
{
    struct node *newItem;
    newItem = new node;
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        cout << "could not insert" << endl;
        return;
    }
    if (head == tail)
    {
        if (head->value != old)
        {
            cout << "could not insert" << endl;
            return;
        }
        newItem->value = element;
        head->next = newItem;
        newItem->next = NULL;
        head->prev = NULL;
        newItem->prev = head;
        tail = newItem;
        return;
    }
    if (tail->value == element)
    {
        newItem->next = NULL;
        newItem->prev = tail;
        tail->next = newItem;
        tail = newItem;
        return;
    }
    while (temp->value != old)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Could not insert" << endl;
            cout << "element not found" << endl;
            return;
        }
    }

    newItem->next = temp->next;
    newItem->prev = temp;
    newItem->value = element;
    temp->next->prev = newItem;
    temp->next = newItem;
}

void deleteFirst()
{
    if (head == NULL)
    {
        return;
    }
    if (head == tail) ///one element in the list
    {
        struct node *cur;
        cur = head;
        head = NULL;
        tail = NULL;
        delete cur;
        return;
    }
    else
    {
        struct node *cur;
        cur = head;
        head = head->next;
        head->prev = NULL;
        delete cur;
    }
}

void deleteLast()
{
    if (head == NULL)
        return;
    if (head == tail)
    {
        struct node *cur;
        cur = head;
        head = NULL;
        tail = NULL;
        delete cur;
        return;
    }
    else
    {
        struct node *cur;
        cur = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete cur;
    }
}
void deleteItem(int element)
{
    struct node *temp;
    temp = head;
    if (head == tail)
    {
        if (head->value != element)
        {
            cout << "could not delete" << endl;
            return;
        }
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    if (head->value == element)
    {
        head = head->next;
        head->prev = NULL;
        delete temp;
        return;
    }
    else if (tail->value == element)
    {
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        return;
    }
    while (temp->value != element)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "element not found" << endl;
            return;
        }
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;
}

struct node *searchItem(int element)
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        if (temp->value == element)
        {
            return temp;
            break;
        }
        temp = temp->next;
    }
    return NULL;
}

void display()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }
    puts("");
}

void printReverse()
{
    struct node *temp;
    temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->prev;
    }
    cout << endl;
}

void makereverse()
{
    struct node *prv = NULL;
    struct node *cur = head;
    struct node *nxt;
    while (cur != NULL)
    {
        nxt = cur->next;
        cur->next = prv;
        prv = cur;
        cur = nxt;
    }
    head = prv;
}
int main(int argc, char const *argv[])
{
    insertFirst(10);
    insertFirst(20);
    display();
    return 0;
}
