#pragma once

#include "Renderable.h"

namespace vengine {

/* Extends renderable object to be able to add rectangles in given layers */
class GUIElement : public Renderable {
public:
	/* Add rectangle in given layer: lesser is closer */
	void AddRectangle(const Vector2& start, const Vector2& dimension, Vector4 color, int layer = 0);
	virtual void Draw(Renderer* renderer);

protected:
	virtual void FillInfo(RenderInfo* info);
	virtual void ActivateAttributes();
};

}