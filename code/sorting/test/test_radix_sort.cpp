#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "radix_sort.hpp"

TEST_CASE("test one", "[sample]") {
	std::vector<int> test_data{};
	test_data.push_back(2);
	test_data.push_back(3);
	test_data.push_back(1);
	radix_sort(test_data);
    REQUIRE(test_data[0] == 1);
}
