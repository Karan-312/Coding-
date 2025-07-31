#exception handling  =  an event that interupts the flow of a prorgam
# (ZeroDivisionError,TypeError,ValueError)
# 1.try 2.except 3.finally
try:
    number = int(input("enter a number :"))
    print(1/number)
except ZeroDivisionError :
    print("you cant divide by zero DUMMY!!")
except ValueError:
    print(" enter only number RETARD")
except Exception:
    print("somethign went wrong")
finally:
    print("DO SOME CLEANUP")