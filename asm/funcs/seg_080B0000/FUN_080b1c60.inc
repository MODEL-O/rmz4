@ FUN_080b1c60  entry 0x080b1c60  size 130
.thumb
.org 0xb1c60
FUN_080b1c60:
	push {r4, r5, r6, r7, lr}	@ 000b1c60 f0b5
.org 0xb1c62
	adds r4, r0, #0	@ 000b1c62 041c
.org 0xb1c64
	adds r7, r1, #0	@ 000b1c64 0f1c
.org 0xb1c66
	ldr r0, [r4, #20]	@ 000b1c66 6069
.org 0xb1c68
	movs r6, #1	@ 000b1c68 0126
.org 0xb1c6a
	ands r0, r6	@ 000b1c6a 3040
.org 0xb1c6c
	cmp r0, #0	@ 000b1c6c 0028
.org 0xb1c6e
	beq.n 0xb1ce2	@ 000b1c6e 38d0
.org 0xb1c70
	ldr r5, [r4, #44]	@ 000b1c70 e56a
.org 0xb1c72
	movs r0, #28	@ 000b1c72 1c20
.org 0xb1c74
	bl 0x6984	@ 000b1c74 54f786fe
.org 0xb1c78
	ldr r1, [r4, #20]	@ 000b1c78 6169
.org 0xb1c7a
	movs r0, #128	@ 000b1c7a 8020
.org 0xb1c7c
	lsls r0, r0, #2	@ 000b1c7c 8000
.org 0xb1c7e
	ands r0, r1	@ 000b1c7e 0840
.org 0xb1c80
	cmp r0, #0	@ 000b1c80 0028
.org 0xb1c82
	beq.n 0xb1ca4	@ 000b1c82 0fd0
.org 0xb1c84
	movs r0, #128	@ 000b1c84 8020
.org 0xb1c86
	lsls r0, r0, #10	@ 000b1c86 8002
.org 0xb1c88
	ands r1, r0	@ 000b1c88 0140
.org 0xb1c8a
	cmp r1, #0	@ 000b1c8a 0029
.org 0xb1c8c
	beq.n 0xb1ca4	@ 000b1c8c 0ad0
.org 0xb1c8e
	adds r0, r5, #0	@ 000b1c8e 281c
.org 0xb1c90
	adds r0, #180	@ 000b1c90 b430
.org 0xb1c92
	strb r6, [r0, #0]	@ 000b1c92 0670
.org 0xb1c94
	ldr r0, [pc, #56]	@ 000b1c94 0e48
.org 0xb1c96
	ldr r0, [r0, #0]	@ 000b1c96 0068
.org 0xb1c98
	cmp r0, #0	@ 000b1c98 0028
.org 0xb1c9a
	beq.n 0xb1ca4	@ 000b1c9a 03d0
.org 0xb1c9c
	movs r1, #6	@ 000b1c9c 0621
.org 0xb1c9e
	movs r2, #10	@ 000b1c9e 0a22
.org 0xb1ca0
	bl 0x3a578	@ 000b1ca0 88f76afc
.org 0xb1ca4
	ldr r0, [r5, #84]	@ 000b1ca4 686d
.org 0xb1ca6
	ldr r1, [r7, #0]	@ 000b1ca6 3968
.org 0xb1ca8
	subs r0, r0, r1	@ 000b1ca8 401a
.org 0xb1caa
	asrs r0, r0, #8	@ 000b1caa 0012
.org 0xb1cac
	cmp r0, #0	@ 000b1cac 0028
.org 0xb1cae
	bge.n 0xb1cb2	@ 000b1cae 00da
.org 0xb1cb0
	negs r0, r0	@ 000b1cb0 4042
.org 0xb1cb2
	cmp r0, #4	@ 000b1cb2 0428
.org 0xb1cb4
	bgt.n 0xb1cd4	@ 000b1cb4 0edc
.org 0xb1cb6
	ldr r0, [r5, #88]	@ 000b1cb6 a86d
.org 0xb1cb8
	ldr r1, [r7, #4]	@ 000b1cb8 7968
.org 0xb1cba
	subs r0, r0, r1	@ 000b1cba 401a
.org 0xb1cbc
	asrs r0, r0, #8	@ 000b1cbc 0012
.org 0xb1cbe
	cmp r0, #0	@ 000b1cbe 0028
.org 0xb1cc0
	bge.n 0xb1cc4	@ 000b1cc0 00da
.org 0xb1cc2
	negs r0, r0	@ 000b1cc2 4042
.org 0xb1cc4
	cmp r0, #4	@ 000b1cc4 0428
.org 0xb1cc6
	bgt.n 0xb1cd4	@ 000b1cc6 05dc
.org 0xb1cc8
	movs r1, #0	@ 000b1cc8 0021
.org 0xb1cca
	movs r0, #5	@ 000b1cca 0520
.org 0xb1ccc
	b.n 0xb1cde	@ 000b1ccc 07e0
.org 0xb1cce
	.byte 0x00	@ 000b1cce data
.org 0xb1ccf
	.byte 0x00	@ 000b1ccf data
.org 0xb1cd0
	.byte 0xf0,0xdb,0x02,0x02	@ 000b1cd0 data
.org 0xb1cd4
	ldrb r0, [r5, #13]	@ 000b1cd4 687b
.org 0xb1cd6
	cmp r0, #5	@ 000b1cd6 0528
.org 0xb1cd8
	beq.n 0xb1ce2	@ 000b1cd8 03d0
.org 0xb1cda
	movs r1, #0	@ 000b1cda 0021
.org 0xb1cdc
	movs r0, #4	@ 000b1cdc 0420
.org 0xb1cde
	strb r0, [r5, #13]	@ 000b1cde 6873
.org 0xb1ce0
	strb r1, [r5, #14]	@ 000b1ce0 a973
