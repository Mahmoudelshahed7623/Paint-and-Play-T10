#pragma once

#include "Shapes/shape.h"

class Square : public shape
{
private:
	 Point Corner1;
	 Point Corner2;
public:
	const int v = 4;
	Square( Point, Point, GfxInfo shapeGfxInfo);
	virtual ~Square();
	virtual void Draw(GUI* pUI) const;
};
