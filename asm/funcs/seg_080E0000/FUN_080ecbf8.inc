@ FUN_080ecbf8  entry 0x080ecbf8  size 108
.thumb
.org 0xecbf8
FUN_080ecbf8:
	push {r4, lr}	@ 000ecbf8 10b5
.org 0xecbfa
	adds r4, r0, #0	@ 000ecbfa 041c
.org 0xecbfc
	bl 0x1cc9c	@ 000ecbfc 30f74ef8
.org 0xecc00
	ldrb r1, [r4, #10]	@ 000ecc00 a17a
.org 0xecc02
	movs r0, #1	@ 000ecc02 0120
.org 0xecc04
	orrs r0, r1	@ 000ecc04 0843
.org 0xecc06
	movs r1, #2	@ 000ecc06 0221
.org 0xecc08
	orrs r0, r1	@ 000ecc08 0843
.org 0xecc0a
	strb r0, [r4, #10]	@ 000ecc0a a072
.org 0xecc0c
	movs r1, #188	@ 000ecc0c bc21
.org 0xecc0e
	lsls r1, r1, #6	@ 000ecc0e 8901
.org 0xecc10
	adds r0, r4, #0	@ 000ecc10 201c
.org 0xecc12
	bl 0x1cf00	@ 000ecc12 30f775f9
.org 0xecc16
	adds r0, r4, #0	@ 000ecc16 201c
.org 0xecc18
	bl 0x1cff0	@ 000ecc18 30f7eaf9
.org 0xecc1c
	movs r2, #0	@ 000ecc1c 0022
.org 0xecc1e
	ldrb r1, [r4, #10]	@ 000ecc1e a17a
.org 0xecc20
	movs r0, #239	@ 000ecc20 ef20
.org 0xecc22
	ands r0, r1	@ 000ecc22 0840
.org 0xecc24
	strb r0, [r4, #10]	@ 000ecc24 a072
.org 0xecc26
	movs r3, #1	@ 000ecc26 0123
.org 0xecc28
	adds r0, r4, #0	@ 000ecc28 201c
.org 0xecc2a
	adds r0, #76	@ 000ecc2a 4c30
.org 0xecc2c
	strb r2, [r0, #0]	@ 000ecc2c 0270
.org 0xecc2e
	adds r2, r4, #0	@ 000ecc2e 221c
.org 0xecc30
	adds r2, #74	@ 000ecc30 4a32
.org 0xecc32
	ldrb r1, [r2, #0]	@ 000ecc32 1178
.org 0xecc34
	movs r0, #17	@ 000ecc34 1120
.org 0xecc36
	negs r0, r0	@ 000ecc36 4042
.org 0xecc38
	ands r0, r1	@ 000ecc38 0840
.org 0xecc3a
	strb r0, [r2, #0]	@ 000ecc3a 1070
.org 0xecc3c
	ldr r0, [r4, #88]	@ 000ecc3c a06d
.org 0xecc3e
	ldr r1, [pc, #36]	@ 000ecc3e 0949
.org 0xecc40
	adds r0, r0, r1	@ 000ecc40 4018
.org 0xecc42
	str r0, [r4, #88]	@ 000ecc42 a065
.org 0xecc44
	movs r0, #120	@ 000ecc44 7820
.org 0xecc46
	strb r0, [r4, #18]	@ 000ecc46 a074
.org 0xecc48
	ldr r1, [pc, #28]	@ 000ecc48 0749
.org 0xecc4a
	ldrb r0, [r4, #9]	@ 000ecc4a 607a
.org 0xecc4c
	lsls r0, r0, #2	@ 000ecc4c 8000
.org 0xecc4e
	adds r0, r0, r1	@ 000ecc4e 4018
.org 0xecc50
	str r3, [r4, #12]	@ 000ecc50 e360
.org 0xecc52
	ldr r0, [r0, #0]	@ 000ecc52 0068
.org 0xecc54
	ldr r0, [r0, #4]	@ 000ecc54 4068
.org 0xecc56
	str r0, [r4, #20]	@ 000ecc56 6061
.org 0xecc58
	adds r0, r4, #0	@ 000ecc58 201c
.org 0xecc5a
	bl 0xecc6c	@ 000ecc5a 00f007f8
.org 0xecc5e
	pop {r4}	@ 000ecc5e 10bc
.org 0xecc60
	pop {r0}	@ 000ecc60 01bc
.org 0xecc62
	bx r0	@ 000ecc62 0047
