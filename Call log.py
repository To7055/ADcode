#call recived
Date = input("Today's Date?")
Time = input("Time?")
Name = input("what is clients name?")
User = input ("who is making order?")
phonenumber = input("phone number?")
adress = input("Adress?")
CustomerList = [("tony"),("Ernesto")]
billinginfo = int(95)

if Name in CustomerList:
    print (billinginfo)
else:
    newbillinginfo = input("what is your billing info")
    