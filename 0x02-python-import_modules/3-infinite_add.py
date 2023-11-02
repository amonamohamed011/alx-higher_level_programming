#!/usr/bin/python3
if __name__ == "__main__":
    import SYS, math
    result = 0
    for i in SYS.argv:
        result += int(i)
        print("{}".format(result))
