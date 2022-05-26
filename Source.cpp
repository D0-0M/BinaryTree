
#include <iostream>

#include "BinaryTree.h"
int main()
{
    BinaryTree a;
    for (int i = 1; i <= 10; ++i)
    {
        a.Insert(rand() % 100);
    }
    //std::cout << a << std::endl;

    system("pause");
    return 0;
}

