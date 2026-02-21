class ticket_available:
    def __init__(self):
        self.lower = 21
        self.upper = 21
        self.middle = 21
        self.RAC = 18
        self.waiting_list = 10
        self.booked = set()
    
    def book_upper(self,user):
        if self.upper > 0:
            self.upper -= 1
            user.ticket_no = "UPR" + str(21 - self.upper)
        elif self.middle > 0:
            self.middle -= 1
            user.ticket_no = "MID" + str(21 - self.middle)
        elif self.lower > 0:
            self.lower -= 1
            user.ticket_no = "LWR" + str(21 - self.lower)
        elif self.RAC > 0:
            self.RAC -= 1
            user.ticket_no = "RAC" + str(18 - self.RAC)
        else:
            self.waiting_list -= 1
            user.ticket_no = "WL_" + str(10 - self.waiting_list)
        self.booked.add(user.ticket_no)
        return user
    
    def book_lower(self,user):
        if self.lower > 0:
            self.lower -= 1
            user.ticket_no = "LWR" + str(21 - self.lower)
        elif self.middle > 0:
            self.middle -= 1
            user.ticket_no = "MID" + str(21 - self.middle)
        elif self.upper > 0:
            self.upper -= 1
            user.ticket_no = "UPR" + str(21 - self.upper)
        elif self.RAC > 0:
            self.RAC -= 1
            user.ticket_no = "RAC" + str(18 - self.RAC)
        else:
            self.waiting_list -= 1
            user.ticket_no = "WL_" + str(10 - self.waiting_list)
        self.booked.add(user.ticket_no)
        return user

    def book_middle(self, user):
        if self.middle > 0:
            self.middle -= 1
            user.ticket_no = "MID" + str(21 - self.middle)
        elif self.upper > 0:
            self.upper -= 1
            user.ticket_no = "UPR" + str(21 - self.upper)
        elif self.lower > 0:
            self.lower -= 1
            user.ticket_no = "LWR" + str(21 - self.lower)
        elif self.RAC > 0:
            self.RAC -= 1
            user.ticket_no = "RAC" + str(18 - self.RAC)
        else:
            self.waiting_list -= 1
            user.ticket_no = "WL_" + str(10 - self.waiting_list)
        self.booked.add(user.ticket_no)
        return user        
    
