@ FUN_0810be04  entry 0x0810be04  size 78
.thumb
.org 0x10be04
FUN_0810be04:
	push {r4, r5, lr}	@ 0010be04 30b5
.org 0x10be06
	adds r4, r0, #0	@ 0010be06 041c
.org 0x10be08
	bl 0x1cc9c	@ 0010be08 10f748ff
.org 0x10be0c
	ldrb r1, [r4, #10]	@ 0010be0c a17a
.org 0x10be0e
	movs r0, #1	@ 0010be0e 0120
.org 0x10be10
	movs r5, #0	@ 0010be10 0025
.org 0x10be12
	orrs r0, r1	@ 0010be12 0843
.org 0x10be14
	movs r1, #2	@ 0010be14 0221
.org 0x10be16
	orrs r0, r1	@ 0010be16 0843
.org 0x10be18
	strb r0, [r4, #10]	@ 0010be18 a072
.org 0x10be1a
	adds r2, r4, #0	@ 0010be1a 221c
.org 0x10be1c
	adds r2, #73	@ 0010be1c 4932
.org 0x10be1e
	ldrb r1, [r2, #0]	@ 0010be1e 1178
.org 0x10be20
	movs r0, #13	@ 0010be20 0d20
.org 0x10be22
	negs r0, r0	@ 0010be22 4042
.org 0x10be24
	ands r0, r1	@ 0010be24 0840
.org 0x10be26
	strb r0, [r2, #0]	@ 0010be26 1070
.org 0x10be28
	ldr r1, [pc, #40]	@ 0010be28 0a49
.org 0x10be2a
	adds r0, r4, #0	@ 0010be2a 201c
.org 0x10be2c
	bl 0x1cf00	@ 0010be2c 11f768f8
.org 0x10be30
	ldr r0, [r4, #40]	@ 0010be30 a06a
.org 0x10be32
	ldr r1, [pc, #36]	@ 0010be32 0949
.org 0x10be34
	adds r0, r0, r1	@ 0010be34 4018
.org 0x10be36
	strb r5, [r0, #2]	@ 0010be36 8570
.org 0x10be38
	ldr r2, [pc, #32]	@ 0010be38 084a
.org 0x10be3a
	ldr r0, [r4, #40]	@ 0010be3a a06a
.org 0x10be3c
	adds r0, r0, r1	@ 0010be3c 4018
.org 0x10be3e
	ldrb r0, [r0, #2]	@ 0010be3e 8078
.org 0x10be40
	lsls r0, r0, #3	@ 0010be40 c000
.org 0x10be42
	adds r0, r0, r2	@ 0010be42 8018
.org 0x10be44
	ldr r1, [r0, #4]	@ 0010be44 4168
.org 0x10be46
	ldr r0, [r0, #0]	@ 0010be46 0068
.org 0x10be48
	str r0, [r4, #84]	@ 0010be48 6065
.org 0x10be4a
	str r1, [r4, #88]	@ 0010be4a a165
.org 0x10be4c
	pop {r4, r5}	@ 0010be4c 30bc
.org 0x10be4e
	pop {r0}	@ 0010be4e 01bc
.org 0x10be50
	bx r0	@ 0010be50 0047
