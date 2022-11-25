#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "shared_memory.h"

int main(int argc, char* argv[]) {
	if (argc != 1) {
		printf("usage - % s(no args)", argv[0]);
		return -1;
	}

	if (destory_memory_block(FILENAME)) {
		printf("Destroyed block: %s\n", FILENAME);
	}
	else {
		printf("Could not destory block: %s\n", FILENAME);
	}
	return 0;
}