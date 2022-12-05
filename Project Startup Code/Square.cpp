#include "Square.h"
Square::Square( Point P1, Point P2,  GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
{
	Corner1 = P1;
	Corner2 = P2;
}

Square::~Square()
{}

void Square::Draw(GUI* pUI) const
{
	//Call Output::DrawSq to draw a Square on the screen	
	pUI->DrawSq(Corner1, Corner2, ShpGfxInfo);
}
