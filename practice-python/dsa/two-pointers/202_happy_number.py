class Solution:
    def isHappy(self, n : int) -> bool:
        str_n = str(n)
        if len(str_n) == 1: return False


def main():
    solution = Solution()
    print(solution.isHappy(1))

if __name__ == "__main__":
    main()