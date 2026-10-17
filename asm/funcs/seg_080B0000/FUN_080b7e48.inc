@ FUN_080b7e48  entry 0x080b7e48  size 92
.thumb
.org 0xb7e48
FUN_080b7e48:
	push {r4, r5, lr}	@ 000b7e48 30b5
.org 0xb7e4a
	adds r4, r0, #0	@ 000b7e4a 041c
.org 0xb7e4c
	ldr r5, [r4, #40]	@ 000b7e4c a56a
.org 0xb7e4e
	ldrb r0, [r4, #14]	@ 000b7e4e a07b
.org 0xb7e50
	cmp r0, #0	@ 000b7e50 0028
.org 0xb7e52
	bne.n 0xb7e72	@ 000b7e52 0ed1
.org 0xb7e54
	adds r0, r4, #0	@ 000b7e54 201c
.org 0xb7e56
	bl 0x1cc9c	@ 000b7e56 64f721ff
.org 0xb7e5a
	adds r0, r4, #0	@ 000b7e5a 201c
.org 0xb7e5c
	bl 0x1ceec	@ 000b7e5c 65f746f8
.org 0xb7e60
	movs r1, #178	@ 000b7e60 b221
.org 0xb7e62
	lsls r1, r1, #8	@ 000b7e62 0902
.org 0xb7e64
	adds r0, r4, #0	@ 000b7e64 201c
.org 0xb7e66
	bl 0x1cf00	@ 000b7e66 65f74bf8
.org 0xb7e6a
	adds r1, r4, #0	@ 000b7e6a 211c
.org 0xb7e6c
	adds r1, #37	@ 000b7e6c 2531
.org 0xb7e6e
	movs r0, #23	@ 000b7e6e 1720
.org 0xb7e70
	strb r0, [r1, #0]	@ 000b7e70 0870
.org 0xb7e72
	adds r0, r4, #0	@ 000b7e72 201c
.org 0xb7e74
	bl 0x1cff0	@ 000b7e74 65f7bcf8
.org 0xb7e78
	ldr r0, [r5, #84]	@ 000b7e78 686d
.org 0xb7e7a
	ldr r1, [pc, #40]	@ 000b7e7a 0a49
.org 0xb7e7c
	adds r0, r0, r1	@ 000b7e7c 4018
.org 0xb7e7e
	str r0, [r4, #84]	@ 000b7e7e 6065
.org 0xb7e80
	ldr r0, [r5, #88]	@ 000b7e80 a86d
.org 0xb7e82
	movs r1, #160	@ 000b7e82 a021
.org 0xb7e84
	lsls r1, r1, #6	@ 000b7e84 8901
.org 0xb7e86
	adds r0, r0, r1	@ 000b7e86 4018
.org 0xb7e88
	str r0, [r4, #88]	@ 000b7e88 a065
.org 0xb7e8a
	adds r0, r5, #0	@ 000b7e8a 281c
.org 0xb7e8c
	adds r0, #214	@ 000b7e8c d630
.org 0xb7e8e
	ldrb r0, [r0, #0]	@ 000b7e8e 0078
.org 0xb7e90
	cmp r0, #0	@ 000b7e90 0028
.org 0xb7e92
	beq.n 0xb7e9e	@ 000b7e92 04d0
.org 0xb7e94
	ldrb r0, [r4, #13]	@ 000b7e94 607b
.org 0xb7e96
	adds r0, #1	@ 000b7e96 0130
.org 0xb7e98
	movs r1, #0	@ 000b7e98 0021
.org 0xb7e9a
	strb r0, [r4, #13]	@ 000b7e9a 6073
.org 0xb7e9c
	strb r1, [r4, #14]	@ 000b7e9c a173
.org 0xb7e9e
	pop {r4, r5}	@ 000b7e9e 30bc
.org 0xb7ea0
	pop {r0}	@ 000b7ea0 01bc
.org 0xb7ea2
	bx r0	@ 000b7ea2 0047
