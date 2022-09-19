def rev_string(string: 'list[str]'):
    ind = 0
    rind = len(string) - 1

    while not (ind >= rind):
        c = string[ind]
        string[ind] = string[rind]
        string[rind] = c
        ind += 1
        rind -= 1

str1 = list("abcde") # 5 chars
str2 = list("abcdef") # 6 chars

print("str1 %s" % str1)
print("str2 %s" % str2)
print("---")
rev_string(str1)
rev_string(str2)
print("str1 %s" % str1)
print("str2 %s" % str2)
