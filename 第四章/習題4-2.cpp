#include <iostream>
using namespace std;

int main()
{ 
	int a , b ;
	
	cout << "請輸入數字\n" ;
	cin >> a ;
	b = a%2 ;
	
	if(b==0)
	{
		cout << a << "是偶數\n" ;
	}
	else
	{
		cout << a << "是奇數\n" ;
	}
	
    return 0;                        
}
