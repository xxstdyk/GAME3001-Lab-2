#pragma once
#ifndef __SPACE_SHIP__
#define __SPACE_SHIP__
#include "DisplayObject.h"
#include "TextureManager.h"

class SpaceShip final : public DisplayObject {
	public:
	// constructor(s)
	SpaceShip();

	// destructor
	~SpaceShip();

	// life-cycle methods inherited from DisplayObject
	void draw() override;
	void update() override;
	void clean() override;

	// Getters and setters
	void setDestination(const glm::vec2);
	void setMaxSpeed(const float);
	void setOrientation(const glm::vec2);
	void setRotation(const float);

	private:

	glm::vec2
		m_destination,
		m_targetDirection,
		m_orientation;

	float 
		m_maxSpeed,
		m_rotationAngle;

	void m_Move();
};

#endif /* defined (__SPACE_SHIP__) */


struct Foo {

	int val;
};

struct Bar {

	Foo fooArr[2];
};