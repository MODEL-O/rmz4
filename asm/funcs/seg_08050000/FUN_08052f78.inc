@ FUN_08052f78  entry 0x08052f78  size 98
.thumb
.org 0x52f78
FUN_08052f78:
	push {r4, r5, lr}	@ 00052f78 30b5
.org 0x52f7a
	adds r4, r0, #0	@ 00052f7a 041c
.org 0x52f7c
	ldr r0, [r4, #20]	@ 00052f7c 6069
.org 0x52f7e
	movs r1, #1	@ 00052f7e 0121
.org 0x52f80
	ands r0, r1	@ 00052f80 0840
.org 0x52f82
	cmp r0, #0	@ 00052f82 0028
.org 0x52f84
	beq.n 0x52fd4	@ 00052f84 26d0
.org 0x52f86
	movs r0, #66	@ 00052f86 4220
.org 0x52f88
	bl 0x6984	@ 00052f88 b3f7fcfc
.org 0x52f8c
	ldr r0, [r4, #12]	@ 00052f8c e068
.org 0x52f8e
	ldr r0, [r0, #44]	@ 00052f8e c06a
.org 0x52f90
	ldr r5, [r4, #44]	@ 00052f90 e56a
.org 0x52f92
	movs r2, #0	@ 00052f92 0022
.org 0x52f94
	ldr r1, [r0, #84]	@ 00052f94 416d
.org 0x52f96
	ldr r0, [r5, #84]	@ 00052f96 686d
.org 0x52f98
	cmp r1, r0	@ 00052f98 8142
.org 0x52f9a
	ble.n 0x52f9e	@ 00052f9a 00dd
.org 0x52f9c
	movs r2, #1	@ 00052f9c 0122
.org 0x52f9e
	adds r0, r5, #0	@ 00052f9e 281c
.org 0x52fa0
	adds r0, #212	@ 00052fa0 d430
.org 0x52fa2
	strb r2, [r0, #0]	@ 00052fa2 0270
.org 0x52fa4
	ldr r0, [r4, #20]	@ 00052fa4 6069
.org 0x52fa6
	movs r1, #128	@ 00052fa6 8021
.org 0x52fa8
	lsls r1, r1, #10	@ 00052fa8 8902
.org 0x52faa
	ands r0, r1	@ 00052faa 0840
.org 0x52fac
	cmp r0, #0	@ 00052fac 0028
.org 0x52fae
	beq.n 0x52fd4	@ 00052fae 11d0
.org 0x52fb0
	ldr r0, [pc, #40]	@ 00052fb0 0a48
.org 0x52fb2
	ldr r1, [r0, #0]	@ 00052fb2 0168
.org 0x52fb4
	cmp r1, #0	@ 00052fb4 0029
.org 0x52fb6
	beq.n 0x52fd4	@ 00052fb6 0dd0
.org 0x52fb8
	ldrb r0, [r5, #13]	@ 00052fb8 687b
.org 0x52fba
	subs r0, #18	@ 00052fba 1238
.org 0x52fbc
	lsls r0, r0, #24	@ 00052fbc 0006
.org 0x52fbe
	lsrs r0, r0, #24	@ 00052fbe 000e
.org 0x52fc0
	cmp r0, #6	@ 00052fc0 0628
.org 0x52fc2
	bhi.n 0x52fd4	@ 00052fc2 07d8
.org 0x52fc4
	adds r0, r1, #0	@ 00052fc4 081c
.org 0x52fc6
	movs r1, #8	@ 00052fc6 0821
.org 0x52fc8
	movs r2, #0	@ 00052fc8 0022
.org 0x52fca
	bl 0x3a578	@ 00052fca e7f7d5fa
.org 0x52fce
	adds r1, r5, #0	@ 00052fce 291c
.org 0x52fd0
	adds r1, #217	@ 00052fd0 d931
.org 0x52fd2
	strb r0, [r1, #0]	@ 00052fd2 0870
.org 0x52fd4
	pop {r4, r5}	@ 00052fd4 30bc
.org 0x52fd6
	pop {r0}	@ 00052fd6 01bc
.org 0x52fd8
	bx r0	@ 00052fd8 0047
