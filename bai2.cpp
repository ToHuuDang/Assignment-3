#include<iostream>

using namespace std;

void input(int* arr, int n){
    cout << "Nhap " << n << " phan tu trong mang" << endl;
    for(int i = 0; i < n; i++){
        cout << "Phan tu " << i + 1 << " : ";
        cin >> *(arr + i);
    }
}

 int sum(int* arr, int n){
        int tong = 0;
        for(int i = 0; i < n; i++){
            tong += *(arr + i);
        }
        return tong;
    }

int main(int argc, char const *argv[])
{
    int n, arr[10];

    cout << "Nhap so phan tu trong mang toi da 10 phan tu: \n";
    cin >> n;

    input(arr, n);

    cout << "Tong cua mang tren la: " << sum(arr, n) << endl;
    return 0;
}
