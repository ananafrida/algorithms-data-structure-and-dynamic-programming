# cyclic shift of digit question O(n^2) solution
# a cyclic shift is the operation of rearranging the digits in a number(in decimal format) by moving some digits at the end of the number to before the beginning of the number and moving all other digits to the next position. Given two integers of the same length a and b, a would be cyclic pair of b if it's possible for a to become equal to b after performing cyclic shifts on a - moving 0 or more ending digits to the beginning while shifting all other digits to the next position in the same order. 

# given an array of positive integers a, your task is to count the number of cyclic pairs i and j (where 0 <= i < j < a.length ), such that a[i] and a[j] have the same number of digits and a[i] is equal to the cyclic shift of a[j].

# example:
# for a = [13, 5604, 31, 2, 13, 4560, 546, 654, 456], the output should be solution(a) =5

# input: an array of positive integers
# output: integer64


numbers = [1, 10, 100, 1000]
# shift_pairs = [(13,31),(13,13),(5604,4560),(31,13),(546,654)]
pairsFound = 0
for i in range(len(numbers)):
    number = numbers[i]
    length = len(str(number))
    numberToRotate = number
    shift_remaining = length - 1
    temp_list = numbers[i+1:]
    while(shift_remaining >= 0):
        t_remainder = numberToRotate % 10 # 4
        numberToRotate = numberToRotate // 10 # 560
        numberToRotate = numberToRotate + t_remainder * 10 **(length-1) # 4560
        # we should also check for length for cases like 4560, where on a shift we get 456
        if(numberToRotate in temp_list and len(str(numberToRotate)) == length):
            print("({},{})".format(number,numberToRotate))
            pairsFound += 1
        shift_remaining -= 1
print("no of pairs:", pairsFound)