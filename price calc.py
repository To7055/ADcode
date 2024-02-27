yarder = int(input("what is the container size?"))
price = int(0)
tons = int(input("how much tons"))
fuelchange = int(0)
numbers = range(int(0),tons)

if yarder == 20:
         print("current price is 600")
         price = int(600)

        
elif yarder == 30:
        print("current price is 700")
        price = int(700)
        



def add_to_price(fuelchange):
        if price == 700:
                new_fuelchange = fuelchange + int(10)
                return new_fuelchange
        elif price == 600:
                new_fuelchange = fuelchange +int(10)
                return new_fuelchange
        
Total_fuelchange = add_to_price(fuelchange)

for numbers in numbers:

    def add_to_tons(price):
            new_price = price + int(70)     
            return new_price

    Total_price = add_to_tons(price)

        
     
    


        
print ( "plus", Total_fuelchange,"percent fuel change")
print("tons", tons)
print ("total price", Total_price)

   
           
    
    





     
         
    

