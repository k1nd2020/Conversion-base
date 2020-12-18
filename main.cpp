#include "head.h"


int main(int argc, char* argv[]) {

	if (argv[1] != argv[argc]) {


		int a, b, c;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = 1 + log10((atoi(argv[2])));

		jingzhi(a, b, c);
	}
	else {

		return 0;

	}

}