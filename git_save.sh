# git_save.sh
# Saves git local repository for PIC-10A
# to GitHub

# To run git_save.sh:
# Type "bash git_save.sh"
# in BASH and press ENTER.

#!/bin/bash

	#Download everything from GitHub to local repostory

	git pull
	
	git add .

	git commit -m PIC-10A

	git push origin PIC-10A
