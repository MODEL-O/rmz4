@ FUN_08124ad4  entry 0x08124ad4  size 46
.thumb
.org 0x124ad4
FUN_08124ad4:
	push {r4, r5, lr}	@ 00124ad4 30b5
.org 0x124ad6
	adds r5, r0, #0	@ 00124ad6 051c
.org 0x124ad8
	ldr r1, [pc, #32]	@ 00124ad8 0849
.org 0x124ada
	adds r0, r5, r1	@ 00124ada 6818
.org 0x124adc
	ldr r1, [r0, #0]	@ 00124adc 0168
.org 0x124ade
	movs r2, #149	@ 00124ade 9522
.org 0x124ae0
	lsls r2, r2, #2	@ 00124ae0 9200
.org 0x124ae2
	adds r1, r1, r2	@ 00124ae2 8918
.org 0x124ae4
	movs r2, #2	@ 00124ae4 0222
.org 0x124ae6
	strb r2, [r1, #0]	@ 00124ae6 0a70
.org 0x124ae8
	ldrb r0, [r0, #25]	@ 00124ae8 407e
.org 0x124aea
	cmp r0, #5	@ 00124aea 0528
.org 0x124aec
	bls.n 0x124af0	@ 00124aec 00d9
.org 0x124aee
	b.n 0x124be4	@ 00124aee 79e0
.org 0x124af0
	lsls r0, r0, #2	@ 00124af0 8000
.org 0x124af2
	ldr r1, [pc, #12]	@ 00124af2 0349
.org 0x124af4
	adds r0, r0, r1	@ 00124af4 4018
.org 0x124af6
	ldr r0, [r0, #0]	@ 00124af6 0068
.org 0x124af8
	mov pc, r0	@ 00124af8 8746
.org 0x124afa
	.byte 0x00	@ 00124afa data
.org 0x124afb
	.byte 0x00	@ 00124afb data
.org 0x124afc
	.byte 0xcc,0x0d,0x00,0x00	@ 00124afc data
.org 0x124b00
	.byte 0x04,0x4b,0x12,0x08	@ 00124b00 data
