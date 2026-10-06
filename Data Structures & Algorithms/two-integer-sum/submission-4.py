class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        myDict = dict()
        for x in range(0, len(nums)):
            if target - nums[x] in myDict:
                return [myDict[target-nums[x]], x]
            myDict[nums[x]]= x
        return []