@ FUN_080b2b38  entry 0x080b2b38  size 84
.thumb
.org 0xb2b38
FUN_080b2b38:
	push {lr}	@ 000b2b38 00b5
.org 0xb2b3a
	adds r3, r0, #0	@ 000b2b3a 031c
.org 0xb2b3c
	ldr r0, [pc, #44]	@ 000b2b3c 0b48
.org 0xb2b3e
	ldr r0, [r0, #0]	@ 000b2b3e 0068
.org 0xb2b40
	ldr r1, [r0, #84]	@ 000b2b40 416d
.org 0xb2b42
	ldr r0, [r3, #84]	@ 000b2b42 586d
.org 0xb2b44
	cmp r1, r0	@ 000b2b44 8142
.org 0xb2b46
	ble.n 0xb2b70	@ 000b2b46 13dd
.org 0xb2b48
	movs r2, #1	@ 000b2b48 0122
.org 0xb2b4a
	ldrb r1, [r3, #10]	@ 000b2b4a 997a
.org 0xb2b4c
	movs r0, #16	@ 000b2b4c 1020
.org 0xb2b4e
	orrs r0, r1	@ 000b2b4e 0843
.org 0xb2b50
	strb r0, [r3, #10]	@ 000b2b50 9872
.org 0xb2b52
	adds r0, r3, #0	@ 000b2b52 181c
.org 0xb2b54
	adds r0, #76	@ 000b2b54 4c30
.org 0xb2b56
	strb r2, [r0, #0]	@ 000b2b56 0270
.org 0xb2b58
	adds r2, r3, #0	@ 000b2b58 1a1c
.org 0xb2b5a
	adds r2, #74	@ 000b2b5a 4a32
.org 0xb2b5c
	movs r3, #16	@ 000b2b5c 1023
.org 0xb2b5e
	ldrb r1, [r2, #0]	@ 000b2b5e 1178
.org 0xb2b60
	movs r0, #17	@ 000b2b60 1120
.org 0xb2b62
	negs r0, r0	@ 000b2b62 4042
.org 0xb2b64
	ands r0, r1	@ 000b2b64 0840
.org 0xb2b66
	orrs r0, r3	@ 000b2b66 1843
.org 0xb2b68
	b.n 0xb2b8c	@ 000b2b68 10e0
.org 0xb2b6a
	.byte 0x00	@ 000b2b6a data
.org 0xb2b6b
	.byte 0x00	@ 000b2b6b data
.org 0xb2b6c
	.byte 0xf0,0xdb,0x02,0x02	@ 000b2b6c data
.org 0xb2b70
	movs r2, #0	@ 000b2b70 0022
.org 0xb2b72
	ldrb r1, [r3, #10]	@ 000b2b72 997a
.org 0xb2b74
	movs r0, #239	@ 000b2b74 ef20
.org 0xb2b76
	ands r0, r1	@ 000b2b76 0840
.org 0xb2b78
	strb r0, [r3, #10]	@ 000b2b78 9872
.org 0xb2b7a
	adds r0, r3, #0	@ 000b2b7a 181c
.org 0xb2b7c
	adds r0, #76	@ 000b2b7c 4c30
.org 0xb2b7e
	strb r2, [r0, #0]	@ 000b2b7e 0270
.org 0xb2b80
	adds r2, r3, #0	@ 000b2b80 1a1c
.org 0xb2b82
	adds r2, #74	@ 000b2b82 4a32
.org 0xb2b84
	ldrb r1, [r2, #0]	@ 000b2b84 1178
.org 0xb2b86
	movs r0, #17	@ 000b2b86 1120
.org 0xb2b88
	negs r0, r0	@ 000b2b88 4042
.org 0xb2b8a
	ands r0, r1	@ 000b2b8a 0840
