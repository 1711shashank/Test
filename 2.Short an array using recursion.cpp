//Question Short an array using recursion

//Input format
//Line 1 length of array
//Line 2 elements of array
//Example
// 5
// 98 80 6 55 3

#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int> &v, int ele)
{
    if (v.size() == 0 || v[v.size() - 1] <= ele)
    {
        v.push_back(ele);
        return;
    }

    int lastElement = v.back();
    v.pop_back();

    insert(v, ele);
    v.push_back(lastElement);
}

void sort(vector<int> &v)
{
    if (v.size() == 1)
    {
        return;
    }
    
    int temp = v.back();
    v.pop_back();
    sort(v);
    insert(v, temp);
}

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> v;

    int temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v);
    display(v);
    return 0;
}
