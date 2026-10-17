@ FUN_08037c60  entry 0x08037c60  size 48
.thumb
.org 0x37c60
FUN_08037c60:
	push {lr}	@ 00037c60 00b5
.org 0x37c62
	adds r2, r0, #0	@ 00037c62 021c
.org 0x37c64
	movs r0, #162	@ 00037c64 a220
.org 0x37c66
	lsls r0, r0, #1	@ 00037c66 4000
.org 0x37c68
	adds r1, r2, r0	@ 00037c68 1118
.org 0x37c6a
	ldrb r0, [r1, #0]	@ 00037c6a 0878
.org 0x37c6c
	cmp r0, #1	@ 00037c6c 0128
.org 0x37c6e
	bls.n 0x37c7c	@ 00037c6e 05d9
.org 0x37c70
	movs r0, #128	@ 00037c70 8020
.org 0x37c72
	lsls r0, r0, #1	@ 00037c72 4000
.org 0x37c74
	adds r1, r2, r0	@ 00037c74 1118
.org 0x37c76
	movs r0, #0	@ 00037c76 0020
.org 0x37c78
	strb r0, [r1, #0]	@ 00037c78 0870
.org 0x37c7a
	b.n 0x37c8c	@ 00037c7a 07e0
.org 0x37c7c
	ldr r0, [pc, #16]	@ 00037c7c 0448
.org 0x37c7e
	ldrb r1, [r1, #0]	@ 00037c7e 0978
.org 0x37c80
	lsls r1, r1, #2	@ 00037c80 8900
.org 0x37c82
	adds r1, r1, r0	@ 00037c82 0918
.org 0x37c84
	ldr r1, [r1, #0]	@ 00037c84 0968
.org 0x37c86
	adds r0, r2, #0	@ 00037c86 101c
.org 0x37c88
	bl 0x128f80	@ 00037c88 f1f07af9
.org 0x37c8c
	pop {r0}	@ 00037c8c 01bc
.org 0x37c8e
	bx r0	@ 00037c8e 0047
