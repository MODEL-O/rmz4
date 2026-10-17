@ FUN_0809edf4  entry 0x0809edf4  size 86
.thumb
.org 0x9edf4
FUN_0809edf4:
	push {r4, lr}	@ 0009edf4 10b5
.org 0x9edf6
	adds r4, r0, #0	@ 0009edf6 041c
.org 0x9edf8
	ldrb r0, [r4, #15]	@ 0009edf8 e07b
.org 0x9edfa
	cmp r0, #0	@ 0009edfa 0028
.org 0x9edfc
	bne.n 0x9ee10	@ 0009edfc 08d1
.org 0x9edfe
	ldr r1, [pc, #76]	@ 0009edfe 1349
.org 0x9ee00
	adds r0, r4, #0	@ 0009ee00 201c
.org 0x9ee02
	bl 0x1cf00	@ 0009ee02 7ef77df8
.org 0x9ee06
	movs r0, #32	@ 0009ee06 2020
.org 0x9ee08
	strb r0, [r4, #18]	@ 0009ee08 a074
.org 0x9ee0a
	ldrb r0, [r4, #15]	@ 0009ee0a e07b
.org 0x9ee0c
	adds r0, #1	@ 0009ee0c 0130
.org 0x9ee0e
	strb r0, [r4, #15]	@ 0009ee0e e073
.org 0x9ee10
	adds r0, r4, #0	@ 0009ee10 201c
.org 0x9ee12
	bl 0x1cff0	@ 0009ee12 7ef7edf8
.org 0x9ee16
	ldrb r0, [r4, #18]	@ 0009ee16 a07c
.org 0x9ee18
	subs r0, #1	@ 0009ee18 0138
.org 0x9ee1a
	strb r0, [r4, #18]	@ 0009ee1a a074
.org 0x9ee1c
	lsls r0, r0, #24	@ 0009ee1c 0006
.org 0x9ee1e
	lsrs r2, r0, #24	@ 0009ee1e 020e
.org 0x9ee20
	cmp r2, #0	@ 0009ee20 002a
.org 0x9ee22
	bne.n 0x9ee44	@ 0009ee22 0fd1
.org 0x9ee24
	ldr r1, [pc, #40]	@ 0009ee24 0a49
.org 0x9ee26
	ldrb r0, [r4, #9]	@ 0009ee26 607a
.org 0x9ee28
	lsls r0, r0, #2	@ 0009ee28 8000
.org 0x9ee2a
	adds r0, r0, r1	@ 0009ee2a 4018
.org 0x9ee2c
	movs r1, #2	@ 0009ee2c 0221
.org 0x9ee2e
	str r1, [r4, #12]	@ 0009ee2e e160
.org 0x9ee30
	ldr r0, [r0, #0]	@ 0009ee30 0068
.org 0x9ee32
	ldr r0, [r0, #8]	@ 0009ee32 8068
.org 0x9ee34
	str r0, [r4, #20]	@ 0009ee34 6061
.org 0x9ee36
	movs r0, #1	@ 0009ee36 0120
.org 0x9ee38
	strb r0, [r4, #13]	@ 0009ee38 6073
.org 0x9ee3a
	strb r2, [r4, #14]	@ 0009ee3a a273
.org 0x9ee3c
	strb r2, [r4, #15]	@ 0009ee3c e273
.org 0x9ee3e
	adds r0, r4, #0	@ 0009ee3e 201c
.org 0x9ee40
	bl 0x9ee54	@ 0009ee40 00f008f8
.org 0x9ee44
	pop {r4}	@ 0009ee44 10bc
.org 0x9ee46
	pop {r0}	@ 0009ee46 01bc
.org 0x9ee48
	bx r0	@ 0009ee48 0047
