yarder = int(input("what is the container size?"))
price = int(0)
tons = int(input("how much tons"))
fuelchange = int(0)
overcharge = int(0)

if yarder == 20:
         print("original price is 600")
         price = int(600)

        
elif yarder == 30:
        print("original price is 700")
        price = int(700)
        



def add_to_price(fuelchange):
        if price == 700:
                new_fuelchange = fuelchange + int(10)
                return new_fuelchange
        elif price == 600:
                new_fuelchange = fuelchange +int(10)
                return new_fuelchange
        
Total_fuelchange = add_to_price(fuelchange)



if  int(6) < tons:
    overcharge = tons - int(6)
            
           


def add_to_tons(price):
            new_price = price + int(70 * overcharge)     
            return new_price

Total_price = add_to_tons(price)

        
     
    


        
print ( "plus", Total_fuelchange,"percent fuel change")
print("tons", tons)
print ("excess tons",overcharge)
print ("total price $",Total_price)
