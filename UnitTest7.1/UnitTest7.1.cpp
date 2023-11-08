#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_7.1.IT/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            const int rowCount = 3;
            const int colCount = 3;

            // Create a 2D array with unsorted values
            int** t = new int* [rowCount];
            for (int i = 0; i < rowCount; i++)
            {
                t[i] = new int[colCount];
            }

            t[0][0] = 3;
            t[0][1] = 2;
            t[0][2] = 1;

            t[1][0] = 2;
            t[1][1] = 3;
            t[1][2] = 2;

            t[2][0] = 1;
            t[2][1] = 1;
            t[2][2] = 3;

            // Call the Sort function to sort the array
            Sort(t, rowCount, colCount);

            // Assert that the array is sorted
            Assert::IsTrue(t[0][0] == 1 && t[0][1] == 1 && t[0][2] == 3);
            Assert::IsTrue(t[1][0] == 2 && t[1][1] == 3 && t[1][2] == 2);
            Assert::IsTrue(t[2][0] == 3 && t[2][1] == 2 && t[2][2] == 1);

    

		}
	};
}
