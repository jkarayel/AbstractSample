#pragma once
class Shape
{
public:
	virtual int CalcArea() = 0;
	void setSideA(int);
	void setSideB(int);


private:
	int sideA;
	int sideB;


};

