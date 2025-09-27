#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfArray(int arr1[], int arr2[], int len1, int len2)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < len1 && j < len2)
    {
        if (ans.size() == 0)
        {
            if (arr1[i] < arr2[j])
            {
                ans.push_back(arr1[i]);
                i++;
            }
            else
            {
                ans.push_back(arr2[j]);
                j++;
            }
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            if (ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
    }
    while (i < len1)
    {
        if (ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }
    while (j < len2)
    {
        if (ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main()
{
    int num1;
    cout << "Enter number of elements in first array: ";
    cin >> num1;
    int arr1[num1];
    cout << "Enter elements of array: ";
    for (int i = 0; i < num1; i++)
    {
        cin >> arr1[i];
    }
    int num2;
    cout << "Enter number of elements in second array: ";
    cin >> num2;
    int arr2[num2];
    cout << "Enter elements of array: ";
    for (int i = 0; i < num2; i++)
    {
        cin >> arr2[i];
    }

    vector<int> unionArray = unionOfArray(arr1, arr2, num1, num2);

    cout << "Union of your arrays are: ";
    for (int i = 0; i < unionArray.size(); i++)
    {
        cout << unionArray[i] << " ";
    }
    return 0;
}