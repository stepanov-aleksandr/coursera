//#include <iostream>
// using namespace std;

// class Rational {
// public:
//  Rational() {
//    numerator_ = 0;
//    denominator_ = 1;
//  }

//  bool operator==(const Rational &rhs) {
//    if (rhs.numerator_ == numerator_ && rhs.denominator_ == denominator_) {
//      return true;
//    } else {
//      return false;
//    }
//  }

//  Rational operator+(const Rational &rhs) {
//    if (denominator_ == rhs.Denominator())
//      return Rational(numerator_ + rhs.Numerator(), denominator_);

//    return Rational(
//        numerator_ * rhs.Denominator() + rhs.Numerator() * denominator_,
//        denominator_ * rhs.Denominator());
//  }

//  Rational operator-(const Rational &rhs) {
//    if (denominator_ == rhs.Denominator())
//      return Rational(numerator_ - rhs.Numerator(), denominator_);

//    return Rational(
//        numerator_ * rhs.Denominator() - rhs.Numerator() * denominator_,
//        denominator_ * rhs.Denominator());
//  }

//  Rational operator*(const Rational &rhs) {
//    return Rational(numerator_ * rhs.numerator_,
//                    denominator_ * rhs.denominator_);
//  }

//  Rational operator/(const Rational &rhs) {
//    return Rational(numerator_ * rhs.denominator_,
//                    denominator_ * rhs.numerator_);
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

// int main_3() {
//  {
//    Rational a(2, 3);
//    Rational b(4, 3);
//    Rational c = a * b;
//    bool equal = c == Rational(8, 9);
//    if (!equal) {
//      cout << "2/3 * 4/3 != 8/9" << endl;
//      return 1;
//    }
//  }

//  {
//    Rational a(5, 4);
//    Rational b(15, 8);
//    Rational c = a / b;
//    bool equal = c == Rational(2, 3);
//    if (!equal) {
//      cout << "5/4 / 15/8 != 2/3" << endl;
//      return 2;
//    }
//  }

//  cout << "OK" << endl;
//  return 0;
//}
