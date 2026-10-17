@ FUN_080c3e50  entry 0x080c3e50  size 92
.thumb
.org 0xc3e50
FUN_080c3e50:
	push {r4, r5, lr}	@ 000c3e50 30b5
.org 0xc3e52
	adds r4, r0, #0	@ 000c3e52 041c
.org 0xc3e54
	ldrb r5, [r4, #13]	@ 000c3e54 657b
.org 0xc3e56
	cmp r5, #0	@ 000c3e56 002d
.org 0xc3e58
	bne.n 0xc3e7c	@ 000c3e58 10d1
.org 0xc3e5a
	ldr r1, [pc, #80]	@ 000c3e5a 1449
.org 0xc3e5c
	bl 0x1cf00	@ 000c3e5c 59f750f8
.org 0xc3e60
	adds r0, r4, #0	@ 000c3e60 201c
.org 0xc3e62
	adds r0, #140	@ 000c3e62 8c30
.org 0xc3e64
	str r5, [r0, #0]	@ 000c3e64 0560
.org 0xc3e66
	adds r0, #4	@ 000c3e66 0430
.org 0xc3e68
	str r5, [r0, #0]	@ 000c3e68 0560
.org 0xc3e6a
	adds r0, #4	@ 000c3e6a 0430
.org 0xc3e6c
	strb r5, [r0, #0]	@ 000c3e6c 0570
.org 0xc3e6e
	ldrb r1, [r4, #10]	@ 000c3e6e a17a
.org 0xc3e70
	movs r0, #251	@ 000c3e70 fb20
.org 0xc3e72
	ands r0, r1	@ 000c3e72 0840
.org 0xc3e74
	strb r0, [r4, #10]	@ 000c3e74 a072
.org 0xc3e76
	ldrb r0, [r4, #13]	@ 000c3e76 607b
.org 0xc3e78
	adds r0, #1	@ 000c3e78 0130
.org 0xc3e7a
	strb r0, [r4, #13]	@ 000c3e7a 6073
.org 0xc3e7c
	adds r0, r4, #0	@ 000c3e7c 201c
.org 0xc3e7e
	bl 0x1cff0	@ 000c3e7e 59f7b7f8
.org 0xc3e82
	adds r0, r4, #0	@ 000c3e82 201c
.org 0xc3e84
	adds r0, #115	@ 000c3e84 7330
.org 0xc3e86
	ldrb r0, [r0, #0]	@ 000c3e86 0078
.org 0xc3e88
	cmp r0, #3	@ 000c3e88 0328
.org 0xc3e8a
	bne.n 0xc3ea6	@ 000c3e8a 0cd1
.org 0xc3e8c
	ldrb r1, [r4, #10]	@ 000c3e8c a17a
.org 0xc3e8e
	movs r0, #254	@ 000c3e8e fe20
.org 0xc3e90
	ands r0, r1	@ 000c3e90 0840
.org 0xc3e92
	strb r0, [r4, #10]	@ 000c3e92 a072
.org 0xc3e94
	ldr r1, [pc, #24]	@ 000c3e94 0649
.org 0xc3e96
	ldrb r0, [r4, #9]	@ 000c3e96 607a
.org 0xc3e98
	lsls r0, r0, #2	@ 000c3e98 8000
.org 0xc3e9a
	adds r0, r0, r1	@ 000c3e9a 4018
.org 0xc3e9c
	movs r1, #4	@ 000c3e9c 0421
.org 0xc3e9e
	str r1, [r4, #12]	@ 000c3e9e e160
.org 0xc3ea0
	ldr r0, [r0, #0]	@ 000c3ea0 0068
.org 0xc3ea2
	ldr r0, [r0, #16]	@ 000c3ea2 0069
.org 0xc3ea4
	str r0, [r4, #20]	@ 000c3ea4 6061
.org 0xc3ea6
	pop {r4, r5}	@ 000c3ea6 30bc
.org 0xc3ea8
	pop {r0}	@ 000c3ea8 01bc
.org 0xc3eaa
	bx r0	@ 000c3eaa 0047
