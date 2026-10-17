@ FUN_08097cc4  entry 0x08097cc4  size 94
.thumb
.org 0x97cc4
FUN_08097cc4:
	push {r4, r5, lr}	@ 00097cc4 30b5
.org 0x97cc6
	adds r4, r0, #0	@ 00097cc6 041c
.org 0x97cc8
	ldr r0, [r4, #20]	@ 00097cc8 6069
.org 0x97cca
	movs r1, #1	@ 00097cca 0121
.org 0x97ccc
	ands r0, r1	@ 00097ccc 0840
.org 0x97cce
	cmp r0, #0	@ 00097cce 0028
.org 0x97cd0
	beq.n 0x97d1c	@ 00097cd0 24d0
.org 0x97cd2
	movs r0, #6	@ 00097cd2 0620
.org 0x97cd4
	bl 0x6984	@ 00097cd4 6ef756fe
.org 0x97cd8
	ldr r0, [r4, #12]	@ 00097cd8 e068
.org 0x97cda
	ldr r0, [r0, #44]	@ 00097cda c06a
.org 0x97cdc
	ldr r5, [r4, #44]	@ 00097cdc e56a
.org 0x97cde
	movs r2, #0	@ 00097cde 0022
.org 0x97ce0
	ldr r1, [r0, #84]	@ 00097ce0 416d
.org 0x97ce2
	ldr r0, [r5, #84]	@ 00097ce2 686d
.org 0x97ce4
	cmp r1, r0	@ 00097ce4 8142
.org 0x97ce6
	ble.n 0x97cea	@ 00097ce6 00dd
.org 0x97ce8
	movs r2, #1	@ 00097ce8 0122
.org 0x97cea
	adds r0, r5, #0	@ 00097cea 281c
.org 0x97cec
	adds r0, #188	@ 00097cec bc30
.org 0x97cee
	strb r2, [r0, #0]	@ 00097cee 0270
.org 0x97cf0
	ldr r1, [r4, #20]	@ 00097cf0 6169
.org 0x97cf2
	movs r0, #128	@ 00097cf2 8020
.org 0x97cf4
	lsls r0, r0, #2	@ 00097cf4 8000
.org 0x97cf6
	ands r0, r1	@ 00097cf6 0840
.org 0x97cf8
	cmp r0, #0	@ 00097cf8 0028
.org 0x97cfa
	beq.n 0x97d1c	@ 00097cfa 0fd0
.org 0x97cfc
	movs r0, #128	@ 00097cfc 8020
.org 0x97cfe
	lsls r0, r0, #10	@ 00097cfe 8002
.org 0x97d00
	ands r1, r0	@ 00097d00 0140
.org 0x97d02
	cmp r1, #0	@ 00097d02 0029
.org 0x97d04
	beq.n 0x97d1c	@ 00097d04 0ad0
.org 0x97d06
	ldr r0, [pc, #28]	@ 00097d06 0748
.org 0x97d08
	ldr r0, [r0, #0]	@ 00097d08 0068
.org 0x97d0a
	cmp r0, #0	@ 00097d0a 0028
.org 0x97d0c
	beq.n 0x97d1c	@ 00097d0c 06d0
.org 0x97d0e
	movs r1, #7	@ 00097d0e 0721
.org 0x97d10
	movs r2, #0	@ 00097d10 0022
.org 0x97d12
	bl 0x3a578	@ 00097d12 a2f731fc
.org 0x97d16
	adds r1, r5, #0	@ 00097d16 291c
.org 0x97d18
	adds r1, #190	@ 00097d18 be31
.org 0x97d1a
	strb r0, [r1, #0]	@ 00097d1a 0870
.org 0x97d1c
	pop {r4, r5}	@ 00097d1c 30bc
.org 0x97d1e
	pop {r0}	@ 00097d1e 01bc
.org 0x97d20
	bx r0	@ 00097d20 0047
