class ticket:
    def __init__(self, name, age, gender, berth_preference):
        self.name = name
        self.age = age
        self.gender = gender
        self.berth_preference = berth_preference
        self.child = True if age < 5 else False
        self.senior = True if age > 60 else False
        self.children = []
        self.ticket_no = ""
        self.mother_with_child = False
    