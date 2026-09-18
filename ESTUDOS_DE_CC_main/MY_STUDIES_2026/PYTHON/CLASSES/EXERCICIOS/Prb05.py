#Create a class named Dog.
#Inside it, define an __init__ method that takes name and breed as parameters and assigns them to instance variables. 
#Create an object of this class and print its attributes.

class Dog():
    def __init__(self,name,breed):
        self._breed=breed
        self._name=name
        

puppie=Dog("Rex","Chiuahua")

print("Breed: ",puppie._breed)
print("Chiauhua: ",puppie._name)
