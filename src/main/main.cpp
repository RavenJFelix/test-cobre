#include "CobreDef.h"
#include "Pixel.h"
#include "PixelBuffer.h"
#include "Canvas.h"

#include <iostream>

int main()
{
	using pixel_t = cobre::core::Pixel;
	using cPos_t = cobre::core::canvasPos_t;
	cobre::core::PixelBuffer buffer{8};
	pixel_t f{cPos_t{0, 0}, 'F'};
	pixel_t u{cPos_t{1, 0}, 'U'};
	pixel_t c{cPos_t{2, 0}, 'C'};
	pixel_t k{cPos_t{3, 0}, 'K'};
	pixel_t y{cPos_t{0, 0}, 'Y', 1};
	pixel_t o{cPos_t{1, 0}, 'O', 1};
	pixel_t t{cPos_t{2, 0}, 'T', 1};
	pixel_t e{cPos_t{3, 0}, 'E', 1};

	buffer[0] = y;
	buffer[1] = o;
	buffer[2] = t;
	buffer[3] = e;
	buffer[4] = f;
	buffer[5] = u;
	buffer[6] = c;
	buffer[7] = k;

	buffer.zSort();

	
	return 0;
}
