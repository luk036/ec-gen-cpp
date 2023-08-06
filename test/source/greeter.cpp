#include <doctest/doctest.h>
#include <ecgen/greeter.h>
#include <ecgen/version.h>

#include <string>

TEST_CASE("EcGen") {
  using namespace ecgen;

  EcGen ecgen("Tests");

  CHECK(ecgen.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(ecgen.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(ecgen.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(ecgen.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("EcGen version") {
  static_assert(std::string_view(ECGEN_VERSION) == std::string_view("1.0"));
  CHECK(std::string(ECGEN_VERSION) == std::string("1.0"));
}
