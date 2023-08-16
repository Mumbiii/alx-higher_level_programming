#!/usr/bin/python3
def uniq_add(my_list=[]):
    unique_values = set()
    total = 0

    for num in my_list:
        if num not in unique_values:
            unique_values.add(num)
            total += num

    return total
