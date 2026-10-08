class Solution:
    def trap(self, height: List[int]) -> int:
        if not height: return 0
        water = 0
        i, j = 0, len(height) - 1
        left_max, right_max = height[i], height[j]
        while i < j:
            if left_max <= right_max:
                i += 1
                left_max = max(left_max, height[i])
                water = water + left_max - height[i]
            else:
                j -= 1
                right_max = max(right_max, height[j])
                water = water + right_max - height[j]

        return water