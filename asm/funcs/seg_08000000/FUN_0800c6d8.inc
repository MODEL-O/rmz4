@ FUN_0800c6d8  entry 0x0800c6d8  size 62
.thumb
.org 0xc6d8
FUN_0800c6d8:
	push {r4, lr}	@ 0000c6d8 10b5
.org 0xc6da
	sub sp, #8	@ 0000c6da 82b0
.org 0xc6dc
	lsls r0, r0, #4	@ 0000c6dc 0001
.org 0xc6de
	lsrs r0, r0, #16	@ 0000c6de 000c
.org 0xc6e0
	lsls r1, r1, #4	@ 0000c6e0 0901
.org 0xc6e2
	ldr r3, [pc, #52]	@ 0000c6e2 0d4b
.org 0xc6e4
	asrs r1, r1, #16	@ 0000c6e4 0914
.org 0xc6e6
	adds r2, r1, #0	@ 0000c6e6 0a1c
.org 0xc6e8
	adds r2, #90	@ 0000c6e8 5a32
.org 0xc6ea
	lsls r2, r2, #16	@ 0000c6ea 1204
.org 0xc6ec
	ldr r4, [pc, #44]	@ 0000c6ec 0b4c
.org 0xc6ee
	orrs r2, r0	@ 0000c6ee 0243
.org 0xc6f0
	str r2, [sp, #0]	@ 0000c6f0 0092
.org 0xc6f2
	ldr r2, [sp, #4]	@ 0000c6f2 019a
.org 0xc6f4
	ands r2, r3	@ 0000c6f4 1a40
.org 0xc6f6
	movs r3, #1	@ 0000c6f6 0123
.org 0xc6f8
	orrs r2, r3	@ 0000c6f8 1a43
.org 0xc6fa
	ands r2, r4	@ 0000c6fa 2240
.org 0xc6fc
	movs r3, #128	@ 0000c6fc 8023
.org 0xc6fe
	lsls r3, r3, #9	@ 0000c6fe 5b02
.org 0xc700
	orrs r2, r3	@ 0000c700 1a43
.org 0xc702
	str r2, [sp, #4]	@ 0000c702 0192
.org 0xc704
	lsls r0, r0, #16	@ 0000c704 0004
.org 0xc706
	asrs r0, r0, #16	@ 0000c706 0014
.org 0xc708
	mov r2, sp	@ 0000c708 6a46
.org 0xc70a
	bl 0x736c	@ 0000c70a faf72ffe
.org 0xc70e
	add sp, #8	@ 0000c70e 02b0
.org 0xc710
	pop {r4}	@ 0000c710 10bc
.org 0xc712
	pop {r0}	@ 0000c712 01bc
.org 0xc714
	bx r0	@ 0000c714 0047
