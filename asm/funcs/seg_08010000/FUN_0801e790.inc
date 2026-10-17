@ FUN_0801e790  entry 0x0801e790  size 44
.thumb
.org 0x1e790
FUN_0801e790:
	push {lr}	@ 0001e790 00b5
.org 0x1e792
	adds r2, r0, #0	@ 0001e792 021c
.org 0x1e794
	ldr r1, [r2, #0]	@ 0001e794 1168
.org 0x1e796
	ldr r0, [pc, #24]	@ 0001e796 0648
.org 0x1e798
	cmp r1, r0	@ 0001e798 8142
.org 0x1e79a
	ble.n 0x1e7c4	@ 0001e79a 13dd
.org 0x1e79c
	ldr r0, [pc, #20]	@ 0001e79c 0548
.org 0x1e79e
	cmp r1, r0	@ 0001e79e 8142
.org 0x1e7a0
	bgt.n 0x1e7c0	@ 0001e7a0 0edc
.org 0x1e7a2
	ldr r1, [r2, #4]	@ 0001e7a2 5168
.org 0x1e7a4
	ldr r0, [pc, #16]	@ 0001e7a4 0448
.org 0x1e7a6
	cmp r1, r0	@ 0001e7a6 8142
.org 0x1e7a8
	ble.n 0x1e7bc	@ 0001e7a8 08dd
.org 0x1e7aa
	movs r0, #3	@ 0001e7aa 0320
.org 0x1e7ac
	b.n 0x1e7c6	@ 0001e7ac 0be0
.org 0x1e7ae
	.byte 0x00	@ 0001e7ae data
.org 0x1e7af
	.byte 0x00	@ 0001e7af data
.org 0x1e7b0
	.byte 0xff,0x2f,0x0c,0x00	@ 0001e7b0 data
.org 0x1e7b4
	.byte 0xff,0xff,0x0e,0x00	@ 0001e7b4 data
.org 0x1e7b8
	.byte 0xff,0xff,0x04,0x00	@ 0001e7b8 data
