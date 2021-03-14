#include <iostream>
using namespace std;

char tree[65];
int n;

void preorder(int node, int len) {
	if (tree[node] == '.') return;
	cout << tree[node];
	if (node * 2 <= len) preorder(node * 2, len);
	if (node * 2 + 1 <= len) preorder(node * 2 + 1, len);
}

void inorder(int node, int len) {
	if (tree[node] == '.') return;
	if (node * 2 <= len) inorder(node * 2, len);
	cout << tree[node];
	if (node * 2 + 1 <= len) inorder(node * 2 + 1, len);
}

void postorder(int node, int len) {
	if (tree[node] == '.') return;
	if (node * 2 <= len) postorder(node * 2, len);
	if (node * 2 + 1 <= len) postorder(node * 2 + 1, len);
	cout << tree[node];
}

int findIndex(int node, char ch, int len) {
	int index = -1;
	if (tree[node] == ch) return node;
	if (tree[node] == '.') return -1;
	if (node * 2 <= len) index = findIndex(node * 2, ch, len);
	if (node * 2 + 1 <= len && index == -1) index = findIndex(node * 2 + 1, ch, len);
	return index;
}

int main() {
	int len = 1;
	cin >> n;

	tree[1] = 'A';

	for (int i = 1; i <= n; i++) {
		char parent, left, right;
		cin >> parent >> left >> right;
		int index = findIndex(1, parent, len);

		tree[index * 2] = left;
		tree[index * 2 + 1] = right;

		if (index * 2 + 1 > len) len = index * 2 + 1;
	}


	preorder(1, len);
	cout << '\n';
	inorder(1, len);
	cout << '\n';
	postorder(1, len);

	return 0;
}