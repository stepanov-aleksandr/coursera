//#include <iostream>
// using namespace std;

// class Rational {
// public:
//  Rational() {
//    numerator_ = 0;
//    denominator_ = 1;
//  }

//  Rational(int numerator, int denominator) {
//    auto nod = [](int a, int b) {
//      if (a < 0) a = -a;
//      if (b < 0) b = -b;
//      if (a == 0 || b == 0) return 1;
//      for (int i = a; i >= 2; i--) {
//        if (a % i == 0) {
//          if (b % i == 0) {
//            return i;
//          }
//        }
//      }
//      return 1;
//    };

//    if (numerator == 0) {
//      denominator = 1;
//    }

//    if (denominator < 0) {
//      denominator = -denominator;
//      numerator = -numerator;
//    }

//    denominator_ = denominator / nod(numerator, denominator);
//    numerator_ = numerator / nod(numerator, denominator);
//  }

//  int Numerator() const { return numerator_; }

//  int Denominator() const { return denominator_; }

// private:
//  int numerator_;
//  int denominator_;
//};

// int main_1() {
//  {
//    const Rational r(3, 10);
//    if (r.Numerator() != 3 || r.Denominator() != 10) {
//      cout << "Rational(3, 10) != 3/10" << endl;
//      return 1;
//    }
//  }

//  {
//    const Rational r(8, 12);
//    if (r.Numerator() != 2 || r.Denominator() != 3) {
//      cout << "Rational(8, 12) != 2/3" << endl;
//      return 2;
//    }
//  }

//  {
//    const Rational r(-4, 6);
//    if (r.Numerator() != -2 || r.Denominator() != 3) {
//      cout << "Rational(-4, 6) != -2/3" << endl;
//      return 3;
//    }
//  }

//  {
//    const Rational r(4, -6);
//    if (r.Numerator() != -2 || r.Denominator() != 3) {
//      cout << "Rational(4, -6) != -2/3" << endl;
//      return 3;
//    }
//  }

//  {
//    const Rational r(0, 15);
//    if (r.Numerator() != 0 || r.Denominator() != 1) {
//      cout << "Rational(0, 15) != 0/1" << endl;
//      return 4;
//    }
//  }

//  {
//    const Rational defaultConstructed;
//    if (defaultConstructed.Numerator() != 0 ||
//        defaultConstructed.Denominator() != 1) {
//      cout << "Rational() != 0/1" << endl;
//      return 5;
//    }
//  }

//  cout << "OK" << endl;
//  return 0;
//}
