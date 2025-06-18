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

    return 0;
}