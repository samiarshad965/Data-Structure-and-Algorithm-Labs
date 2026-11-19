#include<iostream>
using namespace std;

struct Node{
	int data;
	Node*next;
};

int main(){
	Node*n1=new Node();
	Node*n2=new Node();
	Node*n3=new Node();
	Node*n4=new Node();
	Node*n5=new Node();
	
	cout<<"Enter atleast 5 values:"<<endl;
	cin>> n1->data;
	cin>> n2->data;
	cin>> n3->data;
	cin>> n4->data;
	cin>> n5->data;
	
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next= NULL;
	
	Node*head=n1;
	
	
	cout<<"Linked list:";
	Node*temp=head;
	int count=0;
	
	while(temp != NULL ){
		cout<<temp->data<<"->";
		count++;
		temp=temp->next;
	}	
	
	cout<<"NULL"<<endl;
	cout<<"Total nodes:"<<count<<endl;
	return 0;
}
