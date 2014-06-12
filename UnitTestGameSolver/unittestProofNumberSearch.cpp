#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include "CppUnitTest.h"
#include "../gameSolver/ProofNumberSearch.h"
#include "../gameEngines/CaptureGoEngine.h"
#include "../gameSolver/exceptions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace gameSolver;
using namespace gameEngines;

namespace UnitTestGameSolver
{		
	TEST_CLASS(UnitTestProofNumberSearch)
	{
	public:
		
		TEST_METHOD(TestSolveMethod_1_1)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 1;
			CaptureGoEngine::initialize();
			Assert::IsTrue(pns.Solve(CaptureGoEngine(), true, true));
		}

		TEST_METHOD(TestSolveMethod_1_2)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 1;
			CaptureGoEngine::initialize();
			Assert::IsTrue(pns.Solve(CaptureGoEngine(), true, false));
		}

		TEST_METHOD(TestSolveMethod_2_1)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsTrue(pns.Solve(CaptureGoEngine(), true, true));
		}

		TEST_METHOD(TestSolveMethod_2_2)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsTrue(pns.Solve(CaptureGoEngine(), true, false));
		}

		TEST_METHOD(TestSolveMethod_2_3)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsTrue(pns.Solve(CaptureGoEngine("1000", "0100"), true, true));
		}

		TEST_METHOD(TestSolveMethod_2_4)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsFalse(pns.Solve(CaptureGoEngine("1000", "0100"), true, false));
		}

		TEST_METHOD(TestSolveMethod_2_5)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsTrue(pns.Solve(CaptureGoEngine("0100", "1000"), true, true));
		}

		TEST_METHOD(TestSolveMethod_2_6)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsFalse(pns.Solve(CaptureGoEngine("0100", "1000"), true, false));
		}

		TEST_METHOD(TestSolveMethod_2_7)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsTrue(pns.Solve(CaptureGoEngine("0001", "0010"), true, true));
		}

		TEST_METHOD(TestSolveMethod_2_8)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsFalse(pns.Solve(CaptureGoEngine("0001", "0010"), true, false));
		}

		TEST_METHOD(TestSolveMethod_2_9)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsTrue(pns.Solve(CaptureGoEngine("0010", "0001"), true, true));
		}

		TEST_METHOD(TestSolveMethod_2_10)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 2;
			CaptureGoEngine::initialize();
			Assert::IsFalse(pns.Solve(CaptureGoEngine("0001", "0010"), true, false));
		}

		TEST_METHOD(TestSolveMethod_3_1)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 3;
			CaptureGoEngine::initialize();
			Assert::IsFalse(pns.Solve(CaptureGoEngine(), true, true));
		}

		TEST_METHOD(TestSolveMethod_3_2)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 3;
			CaptureGoEngine::initialize();
			Assert::IsFalse(pns.Solve(CaptureGoEngine(), true, false));
		}

		TEST_METHOD(TestSolveMethod_4_1)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 4;
			CaptureGoEngine::initialize();
			Assert::IsFalse(pns.Solve(CaptureGoEngine(), true, true));
		}

		TEST_METHOD(TestSolveMethod_4_2)
		{
			ProofNumberSearch<Node<CaptureGoEngine, unsigned int, unsigned int>> pns;
			CaptureGoEngine::boardSize = 4;
			CaptureGoEngine::initialize();
			Assert::IsFalse(pns.Solve(CaptureGoEngine(), true, false));
		}

	};
}