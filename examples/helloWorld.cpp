#include "instantcg.h"
using namespace InstantCG;

int main()
{

	screen(256, 256, false, "Hello World!");
    ColorRGB bgColor;

	while( !done() )
	{
        bgColor.r = std::rand()&0xff;
        bgColor.g = std::rand()&0xff;
        bgColor.b = std::rand()&0xff;
        cls( bgColor );
        
        horLine(128, 0, 255, RGB_White);
        verLine(128, 0, 255, RGB_White);
        line(0, 0, 255, 255, RGB_Black);

        if (keyDown(SDLK_SPACE))
        {
            cls(RGB_Black);
            drawRect(0, 0, 20, 40, RGB_Blue);
        }
        
        redraw();
	}

	return 0;
}
