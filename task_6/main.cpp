#include <iostream>

void BubbleSort(double pDouble[4], int n);
void BubbleSort(int pInt[4], int n);

int main() {
//    int arr[4] {3, 2, 1, 8};
    double arr[4] {3.5, 8.5, 1.2, 1.1};
    BubbleSort(arr, 4);
}

void BubbleSort(double pDouble[4], int n) {
    for(int i = 1; i < n; ++i)
    {
        for(int r = 0; r < n-i; r++)
        {
            if(pDouble[r] < pDouble[r+1])
            {
                // Обмен местами
                int temp = pDouble[r];
                pDouble[r] = pDouble[r+1];
                pDouble[r+1] = temp;
            }
        }
    }

    for(auto i = 0; i < n; ++i)
    {
        std::cout << pDouble[i] << " ";
    }
}
void BubbleSort(int pInt[4], int n) {
    for(int i = 1; i < n; ++i)
    {
        for(int r = 0; r < n-i; r++)
        {
            if(pInt[r] < pInt[r+1])
            {
                // Обмен местами
                int temp = pInt[r];
                pInt[r] = pInt[r+1];
                pInt[r+1] = temp;
            }
        }
    }

    for(auto i = 0; i < n; ++i)
    {
        std::cout << pInt[i] << " ";
    }
}
