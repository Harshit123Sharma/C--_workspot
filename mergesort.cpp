#include<iostream>
#include<stdlib.h>


using namespace std; 



void swaping(long long &a, long long &b)  
{  
    long long temp = a;  
    a = b;  
    b = temp;  
}  
  
void merge(long long a[], long long l, long long m, long long r) 
{ 
    long long i, j, k; 
    long long n1 = m - l + 1; 
    long long n2 = r - m; 
  
 
    long long L[n1], R[n2]; 
  

    for (i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[m + 1 + j]; 
  

    i = 0; 
    j = 0; 
    k = l;  
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            a[k] = L[i]; 
            i++; 
        } 
        else { 
            a[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
  

    while (j < n2) { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergesort(long long a[], long long l, long long r)  
{  
if (l < r) { 

        long long m = l + (r - l) / 2; 
   
        mergesort(a, l, m); 
        mergesort(a, m + 1, r); 
  
        merge(a, l, m, r); 
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
    mergesort(a, 0, size-1);  

    end = clock();
    cout<<"\nFor Average : "<<end-start<<"ms";
      
    start = clock();
    for (long long i = 0; i < n; i++){
        
        a[i] = n-i;
        size = sizeof(a)/sizeof(a[0]);
        
    }
    mergesort(a, 0, size-1);  

    end = clock();
    cout<<"\nFor Best : "<<end-start<<"ms";  
    start = clock();
    for (long long i = 0; i < n; i++){
        
        a[i] = 1 + (rand() % n);
        size = sizeof(a)/sizeof(a[0]);        
    }
    mergesort(a, 0, size-1);  

    end = clock();
    cout<<"\nFor Worst : "<<end-start<<"ms";
//    cout<<"Sorted array: \n";  
    //show_array(a, n);  
    return 0;  
}  