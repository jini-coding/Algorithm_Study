#include <iostream>

using namespace std;

int N;

struct node
{
    char left;
    char right;
};

struct node arr[100];

void preOrder(char root)
{
    if (root == '.')
        return;
    else {
        cout << root;
        preOrder(arr[root].left);
        preOrder(arr[root].right);
    }
}

void inOrder(char root)
{
    if (root == '.')
        return;
    else {
        inOrder(arr[root].left);
        cout << root;
        inOrder(arr[root].right);
    }
}

void postOrder(char root)
{
    if (root == '.')
        return;
    else {
        postOrder(arr[root].left);
        postOrder(arr[root].right);
        cout << root;
    }
}



int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    char t1, t2, t3;
    
    for (int i = 1; i <= N; i++)
    {
        cin >> t1 >> t2 >> t3;
        arr[t1].left = t2;
        arr[t1].right = t3;
    }

    preOrder('A');
    cout << "\n";
    inOrder('A');
    cout << "\n";
    postOrder('A');
    cout << "\n";
    
    return 0;
}
