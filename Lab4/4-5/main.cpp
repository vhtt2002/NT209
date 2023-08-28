// C++ program for naive solution to
// print all combination of 4 elements
// in A[] with sum equal to X
#include <bits/stdc++.h>
using namespace std;
void findSixElements(int A[],int n,int X){
	int count =0; 
	for(int a=0;a<n-5;a++){
		for(int b=a+1;b<n-4;b++){
			for(int c=b+1;c<n-3;c++){
				for(int d=c+1;d<n-2;d++){
					for(int e=d+1;e<n-1;e++){
						for(int f=e+1;e<n;e++){ 
							if(A[a]+A[b]+A[c]+A[d]+A[e]+A[f]==X)
							cout<<"Index:a="<<a<<","<<"Index:b="<<b<<","<<"Index:c="<<c<<","<<"Index:d="<<d<<","<<"Index:e="<<e<<","<<"Index:f="<<f<<endl;  
						} 
					} 
				} 
			} 
		} 
	} 
} 
// Driver Code
int main()
{
    int A[] = {0x2, 0x0A, 0x6, 0x1, 0x0C, 0x10, 0x9, 0x3, 0x4, 0x7, 0x0E, 0x5, 0x0B, 0x8,0x0F, 0x0D};
    int n = sizeof(A) / sizeof(A[0]);
    int X = 53;
    findSixElements (A, n, X);
    return 0;
}
