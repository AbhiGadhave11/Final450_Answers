#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;

}NODE,*PNODE;

class Reverse
{
	private :
	PNODE first;
	PNODE Tfirst;
	int size;
     
    public : 
	Reverse()
	{
		first = NULL;
		Tfirst = NULL;
		size = 0;
	}

	void InsertLast(int no)
	{
		PNODE newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			PNODE temp = first;
			while(temp->next!=NULL)
			{
				temp = temp->next;
			}
			temp->next = newn;
		}
	}
  void InsertFirst(PNODE newn)
	{
	  if(Tfirst == NULL)
		{
			Tfirst = newn;
		}
		else
		{
			newn->next = Tfirst;
			Tfirst = newn;
		}
	}
  void ReverseLL()
	{
		PNODE pudhacha = NULL;
		PNODE magacha = NULL;
		PNODE current = first;
		while(current!=NULL)
		{
			pudhacha = current->next;
			current->next = magacha;
			magacha = current;
			current = pudhacha;
		}
		first = magacha;
	}

	void Display()
	{
		PNODE temp = first;
		while(temp!=NULL)
		{
			cout<<"|"<<temp->data<<"|-> ";
			temp = temp->next;
		}
		cout<<"NULL\n";
	}
};

int main()
{
	Reverse robj ;
	robj.InsertLast(11);
	robj.InsertLast(21);
	robj.InsertLast(51);
	robj.InsertLast(101);
	robj.InsertLast(151);
	robj.Display();
	robj.ReverseLL();
	robj.Display();
}
