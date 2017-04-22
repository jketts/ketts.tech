@echo off
for /L %%n in (1,1,3) do (
	echo I'm in a loop!
	echo This is loop number %%n
	echo Oh yes.
	if %%n EQU 3 (echo THIS IS THE LAST TIME I SHOULD RUN!!!)
)

PAUSE