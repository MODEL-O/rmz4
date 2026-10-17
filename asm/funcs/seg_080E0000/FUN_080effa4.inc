@ FUN_080effa4  entry 0x080effa4  size 172
.thumb
.org 0xeffa4
FUN_080effa4:
	push {r4, r5, lr}	@ 000effa4 30b5
.org 0xeffa6
	adds r4, r0, #0	@ 000effa6 041c
.org 0xeffa8
	ldrb r5, [r4, #17]	@ 000effa8 657c
.org 0xeffaa
	cmp r5, #1	@ 000effaa 012d
.org 0xeffac
	beq.n 0xf0014	@ 000effac 32d0
.org 0xeffae
	cmp r5, #1	@ 000effae 012d
.org 0xeffb0
	bgt.n 0xeffb8	@ 000effb0 02dc
.org 0xeffb2
	cmp r5, #0	@ 000effb2 002d
.org 0xeffb4
	beq.n 0xeffbe	@ 000effb4 03d0
.org 0xeffb6
	b.n 0xf0050	@ 000effb6 4be0
.org 0xeffb8
	cmp r5, #2	@ 000effb8 022d
.org 0xeffba
	beq.n 0xf0038	@ 000effba 3dd0
.org 0xeffbc
	b.n 0xf0050	@ 000effbc 48e0
.org 0xeffbe
	ldr r0, [pc, #108]	@ 000effbe 1b48
.org 0xeffc0
	movs r2, #194	@ 000effc0 c222
.org 0xeffc2
	lsls r2, r2, #1	@ 000effc2 5200
.org 0xeffc4
	adds r0, r0, r2	@ 000effc4 8018
.org 0xeffc6
	movs r1, #128	@ 000effc6 8021
.org 0xeffc8
	lsls r1, r1, #2	@ 000effc8 8900
.org 0xeffca
	strh r1, [r0, #0]	@ 000effca 0180
.org 0xeffcc
	ldr r0, [pc, #96]	@ 000effcc 1848
.org 0xeffce
	adds r0, r0, r2	@ 000effce 8018
.org 0xeffd0
	movs r1, #4	@ 000effd0 0421
.org 0xeffd2
	strh r1, [r0, #0]	@ 000effd2 0180
.org 0xeffd4
	ldr r1, [pc, #92]	@ 000effd4 1749
.org 0xeffd6
	adds r0, r4, #0	@ 000effd6 201c
.org 0xeffd8
	bl 0x1cf00	@ 000effd8 2cf792ff
.org 0xeffdc
	adds r2, r4, #0	@ 000effdc 221c
.org 0xeffde
	adds r2, #73	@ 000effde 4932
.org 0xeffe0
	ldrb r1, [r2, #0]	@ 000effe0 1178
.org 0xeffe2
	movs r0, #13	@ 000effe2 0d20
.org 0xeffe4
	negs r0, r0	@ 000effe4 4042
.org 0xeffe6
	ands r0, r1	@ 000effe6 0840
.org 0xeffe8
	strb r0, [r2, #0]	@ 000effe8 1070
.org 0xeffea
	ldrb r1, [r4, #10]	@ 000effea a17a
.org 0xeffec
	movs r0, #239	@ 000effec ef20
.org 0xeffee
	ands r0, r1	@ 000effee 0840
.org 0xefff0
	strb r0, [r4, #10]	@ 000efff0 a072
.org 0xefff2
	adds r0, r4, #0	@ 000efff2 201c
.org 0xefff4
	adds r0, #76	@ 000efff4 4c30
.org 0xefff6
	strb r5, [r0, #0]	@ 000efff6 0570
.org 0xefff8
	adds r2, #1	@ 000efff8 0132
.org 0xefffa
	ldrb r1, [r2, #0]	@ 000efffa 1178
.org 0xefffc
	movs r0, #17	@ 000efffc 1120
.org 0xefffe
	negs r0, r0	@ 000efffe 4042
.org 0xf0000
	ands r0, r1	@ 000f0000 0840
.org 0xf0002
	strb r0, [r2, #0]	@ 000f0002 1070
.org 0xf0004
	ldr r0, [r4, #84]	@ 000f0004 606d
.org 0xf0006
	ldr r1, [r4, #88]	@ 000f0006 a16d
.org 0xf0008
	bl 0x8534	@ 000f0008 18f794fa
.org 0xf000c
	str r0, [r4, #88]	@ 000f000c a065
.org 0xf000e
	ldrb r0, [r4, #17]	@ 000f000e 607c
.org 0xf0010
	adds r0, #1	@ 000f0010 0130
.org 0xf0012
	strb r0, [r4, #17]	@ 000f0012 6074
.org 0xf0014
	ldr r0, [r4, #24]	@ 000f0014 a069
.org 0xf0016
	ldrb r1, [r0, #9]	@ 000f0016 417a
.org 0xf0018
	movs r0, #1	@ 000f0018 0120
.org 0xf001a
	ands r0, r1	@ 000f001a 0840
.org 0xf001c
	cmp r0, #0	@ 000f001c 0028
.org 0xf001e
	beq.n 0xf0050	@ 000f001e 17d0
.org 0xf0020
	movs r1, #194	@ 000f0020 c221
.org 0xf0022
	lsls r1, r1, #8	@ 000f0022 0902
.org 0xf0024
	adds r0, r4, #0	@ 000f0024 201c
.org 0xf0026
	bl 0x1cf00	@ 000f0026 2cf76bff
.org 0xf002a
	b.n 0xf004a	@ 000f002a 0ee0
.org 0xf002c
	.byte 0x40,0xe2,0x02,0x02	@ 000f002c data
.org 0xf0030
	.byte 0x40,0xdc,0x02,0x02	@ 000f0030 data
.org 0xf0034
	.byte 0x01,0xc2,0x00,0x00	@ 000f0034 data
.org 0xf0038
	ldr r0, [r4, #24]	@ 000f0038 a069
.org 0xf003a
	ldrb r0, [r0, #9]	@ 000f003a 407a
.org 0xf003c
	ands r5, r0	@ 000f003c 0540
.org 0xf003e
	cmp r5, #0	@ 000f003e 002d
.org 0xf0040
	beq.n 0xf0050	@ 000f0040 06d0
.org 0xf0042
	ldr r0, [pc, #24]	@ 000f0042 0648
.org 0xf0044
	ldr r1, [pc, #24]	@ 000f0044 0649
.org 0xf0046
	bl 0x1126ac	@ 000f0046 22f031fb
.org 0xf004a
	ldrb r0, [r4, #17]	@ 000f004a 607c
.org 0xf004c
	adds r0, #1	@ 000f004c 0130
.org 0xf004e
	strb r0, [r4, #17]	@ 000f004e 6074
