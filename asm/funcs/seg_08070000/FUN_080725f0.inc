@ FUN_080725f0  entry 0x080725f0  size 20
.thumb
.org 0x725f0
FUN_080725f0:
	push {lr}	@ 000725f0 00b5
.org 0x725f2
	ldr r2, [pc, #16]	@ 000725f2 044a
.org 0x725f4
	ldrb r1, [r0, #14]	@ 000725f4 817b
.org 0x725f6
	lsls r1, r1, #2	@ 000725f6 8900
.org 0x725f8
	adds r1, r1, r2	@ 000725f8 8918
.org 0x725fa
	ldr r1, [r1, #0]	@ 000725fa 0968
.org 0x725fc
	bl 0x128f80	@ 000725fc b6f0c0fc
.org 0x72600
	pop {r0}	@ 00072600 01bc
.org 0x72602
	bx r0	@ 00072602 0047
