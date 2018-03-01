#include "fonts.h"

void showName() {
	static Rect r;
	r.bot = 800;
	r.left = 425;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ffff00, "Matthew Gonzales");
}