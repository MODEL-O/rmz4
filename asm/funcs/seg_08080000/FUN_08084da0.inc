@ FUN_08084da0  entry 0x08084da0  size 106
.thumb
.org 0x84da0
FUN_08084da0:
	push {r4, lr}	@ 00084da0 10b5
.org 0x84da2
	adds r4, r0, #0	@ 00084da2 041c
.org 0x84da4
	ldrb r0, [r4, #14]	@ 00084da4 a07b
.org 0x84da6
	cmp r0, #0	@ 00084da6 0028
.org 0x84da8
	beq.n 0x84db0	@ 00084da8 02d0
.org 0x84daa
	cmp r0, #1	@ 00084daa 0128
.org 0x84dac
	beq.n 0x84dec	@ 00084dac 1ed0
.org 0x84dae
	b.n 0x84e04	@ 00084dae 29e0
.org 0x84db0
	movs r0, #44	@ 00084db0 2c20
.org 0x84db2
	bl 0x2b10	@ 00084db2 7df7adfe
.org 0x84db6
	ldrb r0, [r4, #16]	@ 00084db6 207c
.org 0x84db8
	cmp r0, #0	@ 00084db8 0028
.org 0x84dba
	bne.n 0x84dc6	@ 00084dba 04d1
.org 0x84dbc
	ldr r0, [r4, #84]	@ 00084dbc 606d
.org 0x84dbe
	ldr r1, [r4, #88]	@ 00084dbe a16d
.org 0x84dc0
	bl 0x8496c	@ 00084dc0 fff7d4fd
.org 0x84dc4
	b.n 0x84dce	@ 00084dc4 03e0
.org 0x84dc6
	ldr r0, [r4, #84]	@ 00084dc6 606d
.org 0x84dc8
	ldr r1, [r4, #88]	@ 00084dc8 a16d
.org 0x84dca
	bl 0x849f4	@ 00084dca fff713fe
.org 0x84dce
	adds r1, r4, #0	@ 00084dce 211c
.org 0x84dd0
	adds r1, #184	@ 00084dd0 b831
.org 0x84dd2
	movs r0, #0	@ 00084dd2 0020
.org 0x84dd4
	strb r0, [r1, #0]	@ 00084dd4 0870
.org 0x84dd6
	ldr r1, [pc, #52]	@ 00084dd6 0d49
.org 0x84dd8
	ldrb r0, [r4, #16]	@ 00084dd8 207c
.org 0x84dda
	lsls r0, r0, #1	@ 00084dda 4000
.org 0x84ddc
	adds r0, r0, r1	@ 00084ddc 4018
.org 0x84dde
	ldrh r1, [r0, #0]	@ 00084dde 0188
.org 0x84de0
	adds r0, r4, #0	@ 00084de0 201c
.org 0x84de2
	bl 0x1cf00	@ 00084de2 98f78df8
.org 0x84de6
	ldrb r0, [r4, #14]	@ 00084de6 a07b
.org 0x84de8
	adds r0, #1	@ 00084de8 0130
.org 0x84dea
	strb r0, [r4, #14]	@ 00084dea a073
.org 0x84dec
	adds r0, r4, #0	@ 00084dec 201c
.org 0x84dee
	bl 0x1cff0	@ 00084dee 98f7fff8
.org 0x84df2
	adds r0, r4, #0	@ 00084df2 201c
.org 0x84df4
	adds r0, #115	@ 00084df4 7330
.org 0x84df6
	ldrb r0, [r0, #0]	@ 00084df6 0078
.org 0x84df8
	cmp r0, #3	@ 00084df8 0328
.org 0x84dfa
	bne.n 0x84e04	@ 00084dfa 03d1
.org 0x84dfc
	movs r1, #0	@ 00084dfc 0021
.org 0x84dfe
	movs r0, #4	@ 00084dfe 0420
.org 0x84e00
	strb r0, [r4, #13]	@ 00084e00 6073
.org 0x84e02
	strb r1, [r4, #14]	@ 00084e02 a173
.org 0x84e04
	pop {r4}	@ 00084e04 10bc
.org 0x84e06
	pop {r0}	@ 00084e06 01bc
.org 0x84e08
	bx r0	@ 00084e08 0047
