#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int alphabet[26] = {0}; // 알파벳 빈도 저장 배열
    char word[1000001]; // 입력 단어 저장 배열 (최대 길이 1,000,000 + 널 문자)
    
    scanf("%s", word); // 입력 받기
    
    // 단어의 알파벳 빈도 계산
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = word[i];
        if ('a' <= ch && ch <= 'z') // 소문자인 경우에만 처리
            alphabet[ch - 'a']++; // 알파벳 인덱스 적용
        else if ('A' <= ch && ch <= 'Z') // 대문자인 경우 소문자로 변경 후 처리
            alphabet[ch - 'A']++; // 알파벳 인덱스 적용
    }
    
    // 가장 많이 사용된 알파벳 찾기
    int max_count = 0;
    char max_char;
    
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > max_count) {
            max_count = alphabet[i];
            max_char = 'A' + i;
        }
        else if (alphabet[i] == max_count) {
            max_char = '?'; // 동일한 빈도의 알파벳이 있을 경우 '?' 출력
        }
    }
    
    printf("%c\n", max_char);
    
    return 0;
}
