@ FUN_0801ebd0  entry 0x0801ebd0  size 28
.thumb
.org 0x1ebd0
FUN_0801ebd0:
	push {lr}	@ 0001ebd0 00b5
.org 0x1ebd2
	lsls r0, r0, #16	@ 0001ebd2 0004
.org 0x1ebd4
	lsrs r1, r0, #16	@ 0001ebd4 010c
.org 0x1ebd6
	cmp r1, #64	@ 0001ebd6 4029
.org 0x1ebd8
	bhi.n 0x1ebe8	@ 0001ebd8 06d8
.org 0x1ebda
	ldr r2, [pc, #16]	@ 0001ebda 044a
.org 0x1ebdc
	ldrh r0, [r2, #14]	@ 0001ebdc d089
.org 0x1ebde
	adds r1, r0, r1	@ 0001ebde 4118
.org 0x1ebe0
	ldr r0, [pc, #12]	@ 0001ebe0 0348
.org 0x1ebe2
	cmp r1, r0	@ 0001ebe2 8142
.org 0x1ebe4
	bgt.n 0x1ebe8	@ 0001ebe4 00dc
.org 0x1ebe6
	strh r1, [r2, #14]	@ 0001ebe6 d181
.org 0x1ebe8
	pop {r0}	@ 0001ebe8 01bc
.org 0x1ebea
	bx r0	@ 0001ebea 0047
