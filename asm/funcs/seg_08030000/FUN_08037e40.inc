@ FUN_08037e40  entry 0x08037e40  size 80
.thumb
.org 0x37e40
FUN_08037e40:
	push {r4, lr}	@ 00037e40 10b5
.org 0x37e42
	adds r3, r0, #0	@ 00037e42 031c
.org 0x37e44
	adds r4, r3, #0	@ 00037e44 1c1c
.org 0x37e46
	adds r4, #180	@ 00037e46 b434
.org 0x37e48
	ldr r0, [pc, #36]	@ 00037e48 0948
.org 0x37e4a
	adds r2, r3, r0	@ 00037e4a 1a18
.org 0x37e4c
	ldrb r1, [r2, #0]	@ 00037e4c 1178
.org 0x37e4e
	movs r0, #1	@ 00037e4e 0120
.org 0x37e50
	ands r0, r1	@ 00037e50 0840
.org 0x37e52
	cmp r0, #0	@ 00037e52 0028
.org 0x37e54
	beq.n 0x37e5e	@ 00037e54 03d0
.org 0x37e56
	ldr r0, [pc, #28]	@ 00037e56 0748
.org 0x37e58
	adds r1, r3, r0	@ 00037e58 1918
.org 0x37e5a
	movs r0, #2	@ 00037e5a 0220
.org 0x37e5c
	strb r0, [r1, #0]	@ 00037e5c 0870
.org 0x37e5e
	ldrb r0, [r2, #0]	@ 00037e5e 1078
.org 0x37e60
	movs r1, #8	@ 00037e60 0821
.org 0x37e62
	orrs r1, r0	@ 00037e62 0143
.org 0x37e64
	strb r1, [r2, #0]	@ 00037e64 1170
.org 0x37e66
	ldrb r0, [r4, #12]	@ 00037e66 207b
.org 0x37e68
	cmp r0, #1	@ 00037e68 0128
.org 0x37e6a
	bne.n 0x37e78	@ 00037e6a 05d1
.org 0x37e6c
	movs r0, #16	@ 00037e6c 1020
.org 0x37e6e
	b.n 0x37e7a	@ 00037e6e 04e0
.org 0x37e70
	.byte 0x53,0x01,0x00,0x00	@ 00037e70 data
.org 0x37e74
	.byte 0x01,0x01,0x00,0x00	@ 00037e74 data
.org 0x37e78
	movs r0, #32	@ 00037e78 2020
.org 0x37e7a
	orrs r1, r0	@ 00037e7a 0143
.org 0x37e7c
	strb r1, [r2, #0]	@ 00037e7c 1170
.org 0x37e7e
	ldr r0, [pc, #24]	@ 00037e7e 0648
.org 0x37e80
	ldr r2, [pc, #24]	@ 00037e80 064a
.org 0x37e82
	adds r1, r3, r2	@ 00037e82 9918
.org 0x37e84
	ldrb r1, [r1, #0]	@ 00037e84 0978
.org 0x37e86
	lsls r1, r1, #2	@ 00037e86 8900
.org 0x37e88
	adds r1, r1, r0	@ 00037e88 0918
.org 0x37e8a
	ldr r1, [r1, #0]	@ 00037e8a 0968
.org 0x37e8c
	adds r0, r3, #0	@ 00037e8c 181c
.org 0x37e8e
	bl 0x128f80	@ 00037e8e f1f077f8
