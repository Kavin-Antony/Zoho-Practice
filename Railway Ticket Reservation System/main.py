from system import system

a = system()

while True:
    b = int(input())
    if b == 1:
        a.book()
    else:
        a.print_booked_ticket()