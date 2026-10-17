@ FUN_080e1e68  entry 0x080e1e68  size 106
.thumb
.org 0xe1e68
FUN_080e1e68:
	push {r4, lr}	@ 000e1e68 10b5
.org 0xe1e6a
	adds r4, r0, #0	@ 000e1e6a 041c
.org 0xe1e6c
	bl 0x1cc9c	@ 000e1e6c 3af716ff
.org 0xe1e70
	ldrb r1, [r4, #10]	@ 000e1e70 a17a
.org 0xe1e72
	movs r0, #1	@ 000e1e72 0120
.org 0xe1e74
	orrs r0, r1	@ 000e1e74 0843
.org 0xe1e76
	movs r1, #2	@ 000e1e76 0221
.org 0xe1e78
	orrs r0, r1	@ 000e1e78 0843
.org 0xe1e7a
	strb r0, [r4, #10]	@ 000e1e7a a072
.org 0xe1e7c
	ldr r1, [pc, #44]	@ 000e1e7c 0b49
.org 0xe1e7e
	adds r0, r4, #0	@ 000e1e7e 201c
.org 0xe1e80
	bl 0x1cf00	@ 000e1e80 3bf73ef8
.org 0xe1e84
	adds r0, r4, #0	@ 000e1e84 201c
.org 0xe1e86
	bl 0x1cff0	@ 000e1e86 3bf7b3f8
.org 0xe1e8a
	ldrb r0, [r4, #18]	@ 000e1e8a a07c
.org 0xe1e8c
	adds r1, r4, #0	@ 000e1e8c 211c
.org 0xe1e8e
	adds r1, #37	@ 000e1e8e 2531
.org 0xe1e90
	strb r0, [r1, #0]	@ 000e1e90 0870
.org 0xe1e92
	ldrb r0, [r4, #17]	@ 000e1e92 607c
.org 0xe1e94
	cmp r0, #0	@ 000e1e94 0028
.org 0xe1e96
	beq.n 0xe1eb4	@ 000e1e96 0dd0
.org 0xe1e98
	ldr r1, [r4, #100]	@ 000e1e98 616e
.org 0xe1e9a
	lsls r0, r1, #1	@ 000e1e9a 4800
.org 0xe1e9c
	adds r0, r0, r1	@ 000e1e9c 4018
.org 0xe1e9e
	lsls r0, r0, #2	@ 000e1e9e 8000
.org 0xe1ea0
	str r0, [r4, #92]	@ 000e1ea0 e065
.org 0xe1ea2
	ldr r0, [pc, #12]	@ 000e1ea2 0348
.org 0xe1ea4
	str r0, [r4, #96]	@ 000e1ea4 2066
.org 0xe1ea6
	movs r0, #18	@ 000e1ea6 1220
.org 0xe1ea8
	b.n 0xe1ebc	@ 000e1ea8 08e0
.org 0xe1eaa
	.byte 0x00	@ 000e1eaa data
.org 0xe1eab
	.byte 0x00	@ 000e1eab data
.org 0xe1eac
	.byte 0x17,0x87,0x00,0x00	@ 000e1eac data
.org 0xe1eb0
	.byte 0x80,0xfd,0xff,0xff	@ 000e1eb0 data
.org 0xe1eb4
	ldr r0, [r4, #100]	@ 000e1eb4 606e
.org 0xe1eb6
	lsls r0, r0, #4	@ 000e1eb6 0001
.org 0xe1eb8
	str r0, [r4, #92]	@ 000e1eb8 e065
.org 0xe1eba
	movs r0, #16	@ 000e1eba 1020
.org 0xe1ebc
	strb r0, [r4, #18]	@ 000e1ebc a074
.org 0xe1ebe
	ldr r1, [pc, #28]	@ 000e1ebe 0749
.org 0xe1ec0
	ldrb r0, [r4, #9]	@ 000e1ec0 607a
.org 0xe1ec2
	lsls r0, r0, #2	@ 000e1ec2 8000
.org 0xe1ec4
	adds r0, r0, r1	@ 000e1ec4 4018
.org 0xe1ec6
	movs r1, #1	@ 000e1ec6 0121
.org 0xe1ec8
	str r1, [r4, #12]	@ 000e1ec8 e160
.org 0xe1eca
	ldr r0, [r0, #0]	@ 000e1eca 0068
.org 0xe1ecc
	ldr r0, [r0, #4]	@ 000e1ecc 4068
.org 0xe1ece
	str r0, [r4, #20]	@ 000e1ece 6061
.org 0xe1ed0
	adds r0, r4, #0	@ 000e1ed0 201c
