#include<iostream>
#include<stdlib.h>


using namespace std; 



void swaping(int &a, int &b)  
{  
    int temp = a;  
    a = b;  
    b = temp;  
}  
  
void selection(int a[], int n)  
{  
     int i, j, min;  
  
    for (i = 0; i < n-1; i++)  
    {  
      
        min = i;  
        for (j = i+1; j < n; j++)  
        if (a[j] < a[min])  
            min = j;  
        swaping(a[min], a[i]);  
    }  
}  
  
/*void show_array(int a[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << a[i] << " ";  
    cout << endl;  
}  */
  
int main()  
{  
    int a[50000];
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    clock_t start, end;   
    start = clock();
    for (int i = 0; i < n; i++){
        
        a[i] = i;
        
    }
    selection(a, n);  

    end = clock();
    cout<<"\nFor best : "<<end-start<<"ms";
      
    start = clock();
    for (int i = 0; i < n; i++){
        
        a[i] = n-i;
        
    }
    selection(a, n);  

    end = clock();
    cout<<"\nFor Worst : "<<end-start<<"ms";  
    start = clock();
    for (int i = 0; i < n; i++){
        
        a[i] = 1 + (rand() % n);
        
    }
    selection(a, n);  

    end = clock();
    cout<<"\nFor Average : "<<end-start<<"ms";
//    cout<<"Sorted array: \n";  
    //show_array(a, n);  
    return 0;  
}  