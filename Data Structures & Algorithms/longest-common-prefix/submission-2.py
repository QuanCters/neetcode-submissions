class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0: return ""
        for x in range(len(strs[0])):
            char = strs[0][x]
            for y in strs[1:]:
                if x == len(y) or y[x] != char:
                    return strs[0][:x]

        return strs[0]