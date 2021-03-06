	/*
	* The MIT License (MIT)
	* 
	* Copyright (c) 2016 Carlos Tangerino
	* 
	* Permission is hereby granted, free of charge, to any person obtaining a copy
	* of this software and associated documentation files (the "Software"), to deal
	* in the Software without restriction, including without limitation the rights
	* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	* copies of the Software, and to permit persons to whom the Software is
	* furnished to do so, subject to the following conditions:
	* 
	* The above copyright notice and this permission notice shall be included in all
	* copies or substantial portions of the Software.
	* 
	* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	* SOFTWARE.
	*/ 
#ifndef WIMDFeed_h
/*
  WIMDSensorValue.h - Arduino WIMDClient Library
*/
#define WIMDFeed_h
#include "WIMDSensorValue.h"


class WIMDFeed: public Printable
{
	public:
		WIMDFeed(const char* remoteId,WIMDSensorValue* sensorValues, int sensorsCount);
		virtual size_t printTo(Print&) const;
		const char* id() { return _remoteId; };
		int size() { return _sensorsCount; };
		WIMDSensorValue& operator[] (unsigned i) { return _sensorValues[i]; };
		int printToBuff(char* buff);

	//protected:
		const char* _remoteId;
		int _sensorsCount;
		WIMDSensorValue* _sensorValues;
};

#endif