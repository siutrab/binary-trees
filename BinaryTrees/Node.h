#pragma once
#include "Node.h"
template <typename StoredType>
class Node
{
private:
	StoredType value;
	Node* Parent = NULL;
	Node* rightChiled = NULL;
	Node* leftChild = NULL;
public:
	Node(StoredType value) {
		this->setValue(value);
	};
	~Node() {};

	/// GETTERS
	inline Node* getParent() { return this->Parent; }
	inline Node* getRightChild() { return this->RightChild; }
	inline Node* getLertChild() { return this->LeftChild; }
	inline StoredType getValue() { return this->value; }
	/// SETTERS
	inline void setValue(StoredType value) { this->value = value; }
	inline void setParent(Node* Partent) { this->Parent = Parent; }


};

