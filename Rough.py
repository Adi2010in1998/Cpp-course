a = int(input("Enter the upperbound: "))
li = list(range(2, a+1))
sq = list(range(2, int(a**0.5)+1))
for s in sq:
    for l in li[:]:
        if l != s and l % s == 0:
            li.remove(l)
print(li)

# li = []
# for i in range(2,a+1):
#     li.append(i)
# sq = []
# g = []
# for j in range(2,(int((a**0.5) + 1))):
#      sq.append(j)
# for l in li:
#     for s in sq:
#         if l % s == 0:
#             while l in li:
#                 li.remove(l)
# print(li)
# print(f"The prime numbers between 1 - {a} are {li}")
#The program is just removing even numbers, why? I don't know!