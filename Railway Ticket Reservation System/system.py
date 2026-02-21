from ticket_details import ticket
from ticket_available import ticket_available

class system:
    
    def __init__(self):
        self.people = []
        self.system = ticket_available()

    def book(self):
        men = []
        child = []
        women = []
        n = int(input("Enter no. of people:"))
        for _ in range(n):
            name = input("Enter your name:")
            age = int(input("Enter your age:"))
            gender = input("Enter gender:")
            if age < 5:
                berth_preference = 0
            else:
                berth_preference = int(input("Enter berth preference\n1.Lower\n2.Middle\n3.Upper"))
            tick = ticket(name, age, gender, berth_preference)
            if tick.child:
                child.append(tick)
            elif gender == "male":
                men.append(tick)
            else:
                women.append(tick)
        if child and women:
            for i in child:
                women[0].children.append(i)
            women[0].mother_with_child = True
        elif child and men:
            for i in child:
                men[0].children.append(i)

        for i in men + women:
            if i.berth_preference == 1 or i.senior or i.mother_with_child:
                self.people.append(self.system.book_lower(i))
            elif i.berth_preference == 2:
                self.people.append(self.system.book_middle(i))
            elif i.berth_preference == 3:
                self.people.append(self.system.book_upper(i))
        
    def print_booked_ticket(self):
        for i in self.people:
            print("Name:",i.name)
            print("Age:", i.age)
            print("Gender:", i.gender)
            if i.children:
                print("Children:")
                for j in i.children:
                    print("\tName:",j.name)
                    print("\tAge:", j.age)
                    print("\tGender:", j.gender)
            print("Ticket No:", i.ticket_no)

