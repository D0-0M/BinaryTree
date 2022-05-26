#include "BinaryTree.h"

BinaryTree::BinaryTree()
	:Head(nullptr)
{
}

void BinaryTree::Insert(int value)
{
	if (Head == nullptr)
	{
		Head = new BinaryTreeNode(value);
	}
	else
	{
		BinaryTreeNode* Current = Head;
		while (true)
		{
			if (value < Current->Value)
			{
				if (Current->Left == nullptr)
				{
					Current->Left = new BinaryTreeNode(value);
					break;
				}
				else
				{
					Current = Current->Left;
				}
			}
			else if (value > Current->Value)
			{
				if (Current->Right == nullptr)
				{
					Current->Right = new BinaryTreeNode(value);
					break;
				}
				else
				{
					Current = Current->Right;
				}
			}
			else
			{
				break;
			}
		}
	}
}
