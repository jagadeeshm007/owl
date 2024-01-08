//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        Node *pre=NULL;
        Node *temp1=node1;
        Node *temp2=node2;
        while(temp1!=NULL && temp2!=NULL ){
            Node *add = new Node();
            
            if(temp1->data < temp2->data){
                add->data = temp1->data;
                temp1=temp1->next;
            }
            else{
                add->data = temp2->data;
                temp2=temp2->next;
            }
            add->next=pre;
            pre=add;
        }
        while(temp1!=NULL){
            Node *add = new Node();
            add->data = temp1->data;
            add->next=pre;
            pre=add;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            Node *add = new Node();
            add->data = temp2->data;
            add->next=pre;
            pre=add;
            temp2=temp2->next;
        }
        return pre;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends
