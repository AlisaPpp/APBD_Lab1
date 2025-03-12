#include <iostream>
#include <ranges>

auto main() -> int {
   auto text = std::string();
   std::cin >> text;
   std::cout << text.front() << '\n';
   std::cout << "'" << text.back() << "'" << '\n';
   std::cout << text.size() << '\n';
   std::cout << "\"" << text[(int)(text.size()/2)] << "\"" << "\n";
   std::cout << "[" << text << "]" << '\n';
   auto text2 = std::ranges::sort(text);
   std::ranges::sort(text);
   std::cout << text;
}
