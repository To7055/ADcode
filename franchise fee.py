franchise = input("which city is the order coming from")
print (franchise)
city = int(0)
price = int(600)

if franchise == "Coral Gables":
        city = int(22)

elif franchise == "Fort Lauderdale":
        city = int(25)

elif franchise == "Doral":
        city = int(10)

elif franchise == "Miami Beach":
        city = int(17)

elif franchise == "Miami Gardens":
        city = int(20)

elif franchise == "North Miami":
        city = int(20)
    
elif franchise == "Sweetwater":
        city = int(20)
        
print (city)

def calc_percent(price):
        if city == 20:
            new_price = price* float(20/100)
            return new_price
        elif city == 22:
                new_price = price* float(22/100)
                return new_price
        elif city == 25:
                new_price = price* float(25/100)
                return new_price
        elif city == 10:
                new_price = price* float(10/100)
                return new_price
        elif city == 17:
                new_price = price* float(17/100)
                return new_price

                
        
total_franchisefee = calc_percent(price)

        

print (total_franchisefee)
 



