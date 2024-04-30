#include "minmax.h"
#include <stdlib.h>
#include <time.h>

struct min_max maxmin(void) {
	struct min_max r;
	//RAND_MAX;
	srand(time(NULL));
	r.min = rand() % 16 - 10; //random range -10 to 5
	r.max = rand() % 31 + 15; //random range 15 to 45
	return r;
}
