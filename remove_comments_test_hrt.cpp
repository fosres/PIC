#include <stdio.h>
#include <stdbool.h>

int main() {
	char c;
	char IN_COMMENT_MODE = false;
	while ((c = getchar()) != EOF) {
		
		if (c == 's') {
			IN_COMMENT_MODE = true;
			continue;
		}
		
		if (IN_COMMENT_MODE && c != '\n')
			continue;
		
		if (c == '\n') {
			printf("%c", c);
			IN_COMMENT_MODE = false;
			continue;
		}

			printf("%c", c);
	}
	return 0;
}
