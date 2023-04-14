"""
There are total n number of monkeys sitting on the branches of a huge tree. As travelers offer Bananas and Penuts, the monkeys jump down the tree.

If every Monday can eat k Banannas and j Peanuts. If total m number of Bananas and p number of Peanuts are offered by travelers, calculate how many Monkeys remain on the tree after some of them jumped down to eat.

At a time one Monday gets down and finishes eating and go to the other side of the road. The Monkey who climbed down does not climb up again after eating until the other Monkeys finish eating.

Monkey can either eat k Bananas or j Peanuts.

Write a code to take inputs as n, m, p, k, j and return the number of Monkeys left on the tree.
where n = total no of monkeys
k = number of eatable bananas by single monkey
j = number of eatable Peanuts by single monkey
m = total no of bananas
p = total no of peanuts
remember that the monkeys always eat bananas and peanuts, so there is no possibility of k and j having a value zero

Example:
input:
20
2
3
12
12

output:
no of monkeys left on the tree: 10

for any wrong input display INVALID INPUT

"""

n = int(input())
k = int(input())
j = int(input())
m = int(input())
p = int(input())

if n<0 or k<0 or j<0 or m<0 or p<0 :
    print("Invalid input")
else:
    atebanana = m/k
    atepeanut = p/j
    n = n-atebanana - atepeanut
    print("No of monkeys left on the tree:", n)