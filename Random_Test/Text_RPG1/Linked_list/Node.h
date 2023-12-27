#pragma once

typedef struct Node
{
public:
	virtual Node* GetPrevNode() = 0;
	virtual Node* GetNextNode() = 0;


private:
	Node* p_PrevNode;
	Node* p_NextNode;
	



} Node;