@ FUN_08037f8c  entry 0x08037f8c  size 136
.thumb
.org 0x37f8c
FUN_08037f8c:
	push {r4, r5, lr}	@ 00037f8c 30b5
.org 0x37f8e
	adds r5, r0, #0	@ 00037f8e 051c
.org 0x37f90
	movs r0, #129	@ 00037f90 8120
.org 0x37f92
	lsls r0, r0, #1	@ 00037f92 4000
.org 0x37f94
	adds r4, r5, r0	@ 00037f94 2c18
.org 0x37f96
	ldrb r0, [r4, #0]	@ 00037f96 2078
.org 0x37f98
	cmp r0, #0	@ 00037f98 0028
.org 0x37f9a
	bne.n 0x37fb8	@ 00037f9a 0dd1
.org 0x37f9c
	ldr r1, [pc, #20]	@ 00037f9c 0549
.org 0x37f9e
	adds r0, r5, #0	@ 00037f9e 281c
.org 0x37fa0
	bl 0x1cf00	@ 00037fa0 e4f7aeff
.org 0x37fa4
	adds r0, r5, #0	@ 00037fa4 281c
.org 0x37fa6
	movs r1, #11	@ 00037fa6 0b21
.org 0x37fa8
	bl 0x3c464	@ 00037fa8 04f05cfa
.org 0x37fac
	ldrb r0, [r4, #0]	@ 00037fac 2078
.org 0x37fae
	adds r0, #1	@ 00037fae 0130
.org 0x37fb0
	strb r0, [r4, #0]	@ 00037fb0 2070
.org 0x37fb2
	b.n 0x37ff4	@ 00037fb2 1fe0
.org 0x37fb4
	.byte 0x01,0x1d,0x00,0x00	@ 00037fb4 data
.org 0x37fb8
	ldr r1, [pc, #36]	@ 00037fb8 0949
.org 0x37fba
	adds r0, r5, r1	@ 00037fba 6818
.org 0x37fbc
	ldrb r1, [r0, #0]	@ 00037fbc 0178
.org 0x37fbe
	movs r0, #1	@ 00037fbe 0120
.org 0x37fc0
	ands r0, r1	@ 00037fc0 0840
.org 0x37fc2
	cmp r0, #0	@ 00037fc2 0028
.org 0x37fc4
	beq.n 0x37fec	@ 00037fc4 12d0
.org 0x37fc6
	ldr r1, [pc, #28]	@ 00037fc6 0749
.org 0x37fc8
	movs r2, #183	@ 00037fc8 b722
.org 0x37fca
	lsls r2, r2, #1	@ 00037fca 5200
.org 0x37fcc
	adds r0, r5, r2	@ 00037fcc a818
.org 0x37fce
	ldrb r2, [r0, #0]	@ 00037fce 0278
.org 0x37fd0
	ldr r3, [pc, #20]	@ 00037fd0 054b
.org 0x37fd2
	adds r0, r5, r3	@ 00037fd2 e818
.org 0x37fd4
	ldrb r3, [r0, #0]	@ 00037fd4 0378
.org 0x37fd6
	adds r0, r5, #0	@ 00037fd6 281c
.org 0x37fd8
	bl 0x1cfc8	@ 00037fd8 e4f7f6ff
.org 0x37fdc
	b.n 0x37ff4	@ 00037fdc 0ae0
.org 0x37fde
	.byte 0x00	@ 00037fde data
.org 0x37fdf
	.byte 0x00	@ 00037fdf data
.org 0x37fe0
	.byte 0x53,0x01,0x00,0x00	@ 00037fe0 data
.org 0x37fe4
	.byte 0x01,0x1d,0x00,0x00	@ 00037fe4 data
.org 0x37fe8
	.byte 0x6f,0x01,0x00,0x00	@ 00037fe8 data
.org 0x37fec
	ldr r1, [pc, #40]	@ 00037fec 0a49
.org 0x37fee
	adds r0, r5, #0	@ 00037fee 281c
.org 0x37ff0
	bl 0x3a3b0	@ 00037ff0 02f0def9
.org 0x37ff4
	adds r0, r5, #0	@ 00037ff4 281c
.org 0x37ff6
	adds r0, #115	@ 00037ff6 7330
.org 0x37ff8
	ldrb r0, [r0, #0]	@ 00037ff8 0078
.org 0x37ffa
	cmp r0, #3	@ 00037ffa 0328
.org 0x37ffc
	bne.n 0x38020	@ 00037ffc 10d1
.org 0x37ffe
	movs r1, #128	@ 00037ffe 8021
.org 0x38000
	lsls r1, r1, #1	@ 00038000 4900
.org 0x38002
	adds r0, r5, r1	@ 00038002 6818
.org 0x38004
	movs r4, #0	@ 00038004 0024
.org 0x38006
	strb r4, [r0, #0]	@ 00038006 0470
.org 0x38008
	ldr r1, [pc, #16]	@ 00038008 0449
.org 0x3800a
	adds r0, r5, #0	@ 0003800a 281c
.org 0x3800c
	bl 0x1cf00	@ 0003800c e4f778ff
.org 0x38010
	movs r0, #2	@ 00038010 0220
.org 0x38012
	strb r0, [r5, #14]	@ 00038012 a873
