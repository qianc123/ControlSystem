#pragma once
class DataUtility
{
public:
	DataUtility(void);
	~DataUtility(void);

public:
	static bool ConvertStringToFloat(CString buffer, float &value, float defaultValue = 0.0);
	static CString GetExePath();
};
