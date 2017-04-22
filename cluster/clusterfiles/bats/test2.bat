@echo off
SetLocal

set B= N1 N2 N3 N4
set A= P1 P2 P3 P4

FOR %%b in (%B%) do (
    FOR %%a in (%A%) DO (

        echo %%b -^> %%a
        echo this is where you execute the functions
  
    )
)

PAUSE