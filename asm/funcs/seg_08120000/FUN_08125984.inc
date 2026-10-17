@ FUN_08125984  entry 0x08125984  size 46
.thumb
.org 0x125984
FUN_08125984:
	push {r4, r5, lr}	@ 00125984 30b5
.org 0x125986
	adds r5, r0, #0	@ 00125986 051c
.org 0x125988
	ldr r1, [pc, #32]	@ 00125988 0849
.org 0x12598a
	adds r0, r5, r1	@ 0012598a 6818
.org 0x12598c
	ldr r1, [r0, #0]	@ 0012598c 0168
.org 0x12598e
	movs r2, #149	@ 0012598e 9522
.org 0x125990
	lsls r2, r2, #2	@ 00125990 9200
.org 0x125992
	adds r1, r1, r2	@ 00125992 8918
.org 0x125994
	movs r2, #2	@ 00125994 0222
.org 0x125996
	strb r2, [r1, #0]	@ 00125996 0a70
.org 0x125998
	ldrb r0, [r0, #25]	@ 00125998 407e
.org 0x12599a
	cmp r0, #5	@ 0012599a 0528
.org 0x12599c
	bls.n 0x1259a0	@ 0012599c 00d9
.org 0x12599e
	b.n 0x125aa4	@ 0012599e 81e0
.org 0x1259a0
	lsls r0, r0, #2	@ 001259a0 8000
.org 0x1259a2
	ldr r1, [pc, #12]	@ 001259a2 0349
.org 0x1259a4
	adds r0, r0, r1	@ 001259a4 4018
.org 0x1259a6
	ldr r0, [r0, #0]	@ 001259a6 0068
.org 0x1259a8
	mov pc, r0	@ 001259a8 8746
.org 0x1259aa
	.byte 0x00	@ 001259aa data
.org 0x1259ab
	.byte 0x00	@ 001259ab data
.org 0x1259ac
	.byte 0xcc,0x0d,0x00,0x00	@ 001259ac data
.org 0x1259b0
	.byte 0xb4,0x59,0x12,0x08	@ 001259b0 data
