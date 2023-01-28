
#ifndef  MYSTL1_H_INCLUDE
#define  MYSTL1_H_INCLUDE
using namespace std;
class Node
{
public:
   int data;
   Node *next;
   Node (int d)
   {
       data =d;
       next=NULL;
   }
};
class SLL
{
public:
   Node *head=NULL, *newNode;
   void add(int item)
   {
       newNode=new Node(item);
       if(head==NULL)
       {
           head = newNode;
       }
       else
       {
           Node *temp=head;
           while(temp-> next!= NULL)
           {
               temp = temp -> next;
           }
           temp -> next = newNode;
       }
   }
   void Display()
   {
       Node *temp = head;
       cout << "Data list:  ";
       while(temp!=NULL)
       {
           cout << temp -> data << "  ";
           temp=temp->next;
       }
       cout << endl<<endl;
   }
   void addbegin(int item)
   {
       newNode=new Node(item);
       if(head==NULL)
       {
           head=newNode;
       }
       else
       {
           Node *temp=head;
           head=newNode;
           newNode->next=temp;
       }
   }
   void addanypos(int pos, int item)
   {
       Node *newNode,*temp=head,*temp1;
       newNode=new Node(item);
       newNode->next=NULL;
       for(int i=1; i<pos; i++)
       {
           temp1=temp;
           temp=temp->next;
       }
       temp1->next=newNode;
       newNode->next=temp;
   }
   void removeanypos(int pos)
   {
 Node *temp=head,*temp1;
  for(int i=1;i<pos;i++)
 {
     temp1=temp;
     temp=temp->next;
 }
 temp1->next=temp->next;
 free(temp);
   }
};


