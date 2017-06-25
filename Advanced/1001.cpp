#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a,b;
  	cin >> a >> b;
  	int c = a+b;
	if(c < 0){
 		cout << '-';
    	c = -c;
    }
	else if(!c){
		cout << '0';
		return 0;
	} 
  	int cnt = 0;
  	vector<char> vec;
	while(c){
    	if(cnt == 3){
        	vec.push_back(',');
           	cnt = 0;
        }
        vec.push_back((char)(c%10 + '0'));
        c = c/10;
        cnt++;
    }
  	for(auto iter = vec.rbegin();iter != vec.rend();iter++)
        cout << *iter;
}
