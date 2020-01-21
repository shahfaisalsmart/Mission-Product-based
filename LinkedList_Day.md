# Linked List Day Celebration 2020
> BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH

`Author: Mohammad Faisal`

## 1. Print the middle Element of a given Linked List

Given a singly linked list, find middle of the linked list.
For example, if given linked list is 1->2->3->4->5 then output should be 3.
If there are even nodes, then there would be two middle nodes, we need to print second middle element. 
For example, if given linked list is 1->2->3->4->5->6 then output should be 4.

> This question was asked in initial rounds of Many Product Based Companies interview.

### Code in C++
```C++
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
// FIND THE MIDDLE ELEMENT OF IN LINKED LIST
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
// appraoch one
void find_middle(struct Node* head)
{
    struct Node* fast = head;
    struct Node* slow = head;

    if(head!=NULL){
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
        cout<<"Middle Element is: "<<slow->data<<endl;
    }
    cout<<endl;
}
// approach 2
void approach2(struct Node* head)
{
    int count = 0;
    struct Node* mid = head;
    while(head!=NULL)
    {
        if(count & 1)
            mid = mid-> next;
        count++;
        head = head->next;
    }
    if(mid!=NULL)
        cout<<"Middle Element is: "<<mid->data<<endl;
}
void insert(struct Node** head, int data)
{
    struct Node* latest_node = new Node;

    latest_node->data = data;
    latest_node->next = (*head);
    (*head) = latest_node;
}
void printList(struct Node* p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"->";
        p = p->next;
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.flush();

    struct Node* head = NULL;

    int n; cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        insert(&head,x);
    }
    printList(head);
    find_middle(head);
    approach2(head);
    return 0;
}

```
---

## 2. Delete middle of linked list

Given a singly linked list, delete middle of the linked list. For example, if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5.
If there are even nodes, then there would be two middle nodes, we need to delete the second middle element. For example, if given linked list is 1->2->3->4->5->6 then it should be modified to 1->2->3->5->6.
If the input linked list is NULL, then it should remain NULL.

> This question was asked in initial rounds of Many Product Based Companies interview.

### Code in C++
```C++
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
// FIND THE MIDDLE ELEMENT OF IN LINKED LIST
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
// appraoch one
void find_middle(struct Node* head)
{
    struct Node* fast = head;
    struct Node* slow = head;

    if(head!=NULL){
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
        cout<<"Middle Element is: "<<slow->data<<endl;
    }
    cout<<endl;
}
// approach 2
void approach2(struct Node* head)
{
    int count = 0;
    struct Node* mid = head;
    while(head!=NULL)
    {
        if(count & 1)
            mid = mid-> next;
        count++;
        head = head->next;
    }
    if(mid!=NULL)
        cout<<"Middle Element is: "<<mid->data<<endl;
}
// Delete Middle_Node Function 
struct Node* deleteMiddle(struct Node* head)
{
    if(head == NULL)
        return NULL;
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    struct Node* fast = head;
    struct Node* slow = head;

    struct Node * prev;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = slow->next;
    delete slow;
    return head;
}
void insert(struct Node** head, int data)
{
    struct Node* latest_node = new Node;

    latest_node->data = data;
    latest_node->next = (*head);
    (*head) = latest_node;
}
void printList(struct Node* p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"->";
        p = p->next;
    }
    cout<<endl;
}

Node* createNode(int data)
{
    struct Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.flush();

    struct Node* head = NULL;

    int n; cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        insert(&head,x);
    }
    printList(head);
    find_middle(head);
    // approach2(head);
    head = deleteMiddle(head);
    printList(head);
    return 0;
}
```
---

