@ FUN_081080bc  entry 0x081080bc  size 60
.thumb
.org 0x1080bc
FUN_081080bc:
	push {lr}	@ 001080bc 00b5
.org 0x1080be
	adds r1, r0, #0	@ 001080be 011c
.org 0x1080c0
	ldrb r0, [r1, #16]	@ 001080c0 087c
.org 0x1080c2
	cmp r0, #0	@ 001080c2 0028
.org 0x1080c4
	bne.n 0x1080e4	@ 001080c4 0ed1
.org 0x1080c6
	ldr r0, [r1, #44]	@ 001080c6 c86a
.org 0x1080c8
	ldr r3, [pc, #20]	@ 001080c8 054b
.org 0x1080ca
	adds r2, r0, r3	@ 001080ca c218
.org 0x1080cc
	adds r0, r1, #0	@ 001080cc 081c
.org 0x1080ce
	adds r0, #181	@ 001080ce b530
.org 0x1080d0
	ldrb r0, [r0, #0]	@ 001080d0 0078
.org 0x1080d2
	str r0, [r2, #76]	@ 001080d2 d064
.org 0x1080d4
	cmp r0, #0	@ 001080d4 0028
.org 0x1080d6
	bne.n 0x1080fa	@ 001080d6 10d1
.org 0x1080d8
	movs r0, #1	@ 001080d8 0120
.org 0x1080da
	str r0, [r2, #76]	@ 001080da d064
.org 0x1080dc
	b.n 0x1080fa	@ 001080dc 0de0
.org 0x1080de
	.byte 0x00	@ 001080de data
.org 0x1080df
	.byte 0x00	@ 001080df data
.org 0x1080e0
	.byte 0xcc,0x0d,0x00,0x00	@ 001080e0 data
.org 0x1080e4
	ldr r0, [r1, #44]	@ 001080e4 c86a
.org 0x1080e6
	ldr r3, [pc, #24]	@ 001080e6 064b
.org 0x1080e8
	adds r2, r0, r3	@ 001080e8 c218
.org 0x1080ea
	adds r0, r1, #0	@ 001080ea 081c
.org 0x1080ec
	adds r0, #181	@ 001080ec b530
.org 0x1080ee
	ldrb r0, [r0, #0]	@ 001080ee 0078
.org 0x1080f0
	str r0, [r2, #80]	@ 001080f0 1065
.org 0x1080f2
	cmp r0, #0	@ 001080f2 0028
.org 0x1080f4
	bne.n 0x1080fa	@ 001080f4 01d1
.org 0x1080f6
	movs r0, #1	@ 001080f6 0120
