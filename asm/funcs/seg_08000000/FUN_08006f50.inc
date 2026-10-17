@ FUN_08006f50  entry 0x08006f50  size 58
.thumb
.org 0x6f50
FUN_08006f50:
	push {lr}	@ 00006f50 00b5
.org 0x6f52
	asrs r3, r0, #12	@ 00006f52 0313
.org 0x6f54
	asrs r2, r1, #12	@ 00006f54 0a13
.org 0x6f56
	movs r0, #238	@ 00006f56 ee20
.org 0x6f58
	lsls r0, r0, #3	@ 00006f58 c000
.org 0x6f5a
	cmp r3, r0	@ 00006f5a 8342
.org 0x6f5c
	bhi.n 0x6f68	@ 00006f5c 04d8
.org 0x6f5e
	cmp r2, #0	@ 00006f5e 002a
.org 0x6f60
	blt.n 0x6f68	@ 00006f60 02db
.org 0x6f62
	ldr r0, [pc, #12]	@ 00006f62 0348
.org 0x6f64
	cmp r2, r0	@ 00006f64 8242
.org 0x6f66
	ble.n 0x6f74	@ 00006f66 05dd
.org 0x6f68
	movs r0, #1	@ 00006f68 0120
.org 0x6f6a
	negs r0, r0	@ 00006f6a 4042
.org 0x6f6c
	b.n 0x6f8c	@ 00006f6c 0ee0
.org 0x6f6e
	.byte 0x00	@ 00006f6e data
.org 0x6f6f
	.byte 0x00	@ 00006f6f data
.org 0x6f70
	.byte 0xf5,0x04,0x00,0x00	@ 00006f70 data
.org 0x6f74
	ldr r1, [pc, #24]	@ 00006f74 0649
.org 0x6f76
	movs r0, #252	@ 00006f76 fc20
.org 0x6f78
	lsls r0, r0, #3	@ 00006f78 c000
.org 0x6f7a
	adds r1, r1, r0	@ 00006f7a 0918
.org 0x6f7c
	ldrh r0, [r1, #0]	@ 00006f7c 0888
.org 0x6f7e
	muls r0, r2	@ 00006f7e 5043
.org 0x6f80
	adds r0, r0, r3	@ 00006f80 c018
.org 0x6f82
	adds r0, #2	@ 00006f82 0230
.org 0x6f84
	lsls r0, r0, #1	@ 00006f84 4000
.org 0x6f86
	adds r0, r0, r1	@ 00006f86 4018
.org 0x6f88
	movs r1, #0	@ 00006f88 0021
