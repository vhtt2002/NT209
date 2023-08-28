#include <iostream>
using namespace std; 
//2.1
//Nhan thay 2 so khi XOR voi nhau neu co cung la 0 hoac la 1 (Cung am hoac cung duong) thi se tra ve la 0
//Su dung thuat toan xet dau co trong file huong dan de xet dau 2 so xong sau do XOR lai de xet ket qua; 
int isSameSign(int x,int y){
	int temp,temp2;
	temp = (x >> 31) & 1;
	temp2 = (y >> 31) & 1; 
	return temp^temp2 ; 
}
//2.2
//Ta thay cac so chia het cho 8 cac bit cua no co dand 1xxxxx.... voi x la 0 nen khi dich trai 3 bit roi lai dich phai 3 bit neu no bang so ban dau thi no la so chia het cho 8 
int is8x(int x){
	int a,b;
	a = x>>3;
	b = a<<3;
	return b==x; 
}
//2.3
//vd: x la so duong thi dich phai 32 bit x se la 00000... và tuong tu -x la 111111...
//ket qua cua x - (-x) sau khi duoc dich phai la 1 neu x la duong va -1 neu x la so am 
int negative(int x){
	int temp;
	temp = ~x;
	return temp+1; 
}
int isPositive(int x)
{
    return (x >> 31) + negative((negative(x)>>31)); 
}
//2.4
//Kiem tra tinh am duong cua 2^n - x se biet duoc x co lon hon 2^n hay khong 
int isLess2n(int x, int n)
{
    int y = 1 << n;
    int result = y - x;
    return isPositive(result);
} 
using namespace std; 
int main() {
	cout<<"Kiem tra 2 so cung dau: "; 
	if(isSameSign(4,2)==0){
		cout<<"1"<<endl; 
	}
	else{
		cout<<"0"<<endl; 
	}
	cout<<"Kiem tra so co chia het cho 8: "; 
	if(is8x(8) == 1){
		cout<<"1"<<endl; 
	}
	else{
		cout<<"0"<<endl; 
	}
	cout<<"Kiem tra so duong: "; 
	if(isPositive(10) == 1){
		cout<<"1"<<endl; 
	}
	else{
		cout<<"0"<<endl; 
	}cout<<"Kiem tra so < 2^n: "; 
	if(isLess2n(12,4) == 1){
		cout<<"1"<<endl; 
	}
	else{
		cout<<"0"<<endl; 
	} 
	return 0;
}
