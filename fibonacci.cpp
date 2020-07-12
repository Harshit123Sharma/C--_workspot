#include<iostream>

using std::cin;
using std::cout;

int fibo(int n){

	int i;
	int64_t f[n];
	if (n<=1){
	    
	    if (n==0){
	        
	        std::cout<<"0";
	        return 0;
	        
	    }
	    
	    else if (n==1){
	        std::cout<<"01";
		    return 0;
	    }    
	}
	else{

		f[0] = 0;
		f[1] = 1;

		for (i = 2; i < n; ++i){

			f[i] = f[i-1] + f[i-2];
			
		}
		
		std::cout<<"The FIBONACCI Series is : \n";

		for (i = 0; i < n; ++i){

			std::cout<<f[i];
		}
	}

	return 0;

}

int main(){

	int n;
	std::cout<<"Enter the value of n for series : ";
	std::cin>>n;
	fibo(n);

}