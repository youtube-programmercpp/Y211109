#include <stdio.h>
#include <Windows.h>
int main()
{
	for (int i = 0;   ;   ) {
		static const char s[] = "ABC全角ﾊﾝｶｸｶﾀｶﾅひらがな";
		//データ定義
		if (s[i] == '\0')
			break;
		else if (IsDBCSLeadByte(s[i])) {
			//全角
			putchar(s[i++]);
			putchar(s[i++]);
			putchar('\n');
		}
		else {
			//半角
			putchar(s[i++]);
			putchar('\n');
		}
	}
}
