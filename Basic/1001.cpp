#include <iostream>
#include <fstream>
using namespace std;
int main()
{
//	ifstream ifs("testin.txt");
//	ofstream outfs("testout1.txt");
//	ofstream outfs("testout2.txt");
//	for(int i = 1;i <=1000;i++)		//����1-1000�������� 
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
//PAT �Ҽ�1001 �������while��ע�͵��Ĵ�����Ե�0 1 2ͨ����
//Ȼ������һ�����ȴ���� ������1-1000ÿ�����������������߶�һ��
//��ѡ������
 
