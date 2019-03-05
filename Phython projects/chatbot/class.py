class Person:
    name="Adilbek"
    def pr(self):
        return self.name
    def kosh(self,stat):
        return self.name+stat
    def chyk(self,a,b,c):
        return a+b+c
ad=Person()
print(ad.pr())
print(ad.chyk(3,4,5))
print(ad.kosh(" student"))
def display_info(name, age):
    print("Name:", name, "\t", "Age:", age)
     
display_info("Tom", 22)
