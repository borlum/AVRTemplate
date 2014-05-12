#include "minunit.h"

int tests_run = 0;

static char * testTemplate() {
	int returnVal = 1;
	assert("Error; Template fail", returnVal != 0);
	return 0;
}

static char * allTests() {
	run_test(testTemplate);
	return 0;
}

int main(int argc, char **argv) {
	char *result = allTests();
	if (result != 0) {
	    printf("%s\n", result);
	} else {
	    printf("ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);
	return result != 0;
}
