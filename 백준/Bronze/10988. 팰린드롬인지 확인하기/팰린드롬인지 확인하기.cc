//펠린드롬인지 아닌지 확인하는 프로그램
#include <stdio.h>
#include <string.h>
int main() {
	
	int k=1;    // 펠린드롬 여부 나타냄
	char str[100]; 
	scanf("%s",str); //문자 입력받기
	int len=strlen(str); // 문자열 길이 
	
	for(int i=0; i<len/2; i++) {
		if(str[i]!=str[len-1-i]) {
		k=0;
		break;
		}
		
	} 
	
	printf("%d",k);
	return 0;
} 