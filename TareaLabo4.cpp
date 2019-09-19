#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int a, int b)  {  
    int t = a;  
    a = b;  
    b = t;  
}  
  
int partition(int arr[], int m, int h)  {  
    int p = arr[h];  
    int i = (m - 1);  
  
    for (int j = m; j <= h - 1; j++)  {  
        if (arr[j] < p)  {  
            i++;   
            swap(arr[i], arr[j]);  
        }  
    }  
    swap(arr[i + 1], arr[h]);  
    return (i + 1);  
}  

void quickSort(int arr[], int l, int h)  {  
    if (l < h)  
    {  
        int par = partition(arr, l, h);  
        quickSort(arr, l, par - 1);  
        quickSort(arr, par + 1, h);  
    }  
}  


int main(int argc, char** argv) {
    int t,n;
    cout << "Ingreses el numero de iteraciones: ";
    cin >> t;
    while(t--){
        cout << "Ingreses el tamaño: ";
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cout << "Ingreses los valores: ";
            cin >> a[i];
        }
        quickSort(a,0,n-1);
        int p=2;int k=2, value = 0;
        for(int i=0;i<n;i++){
            if(a[i]>=p){
                p += 2;
            }     
        }
        cout << p << endl;
    }
    return 0;
}

