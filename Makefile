#Targetname : Dependent target names
#<TAB>command

Build:
	gcc -o demo.exe ./add_integers_v2.c ./test_add_integers.c ./unity.c

Run:
	./demo.exe