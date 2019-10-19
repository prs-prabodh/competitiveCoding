/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

struct Node
{
    Node *siblings[26];
    int cnt;
    Node()
    {
        for (int i = 0; i < 26; i++)
        {
            siblings[i] = NULL;
        }
        cnt = 1;
    }
};

Node *root = new Node();

void insert(string s)
{
    Node *curr = root;
    for (auto i : s)
    {
        if (curr->siblings[i - 'a'] == NULL)
        {
            curr->siblings[i - 'a'] = new Node();
        }
        else
        {
            (curr->siblings[i - 'a']->cnt)++;
        }
        curr = curr->siblings[i - 'a'];
    }
}

void traverse(string searchString)
{
    Node *curr = root;
    string currString = "";
    for (auto i : searchString)
    {
        if (curr->siblings[i - 'a']->cnt == 1)
        {
            cout << currString + string(1, i) << endl;
            return;
        }
        else
        {
            currString += string(1, i);
            curr = curr->siblings[i - 'a'];
        }
    }
}

void solve(string s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        insert(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        traverse(s[i]);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s[] = {"zebra", "dog", "duck", "dove"};
    solve(s, 4);
    return 0;
}