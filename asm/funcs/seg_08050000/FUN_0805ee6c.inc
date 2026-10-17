@ FUN_0805ee6c  entry 0x0805ee6c  size 50
.thumb
.org 0x5ee6c
FUN_0805ee6c:
	push {r4, r5, r6, r7, lr}	@ 0005ee6c f0b5
.org 0x5ee6e
	adds r6, r0, #0	@ 0005ee6e 061c
.org 0x5ee70
	lsls r1, r1, #24	@ 0005ee70 0906
.org 0x5ee72
	lsrs r5, r1, #24	@ 0005ee72 0d0e
.org 0x5ee74
	ldr r7, [pc, #16]	@ 0005ee74 044f
.org 0x5ee76
	cmp r5, #42	@ 0005ee76 2a2d
.org 0x5ee78
	bhi.n 0x5ef54	@ 0005ee78 6cd8
.org 0x5ee7a
	lsls r0, r5, #2	@ 0005ee7a a800
.org 0x5ee7c
	ldr r1, [pc, #12]	@ 0005ee7c 0349
.org 0x5ee7e
	adds r1, r0, r1	@ 0005ee7e 4118
.org 0x5ee80
	ldr r1, [r1, #0]	@ 0005ee80 0968
.org 0x5ee82
	adds r2, r0, #0	@ 0005ee82 021c
.org 0x5ee84
	mov pc, r1	@ 0005ee84 8f46
.org 0x5ee86
	.byte 0x00	@ 0005ee86 data
.org 0x5ee87
	.byte 0x00	@ 0005ee87 data
.org 0x5ee88
	.byte 0x48,0x8a,0x85,0x08	@ 0005ee88 data
.org 0x5ee8c
	.byte 0x90,0xee,0x05,0x08	@ 0005ee8c data
.org 0x5ee90
	.byte 0x3c,0xef,0x05,0x08	@ 0005ee90 data
.org 0x5ee94
	.byte 0x54,0xef,0x05,0x08	@ 0005ee94 data
.org 0x5ee98
	.byte 0x54,0xef,0x05,0x08	@ 0005ee98 data
.org 0x5ee9c
	.byte 0x54,0xef,0x05,0x08	@ 0005ee9c data
