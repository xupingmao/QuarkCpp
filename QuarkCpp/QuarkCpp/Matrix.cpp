#include "stdafx.h"
#include "Matrix.h"

using namespace QuarkCpp;

Matrix::Matrix()
{
	// type = "Matrix";
}


Matrix::~Matrix()
{
}

const char* Matrix::getType()
{
	return "Matrix";
}

Matrix& Matrix::concat(Matrix& another)
{
	number a = this->a;
	number c = this->c;
	number tx = this->tx;

	this->a = a * another.a + this->b * another.c;
	this->b = a * another.b + this->b * another.d;
	this->c = c * another.a + this->d * another.c;
	this->d = c * another.b + this->d * another.d;
	this->tx = tx * another.a + this->ty * another.c + another.tx;
	this->ty = ty * another.b + this->ty * another.d + another.ty;
	return *this;
}

Matrix& Matrix::rotate(number angle)
{
	number cos0 = cos(angle);
	number sin0 = sin(angle);

	number a = this->a;
	number c = this->c;
	number tx = this->tx;

	this->a = a * cos0 - this->b * sin0;
	this->b = a * sin0 + this->b * cos0;
	this->c = c * cos0 - this->d * sin0;
	this->d = c * sin0 + this->d * cos0;
	this->tx = tx * cos0 - this->ty * sin0;
	this->ty = tx * sin0 + this->ty * cos0;
	return *this;
}

Matrix* Matrix::clone()
{
	Matrix* new_m = new Matrix;
	*new_m = *this; // Ä¬ÈÏµÄÄÚ´æ¿½±´
	return new_m;
}

string Matrix::toString()
{
	return "Matrix";
}