def bad_indent():
  x= 1 # E101: indentation is not a multiple of four
  if x>0:
      print("This line is fine")   print("But this isn't") # E112: expected an indented block, E502: the backslash is unnecessary
     print("This line is over 100 characters long, and it just keeps going on and on and on and on and on and on and on and doesn't stop.")  # E501
  print("This line has trailing whitespace")     # W291

def another_func(): print("Multiple statements on one line"); print("This line is okay but the previous wasn't.") # E502