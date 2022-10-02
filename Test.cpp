/*
//
// Created by YangYang on 2022/9/1.
//
*/
/*
快速排序

*/


#include <iostream>
#include <algorithm>
using namespace std;
//快速排序
void quickSort(int *a, int left, int right) {
    if (left >= right) {
        return;
    }
    int i = left;
    int j = right;
    int key = a[left];
    while (i < j) {
        while (i < j && a[j] >= key) {
            j--;
        }
        a[i] = a[j];
        while (i < j && a[i] <= key) {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = key;
    quickSort(a, left, i - 1);
    quickSort(a, i + 1, right);
}


int main()
{
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    quickSort(a, 0, 9);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
