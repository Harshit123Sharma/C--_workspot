#include<math.h>
#include<float.h>

using namespace std;

class BST {

    public: 
    int value;
    BST * left;
    BST *right;

    BST (int val);
    BST &insert (int val);
};

// Average: O(log(n)) time | O(log(n)) space
// Worst: O(n) time | O(n) space

int findCloset (BST *tree, int val) {
    return forClose(tree, val, DBL_MAX);
}
int forClose (BST *tree, int val, double close){
    if (abs(val - close) > abs(val - tree->value))
    {
        close = tree->value;
    }
    if (val < tree->value && tree->left != NULL)
    {
        return forClose(tree->left, val, close);
    }
    else if (val > tree->value && tree->right != NULL)
    {
        return forClose(tree->right, val, close);
    }
}

// Average: O(log(n)) time | O(1) space
// Worst: O(n) time | O(1) space

int findCloset(BST *tree, int val)
{
    return forClose(tree, val, DBL_MAX);
}

int forClose(BST *tree, int val, double close)
{
    BST *currentNode = tree;
    while (currentNode != NULL)
    {
        if (abs(val - close) > abs(val - currentNode->value))
        {
            close = currentNode->value;
        }
        if (val < currentNode->value)
        {
            currentNode = currentNode->left;
        }
    }
}            