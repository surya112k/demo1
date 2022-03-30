#Targetname : Dependent target names
#<TAB>command

Build:
	gcc -o demo1.exe .\add_integers_v2.c .\test_add_integers.c .\unity\unity.c -Iunity

Run:
	.\demo1.exe