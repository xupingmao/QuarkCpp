#include "stdafx.h"
#include "TimeInfo.h"

using namespace QuarkCpp;

TimeInfo::TimeInfo()
{
}


TimeInfo::~TimeInfo()
{
}

int64_t TimeInfo::getTimeMillis()
{
	int64_t ms;
	FILETIME ftime;
	GetSystemTimeAsFileTime(&ftime);
	ms = (int64_t)ftime.dwHighDateTime << 32;
	ms |= ftime.dwLowDateTime;
	return ms;
}