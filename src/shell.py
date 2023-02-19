# Hyzero programming language — Pre-Alpha version of the Private
# Copyright 2022-2023 Cyril John Magayaga (https://github.com/magayaga) (https://facebook.com/Cyrilnotes)
# Copyright 2001-2023 Python Software Foundation (https://www.python.org/psf)

import hyzero

print("Hyzero v0.1.6-beta1 (February 19, 2023) - created & developed by Cyril John Magayaga")

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
