#pragma once
class Duck
{
public:
	Duck();
	virtual ~Duck();
	virtual void Quack() = 0;
	virtual void Fly() = 0;
};

