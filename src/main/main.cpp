#include "Pixel.h"
#include "Pos2D.h"
#include "Canvas.h"

#include <iostream>

int main()
{
	cobre::core::Canvas c{};
	cobre::core::Canvas d{10, 10};
	cobre::core::Pixel p{cobre::core::Pos2D{3,3},'F'}; 
	d.clear();
	d << p; 
	std::cout << d;
	return 0;
}
