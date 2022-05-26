#pragma once
#include "BinaryTreeNode.h"

class BinaryTree
{
public:
	BinaryTree();

	void Insert(int value);
private:
	BinaryTreeNode * Head;

};