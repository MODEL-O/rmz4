@ FUN_08035d5c  entry 0x08035d5c  size 80
.thumb
.org 0x35d5c
FUN_08035d5c:
	push {r4, lr}	@ 00035d5c 10b5
.org 0x35d5e
	adds r3, r0, #0	@ 00035d5e 031c
.org 0x35d60
	adds r4, r3, #0	@ 00035d60 1c1c
.org 0x35d62
	adds r4, #180	@ 00035d62 b434
.org 0x35d64
	ldr r0, [pc, #36]	@ 00035d64 0948
.org 0x35d66
	adds r2, r3, r0	@ 00035d66 1a18
.org 0x35d68
	ldrb r1, [r2, #0]	@ 00035d68 1178
.org 0x35d6a
	movs r0, #1	@ 00035d6a 0120
.org 0x35d6c
	ands r0, r1	@ 00035d6c 0840
.org 0x35d6e
	cmp r0, #0	@ 00035d6e 0028
.org 0x35d70
	beq.n 0x35d7a	@ 00035d70 03d0
.org 0x35d72
	ldr r0, [pc, #28]	@ 00035d72 0748
.org 0x35d74
	adds r1, r3, r0	@ 00035d74 1918
.org 0x35d76
	movs r0, #4	@ 00035d76 0420
.org 0x35d78
	strb r0, [r1, #0]	@ 00035d78 0870
.org 0x35d7a
	ldrb r0, [r2, #0]	@ 00035d7a 1078
.org 0x35d7c
	movs r1, #8	@ 00035d7c 0821
.org 0x35d7e
	orrs r1, r0	@ 00035d7e 0143
.org 0x35d80
	strb r1, [r2, #0]	@ 00035d80 1170
.org 0x35d82
	ldrb r0, [r4, #12]	@ 00035d82 207b
.org 0x35d84
	cmp r0, #1	@ 00035d84 0128
.org 0x35d86
	bne.n 0x35d94	@ 00035d86 05d1
.org 0x35d88
	movs r0, #16	@ 00035d88 1020
.org 0x35d8a
	b.n 0x35d96	@ 00035d8a 04e0
.org 0x35d8c
	.byte 0x53,0x01,0x00,0x00	@ 00035d8c data
.org 0x35d90
	.byte 0x01,0x01,0x00,0x00	@ 00035d90 data
.org 0x35d94
	movs r0, #32	@ 00035d94 2020
.org 0x35d96
	orrs r1, r0	@ 00035d96 0143
.org 0x35d98
	strb r1, [r2, #0]	@ 00035d98 1170
.org 0x35d9a
	ldr r0, [pc, #24]	@ 00035d9a 0648
.org 0x35d9c
	ldr r2, [pc, #24]	@ 00035d9c 064a
.org 0x35d9e
	adds r1, r3, r2	@ 00035d9e 9918
.org 0x35da0
	ldrb r1, [r1, #0]	@ 00035da0 0978
.org 0x35da2
	lsls r1, r1, #2	@ 00035da2 8900
.org 0x35da4
	adds r1, r1, r0	@ 00035da4 0918
.org 0x35da6
	ldr r1, [r1, #0]	@ 00035da6 0968
.org 0x35da8
	adds r0, r3, #0	@ 00035da8 181c
.org 0x35daa
	bl 0x128f80	@ 00035daa f3f0e9f8
