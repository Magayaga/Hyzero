# Hyzero programming language — Pre-Alpha version of the Private
# Copyright 2022-2025 Cyril John Magayaga (https://github.com/magayaga) (https://facebook.com/Cyrilnotes)
# Copyright 2001-2025 Python Software Foundation (https://www.python.org/psf)

import hyzero
import sys

program_name = "hyzero"
hyzero_version = "v0.1.6-beta5"
hyzero_date = "April 29, 2025"
hyzero_author = "Cyril John Magayaga"

print(f"{program_name} {hyzero_version} / {hyzero_date} - created & developed by {hyzero_author}")
print('Type "copyright" for more information.')

while True:
    text = input('Hyzero > ')
    if text.strip() == "": 
        continue

    elif text.strip() == "copyright":
        print("Copyright (c) 2022-2025 Cyril John Magayaga")
        continue

    elif text.strip() == "exit" or (text.strip() == "quit"):
        print("Use exit() or Ctrl-Z plus Return to exit")
        continue

    elif text.strip() == "exit()" or (text.strip() == "" and "\x11" in text):
        print("Exiting Hyzero programming language")
        break
    result, error = hyzero.run('<stdin>', text)

    if error:
        print(error.as_string())
    elif result:
        if len(result.elements) == 1:
            print(repr(result.elements[0]))
            
        else:
            print(repr(result))
