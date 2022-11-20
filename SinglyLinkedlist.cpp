#include <iostream>
using namespace std;

class node{
  public:
    int data;
    node *next;
    node(int datas){
      data=datas;
      next = NULL; 
    }
};

node *head;

// For searching a element node address;

node *search(int value){
  if(head==NULL)
  return NULL;
  node *s = head;
  while(s->data!=value && s->next!=NULL){
    s=s->next;
  }
  return s;
}

// For searching the node by using position;

node *position(int pos){
  if (head == NULL)
    return NULL;
  node *tempPos = head;
  for(int i = 1;i<pos-1 && tempPos!=NULL;i++){
    tempPos=tempPos->next;
  }
  return tempPos;
}

// find total number of nodes

int length(){
  if (head == NULL)
    return 0;
  node *n = head;
  int count=0;
  while(n!=NULL){
    count++;
    n=n->next;
  }
  return count;
}
// find the middle node using two pointer algorithm

node *findMid(){
   node *slowP = head;
   node *fastP = head;
   while (fastP!=NULL && fastP->next !=NULL){
     slowP=slowP->next;
     fastP=fastP->next->next;
   }
   return slowP;
}

// Get the last node 

node *getLastNode(){
  if(head == NULL)
   return NULL;
  node *n = head;
  while(n->next!=NULL){
    n=n->next;
  }
  return n;
}

// insert At beginning

void pushAtBegin(int data){
  node* temp = new node(data);
   temp->next = head;
   head = temp;
}

// insert at end

void pushAtEnd(int data){
  node *temp = new node(data);
  
  if(head == NULL){
   head = temp;
   return;
  }
  
  node *last = getLastNode();
  last->next = temp;
}

// insert at given position

void insertAt(int pos, int data){
  node *temp = new node(data);
  if (head == NULL)
  {
    head = temp;
    return;
  }
  node *n=position(pos);
  temp->next = n->next;
  n->next=temp;
}

// Insert at middle

void insertMid(int val){
  node *temp = head;
  if (head == NULL)
  {
    head = temp;
    return;
  }
  node *mid = findMid();
  node *newNode = new node(val);
  while(temp->next!=mid){
    temp=temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

// delete first node

void deleteHead(){
  if (head == NULL)
  return;
  head = head->next;
}


// delete last node

void deleteEnd(){
  if(head == NULL)
    return;
  if (head->next == NULL)
  {
    head = NULL;
    delete head;
    return;
  }
  node *tail,*prev;
  tail=head;
  
  while(tail->next!=NULL){
    prev = tail;
    tail=tail->next;
  }
  
  prev->next=NULL;
  delete tail;
}

// delete node at given position

void deleteAtPos(int pos){
  if(head==NULL)
   return;
  if(head->next==NULL){
    head=NULL;
    delete head;
    return;
  }
   
  node *n=position(pos);
  n->next = n->next->next;
}

// delete middle node

void deleteMid(){
  if (head == NULL)
    return;
  node *mid = findMid();
  node *temp = head;
  while(temp->next!=mid){
    temp = temp->next;
  }
  temp->next = mid->next;
  delete mid;
}

// delete any node by using node value

void deleteAny(int val){
  if (head == NULL)
    return;
  node *temp = head;
  node *s1 = search(val);
  while(temp->next!=s1 && temp->next!=NULL){
         temp=temp->next;
  } 
  temp->next = s1->next;
  free(s1);
}

// print linked list

void print(){
  node *n = head;
  while(n!=NULL){
    cout<<n->data<<" -> ";
    n = n->next;
  }
  cout<<endl;
}

int main() 
{
    pushAtBegin(8);
    pushAtBegin(10);
    pushAtBegin(102);
    pushAtBegin(11);
    
    pushAtEnd(7);
    pushAtEnd(14);
    pushAtBegin(65);
    pushAtEnd(34);
    pushAtEnd(38);
    insertAt(4, 99);
    insertMid(48);

    print();
    cout << endl;
    
    deleteHead();
    deleteEnd();
    deleteAtPos(3);
    deleteAny(10); 
    deleteMid();

    print();

    cout <<"last node = " <<getLastNode()->data<<endl;
    cout<<"length = "<<length()<<endl;
    cout<<"middle node = "<<findMid()->data;
    return 0;
}