#include "mylibrary.h"
#include <stdio.h>
#include <time.h>

void seed_value_random() {
	srand((time_t)time(0));
}