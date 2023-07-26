https://www.youtube.com/watch?v=P6RZZMu_maU

class Solution(object):
    def longestConsecutive(self, nums):
        numSet = set(nums)
        maxi = 0

        for num in nums:
            #check if it's the start of the sequence
            if (num - 1) not in numSet:
                length = 0
                while num + length in numSet:
                    length += 1
                maxi = max(maxi, length)
        return maxi