//Soln by Colton-Pekar
#include<stdio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

class LinkedList{

private:
	

public:
	struct Node{
		int data;
		struct Node* next;
	};
	struct Node* Reverse(struct Node* head)
	{ 
		struct Node *current, *prev, *next;
		current = head;
		prev = NULL;
		while(current != NULL)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;

		return head;
	}

	Node* Insert(Node* head, int data){
		Node *temp = (struct Node*)malloc(sizeof(struct Node));
		temp->data = data; temp->next = NULL;
		if(head == NULL) head = temp;
		else {
			Node* temp1 = head;
			while(temp1->next != NULL) temp1 = temp1->next;
			temp1->next = temp;
		}
		return head;
	}

	void Print(Node* head){
		while(head != NULL){
			cout << head->data;
			head = head->next;
		}
	}
	};

int main()
{
	LinkedList list1;
	struct LinkedList::Node* head = NULL; //local variable
	int num;
	int i = 0;
	for (i = 0; i < 10; i++){
		cout << "please input a number into the list" << endl;
		cin >> num;
		head = list1.Insert(head, num);
	}

	cout << "This is the initial linked list: ";
	list1.Print(head);
	cout << endl << "now the linked list has been reversed: ";
	head = list1.Reverse(head);
	list1.Print(head);

	return 0;
}




	