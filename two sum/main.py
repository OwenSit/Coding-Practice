from typing import List

##########start modifying######################
def twoSum(nums: List[int], target: int) -> List[int]:
  hashmap = {}
  for i in range(len(nums)):
      if nums[i] in hashmap:
          return [hashmap[nums[i]], i]
      complement = target - nums[i]
      hashmap[complement] = i
  return [-1,-1]
###########end modifying########################

##########do not change the code below##########
# driver code 
def main():

  # declare the testcase
  NUM_LIST = [2, 7, 11, 15]
  TARGET_INT = 9

  # pass into function
  result_list = twoSum(NUM_LIST, TARGET_INT)
  print(f'the result is [{result_list[0]}, {result_list[1]}].\n')

# Using the special variable 
# __name__
if __name__=="__main__":
    main()