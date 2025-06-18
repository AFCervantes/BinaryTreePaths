#include "solution.hpp" // your PathFinder class + TreeNode definition
#include <iostream>

// Helper function to print paths
// Recall, paths are in the form: "1->2->3",
// and stored in a vector of strings.
void printPaths(const vector<string> &paths)
{
    cout << "[ ";
    for (auto &p : paths)
        cout << "\"" << p << "\" ";
    cout << "]\n";
}

int main()
{
    PathFinder pf;

    // Create test cases to test our solution against.
    // Todo...

    // --- Test 1: Empty tree ---
    TreeNode *t1 = nullptr;
    auto paths1 = pf.binaryTreePaths(t1);
    cout << "Test 1 (empty): ";
    printPaths(paths1);
    // Expected: [ ]

    // --- Test 2: Single-node tree ---
    //   42
    TreeNode *t2 = new TreeNode(42);
    auto paths2 = pf.binaryTreePaths(t2);
    cout << "Test 2 (single): ";
    printPaths(paths2);
    // Expected: [ "42" ]

    // --- Test 3: Balanced three-node tree ---
    //     1
    //    / \
    //   2   3
    TreeNode *t3 = new TreeNode(1);
    t3->left = new TreeNode(2);
    t3->right = new TreeNode(3);
    auto paths3 = pf.binaryTreePaths(t3);
    cout << "Test 3 (balanced): ";
    printPaths(paths3);
    // Expected (any order):
    // [ "1->2", "1->3" ]

    // --- Test 4: Mixed-child tree ---
    //     1
    //      \
    //       3
    //      /
    //     5
    TreeNode *t4 = new TreeNode(1);
    t4->right = new TreeNode(3);
    t4->right->left = new TreeNode(5);
    auto paths4 = pf.binaryTreePaths(t4);
    cout << "Test 4 (mixed): ";
    printPaths(paths4);
    // Expected: [ "1->3->5" ]

    // --- Test 5: Larger tree ---
    //        10
    //       /  \
    //      5    12
    //     / \
    //    3   7
    //
    // Paths: 10->5->3, 10->5->7, 10->12
    TreeNode *t5 = new TreeNode(10);
    t5->left = new TreeNode(5);
    t5->right = new TreeNode(12);
    t5->left->left = new TreeNode(3);
    t5->left->right = new TreeNode(7);
    auto paths5 = pf.binaryTreePaths(t5);
    cout << "Test 5 (larger): ";
    printPaths(paths5);
    // Expected (any order):
    // [ "10->5->3", "10->5->7", "10->12" ]
    return 0;
}