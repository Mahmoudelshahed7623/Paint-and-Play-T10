#pragma once
#include "Shapes/Shape.h"
class Line : public shape
{
private:
	Point Corner1;
	Point Corner2;
public:
	Line(Point Corner1, Point Corner2, GfxInfo shapeGfxInfo);
	virtual ~Line();
	virtual void Draw(GUI* pUI) const;
};


