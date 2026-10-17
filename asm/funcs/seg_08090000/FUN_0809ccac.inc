@ FUN_0809ccac  entry 0x0809ccac  size 10
.thumb
.org 0x9ccac
FUN_0809ccac:
	push {lr}	@ 0009ccac 00b5
.org 0x9ccae
	bl 0x1cff0	@ 0009ccae 80f79ff9
.org 0x9ccb2
	pop {r0}	@ 0009ccb2 01bc
.org 0x9ccb4
	bx r0	@ 0009ccb4 0047
