import datetime

# date =  datetime.date(2025,1,23)

# today = datetime.date.today()

# time = datetime.time(12,30,0)

# now = datetime.datetime.now()

# now = now.strftime("%H:%M:%S %m-%d-%Y")

# print(now)

tareget_datetime = datetime.datetime(2025 , 7, 23 , 9 , 00 , 00)
current_datetime = datetime.datetime.now()

if tareget_datetime < current_datetime :
    print("target date has passed")
else:
    print("target date has not passed")
