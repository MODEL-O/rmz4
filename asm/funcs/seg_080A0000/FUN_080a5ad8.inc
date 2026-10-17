@ FUN_080a5ad8  entry 0x080a5ad8  size 72
.thumb
.org 0xa5ad8
FUN_080a5ad8:
	push {lr}	@ 000a5ad8 00b5
.org 0xa5ada
	adds r2, r0, #0	@ 000a5ada 021c
.org 0xa5adc
	adds r0, #140	@ 000a5adc 8c30
.org 0xa5ade
	ldr r0, [r0, #0]	@ 000a5ade 0068
.org 0xa5ae0
	movs r1, #128	@ 000a5ae0 8021
.org 0xa5ae2
	lsls r1, r1, #2	@ 000a5ae2 8900
.org 0xa5ae4
	ands r0, r1	@ 000a5ae4 0840
.org 0xa5ae6
	cmp r0, #0	@ 000a5ae6 0028
.org 0xa5ae8
	beq.n 0xa5b10	@ 000a5ae8 12d0
.org 0xa5aea
	ldr r1, [pc, #32]	@ 000a5aea 0849
.org 0xa5aec
	ldrb r0, [r2, #9]	@ 000a5aec 507a
.org 0xa5aee
	lsls r0, r0, #2	@ 000a5aee 8000
.org 0xa5af0
	adds r0, r0, r1	@ 000a5af0 4018
.org 0xa5af2
	movs r1, #2	@ 000a5af2 0221
.org 0xa5af4
	str r1, [r2, #12]	@ 000a5af4 d160
.org 0xa5af6
	ldr r0, [r0, #0]	@ 000a5af6 0068
.org 0xa5af8
	ldr r0, [r0, #8]	@ 000a5af8 8068
.org 0xa5afa
	str r0, [r2, #20]	@ 000a5afa 5061
.org 0xa5afc
	movs r0, #0	@ 000a5afc 0020
.org 0xa5afe
	strb r0, [r2, #13]	@ 000a5afe 5073
.org 0xa5b00
	strb r0, [r2, #14]	@ 000a5b00 9073
.org 0xa5b02
	strb r0, [r2, #15]	@ 000a5b02 d073
.org 0xa5b04
	adds r0, r2, #0	@ 000a5b04 101c
.org 0xa5b06
	bl 0xa5f30	@ 000a5b06 00f013fa
.org 0xa5b0a
	b.n 0xa5b20	@ 000a5b0a 09e0
.org 0xa5b0c
	.byte 0x40,0xdb,0x85,0x08	@ 000a5b0c data
.org 0xa5b10
	ldr r0, [pc, #16]	@ 000a5b10 0448
.org 0xa5b12
	ldrb r1, [r2, #13]	@ 000a5b12 517b
.org 0xa5b14
	lsls r1, r1, #2	@ 000a5b14 8900
.org 0xa5b16
	adds r1, r1, r0	@ 000a5b16 0918
.org 0xa5b18
	ldr r1, [r1, #0]	@ 000a5b18 0968
.org 0xa5b1a
	adds r0, r2, #0	@ 000a5b1a 101c
.org 0xa5b1c
	bl 0x128f80	@ 000a5b1c 83f030fa
