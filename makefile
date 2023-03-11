# Hyzero programming language — Pre-Alpha version of the Private
# Copyright 2022-2023 Cyril John Magayaga (https://github.com/magayaga) (https://facebook.com/Cyrilnotes)
# Copyright 2001-2023 Python Software Foundation (https://www.python.org/psf)

cyneo:
	cc src/docs/c/chyzero.c -o chyzero
	cc src/docs/c/hyzero-copyright.c -o hyzeroCopyright
	cc src/docs/c/hyzero-help.c -o hyzeroHelp
	cc src/docs/c/hyzero-release -o hyzeroRelease
	cc src/docs/c/hyzero-version.c -o hyzeroVersion