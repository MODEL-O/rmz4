@ FUN_080d6bdc  entry 0x080d6bdc  size 102
.thumb
.org 0xd6bdc
FUN_080d6bdc:
	push {r4, lr}	@ 000d6bdc 10b5
.org 0xd6bde
	adds r4, r0, #0	@ 000d6bde 041c
.org 0xd6be0
	bl 0x1cc9c	@ 000d6be0 46f75cf8
.org 0xd6be4
	ldrb r1, [r4, #10]	@ 000d6be4 a17a
.org 0xd6be6
	movs r0, #1	@ 000d6be6 0120
.org 0xd6be8
	orrs r0, r1	@ 000d6be8 0843
.org 0xd6bea
	movs r1, #2	@ 000d6bea 0221
.org 0xd6bec
	orrs r0, r1	@ 000d6bec 0843
.org 0xd6bee
	strb r0, [r4, #10]	@ 000d6bee a072
.org 0xd6bf0
	adds r0, r4, #0	@ 000d6bf0 201c
.org 0xd6bf2
	movs r1, #3	@ 000d6bf2 0321
.org 0xd6bf4
	bl 0x1cf00	@ 000d6bf4 46f784f9
.org 0xd6bf8
	adds r0, r4, #0	@ 000d6bf8 201c
.org 0xd6bfa
	bl 0x1cff0	@ 000d6bfa 46f7f9f9
.org 0xd6bfe
	movs r2, #0	@ 000d6bfe 0022
.org 0xd6c00
	ldrb r1, [r4, #10]	@ 000d6c00 a17a
.org 0xd6c02
	movs r0, #239	@ 000d6c02 ef20
.org 0xd6c04
	ands r0, r1	@ 000d6c04 0840
.org 0xd6c06
	strb r0, [r4, #10]	@ 000d6c06 a072
.org 0xd6c08
	movs r3, #1	@ 000d6c08 0123
.org 0xd6c0a
	adds r0, r4, #0	@ 000d6c0a 201c
.org 0xd6c0c
	adds r0, #76	@ 000d6c0c 4c30
.org 0xd6c0e
	strb r2, [r0, #0]	@ 000d6c0e 0270
.org 0xd6c10
	adds r2, r4, #0	@ 000d6c10 221c
.org 0xd6c12
	adds r2, #74	@ 000d6c12 4a32
.org 0xd6c14
	ldrb r1, [r2, #0]	@ 000d6c14 1178
.org 0xd6c16
	movs r0, #17	@ 000d6c16 1120
.org 0xd6c18
	negs r0, r0	@ 000d6c18 4042
.org 0xd6c1a
	ands r0, r1	@ 000d6c1a 0840
.org 0xd6c1c
	strb r0, [r2, #0]	@ 000d6c1c 1070
.org 0xd6c1e
	adds r1, r4, #0	@ 000d6c1e 211c
.org 0xd6c20
	adds r1, #37	@ 000d6c20 2531
.org 0xd6c22
	movs r0, #23	@ 000d6c22 1720
.org 0xd6c24
	strb r0, [r1, #0]	@ 000d6c24 0870
.org 0xd6c26
	ldr r1, [pc, #28]	@ 000d6c26 0749
.org 0xd6c28
	ldrb r0, [r4, #9]	@ 000d6c28 607a
.org 0xd6c2a
	lsls r0, r0, #2	@ 000d6c2a 8000
.org 0xd6c2c
	adds r0, r0, r1	@ 000d6c2c 4018
.org 0xd6c2e
	str r3, [r4, #12]	@ 000d6c2e e360
.org 0xd6c30
	ldr r0, [r0, #0]	@ 000d6c30 0068
.org 0xd6c32
	ldr r0, [r0, #4]	@ 000d6c32 4068
.org 0xd6c34
	str r0, [r4, #20]	@ 000d6c34 6061
.org 0xd6c36
	adds r0, r4, #0	@ 000d6c36 201c
.org 0xd6c38
	bl 0xd68fc	@ 000d6c38 fff760fe
.org 0xd6c3c
	pop {r4}	@ 000d6c3c 10bc
.org 0xd6c3e
	pop {r0}	@ 000d6c3e 01bc
.org 0xd6c40
	bx r0	@ 000d6c40 0047
