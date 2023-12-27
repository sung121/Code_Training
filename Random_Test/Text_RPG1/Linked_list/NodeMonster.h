#pragma once
struct NodeMonster : public Node
{
public:
	virtual Node* GetPrevNode();
	virtual Node* GetNextNode();

};

