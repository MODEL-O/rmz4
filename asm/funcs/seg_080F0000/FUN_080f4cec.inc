@ FUN_080f4cec  entry 0x080f4cec  size 114
.thumb
.org 0xf4cec
FUN_080f4cec:
	push {r4, lr}	@ 000f4cec 10b5
.org 0xf4cee
	adds r4, r0, #0	@ 000f4cee 041c
.org 0xf4cf0
	adds r2, r4, #0	@ 000f4cf0 221c
.org 0xf4cf2
	adds r2, #140	@ 000f4cf2 8c32
.org 0xf4cf4
	ldr r0, [r2, #0]	@ 000f4cf4 1068
.org 0xf4cf6
	movs r1, #128	@ 000f4cf6 8021
.org 0xf4cf8
	lsls r1, r1, #2	@ 000f4cf8 8900
.org 0xf4cfa
	ands r0, r1	@ 000f4cfa 0840
.org 0xf4cfc
	cmp r0, #0	@ 000f4cfc 0028
.org 0xf4cfe
	beq.n 0xf4d52	@ 000f4cfe 28d0
.org 0xf4d00
	ldr r1, [pc, #92]	@ 000f4d00 1749
.org 0xf4d02
	ldrb r0, [r4, #9]	@ 000f4d02 607a
.org 0xf4d04
	lsls r0, r0, #2	@ 000f4d04 8000
.org 0xf4d06
	adds r0, r0, r1	@ 000f4d06 4018
.org 0xf4d08
	movs r1, #2	@ 000f4d08 0221
.org 0xf4d0a
	str r1, [r4, #12]	@ 000f4d0a e160
.org 0xf4d0c
	ldr r0, [r0, #0]	@ 000f4d0c 0068
.org 0xf4d0e
	ldr r0, [r0, #8]	@ 000f4d0e 8068
.org 0xf4d10
	str r0, [r4, #20]	@ 000f4d10 6061
.org 0xf4d12
	ldr r0, [r2, #0]	@ 000f4d12 1068
.org 0xf4d14
	movs r1, #128	@ 000f4d14 8021
.org 0xf4d16
	lsls r1, r1, #10	@ 000f4d16 8902
.org 0xf4d18
	ands r0, r1	@ 000f4d18 0840
.org 0xf4d1a
	cmp r0, #0	@ 000f4d1a 0028
.org 0xf4d1c
	beq.n 0xf4d24	@ 000f4d1c 02d0
.org 0xf4d1e
	ldrb r0, [r4, #16]	@ 000f4d1e 207c
.org 0xf4d20
	adds r0, #3	@ 000f4d20 0330
.org 0xf4d22
	strb r0, [r4, #16]	@ 000f4d22 2074
.org 0xf4d24
	movs r1, #0	@ 000f4d24 0021
.org 0xf4d26
	str r1, [r2, #0]	@ 000f4d26 1160
.org 0xf4d28
	adds r0, r4, #0	@ 000f4d28 201c
.org 0xf4d2a
	adds r0, #144	@ 000f4d2a 9030
.org 0xf4d2c
	str r1, [r0, #0]	@ 000f4d2c 0160
.org 0xf4d2e
	adds r0, #4	@ 000f4d2e 0430
.org 0xf4d30
	strb r1, [r0, #0]	@ 000f4d30 0170
.org 0xf4d32
	ldrb r1, [r4, #10]	@ 000f4d32 a17a
.org 0xf4d34
	movs r0, #251	@ 000f4d34 fb20
.org 0xf4d36
	ands r0, r1	@ 000f4d36 0840
.org 0xf4d38
	strb r0, [r4, #10]	@ 000f4d38 a072
.org 0xf4d3a
	ldr r2, [pc, #40]	@ 000f4d3a 0a4a
.org 0xf4d3c
	ldr r0, [pc, #40]	@ 000f4d3c 0a48
.org 0xf4d3e
	adds r2, r2, r0	@ 000f4d3e 1218
.org 0xf4d40
	movs r0, #1	@ 000f4d40 0120
.org 0xf4d42
	ldrb r1, [r4, #17]	@ 000f4d42 617c
.org 0xf4d44
	lsls r0, r1	@ 000f4d44 8840
.org 0xf4d46
	ldrb r1, [r2, #0]	@ 000f4d46 1178
.org 0xf4d48
	orrs r0, r1	@ 000f4d48 0843
.org 0xf4d4a
	strb r0, [r2, #0]	@ 000f4d4a 1070
.org 0xf4d4c
	adds r0, r4, #0	@ 000f4d4c 201c
.org 0xf4d4e
	bl 0xf3f1c	@ 000f4d4e fff7e5f8
.org 0xf4d52
	adds r0, r4, #0	@ 000f4d52 201c
.org 0xf4d54
	bl 0x1cff0	@ 000f4d54 28f74cf9
.org 0xf4d58
	pop {r4}	@ 000f4d58 10bc
.org 0xf4d5a
	pop {r0}	@ 000f4d5a 01bc
.org 0xf4d5c
	bx r0	@ 000f4d5c 0047
