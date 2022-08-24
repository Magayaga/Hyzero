# Hyzero programming language — Pre-Alpha version of the Private
# Copyright 2022 Cyril John Magayaga (https://github.com/magayaga) (https://facebook.com/Cyrilnotes)
# Copyright 2001-2022 Python Software Foundation (https://www.python.org/psf)

import pkg_resources
import sys
import playsound

# PKG RESOURCES / SYS
try:
    dist = pkg_resources.get_distribution('playsound')
    print("{} ({}) is installed, to grab the shovel".format(dist.key, dist.version))
except pkg_resources.DistributionNotFound:
    print("I love, install me the {} or else we don't work".format('playsound'))
    sys.exit(0)

# PLAYSOUND
print("Hyzero Playsound (v0.0.3)") # Old version of Hyzero
print("created & developed by Cyril John Magayaga")

while True:
	text = input('Hyzero Playsound > ')
	if text.strip() == "": continue
	result, error = playsound.run('<stdin>', text)

	if error:
		print(error.as_string())
	elif result:
		if len(result.elements) == 1:
			print(repr(result.elements[0]))
		else:
			print(repr(result))