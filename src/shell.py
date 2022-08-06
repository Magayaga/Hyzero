# Hyzero programming language — Pre-Alpha version of the Private
# Copyright 2022 Cyril John Magayaga (https://github.com/magayaga) (https://facebook.com/Cyrilnotes)
# Copyright 2001-2022 Python Software Foundation (https://www.python.org/psf)

import hyzero

print("Hyzero programming language (v0.0.2) — created and developed by Cyril John Magayaga (https://github.com/magayaga)")
print("Motto: You are most popular, beautiful, and colorful programming language!")

while True:
	text = input('Hyzero > ')
	if text.strip() == "": continue
	result, error = hyzero.run('<stdin>', text)

	if error:
		print(error.as_string())
	elif result:
		if len(result.elements) == 1:
			print(repr(result.elements[0]))
		else:
			print(repr(result))
