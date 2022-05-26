#pragma once

class BinaryTreeNode
{
public:
	BinaryTreeNode(int data,
		BinaryTreeNode* left = nullptr,
		BinaryTreeNode* right = nullptr);
	int Value;
	BinaryTreeNode* Left;
	BinaryTreeNode* Right;
};