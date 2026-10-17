@ FUN_0803a39c  entry 0x0803a39c  size 20
.thumb
.org 0x3a39c
FUN_0803a39c:
	push {lr}	@ 0003a39c 00b5
.org 0x3a39e
	lsls r2, r1, #24	@ 0003a39e 0a06
.org 0x3a3a0
	lsrs r2, r2, #24	@ 0003a3a0 120e
.org 0x3a3a2
	adds r1, r0, #0	@ 0003a3a2 011c
.org 0x3a3a4
	adds r1, #180	@ 0003a3a4 b431
.org 0x3a3a6
	ldrb r1, [r1, #15]	@ 0003a3a6 c97b
.org 0x3a3a8
	bl 0x44660	@ 0003a3a8 0af05af9
.org 0x3a3ac
	pop {r1}	@ 0003a3ac 02bc
.org 0x3a3ae
	bx r1	@ 0003a3ae 0847
