@ FUN_0805bf48  entry 0x0805bf48  size 64
.thumb
.org 0x5bf48
FUN_0805bf48:
	push {lr}	@ 0005bf48 00b5
.org 0x5bf4a
	ldr r2, [r0, #44]	@ 0005bf4a c26a
.org 0x5bf4c
	ldr r1, [r0, #12]	@ 0005bf4c c168
.org 0x5bf4e
	ldr r1, [r1, #44]	@ 0005bf4e c96a
.org 0x5bf50
	ldr r0, [r0, #20]	@ 0005bf50 4069
.org 0x5bf52
	movs r3, #1	@ 0005bf52 0123
.org 0x5bf54
	ands r0, r3	@ 0005bf54 1840
.org 0x5bf56
	cmp r0, #0	@ 0005bf56 0028
.org 0x5bf58
	beq.n 0x5bf84	@ 0005bf58 14d0
.org 0x5bf5a
	ldr r0, [r1, #84]	@ 0005bf5a 486d
.org 0x5bf5c
	ldr r1, [r2, #84]	@ 0005bf5c 516d
.org 0x5bf5e
	cmp r0, r1	@ 0005bf5e 8842
.org 0x5bf60
	bge.n 0x5bf6c	@ 0005bf60 04da
.org 0x5bf62
	adds r1, r2, #0	@ 0005bf62 111c
.org 0x5bf64
	adds r1, #188	@ 0005bf64 bc31
.org 0x5bf66
	movs r0, #0	@ 0005bf66 0020
.org 0x5bf68
	strb r0, [r1, #0]	@ 0005bf68 0870
.org 0x5bf6a
	b.n 0x5bf84	@ 0005bf6a 0be0
.org 0x5bf6c
	cmp r1, r0	@ 0005bf6c 8142
.org 0x5bf6e
	blt.n 0x5bf7e	@ 0005bf6e 06db
.org 0x5bf70
	movs r3, #0	@ 0005bf70 0023
.org 0x5bf72
	ldr r0, [pc, #20]	@ 0005bf72 0548
.org 0x5bf74
	ldr r0, [r0, #0]	@ 0005bf74 0068
.org 0x5bf76
	ldr r0, [r0, #84]	@ 0005bf76 406d
.org 0x5bf78
	cmp r1, r0	@ 0005bf78 8142
.org 0x5bf7a
	bge.n 0x5bf7e	@ 0005bf7a 00da
.org 0x5bf7c
	movs r3, #1	@ 0005bf7c 0123
.org 0x5bf7e
	adds r0, r2, #0	@ 0005bf7e 101c
.org 0x5bf80
	adds r0, #188	@ 0005bf80 bc30
.org 0x5bf82
	strb r3, [r0, #0]	@ 0005bf82 0370
.org 0x5bf84
	pop {r0}	@ 0005bf84 01bc
.org 0x5bf86
	bx r0	@ 0005bf86 0047
