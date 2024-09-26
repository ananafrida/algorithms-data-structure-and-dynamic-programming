#
# HackerRank - Cutting Metal Surplus
#
# The owner of a metal rod factory has a surplus of rods of arbitrary lengths. A local contractor offers to buy any of the factory's 
# surplus as long as all the rods have the same exact integer length, referred to as saleLength. The factory owner can increase the 
# number of sellable rods by cutting each rod zero or more times, but each cut has a cost denoted by costPerCut. After all cuts have 
# been made, any leftover rods having a length other than saleLength must be discarded for no profit. The factory owner's total profit 
# for the sale is calculated as:
#
#      totalProfit = totalUniformRods × saleLength × salePrice − totalCuts × costPerCut
#
# where totalUniformRods is the number of sellable rods, salePrice is the per unit length price that the contractor agrees to pay, and 
# totalCuts is the total number of times the rods needed to be cut.
#
# 
# Complete the function maxProfit. The function must return an integer that denotes the maximum possible profit.
# 
# maxProfit has the following parameter(s):
#    costPerCut:  integer cost to make a cut
#    salePrice:  integer per unit length sales price
#    lengths[lengths[0],...lengths[n-1]]:  an array of integer rod lengths
#
# Constraints
#
# 1 ≤ n ≤ 50
# 1 ≤ lengths[i] ≤ 104
# 1 ≤ salePrice, costPerCut ≤ 1000

def maxProfit(costPerCut, salePrice, lengths):
    max_profit = 0

    for sale_length in range(1, max(lengths) + 1):
        sale_price_per_rod = salePrice * sale_length
        profit = 0

        for rod_length in lengths:
            uniform_rods = rod_length // sale_length

            if uniform_rods > 0:
                extra_cut = 1 if rod_length % sale_length > 0 else 0
                total_cuts = uniform_rods - 1 + extra_cut

                costs = total_cuts * costPerCut
                revenues = uniform_rods * sale_price_per_rod

                if revenues > costs:
                    profit += revenues - costs

        if profit > max_profit:
            max_profit = profit

    return max_profit