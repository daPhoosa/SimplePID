/* 
 * SimplePID
 * by Phillip Schmidt
 * v1.0
 *
 */


#ifndef SimplePID_h
#define SimplePID_h

#include <arduino.h>

class SimplePID
{
	public:
	
		SimplePID(float _P, float _I, float _D, float _iLimit, float _dt);
		
		void in(const float data, const float target);
		
		float out();
		
		void iReset();
		
		
	private:
	
		float P, I, D, iLimit;
		
		float errorPrevious, iBucket;
		
		float output;

};

#endif
