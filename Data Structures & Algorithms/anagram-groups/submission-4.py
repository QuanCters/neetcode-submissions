class Solution:
    def toArr(self, string: str) -> tuple:
        result = [0] * 26
        for x in string:
            result[ord(x) - ord("a")] += 1
        return tuple(result)

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = dict()
        for string in strs:
            temp = self.toArr(string)

            if temp not in result:
                result[temp] = []
            result[temp].append(string)

        return list(result.values())