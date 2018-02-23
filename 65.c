#include <stdio.h>
 
int main() {
char s[10];
gets(s);
if(printf("%s",s))
	return 0;
}
