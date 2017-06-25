#include <iostream>
#include <fstream>
using namespace std;
int main()
{
//	ifstream ifs("testin.txt");
//	ofstream outfs("testout1.txt");
//	ofstream outfs("testout2.txt");
//	for(int i = 1;i <=1000;i++)		//输入1-1000测试用例 
//		outfs << i << " ";
	int n = 0;
	int cnt = 0;
//	if(!ifs)
//		return 0; 
//	while(ifs >> n){
		cin >> n;
		if(n > 1000 || n==0)
			return 0;
		while(n != 1){
			n = n%2?(3*n + 1)/2:n/2;
			cnt++;
		}
		
			cout << cnt;
//			outfs << cnt << " ";
		//	cnt = 0;
	//}
	
}
//PAT 乙级1001 很奇怪用while里注释掉的代码测试点0 1 2通不过
//然而用另一个语句却过了 测试了1-1000每个整数的输出结果两者都一样
//我选择死亡
 
