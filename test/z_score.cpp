#include <z_score>
#include <iostream>
int _Volumes_build_z_score_test_z_score(int, char**) noexcept
{
  tregana::z_score<float> p{.mean = 2.0f , .var = 0.5f};
  const auto x{1.9f};
  const auto y{p(x)};
  std::cout << x << ':' << y << std::endl;
  return 0;
}
