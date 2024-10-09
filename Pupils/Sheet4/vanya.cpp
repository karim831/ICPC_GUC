#include <iostream>
#include <vector>
#define mod (1e9+7)
using namespace std;


bool check = true;
long long p = 0;


int generate(char c){
	int res = 63;
	if(c >= '0' && c <= '9') res = c - '0';
	else if(c >= 'A' && c <= 'Z') res = c - 'A' + 10;
	else if (c >= 'a' && c <= 'z') res = c - 'a' + 36;
	else if (c == '-') res = 62;
	return res;
}
void solution(void){
	string s; cin >> s; 
	int size = s.size();
	long long res = 1;
	for(int i=0;i<size;i++){
		int g = generate(s[i]);
		int sum = 0;
		for(int j=0;j<64;j++){
			if((g & j) == g) sum++;
		}
		res = (res * 3) % mod;
	}
	cout << res << endl;
}


int main(void){
	solution();
	return 0;
}
