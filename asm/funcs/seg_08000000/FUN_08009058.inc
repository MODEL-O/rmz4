@ FUN_08009058  entry 0x08009058  size 24
.thumb
.org 0x9058
FUN_08009058:
	push {lr}	@ 00009058 00b5
.org 0x905a
	asrs r0, r0, #2	@ 0000905a 8010
.org 0x905c
	movs r2, #128	@ 0000905c 8022
.org 0x905e
	lsls r2, r2, #4	@ 0000905e 1201
.org 0x9060
	adds r0, r0, r2	@ 00009060 8018
.org 0x9062
	cmp r1, r0	@ 00009062 8142
.org 0x9064
	blt.n 0x906a	@ 00009064 01db
.org 0x9066
	movs r0, #0	@ 00009066 0020
.org 0x9068
	b.n 0x906c	@ 00009068 00e0
.org 0x906a
	mvns r0, r1	@ 0000906a c843
.org 0x906c
	pop {r1}	@ 0000906c 02bc
.org 0x906e
	bx r1	@ 0000906e 0847
