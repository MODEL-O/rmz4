@ FUN_0809cc88  entry 0x0809cc88  size 10
.thumb
.org 0x9cc88
FUN_0809cc88:
	push {lr}	@ 0009cc88 00b5
.org 0x9cc8a
	bl 0x1cff0	@ 0009cc8a 80f7b1f9
.org 0x9cc8e
	pop {r0}	@ 0009cc8e 01bc
.org 0x9cc90
	bx r0	@ 0009cc90 0047
