#include<iostream>
#include<stdlib.h>


using namespace std; 



/*void swaping(int &a, int &b)  
{  
    int temp = a;  
    a = b;  
    b = temp;  
}*/  
  
void insertion(int a[], int n)  
{  
 int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = a[i];  
        j = i - 1;  
  
           while (j >= 0 && a[j] > key) 
        {  
            a[j + 1] = a[j];  
            j = j - 1;  
        }  
        a[j + 1] = key;  
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
    insertion(a, n);  

    end = clock();
    cout<<"\nFor best : "<<end-start<<"ms";
      
    start = clock();
    for (int i = 0; i < n; i++){
        
        a[i] = n-i;
        
    }
    insertion(a, n);  

    end = clock();
    cout<<"\nFor Worst : "<<end-start<<"ms";  
    start = clock();
    for (int i = 0; i < n; i++){
        
        a[i] = 1 + (rand() % n);
        
    }
    insertion(a, n);  

    end = clock();
    cout<<"\nFor Average : "<<end-start<<"ms";
//    cout<<"Sorted array: \n";  
    //show_array(a, n);  
    return 0;  
}  