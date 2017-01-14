#ifndef Stack_H
#define Stack_H

struct node {
	int data;
	node *next_p;
	node *pre_p;
};

class stack {
private:
	node *head;
	int length;
public:
	stack();
	~stack();
	Clear();
	bool IsEmpty();
	void push(node *input);
	node * pop();


};
#endif // !Stack_H
