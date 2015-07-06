//Don Mclean
//07/06/2015

#include <iostream>
using namespace std;

struct node {
	int n;
	node* next;
};

void add_to_list(node* &root, int n);
void insert_to_list(node* &root, int n);
void remove_from_list(node* &root, int n);
void print_list(node* root);
int get_size(node* root);
void sort_list(node* &root);
void swap(int& a, int& b);


int main(int argc, char *argv[]) {
	
	//Initialize Linked List Pointer (*Must be NULL*)
	node* root = NULL;
	
	//Add to Linked List
	add_to_list(root, 4);
	add_to_list(root, 52);
	add_to_list(root, 57);
	add_to_list(root, 12);
	
	//Remove from Linked List
//	remove_from_list(root, 57);
//	remove_from_list(root, 4);
//	remove_from_list(root, 52);
//	remove_from_list(root, 12);
	
	//Bubble Sort List
	sort_list(root);

	//Print Linked List
	print_list(root);
	
	cout << "node size: " << get_size(root);
	
	return 0;
}

void add_to_list(node* &root, int n)
{
	node* crawler;
	
	if(root == NULL)
	{
		//Initialize values of first node
		crawler = new node;
		crawler->n = n;
		crawler->next = NULL;
		
		//root is no longer "NULL" and now points to the first node.
		root = crawler;
		
	} else {
		//point crawler to the first node.
		crawler = root;
		
		//iterate through nodes to find last node
		while (crawler->next != NULL) {
			crawler = crawler->next;
		}
		
		if(crawler->next == NULL) {
			
			//create new node then point crawler to it.
			crawler->next = new node;
			crawler = crawler->next;
			
			//assign node values.
			crawler->n = n;
			crawler->next = NULL;
		} 
	} 
}

void insert_to_list(node* &root, int n)
{
	
	
}

void remove_from_list(node* &root, int n)
{
	node* prev;
	node* tmp;
	node* crawler;
	crawler = root;
	prev = crawler;
	
	while (crawler->n != n) {
		prev = crawler;
		crawler = crawler->next;
	}
	//if value is found in node
	if(crawler->n == n)
	{
		//case of only/last node
		if(crawler->next == NULL)
		{
			//if only one node exists
			if(root == crawler)
			{
				root = NULL;
				delete crawler;
				
			//if last node
			} else {
				delete crawler;
				prev->next = NULL; 
			}
		}
		
		//case of first node
		if(crawler->next != NULL)
		{
			tmp = crawler->next;
			if(root == crawler)
			{
				root = tmp;
				delete crawler;
				
			//case of middle nodes
			} else {
				delete crawler;
				prev->next = tmp; 
			}
		} 
	}
}

void print_list(node* root)
{
	node* crawler;
	crawler = root;
	
	if (crawler == NULL)
	{
		cout << "node is empty";
	} else {
		while (crawler->next != NULL)
		{
			cout << crawler->n << " ";
			crawler = crawler->next;
		}
		cout << crawler->n;
	}
	cout << endl;
}

int get_size(node* root)
{
	int count = 1;
	node* crawler;
	crawler = root;
	
	if(root == NULL)
	{
		return 0;
	}
	
	if (crawler->next == NULL)
	{
		return count;
	}
	
	while (crawler->next != NULL) {
		count++;
		crawler = crawler->next;
	}
	
	return count;
}

void sort_list(node* &root)
{
	if (root == NULL) {
		cout << "list is empty" << endl;
	} else {
		node* prev;
		node* crawler;
		
		bool swapped = true;
		
		while (swapped) {
			swapped = false;
			
			crawler = root;
			
			while (crawler->next != NULL) {
				prev = crawler;
				crawler = crawler->next;
				if(prev->n > crawler->n)
				{
					swap(prev->n, crawler->n);
					swapped = true;
				}
			}
		}
	}
}

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
	
}