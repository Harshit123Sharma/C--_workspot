#include<iostream>
#include<stdlib.h>


using namespace std; 



void swaping(int &a, int &b)  
{  
    int temp = a;  
    a = b;  
    b = temp;  
}  
  
void bubble(int a[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    for (j = 0; j < n-i-1; j++){
          
        if (a[j] > a[j+1])  
            swaping(a[j], a[j+1]);  
            
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
    int a[10000];
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    
    clock_t start, end;   
    start = clock();
    for (int i = 0; i < n; i++){
        
        a[i] = i;
        
    }
    bubble(a, n);  

    end = clock();
    cout<<"\nFor best : "<<end-start<<"ms";
      
    start = clock();
    for (int i = 0; i < n; i++){
        
        a[i] = n-i;
        
    }
    bubble(a, n);  

    end = clock();
    cout<<"\nFor Worst : "<<end-start<<"ms";  
    start = clock();
    for (int i = 0; i < n; i++){
        
        a[i] = 1 + (rand() % n);
        
    }
    bubble(a, n);  

    end = clock();
    cout<<"\nFor Average : "<<end-start<<"ms";
//    cout<<"Sorted array: \n";  
    //show_array(a, n);  
    return 0;  
}  