#include <doctest/doctest.h>
#include <ecgen/greeter.h>

#include <string>

TEST_CASE("EcGen") {
    using namespace ecgen;

    EcGen ecgen("Tests");

    CHECK(ecgen.greet(LanguageCode::EN) == "Hello, Tests!");
    CHECK(ecgen.greet(LanguageCode::DE) == "Hallo Tests!");
    CHECK(ecgen.greet(LanguageCode::ES) == "¡Hola Tests!");
    CHECK(ecgen.greet(LanguageCode::FR) == "Bonjour Tests!");
}

