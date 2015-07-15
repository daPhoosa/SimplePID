/* 
 * SimplePID
 * by Phillip Schmidt
 * v1.0
 *
 */


#include "SimplePID.h"


SimplePID::SimplePID(float _P, float _I, float _D, float _iLimit, float _dt)
{
	P = _P;
	I = _I;
	D = _D * _dt;
	
	iLimit = abs(_iLimit);
	
	errorPrevious = 0.0f;
	iBucket = 0.0f;
}


void SimplePID::in(const float data, const float target)
{
	float error = target - data;
	
	iBucket += error;
	constrain(iBucket, -iLimit, iLimit);
	
	output = P * error + I * iBucket + D * (error - errorPrevious);
	
	errorPrevious = error;
}


float SimplePID::out()
{
	return output;
}


void SimplePID::iReset()
{
	iBucket = 0.0f;
}
