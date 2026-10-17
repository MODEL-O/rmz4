@ FUN_080d1e54  entry 0x080d1e54  size 88
.thumb
.org 0xd1e54
FUN_080d1e54:
	push {r4, lr}	@ 000d1e54 10b5
.org 0xd1e56
	adds r4, r0, #0	@ 000d1e56 041c
.org 0xd1e58
	bl 0x1cc9c	@ 000d1e58 4af720ff
.org 0xd1e5c
	ldrb r1, [r4, #10]	@ 000d1e5c a17a
.org 0xd1e5e
	movs r0, #1	@ 000d1e5e 0120
.org 0xd1e60
	orrs r0, r1	@ 000d1e60 0843
.org 0xd1e62
	movs r1, #2	@ 000d1e62 0221
.org 0xd1e64
	orrs r0, r1	@ 000d1e64 0843
.org 0xd1e66
	strb r0, [r4, #10]	@ 000d1e66 a072
.org 0xd1e68
	adds r0, r4, #0	@ 000d1e68 201c
.org 0xd1e6a
	movs r1, #17	@ 000d1e6a 1121
.org 0xd1e6c
	bl 0x1cf00	@ 000d1e6c 4bf748f8
.org 0xd1e70
	ldrb r1, [r4, #10]	@ 000d1e70 a17a
.org 0xd1e72
	movs r0, #16	@ 000d1e72 1020
.org 0xd1e74
	ands r0, r1	@ 000d1e74 0840
.org 0xd1e76
	cmp r0, #0	@ 000d1e76 0028
.org 0xd1e78
	beq.n 0xd1e84	@ 000d1e78 04d0
.org 0xd1e7a
	ldr r0, [r4, #84]	@ 000d1e7a 606d
.org 0xd1e7c
	ldr r1, [pc, #0]	@ 000d1e7c 0049
.org 0xd1e7e
	b.n 0xd1e8a	@ 000d1e7e 04e0
.org 0xd1e80
	.byte 0x00,0xec,0xff,0xff	@ 000d1e80 data
.org 0xd1e84
	ldr r0, [r4, #84]	@ 000d1e84 606d
.org 0xd1e86
	movs r1, #160	@ 000d1e86 a021
.org 0xd1e88
	lsls r1, r1, #5	@ 000d1e88 4901
.org 0xd1e8a
	adds r0, r0, r1	@ 000d1e8a 4018
.org 0xd1e8c
	str r0, [r4, #84]	@ 000d1e8c 6065
.org 0xd1e8e
	movs r0, #0	@ 000d1e8e 0020
.org 0xd1e90
	strb r0, [r4, #18]	@ 000d1e90 a074
.org 0xd1e92
	ldr r1, [pc, #28]	@ 000d1e92 0749
.org 0xd1e94
	ldrb r0, [r4, #9]	@ 000d1e94 607a
.org 0xd1e96
	lsls r0, r0, #2	@ 000d1e96 8000
.org 0xd1e98
	adds r0, r0, r1	@ 000d1e98 4018
.org 0xd1e9a
	movs r1, #1	@ 000d1e9a 0121
.org 0xd1e9c
	str r1, [r4, #12]	@ 000d1e9c e160
.org 0xd1e9e
	ldr r0, [r0, #0]	@ 000d1e9e 0068
.org 0xd1ea0
	ldr r0, [r0, #4]	@ 000d1ea0 4068
.org 0xd1ea2
	str r0, [r4, #20]	@ 000d1ea2 6061
.org 0xd1ea4
	adds r0, r4, #0	@ 000d1ea4 201c
.org 0xd1ea6
	bl 0xd1dd0	@ 000d1ea6 fff793ff
.org 0xd1eaa
	pop {r4}	@ 000d1eaa 10bc
