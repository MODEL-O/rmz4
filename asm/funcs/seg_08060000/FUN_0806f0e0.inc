@ FUN_0806f0e0  entry 0x0806f0e0  size 64
.thumb
.org 0x6f0e0
FUN_0806f0e0:
	push {lr}	@ 0006f0e0 00b5
.org 0x6f0e2
	ldr r2, [r0, #44]	@ 0006f0e2 c26a
.org 0x6f0e4
	ldr r1, [r0, #12]	@ 0006f0e4 c168
.org 0x6f0e6
	ldr r1, [r1, #44]	@ 0006f0e6 c96a
.org 0x6f0e8
	ldr r0, [r0, #20]	@ 0006f0e8 4069
.org 0x6f0ea
	movs r3, #1	@ 0006f0ea 0123
.org 0x6f0ec
	ands r0, r3	@ 0006f0ec 1840
.org 0x6f0ee
	cmp r0, #0	@ 0006f0ee 0028
.org 0x6f0f0
	beq.n 0x6f11c	@ 0006f0f0 14d0
.org 0x6f0f2
	ldr r0, [r1, #84]	@ 0006f0f2 486d
.org 0x6f0f4
	ldr r1, [r2, #84]	@ 0006f0f4 516d
.org 0x6f0f6
	cmp r0, r1	@ 0006f0f6 8842
.org 0x6f0f8
	bge.n 0x6f104	@ 0006f0f8 04da
.org 0x6f0fa
	adds r1, r2, #0	@ 0006f0fa 111c
.org 0x6f0fc
	adds r1, #194	@ 0006f0fc c231
.org 0x6f0fe
	movs r0, #0	@ 0006f0fe 0020
.org 0x6f100
	strb r0, [r1, #0]	@ 0006f100 0870
.org 0x6f102
	b.n 0x6f11c	@ 0006f102 0be0
.org 0x6f104
	cmp r1, r0	@ 0006f104 8142
.org 0x6f106
	blt.n 0x6f116	@ 0006f106 06db
.org 0x6f108
	movs r3, #0	@ 0006f108 0023
.org 0x6f10a
	ldr r0, [pc, #20]	@ 0006f10a 0548
.org 0x6f10c
	ldr r0, [r0, #0]	@ 0006f10c 0068
.org 0x6f10e
	ldr r0, [r0, #84]	@ 0006f10e 406d
.org 0x6f110
	cmp r1, r0	@ 0006f110 8142
.org 0x6f112
	bge.n 0x6f116	@ 0006f112 00da
.org 0x6f114
	movs r3, #1	@ 0006f114 0123
.org 0x6f116
	adds r0, r2, #0	@ 0006f116 101c
.org 0x6f118
	adds r0, #194	@ 0006f118 c230
.org 0x6f11a
	strb r3, [r0, #0]	@ 0006f11a 0370
.org 0x6f11c
	pop {r0}	@ 0006f11c 01bc
.org 0x6f11e
	bx r0	@ 0006f11e 0047
