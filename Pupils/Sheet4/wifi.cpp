#include <iostream>
using namespace std;


int rpos = 0;
long long t = 0,tr = 0;

string s2 = "";
size = 0;
void wifi(int index,sum){
	if(index == size){
		if(sum == rpos) tr++;
		t++;
		return;
	}

	if(s2[index] == '+') wifi(index+1,sum+1);
	else if(s2[index] == '-') wifi(index+1,sum-1);
	else{
		wifi(index+1,sum+1);
		wifi(index+1,sum-1);
	}
	sum += s[i] == '+' ? 1 : -1;
}
void solution(void){
	string s1; cin >> s1 >> s2;
	for(int i=0;i<s1.size;i++) rpos += s1[i] == '+' ? 1 : -1;
	size = s2.size();
	wifi(0,0);
}

int main(void){
	solution();
	return;
}
