#include<iostream>
#include<stdlib.h>


using namespace std; 



void swap(long long &a, long long &b)  
{  
    long long temp = a;  
    a = b;  
    b = temp;  
}  
  
long long partition (long long a[], long long low, long long high)  
{  
    long long pivot = a[high];  
    long long i = (low - 1); 
    for (long long j = low; j <= high - 1; j++)  
    {  
          
        if (a[j] < pivot)  
        {  
            i++; 
            swap(a[i], a[j]);  
        }  
    }  
    swap(a[i + 1], a[high]);  
    return (i + 1);  
}  
void quickSort(long long a[], long long low, long long high)  
{  
    if (low < high)  
    {  
      
        long long pi = partition(a, low, high);  
  
        quickSort(a, low, pi - 1);  
        quickSort(a, pi + 1, high);  
    }  
}  
  
/*void show_aay(long long a[], long long size)  
{  
    long long i;  
    for (i = 0; i < size; i++)  
        cout << a[i] << " ";  
    cout << endl;  
}  */
  
int main()  
{  
    long long a[50000];
    long long n, size = 0;
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    clock_t start, end;   
    start = clock();
    for (long long i = 0; i < n; i++){
        
        a[i] = i;
        size = sizeof(a)/sizeof(a[0]);
        
    }
    quickSort(a, 0, size - 1);  

    end = clock();
    cout<<"\nFor Best : "<<end-start<<"ms";
      
    start = clock();
    for (long long i = 0; i < n; i++){
        
        a[i] = n-i;
        size = sizeof(a)/sizeof(a[0]);
        
    }
    quickSort(a, 0, size - 1);  

    end = clock();
    cout<<"\nFor Worst : "<<end-start<<"ms";  
    start = clock();
    for (long long i = 0; i < n; i++){
        
        a[i] = 1 + (rand() % n);
        size = sizeof(a)/sizeof(a[0]);        
    }
    quickSort(a, 0, size - 1); 
    end = clock();
    cout<<"\nFor Average : "<<end-start<<"ms";
//    cout<<"Sorted array: \n";  
    //show_array(a, n);  
    return 0;  
}  