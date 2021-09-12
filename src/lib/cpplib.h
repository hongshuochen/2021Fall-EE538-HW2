#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  // q1
  // Please create your functions here.
  // q3
  void SwapByRefernce(float& input1, float& input2);
  void SwapByPointer(float* input1, float* input2);

  // q4
  void UniqueVectorNotBySet(std::vector<int>& input);
  void UniqueVectorBySet(std::vector<int>& input);
  void ReverseVector(std::vector<int>& input);
  void PrimeVector(std::vector<int>& input);
  std::vector<int> IntersectVectors(std::vector<int>& input1, std::vector<int>& input2);

  // q5
  void ToUpper(std::string& input);

  // q6
  bool canBePalindrome(const std::string& str);

  // q7
  void Rearrange(std::vector<int>& input, int k);

  // q8
  bool Match(const std::string& pattern, const std::vector<std::string>& strs);
};

#endif
