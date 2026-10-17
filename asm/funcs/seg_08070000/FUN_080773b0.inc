@ FUN_080773b0  entry 0x080773b0  size 64
.thumb
.org 0x773b0
FUN_080773b0:
	push {r4, r5, lr}	@ 000773b0 30b5
.org 0x773b2
	ldrb r4, [r0, #14]	@ 000773b2 847b
.org 0x773b4
	adds r2, r0, #0	@ 000773b4 021c
.org 0x773b6
	adds r2, #200	@ 000773b6 c832
.org 0x773b8
	ldr r1, [r2, #0]	@ 000773b8 1168
.org 0x773ba
	adds r1, #181	@ 000773ba b531
.org 0x773bc
	movs r3, #0	@ 000773bc 0023
.org 0x773be
	strb r3, [r1, #0]	@ 000773be 0b70
.org 0x773c0
	ldr r1, [r2, #0]	@ 000773c0 1168
.org 0x773c2
	adds r1, #182	@ 000773c2 b631
.org 0x773c4
	movs r5, #1	@ 000773c4 0125
.org 0x773c6
	strb r5, [r1, #0]	@ 000773c6 0d70
.org 0x773c8
	adds r2, #4	@ 000773c8 0432
.org 0x773ca
	ldr r1, [r2, #0]	@ 000773ca 1168
.org 0x773cc
	adds r1, #182	@ 000773cc b631
.org 0x773ce
	strb r3, [r1, #0]	@ 000773ce 0b70
.org 0x773d0
	ldr r1, [r2, #0]	@ 000773d0 1168
.org 0x773d2
	adds r1, #185	@ 000773d2 b931
.org 0x773d4
	strb r5, [r1, #0]	@ 000773d4 0d70
.org 0x773d6
	adds r4, #1	@ 000773d6 0134
.org 0x773d8
	strb r4, [r0, #14]	@ 000773d8 8473
.org 0x773da
	strb r3, [r0, #15]	@ 000773da c373
.org 0x773dc
	ldr r2, [pc, #16]	@ 000773dc 044a
.org 0x773de
	ldrb r1, [r0, #13]	@ 000773de 417b
.org 0x773e0
	lsls r1, r1, #2	@ 000773e0 8900
.org 0x773e2
	adds r1, r1, r2	@ 000773e2 8918
.org 0x773e4
	ldr r1, [r1, #0]	@ 000773e4 0968
.org 0x773e6
	bl 0x128f80	@ 000773e6 b1f0cbfd
.org 0x773ea
	pop {r4, r5}	@ 000773ea 30bc
.org 0x773ec
	pop {r0}	@ 000773ec 01bc
.org 0x773ee
	bx r0	@ 000773ee 0047
