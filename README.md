# PB-and-JAM
Global Game Jam 2020

We will be using UE4 4.23. Any subversion should be fine. Make sure you go through the "Setting up your repo" steps below and can succesfully open the project and press Play BEFORE Friday!

Game Jam best practices:
1. Only commit changes to your branch. We will pull changes to development as we go.
2. Do not work on files that other people are working on. This will cause issues that may lead to loss of work. The exception to this is text-based and code (.h and .cpp) files.
4. Commit frequently. You don't have to push after every commit (but it doesn't hurt). Think of commits as checkpoints. Because thats literally what they are.
3. Yell for Damen if you have a problem or are unsure. Git isn't necessarily fragile, but "yolo"ing commands isn't a great idea either.

-- Setting up your repo --
1. Open a new folder on your desktop. 
2. click on the address bar and type "cmd" and hit enter.
3. Type the following: 
	git init
	git remote add origin https://github.com/dbirtola/PB-and-JAM.git
	git pull origin development
	git branch <branchname>		// Programmers please just use your first name here. Artists/designers use "art"
	git checkout <branchname>
	git pull origin development
4. You can now start working!
 


-- Submitting work --
[git add -<filename>] 		Adds <filename> file to your next commit
[git add -A]			Adds all changed files to your next commit
[git commit -m "<message>"]  	Commits your changes to the current branch. <message> should describe any changes made. The "" are required.
[git push -u origin <name>]	Push your commits to the remote repo. This is necessary for other people to get them.

-- Useful Commands --
[git reset --hard]		Resets EVERYTHING to the last commit. This is the "things are so broken its not even worth fixing them" button.
