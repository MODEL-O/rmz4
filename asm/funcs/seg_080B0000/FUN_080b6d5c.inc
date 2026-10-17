@ FUN_080b6d5c  entry 0x080b6d5c  size 58
.thumb
.org 0xb6d5c
FUN_080b6d5c:
	push {lr}	@ 000b6d5c 00b5
.org 0xb6d5e
	adds r2, r0, #0	@ 000b6d5e 021c
.org 0xb6d60
	ldr r0, [r2, #40]	@ 000b6d60 906a
.org 0xb6d62
	ldrb r0, [r0, #12]	@ 000b6d62 007b
.org 0xb6d64
	cmp r0, #1	@ 000b6d64 0128
.org 0xb6d66
	bls.n 0xb6d88	@ 000b6d66 0fd9
.org 0xb6d68
	ldr r1, [pc, #24]	@ 000b6d68 0649
.org 0xb6d6a
	ldrb r0, [r2, #9]	@ 000b6d6a 507a
.org 0xb6d6c
	lsls r0, r0, #2	@ 000b6d6c 8000
.org 0xb6d6e
	adds r0, r0, r1	@ 000b6d6e 4018
.org 0xb6d70
	movs r1, #2	@ 000b6d70 0221
.org 0xb6d72
	str r1, [r2, #12]	@ 000b6d72 d160
.org 0xb6d74
	ldr r0, [r0, #0]	@ 000b6d74 0068
.org 0xb6d76
	ldr r0, [r0, #8]	@ 000b6d76 8068
.org 0xb6d78
	str r0, [r2, #20]	@ 000b6d78 5061
.org 0xb6d7a
	adds r0, r2, #0	@ 000b6d7a 101c
.org 0xb6d7c
	bl 0xb7140	@ 000b6d7c 00f0e0f9
.org 0xb6d80
	b.n 0xb6d98	@ 000b6d80 0ae0
.org 0xb6d82
	.byte 0x00	@ 000b6d82 data
.org 0xb6d83
	.byte 0x00	@ 000b6d83 data
.org 0xb6d84
	.byte 0x40,0xdb,0x85,0x08	@ 000b6d84 data
.org 0xb6d88
	ldr r0, [pc, #16]	@ 000b6d88 0448
.org 0xb6d8a
	ldrb r1, [r2, #13]	@ 000b6d8a 517b
.org 0xb6d8c
	lsls r1, r1, #2	@ 000b6d8c 8900
.org 0xb6d8e
	adds r1, r1, r0	@ 000b6d8e 0918
.org 0xb6d90
	ldr r1, [r1, #0]	@ 000b6d90 0968
.org 0xb6d92
	adds r0, r2, #0	@ 000b6d92 101c
.org 0xb6d94
	bl 0x128f80	@ 000b6d94 72f0f4f8
