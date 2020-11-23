n = input()
rmd4 = int(n) % 4
rmd7 = int(n) % 7
rmd47 = int(n) % 47
flag = True
if (rmd4 == 0 or rmd7 == 0 or rmd47 == 0):
    print("YES")
else:
    inptSet = set(n)
    if ((len(inptSet) == 2) and ('4' in inptSet) and ('7' in inptSet)):
        print("YES")
    else:
        print("NO")
