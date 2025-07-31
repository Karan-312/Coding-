# import math

# sum_odd_digits = []
# # even_sum_when_greater_than_10 = []
# # even_sum_when_lower_than_10 =[]
# # final_even_sum=[] 
# sum_even_digits = []
# saving_card_number=[]
# total = []
# totalsum =0 

# card_number = input(" enter a credit card no. : ")
# card_number = card_number.replace("-","")
# card_number = card_number.replace(" ","")

# for v in card_number :
#     saving_card_number.append(v)
# saving_card_number.reverse()

# for y in saving_card_number:
#     if int(y)%2==0:
#         z = y * 2 
#         if int(z) >=10:
#             z=(1+(int(z)%10))
#             sum_even_digits.append(z)
#         else:
#             sum_even_digits.append(z)
#         # y = y * 2 
#         # if int(y) >= 10:
#         #    even_sum_when_greater_than_10.append(y)
#         # else:
#         #     even_sum_when_lower_than_10.append(y)
#     else:
#         y = int(y)
#         sum_odd_digits.append(y)


# total = sum_even_digits + sum_odd_digits

# for x in total:
#     totalsum = totalsum + int(x)

# if totalsum % 10 == 0:
#     print("VALID FINALLY😭😭😭")
# else:
#     print("PLEASE ATLEAST ENTER YOU CREDIT CARD NUMBER COORECT YOU CANT BE THAT DUMB , IT TOOK ME 2 HOURS TO BUILD , YOU CANT EVEN PUT A DAMN NUMBER CORRECT , DUMBASSSS !!!!!")
# # print(total)
# # print(sum_even_digits)
# # list_checker_for_x_greater_than_10=[]

# # for x in sum_even_digits:
# #     if x >= 10 :
# #         x = (1 +(x%10))
       

# # print(sum_even_digits)
















# card_number = card_number[::-1]

# for x in card_number[::2]:
#     sum_odd_digits == sum_odd_digits + int(x)

# for y in card_number[1::2]:
#     y = int(y) * 2
#     if y >= 10:
#         sum_even_digits += (1+(y%10))
#     else:
#         sum_even_digits += y 

# total = sum_even_digits+sum_even_digits

# if total % 10 == 0:
#     print("valid")
# else:
#     print("invalid")

# for char in card_number :
#     saving_card_number.append(char)
#     if(  == 0):
#         sum_even_digits.append(char)
#     else:
#         sum_odd_digits.append(char)

# print(sum_odd_digits)
