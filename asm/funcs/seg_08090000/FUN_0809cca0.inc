@ FUN_0809cca0  entry 0x0809cca0  size 10
.thumb
.org 0x9cca0
FUN_0809cca0:
	push {lr}	@ 0009cca0 00b5
.org 0x9cca2
	bl 0x1cff0	@ 0009cca2 80f7a5f9
.org 0x9cca6
	pop {r0}	@ 0009cca6 01bc
.org 0x9cca8
	bx r0	@ 0009cca8 0047
