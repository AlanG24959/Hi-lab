#include <catch2/catch_test_macros.hpp>
#include "../src/hello.hpp"

TEST_CASE("compIgnore works correctly", "[compIgnore]") {
    REQUIRE(compIgnore("Hello", "hello") == 0);
    REQUIRE(compIgnore("apple", "Banana") < 0);
    REQUIRE(compIgnore("Zebra", "ant") > 0);
    REQUIRE(compIgnore("", "nonempty") < 0);
    REQUIRE(compIgnore("same", "same") == 0);
    REQUIRE(compIgnore("Case", "cases") < 0);
}