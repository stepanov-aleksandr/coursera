//#include <math.h>
//#include <algorithm>
//#include <iomanip>
//#include <iostream>
//#include <limits>
//#include <map>
//#include <set>
//#include <stdexcept>
//#include <tuple>
//#include <vector>

// using namespace std;

// bool operator<(const Region &lhs, const Region &rhs) {
//  return std::make_tuple(lhs.std_name, lhs.parent_std_name, lhs.names,
//                         lhs.population) <
//         std::make_tuple(rhs.std_name, rhs.parent_std_name, rhs.names,
//                         rhs.population);
//}

// bool operator==(const Region &lhs, const Region &rhs) {
//  return std::make_tuple(lhs.std_name, lhs.parent_std_name, lhs.names,
//                         lhs.population) ==
//         std::make_tuple(rhs.std_name, rhs.parent_std_name, rhs.names,
//                         rhs.population);
//}

// int FindMaxRepetitionCount(const std::vector<Region> &r) {
//  if (r.size() == 0) return 0;
//  std::set<Region> out(r.begin(), r.end());
//  if (out.size() == r.size()) return 1;

//  int count = 0;
//  std::for_each(out.begin(), out.end(), [&](const Region &unit) {
//    auto repit = std::count(r.begin(), r.end(), unit);
//    if (repit > 1 && repit > count) count = static_cast<int>(repit);
//  });
//  return count;
//}
