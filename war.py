def long_lines():
    x= 1 # E101: indentation is not a multiple of four
    if x>0:
        print("This line is over 100 characters long, and it just keeps going on and on and on and on and on and on and on and doesn't stop.")
    print("This line has trailing whitespace")

def another_func(): print("Multiple statements on one line"); print("This line is okay but the previous wasn't.") # E502

def say_hello():
    print("hello from war.py!")  