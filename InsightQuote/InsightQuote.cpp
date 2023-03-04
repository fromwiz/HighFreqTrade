// HighFreqTrade.cpp : Defines the entry point for the application.
//
#include <vector>
#include <fmt/ranges.h>
#include <sqlite3.h>
#include "InsightQuote.h"


using namespace std;

int main()
{
	std::vector<int> v = { 1, 2, 3 };
	fmt::print("{}\n", v);
	sqlite3* targ = nullptr;
	sqlite3_open("data.sqlit", &targ);
	fmt::print("{}\n", (int64_t)targ);
	fmt::print("end\n");
}
