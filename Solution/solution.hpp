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
		if (root)
			dfs(root, "", paths);

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

		// append current node to path
		if (!path.empty())
			path += "->";
		path += to_string(node->val);

		// if leaf, add complete path
		if (!node->left && !node->right)
		{
			paths.push_back(path);
			return;
		}

		// otherwise recurse
		if (node->left)
			dfs(node->left, path, paths);
		if (node->right)
			dfs(node->right, path, paths);
	}
};