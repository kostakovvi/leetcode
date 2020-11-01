#include <easy/reverseInteger.h>
#include <limits>

int reverseInteger(int x)
{
	int result = 0;
	while (x != 0)
	{
		const int currentSymbol = x % 10;
		if ((result > INT_MAX / 10 || (result == INT_MAX / 10 && currentSymbol > 7)) ||
			(result < INT_MIN / 10 || (result == INT_MIN / 10 && currentSymbol < -8)))
		{
			result = 0;
			break;
		}
		result = result * 10 + currentSymbol;
		x /= 10;
	}

	return result;
}