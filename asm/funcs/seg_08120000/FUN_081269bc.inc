@ FUN_081269bc  entry 0x081269bc  size 62
.thumb
.org 0x1269bc
FUN_081269bc:
	push {r4, r5, lr}	@ 001269bc 30b5
.org 0x1269be
	adds r5, r0, #0	@ 001269be 051c
.org 0x1269c0
	ldr r1, [pc, #32]	@ 001269c0 0849
.org 0x1269c2
	adds r0, r5, r1	@ 001269c2 6818
.org 0x1269c4
	ldr r1, [r0, #0]	@ 001269c4 0168
.org 0x1269c6
	movs r2, #149	@ 001269c6 9522
.org 0x1269c8
	lsls r2, r2, #2	@ 001269c8 9200
.org 0x1269ca
	adds r1, r1, r2	@ 001269ca 8918
.org 0x1269cc
	movs r2, #3	@ 001269cc 0322
.org 0x1269ce
	strb r2, [r1, #0]	@ 001269ce 0a70
.org 0x1269d0
	ldrb r0, [r0, #25]	@ 001269d0 407e
.org 0x1269d2
	cmp r0, #5	@ 001269d2 0528
.org 0x1269d4
	bls.n 0x1269d8	@ 001269d4 00d9
.org 0x1269d6
	b.n 0x126ad8	@ 001269d6 7fe0
.org 0x1269d8
	lsls r0, r0, #2	@ 001269d8 8000
.org 0x1269da
	ldr r1, [pc, #12]	@ 001269da 0349
.org 0x1269dc
	adds r0, r0, r1	@ 001269dc 4018
.org 0x1269de
	ldr r0, [r0, #0]	@ 001269de 0068
.org 0x1269e0
	mov pc, r0	@ 001269e0 8746
.org 0x1269e2
	.byte 0x00	@ 001269e2 data
.org 0x1269e3
	.byte 0x00	@ 001269e3 data
.org 0x1269e4
	.byte 0xcc,0x0d,0x00,0x00	@ 001269e4 data
.org 0x1269e8
	.byte 0xec,0x69,0x12,0x08	@ 001269e8 data
.org 0x1269ec
	.byte 0x04,0x6a,0x12,0x08	@ 001269ec data
.org 0x1269f0
	.byte 0x16,0x6a,0x12,0x08	@ 001269f0 data
.org 0x1269f4
	.byte 0x30,0x6a,0x12,0x08	@ 001269f4 data
.org 0x1269f8
	.byte 0x84,0x6a,0x12,0x08	@ 001269f8 data
