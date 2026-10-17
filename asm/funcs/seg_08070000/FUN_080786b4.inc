@ FUN_080786b4  entry 0x080786b4  size 64
.thumb
.org 0x786b4
FUN_080786b4:
	push {r4, r5, lr}	@ 000786b4 30b5
.org 0x786b6
	ldrb r4, [r0, #14]	@ 000786b6 847b
.org 0x786b8
	adds r2, r0, #0	@ 000786b8 021c
.org 0x786ba
	adds r2, #200	@ 000786ba c832
.org 0x786bc
	ldr r1, [r2, #0]	@ 000786bc 1168
.org 0x786be
	adds r1, #181	@ 000786be b531
.org 0x786c0
	movs r5, #0	@ 000786c0 0025
.org 0x786c2
	movs r3, #1	@ 000786c2 0123
.org 0x786c4
	strb r3, [r1, #0]	@ 000786c4 0b70
.org 0x786c6
	ldr r1, [r2, #0]	@ 000786c6 1168
.org 0x786c8
	adds r1, #182	@ 000786c8 b631
.org 0x786ca
	strb r3, [r1, #0]	@ 000786ca 0b70
.org 0x786cc
	adds r2, #4	@ 000786cc 0432
.org 0x786ce
	ldr r1, [r2, #0]	@ 000786ce 1168
.org 0x786d0
	adds r1, #182	@ 000786d0 b631
.org 0x786d2
	strb r5, [r1, #0]	@ 000786d2 0d70
.org 0x786d4
	ldr r1, [r2, #0]	@ 000786d4 1168
.org 0x786d6
	adds r1, #185	@ 000786d6 b931
.org 0x786d8
	strb r3, [r1, #0]	@ 000786d8 0b70
.org 0x786da
	adds r4, #1	@ 000786da 0134
.org 0x786dc
	strb r4, [r0, #14]	@ 000786dc 8473
.org 0x786de
	strb r5, [r0, #15]	@ 000786de c573
.org 0x786e0
	ldr r2, [pc, #16]	@ 000786e0 044a
.org 0x786e2
	ldrb r1, [r0, #13]	@ 000786e2 417b
.org 0x786e4
	lsls r1, r1, #2	@ 000786e4 8900
.org 0x786e6
	adds r1, r1, r2	@ 000786e6 8918
.org 0x786e8
	ldr r1, [r1, #0]	@ 000786e8 0968
.org 0x786ea
	bl 0x128f80	@ 000786ea b0f049fc
.org 0x786ee
	pop {r4, r5}	@ 000786ee 30bc
.org 0x786f0
	pop {r0}	@ 000786f0 01bc
.org 0x786f2
	bx r0	@ 000786f2 0047
