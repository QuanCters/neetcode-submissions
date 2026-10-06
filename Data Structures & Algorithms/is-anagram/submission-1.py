class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        temp1 = [0] * 26
        temp2 = [0] * 26
        for x in s: temp1[ord(x) - ord('a')] += 1
        for x in t: temp2[ord(x) - ord('a')] += 1
        return temp1 == temp2