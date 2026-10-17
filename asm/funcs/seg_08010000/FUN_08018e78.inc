@ FUN_08018e78  entry 0x08018e78  size 44
.thumb
.org 0x18e78
FUN_08018e78:
	.byte 0x00,0xb5	@ 00018e78 (raw)
.org 0x18e7a
	.byte 0x03,0x1c	@ 00018e7a (raw)
.org 0x18e7c
	.byte 0xd8,0x6d	@ 00018e7c (raw)
.org 0x18e7e
	lsls r2, r0, #16	@ 00018e7e 0204
.org 0x18e80
	ldrb r0, [r3, #14]	@ 00018e80 987b
.org 0x18e82
	cmp r0, #0	@ 00018e82 0028
.org 0x18e84
	bne.n 0x18ea0	@ 00018e84 0cd1
.org 0x18e86
	lsrs r2, r2, #20	@ 00018e86 120d
.org 0x18e88
	lsls r2, r2, #1	@ 00018e88 5200
.org 0x18e8a
	ldr r0, [pc, #24]	@ 00018e8a 0648
.org 0x18e8c
	adds r2, r2, r0	@ 00018e8c 1218
.org 0x18e8e
	ldrh r1, [r2, #0]	@ 00018e8e 1188
.org 0x18e90
	ldr r0, [pc, #20]	@ 00018e90 0548
.org 0x18e92
	ands r0, r1	@ 00018e92 0840
.org 0x18e94
	movs r1, #2	@ 00018e94 0221
.org 0x18e96
	orrs r0, r1	@ 00018e96 0843
.org 0x18e98
	strh r0, [r2, #0]	@ 00018e98 1080
.org 0x18e9a
	ldrb r0, [r3, #14]	@ 00018e9a 987b
.org 0x18e9c
	adds r0, #1	@ 00018e9c 0130
.org 0x18e9e
	strb r0, [r3, #14]	@ 00018e9e 9873
.org 0x18ea0
	pop {r0}	@ 00018ea0 01bc
.org 0x18ea2
	bx r0	@ 00018ea2 0047
