# write a function that takes two strings such as s1 and s2
# and returns the longest common subsequence of s1 and s2

# "ABAZDC"    and    "BACBAD"   ==> "ABAD"
# "AGGTAB"    and    "GXTXAYB"  ==> "GTAB"
# "aaaa"      and    "aa"       ==> "aa"

def function(s1="", s2=""):
    res = []
    # code goes here
    temp = ""
    for i in range(s1.__len__()):
        for p1 in range(i, s1.__len__()):
            pointer = 0
            for p2 in range(0, s2.__len__()):
                if s1[p1] == s2[p2] and p2 >= pointer:
                    temp += s1[p1]
                    pointer = p2
                    break
            res.append(temp)
        temp = ""


    final = ""
    max_len = 0
    for i in res:
        if i.__len__() > max_len:
            max_len = i.__len__()
            final = i
    return final


if __name__ == "__main__":
    res = function("AGGTAB", "GXTXAYB")
    print (res)
