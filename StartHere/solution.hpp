#include <vector>
#include <string>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class PathFinder
{
public:
	vector<string> binaryTreePaths(TreeNode *root)
	{
		vector<string> paths;

		// Todo...

		return paths;
	}

private:
	void dfs(TreeNode *node, string path, vector<string> &paths)
	{
		// Todo...

		// Remember, in recursive functions, we need to think about:
		// 1. Base case(s)
		// 2. Recursive case(s)
		// 3. Return value (if any)
	}
};