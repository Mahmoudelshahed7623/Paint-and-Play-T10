#include "Triangle.h"
Triangle::Triangle(Point P1, Point P2,Point P3, GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
{
	Corner1 = P1;
	Corner2 = P2;
	Corner3 = P3;
}
Triangle::~Triangle()
{}
void Triangle::Draw(GUI* pUI) const
{
	//Call Output::DrawTrangle to draw a rectangle on the screen	
	pUI->DrawTrian(Corner1, Corner2,Corner3, ShpGfxInfo);
}