class person:
    name=""
    surname=""
    age=0
    def setage(self,age):
        self.age=age
    def setname(self,name):
        self.name=name
    def setsurname(self,name):
        self.surname=name
adam=person()
adam.setname("Temirlan")
adam.setage(21)
if adam.age<=40:
 print(adam.age)
 print(adam.name)
