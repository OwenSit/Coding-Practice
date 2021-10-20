from typing import List
###########start modifing###############################
def nextGreaterElement(nums1: List[int], nums2: List[int]) -> List[int]:
  result = []
  for i in nums1:
      found = False
      
      # locate index in nums2, store in j
      j = nums2.index(i)
      
      # iterate through the remaining items in nums2
      for k in nums2[j:]:
          if k > i:
              found = True
              result.append(k)
              break
      if not found:
          result.append(-1)
      
  return result

############stop modifing###############################

############do not change the code below################

def main():
  NUMS1 = [4,1,2]
  NUMS2 = [1,3,4,2]

  output = nextGreaterElement(NUMS1, NUMS2)
  print(f'the result list is {output}.')

if __name__=="__main__":
  main()
