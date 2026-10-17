@ FUN_0800902c  entry 0x0800902c  size 18
.thumb
.org 0x902c
FUN_0800902c:
	push {lr}	@ 0000902c 00b5
.org 0x902e
	asrs r0, r0, #2	@ 0000902e 8010
.org 0x9030
	cmp r1, r0	@ 00009030 8142
.org 0x9032
	blt.n 0x9038	@ 00009032 01db
.org 0x9034
	movs r0, #0	@ 00009034 0020
.org 0x9036
	b.n 0x903a	@ 00009036 00e0
.org 0x9038
	mvns r0, r1	@ 00009038 c843
.org 0x903a
	pop {r1}	@ 0000903a 02bc
.org 0x903c
	bx r1	@ 0000903c 0847
