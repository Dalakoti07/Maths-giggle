#include<bits/stdc++.h>
using namespace std;

static bool isLeapYear(int year)
{
	if (year % 400 == 0) return true;
	if (year % 100 == 0) return false;
	return (year % 4 == 0);
}

static int daysInMonth(int year, int month)
{
	// month: 1..12
	switch (month)
	{
		case 1: return 31;  // Jan
		case 2: return isLeapYear(year) ? 29 : 28; // Feb
		case 3: return 31;  // Mar
		case 4: return 30;  // Apr
		case 5: return 31;  // May
		case 6: return 30;  // Jun
		case 7: return 31;  // Jul
		case 8: return 31;  // Aug
		case 9: return 30;  // Sep
		case 10: return 31; // Oct
		case 11: return 30; // Nov
		case 12: return 31; // Dec
		default: return 0;
	}
}

int main()
{
	// Define 0=Monday, 1=Tuesday, ..., 6=Sunday
	int dayOfWeek = 0; // 1 Jan 1900 was Monday
	int countSundays = 0;

	for (int year = 1900; year <= 2000; ++year)
	{
		for (int month = 1; month <= 12; ++month)
		{
			// For the first day of this month:
			if (year >= 1901 && year <= 2000)
			{
				if (dayOfWeek == 6) // Sunday
					++countSundays;
			}

			// Advance dayOfWeek by the length of this month
			dayOfWeek = (dayOfWeek + daysInMonth(year, month)) % 7;
		}
	}

	cout << countSundays << endl; // Expected: 171
	return 0;
}