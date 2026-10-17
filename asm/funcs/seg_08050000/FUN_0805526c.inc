@ FUN_0805526c  entry 0x0805526c  size 42
.thumb
.org 0x5526c
FUN_0805526c:
	push {lr}	@ 0005526c 00b5
.org 0x5526e
	ldr r0, [r0, #88]	@ 0005526e 806d
.org 0x55270
	ldr r1, [pc, #24]	@ 00055270 0649
.org 0x55272
	ldr r1, [r1, #60]	@ 00055272 c96b
.org 0x55274
	subs r0, r0, r1	@ 00055274 401a
.org 0x55276
	movs r1, #166	@ 00055276 a621
.org 0x55278
	lsls r1, r1, #9	@ 00055278 4902
.org 0x5527a
	adds r0, r0, r1	@ 0005527a 4018
.org 0x5527c
	movs r1, #128	@ 0005527c 8021
.org 0x5527e
	lsls r1, r1, #10	@ 0005527e 8902
.org 0x55280
	cmp r0, r1	@ 00055280 8842
.org 0x55282
	bhi.n 0x55290	@ 00055282 05d8
.org 0x55284
	movs r0, #0	@ 00055284 0020
.org 0x55286
	bl 0xd7f4	@ 00055286 b8f7b5fa
.org 0x5528a
	b.n 0x55296	@ 0005528a 04e0
.org 0x5528c
	.byte 0xf8,0xe9,0x02,0x02	@ 0005528c data
.org 0x55290
	movs r0, #1	@ 00055290 0120
.org 0x55292
	bl 0xd7f4	@ 00055292 b8f7affa
