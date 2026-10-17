@ FUN_08123cac  entry 0x08123cac  size 46
.thumb
.org 0x123cac
FUN_08123cac:
	push {r4, r5, lr}	@ 00123cac 30b5
.org 0x123cae
	adds r5, r0, #0	@ 00123cae 051c
.org 0x123cb0
	ldr r1, [pc, #32]	@ 00123cb0 0849
.org 0x123cb2
	adds r0, r5, r1	@ 00123cb2 6818
.org 0x123cb4
	ldr r1, [r0, #0]	@ 00123cb4 0168
.org 0x123cb6
	movs r2, #149	@ 00123cb6 9522
.org 0x123cb8
	lsls r2, r2, #2	@ 00123cb8 9200
.org 0x123cba
	adds r1, r1, r2	@ 00123cba 8918
.org 0x123cbc
	movs r2, #2	@ 00123cbc 0222
.org 0x123cbe
	strb r2, [r1, #0]	@ 00123cbe 0a70
.org 0x123cc0
	ldrb r0, [r0, #25]	@ 00123cc0 407e
.org 0x123cc2
	cmp r0, #5	@ 00123cc2 0528
.org 0x123cc4
	bls.n 0x123cc8	@ 00123cc4 00d9
.org 0x123cc6
	b.n 0x123dbc	@ 00123cc6 79e0
.org 0x123cc8
	lsls r0, r0, #2	@ 00123cc8 8000
.org 0x123cca
	ldr r1, [pc, #12]	@ 00123cca 0349
.org 0x123ccc
	adds r0, r0, r1	@ 00123ccc 4018
.org 0x123cce
	ldr r0, [r0, #0]	@ 00123cce 0068
.org 0x123cd0
	mov pc, r0	@ 00123cd0 8746
.org 0x123cd2
	.byte 0x00	@ 00123cd2 data
.org 0x123cd3
	.byte 0x00	@ 00123cd3 data
.org 0x123cd4
	.byte 0xcc,0x0d,0x00,0x00	@ 00123cd4 data
.org 0x123cd8
	.byte 0xdc,0x3c,0x12,0x08	@ 00123cd8 data
