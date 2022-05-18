#include <iostream>

/**
 * @brief part2 funnction to calculate the numbers
 *
 * @param start
 * @param out
 * @param n
 */
void part2(int start, std::string out, int n) {
  if (n == 0) {
    std::cout << out << " ";
    return;
  }

  for (int i = start; i <= 9; i++) {
    std::string str = out + std::to_string(i);

    // recurse for next digit
    part2(i + 1, str, n - 1);
  }
}

/**
 * @brief The Main function of the code.
 *
 * @return int
 */
int main() {
  int n;
  std::cout << "With how many digits you want your numbers: ";
  std::cin >> n;
  part2(0, "", n);
  std::cout << "\n";
  return 0;
}