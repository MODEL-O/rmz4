@ FUN_08125f90  entry 0x08125f90  size 134
.thumb
.org 0x125f90
FUN_08125f90:
	push {r4, r5, lr}	@ 00125f90 30b5
.org 0x125f92
	adds r5, r0, #0	@ 00125f92 051c
.org 0x125f94
	ldr r0, [pc, #16]	@ 00125f94 0448
.org 0x125f96
	adds r4, r5, r0	@ 00125f96 2c18
.org 0x125f98
	ldrb r0, [r4, #25]	@ 00125f98 607e
.org 0x125f9a
	cmp r0, #1	@ 00125f9a 0128
.org 0x125f9c
	beq.n 0x125fc0	@ 00125f9c 10d0
.org 0x125f9e
	cmp r0, #1	@ 00125f9e 0128
.org 0x125fa0
	bgt.n 0x125fac	@ 00125fa0 04dc
.org 0x125fa2
	cmp r0, #0	@ 00125fa2 0028
.org 0x125fa4
	beq.n 0x125fb6	@ 00125fa4 07d0
.org 0x125fa6
	b.n 0x126008	@ 00125fa6 2fe0
.org 0x125fa8
	.byte 0xcc,0x0d,0x00,0x00	@ 00125fa8 data
.org 0x125fac
	cmp r0, #2	@ 00125fac 0228
.org 0x125fae
	beq.n 0x125fe0	@ 00125fae 17d0
.org 0x125fb0
	cmp r0, #3	@ 00125fb0 0328
.org 0x125fb2
	beq.n 0x125ff6	@ 00125fb2 20d0
.org 0x125fb4
	b.n 0x126008	@ 00125fb4 28e0
.org 0x125fb6
	movs r0, #60	@ 00125fb6 3c20
.org 0x125fb8
	strb r0, [r4, #28]	@ 00125fb8 2077
.org 0x125fba
	ldrb r0, [r4, #25]	@ 00125fba 607e
.org 0x125fbc
	adds r0, #1	@ 00125fbc 0130
.org 0x125fbe
	strb r0, [r4, #25]	@ 00125fbe 6076
.org 0x125fc0
	ldr r0, [pc, #24]	@ 00125fc0 0648
.org 0x125fc2
	adds r1, r5, r0	@ 00125fc2 2918
.org 0x125fc4
	ldrb r0, [r1, #28]	@ 00125fc4 087f
.org 0x125fc6
	subs r0, #1	@ 00125fc6 0138
.org 0x125fc8
	strb r0, [r1, #28]	@ 00125fc8 0877
.org 0x125fca
	lsls r0, r0, #24	@ 00125fca 0006
.org 0x125fcc
	lsrs r0, r0, #24	@ 00125fcc 000e
.org 0x125fce
	cmp r0, #255	@ 00125fce ff28
.org 0x125fd0
	bne.n 0x126008	@ 00125fd0 1ad1
.org 0x125fd2
	ldrb r0, [r1, #25]	@ 00125fd2 487e
.org 0x125fd4
	adds r0, #1	@ 00125fd4 0130
.org 0x125fd6
	strb r0, [r1, #25]	@ 00125fd6 4876
.org 0x125fd8
	b.n 0x126008	@ 00125fd8 16e0
.org 0x125fda
	.byte 0x00	@ 00125fda data
.org 0x125fdb
	.byte 0x00	@ 00125fdb data
.org 0x125fdc
	.byte 0xcc,0x0d,0x00,0x00	@ 00125fdc data
.org 0x125fe0
	movs r0, #0	@ 00125fe0 0020
.org 0x125fe2
	bl 0xd3ebc	@ 00125fe2 adf76bff
.org 0x125fe6
	str r0, [r4, #4]	@ 00125fe6 6060
.org 0x125fe8
	movs r0, #30	@ 00125fe8 1e20
.org 0x125fea
	bl 0x2b10	@ 00125fea dcf691fd
.org 0x125fee
	ldrb r0, [r4, #25]	@ 00125fee 607e
.org 0x125ff0
	adds r0, #1	@ 00125ff0 0130
.org 0x125ff2
	strb r0, [r4, #25]	@ 00125ff2 6076
.org 0x125ff4
	b.n 0x126008	@ 00125ff4 08e0
.org 0x125ff6
	ldr r0, [r4, #4]	@ 00125ff6 6068
.org 0x125ff8
	ldrb r0, [r0, #12]	@ 00125ff8 007b
.org 0x125ffa
	cmp r0, #1	@ 00125ffa 0128
.org 0x125ffc
	bls.n 0x126008	@ 00125ffc 04d9
.org 0x125ffe
	ldrb r0, [r4, #24]	@ 00125ffe 207e
.org 0x126000
	adds r0, #1	@ 00126000 0130
.org 0x126002
	movs r1, #0	@ 00126002 0021
.org 0x126004
	strb r0, [r4, #24]	@ 00126004 2076
.org 0x126006
	strb r1, [r4, #25]	@ 00126006 6176
.org 0x126008
	ldr r1, [pc, #20]	@ 00126008 0549
.org 0x12600a
	adds r0, r5, r1	@ 0012600a 6818
.org 0x12600c
	ldr r0, [r0, #0]	@ 0012600c 0068
.org 0x12600e
	movs r1, #149	@ 0012600e 9521
.org 0x126010
	lsls r1, r1, #2	@ 00126010 8900
.org 0x126012
	adds r0, r0, r1	@ 00126012 4018
.org 0x126014
	movs r1, #1	@ 00126014 0121
