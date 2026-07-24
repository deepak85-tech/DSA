/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
     if(head==nullptr)return head;
        Node* temp=head;
        while(temp!=nullptr)
        {
            Node*cpyn=new Node(temp->val);
            cpyn->next=temp->next;
            temp->next=cpyn;
            temp=cpyn->next;
        }
        temp=head;
        while(temp!=nullptr)
        {
            if(temp->random)temp->next->random=temp->random->next;
            temp=temp->next->next;
        }
        Node* p=head;
        Node *dummy=new Node(0);
        Node* tz=dummy;
        while(p!=nullptr)
        {
            tz->next=p->next;
            tz=tz->next;
            p->next=p->next->next;
            p=p->next;
        }
        return dummy->next;



        
    }
};