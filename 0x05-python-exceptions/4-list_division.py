#!/usr/bin/python3

def list_division(my_list_1, my_list_2, list_length):
    result = []
    for i in range(list_length):
        try:
            value_1 = my_list_1[i] if i < len(my_list_1) else 0
            value_2 = my_list_2[i] if i < len(my_list_2) else 0
            
            if type(value_1) not in (int, float) or type(value_2) not in (int, float):
                raise TypeError("wrong type")
            
            if value_2 == 0:
                raise ZeroDivisionError("division by 0")
            
            result.append(value_1 / value_2)
        except ZeroDivisionError:
            print("division by 0")
            result.append(0)
        except TypeError:
            print("wrong type")
            result.append(0)
        except IndexError:
            print("out of range")
            result.append(0)
    return result
