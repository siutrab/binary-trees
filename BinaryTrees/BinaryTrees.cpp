
#include "pch.h"
#include <iostream>
#include "Node.h"

int main()
{
	Node<int> RootNode(15);
	RootNode.setValue(10);
	std::cout << RootNode.getValue();
	return 0;
}
