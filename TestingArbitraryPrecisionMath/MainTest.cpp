#include <iostream>
#include "iprecision.h"
#include "fprecision.h"

using namespace std;

void TestIntegerPrecisionArithmatic()
{
	int_precision i_left("1236546464997979765464646464654646"); // String
	int_precision i_right("7646546464321654347641348316546131647643157464313"); // String
	int_precision i_left_pow("2");
	int_precision i_right_pow("55");

	cout << "The arbitrary precision integer add example :" << endl;
	cout << "First Operand = " << i_left << endl;
	cout << "Second Operand = " << i_right << endl;
	cout << "Result of addition = " << (i_left + i_right) << endl;


	cout << "The arbitrary precision integer multiply example :" << endl;
	cout << "First Operand = " << i_left << endl;
	cout << "Second Operand = " << i_right << endl;
	cout << "Result of multiplication! = " << (i_left * i_right) << endl;


	cout << "The arbitrary precision integer power example :" << endl;
	cout << "First Operand = " << i_left_pow << endl;
	cout << "Second Operand = " << i_right_pow << endl;
	cout << "Result of power (hint as MATLAB says 36028797018963968)! = " << ipow(i_left_pow, i_right_pow) << endl;


	int_precision powerResult = ipow(i_left_pow, i_right_pow);
	int_precision shiftResult = powerResult << 2;
	cout << "Division by 2 example (hint as Internet bit shift result says 144115188075855872) = " << shiftResult << endl;


	cout << "Valid operations are : " << endl;
	cout << "The arbitrary integer precision package supports the flowing C++ integer arithmetic" << endl;
	cout << "operators: +, -, ++, --, / , *, %, << , >> , +=, -=, *=, /=, %=, <<=, >>=" << endl;
	cout << "Examples are valid like  i1 = i2 >> i3, i1 = i2 << i3, etc. " << endl ;
}

void TestFloatingPrecisionAritmatic()
{
	cout << endl << endl;
	cout << "Testing floating precision here !" << endl;
	float_precision f1("34684646465465466546435432463.235456464464646E678", 100, round_mode::ROUND_ZERO); // String
	float_precision f2("34684644736425464694665654646.4676979715464E678", 100, round_mode::ROUND_ZERO); // String


	cout << "First Operand = " << f1 << endl;
	cout << "Second Operand = " << f2 << endl;
	cout << "Result of addition = " << (f1+f2) << endl;

	cout << "Result of multiplication !!!! = " << (f1 * f2) << endl;

	float_precision localPI = _float_table(_PI, 25); // Recalculation required because has bug
								// the initial value was computed to
								// 20 digits of precision.
	cout << "Pi value upto 25 digits precision is " << localPI << endl;
}


int main()
{
	cout << "<*******************************************************************>" << endl;
	cout << "<========Testing the arbitrary precision math package here==========>" << endl;
	cout << "<*******************************************************************>" << endl;

	TestIntegerPrecisionArithmatic();
	TestFloatingPrecisionAritmatic();

	cin.get();
	return 0;
}