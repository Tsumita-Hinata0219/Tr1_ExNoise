#include <stdio.h>
#include "Function.h"


int main() {

	struct Num {
		Vector2 pos;
	};

	const int indexMax = 500;
	Num num[indexMax]{};
	for (int i = 0; i < indexMax; i++) {
		num[i].pos.x = {0};
		num[i].pos.y = {0};
	}
	
	for (int i = 0; i < indexMax; i++) {
		num[i].pos.x = float(i * 5);
		num[i].pos.y = float(i * 5);
	}

	for (int i = 0; i < indexMax; i++) {
		num[i].pos.y = noise(Divide(num[i].pos, 100.0f));
	}

	for (int i = 0; i < indexMax; i++) {
		printf("%.2f\n", num[i].pos.y * 100.0f);
	}


	return 0;
}


