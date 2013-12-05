#include "flippers.h"

Flippers::Flippers(Flipper* left, Flipper* right)
{
	lft = left;
	rgt = right;
}

Flippers::Flippers(const Flippers& param)
{
	lft = param.lft;
	rgt = param.rgt;
}

Flippers& Flippers::operator=(const Flippers& param)
{
	if (&param == this)
		return *this;
	else
	{
		lft = param.lft;
		rgt = param.rgt;
	}
}

Flippers::~Flippers()
{

}

void Flippers::FlipLeft()
{
	lft->Flip();
}

void Flippers::FlipRight()
{
	rgt->Flip();
}

Flipper* const Flippers::GetLeft() const
{
	return lft;
}

Flipper* const Flippers::GetRight() const
{
	return rgt;
}