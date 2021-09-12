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
  //q1
  // Please create your functions here.
  //q3
  void SwapByRefernce(float &input1, float &input2);
  void SwapByPointer(float *input1, float *input2);

  //q4
  void UniqueVectorNotBySet(std::vector<int> &input);
  void UniqueVectorBySet(std::vector<int> &input);
  std::vector<int> ReverseVectorByStack(std::vector<int> &input);
  void ReverseString(std::string &input);
  void PrimeVector(std::vector<int> &input);
  std::vector<int> UnionVectors(std::vector<int> &input1, std::vector<int> &input2);

  //q5
  void ToUpper(std::string& input);

  //q6 
  int findLucky(std::vector<int> &input);

  //q7
  std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs);

  //q8
  void kthPeek(std::vector<int> &input, int k);

  private : 
};

#endif
