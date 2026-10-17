@ FUN_08036fc8  entry 0x08036fc8  size 82
.thumb
.org 0x36fc8
FUN_08036fc8:
	push {r4, lr}	@ 00036fc8 10b5
.org 0x36fca
	adds r4, r0, #0	@ 00036fca 041c
.org 0x36fcc
	adds r0, #180	@ 00036fcc b430
.org 0x36fce
	ldrb r0, [r0, #12]	@ 00036fce 007b
.org 0x36fd0
	cmp r0, #0	@ 00036fd0 0028
.org 0x36fd2
	bne.n 0x36fe4	@ 00036fd2 07d1
.org 0x36fd4
	ldr r0, [pc, #8]	@ 00036fd4 0248
.org 0x36fd6
	adds r2, r4, r0	@ 00036fd6 2218
.org 0x36fd8
	ldrb r0, [r2, #0]	@ 00036fd8 1078
.org 0x36fda
	movs r1, #16	@ 00036fda 1021
.org 0x36fdc
	b.n 0x36fec	@ 00036fdc 06e0
.org 0x36fde
	.byte 0x00	@ 00036fde data
.org 0x36fdf
	.byte 0x00	@ 00036fdf data
.org 0x36fe0
	.byte 0x53,0x01,0x00,0x00	@ 00036fe0 data
.org 0x36fe4
	ldr r1, [pc, #40]	@ 00036fe4 0a49
.org 0x36fe6
	adds r2, r4, r1	@ 00036fe6 6218
.org 0x36fe8
	ldrb r0, [r2, #0]	@ 00036fe8 1078
.org 0x36fea
	movs r1, #32	@ 00036fea 2021
.org 0x36fec
	orrs r0, r1	@ 00036fec 0843
.org 0x36fee
	strb r0, [r2, #0]	@ 00036fee 1070
.org 0x36ff0
	ldr r1, [pc, #32]	@ 00036ff0 0849
.org 0x36ff2
	adds r0, r4, #0	@ 00036ff2 201c
.org 0x36ff4
	movs r2, #1	@ 00036ff4 0122
.org 0x36ff6
	movs r3, #2	@ 00036ff6 0223
.org 0x36ff8
	bl 0x1cfc8	@ 00036ff8 e5f7e6ff
.org 0x36ffc
	movs r2, #170	@ 00036ffc aa22
.org 0x36ffe
	lsls r2, r2, #1	@ 00036ffe 5200
.org 0x37000
	adds r0, r4, r2	@ 00037000 a018
.org 0x37002
	ldrb r0, [r0, #0]	@ 00037002 0078
.org 0x37004
	cmp r0, #3	@ 00037004 0328
.org 0x37006
	bne.n 0x37018	@ 00037006 07d1
.org 0x37008
	subs r2, #83	@ 00037008 533a
.org 0x3700a
	adds r1, r4, r2	@ 0003700a a118
.org 0x3700c
	b.n 0x37022	@ 0003700c 09e0
.org 0x3700e
	.byte 0x00	@ 0003700e data
.org 0x3700f
	.byte 0x00	@ 0003700f data
.org 0x37010
	.byte 0x53,0x01,0x00,0x00	@ 00037010 data
.org 0x37014
	.byte 0x01,0x0c,0x00,0x00	@ 00037014 data
.org 0x37018
	cmp r0, #2	@ 00037018 0228
