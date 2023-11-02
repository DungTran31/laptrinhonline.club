#include <bits/stdc++.h>
#define endl "\n"
#define int long
#define long long long
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

// Cấu trúc cây nhị phân
struct TreeNode {
    int val;
    int leftCount; // Số lượng nút trong cây con bên trái của nút hiện tại
    int rightCount; // Số lượng nút trong cây con bên phải của nút hiện tại
    TreeNode* left;
    TreeNode* right;

    TreeNode(int v) : val(v), leftCount(0), rightCount(0), left(NULL), right(NULL) {}
};

// Hàm để thêm một nút vào cây nhị phân
TreeNode* insert(TreeNode* root, int val) {
    if (!root) {
        return new TreeNode(val);
    }

    if (val <= root->val) {
        root->leftCount++;
        root->left = insert(root->left, val);
    } else {
        root->rightCount++;
        root->right = insert(root->right, val);
    }

    return root;
}

// Hàm để tìm trung vị của cây nhị phân
int findMedian(TreeNode* root, int k) {
    int leftSize = root->leftCount;
    if (k < leftSize) {
        return findMedian(root->left, k);
    } else if (k > leftSize) {
        return findMedian(root->right, k - leftSize - 1);
    } else {
        return root->val;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> data(n);

    TreeNode* root = NULL;

    for (int i = 0; i < n; i++) {
        cin >> data[i];
        root = insert(root, data[i]);
        int medianIndex = i / 2;
        int median = findMedian(root, medianIndex);
        cout << median << " ";
    }

    return 0;
}