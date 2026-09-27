class Solution:
    def rearrangeArray(self, nums: list[int]) -> list[int]:
        ans = list()
        while (len(nums) != 0):
            dist = list()
            pointer = 0
            while pointer <= len(nums)-1:
                if nums[pointer] not in dist:
                    dist.append(nums.pop(pointer))
                    pointer -= 1
                pointer += 1
            dist.sort()
            ans += dist
        return ans