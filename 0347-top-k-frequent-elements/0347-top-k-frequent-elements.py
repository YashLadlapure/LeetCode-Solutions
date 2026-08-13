class Solution(object):
    def topKFrequent(self, nums, k):
        count = {}

        # Count each number's frequency
        for num in nums:
            count[num] = count.get(num, 0) + 1

        # Create buckets after counting is complete
        freq = [[] for _ in range(len(nums) + 1)]

        # Put each number into the bucket matching its frequency
        for num, frequency in count.items():
            freq[frequency].append(num)

        result = []

        # Start from the biggest frequency and move backward
        for frequency in range(len(freq) - 1, 0, -1):
            for num in freq[frequency]:
                result.append(num)

                if len(result) == k:
                    return result