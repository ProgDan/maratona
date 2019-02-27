
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;

	Node ( int n )
	{
		data = n;
		left = NULL;
		right = NULL;
	}
};

Node* root;

void insert ( Node* node, int n )
{
	if ( !node )
	{
		root = new Node ( n );
		return;
	}

	if ( n < node->data )
	{
		if ( node->left == NULL )
		{
			node->left = new Node ( n );
		}

		else insert ( node->left, n );
	}

	else if ( node->right == NULL )
	{
		node->right = new Node ( n );
	}

	else insert ( node->right, n );

	return;
}

void preOrder ( Node* node )
{
	if ( node == NULL )
		return;

	cout << " " << node->data;

	preOrder ( node->left );
	preOrder ( node->right );

	return;
}

void inOrder ( Node* node )
{
	if ( node == NULL )
		return;

	inOrder ( node->left );

	cout << " " << node->data;

	inOrder ( node->right );

	return;
}

void postOrder ( Node* node )
{
	if ( node == NULL )
		return;

	postOrder ( node->left );
	postOrder ( node->right );

	cout << " " << node->data;

	return;
}

int main ( int argc, const char * argv[] )
{
	//freopen ( "in.txt", "r", stdin );

	int C, N;
	cin >> C;

	for ( int i = 1; i <= C; i++ )
	{
		root = NULL;
		cin >> N;
		int n;

		while ( N-- )
		{
			cin >> n;
			insert ( root, n );
		}

		cout << "Case " << i << ":" << endl;
		cout << "Pre.:";
		preOrder ( root );
		cout << endl << "In..:";
		inOrder ( root );
		cout << endl << "Post:";
		postOrder ( root );
		cout << endl << endl;
	}

	return 0;
}
