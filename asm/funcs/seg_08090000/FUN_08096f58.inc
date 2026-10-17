@ FUN_08096f58  entry 0x08096f58  size 256
.thumb
.org 0x96f58
FUN_08096f58:
	push {r4, r5, lr}	@ 00096f58 30b5
.org 0x96f5a
	adds r4, r0, #0	@ 00096f5a 041c
.org 0x96f5c
	ldrb r0, [r4, #16]	@ 00096f5c 207c
.org 0x96f5e
	cmp r0, #1	@ 00096f5e 0128
.org 0x96f60
	bne.n 0x96f6a	@ 00096f60 03d1
.org 0x96f62
	adds r0, r4, #0	@ 00096f62 201c
.org 0x96f64
	bl 0x97074	@ 00096f64 00f086f8
.org 0x96f68
	b.n 0x97060	@ 00096f68 7ae0
.org 0x96f6a
	adds r0, r4, #0	@ 00096f6a 201c
.org 0x96f6c
	adds r0, #140	@ 00096f6c 8c30
.org 0x96f6e
	ldr r2, [r0, #0]	@ 00096f6e 0268
.org 0x96f70
	movs r0, #128	@ 00096f70 8020
.org 0x96f72
	lsls r0, r0, #2	@ 00096f72 8000
.org 0x96f74
	ands r0, r2	@ 00096f74 1040
.org 0x96f76
	cmp r0, #0	@ 00096f76 0028
.org 0x96f78
	beq.n 0x96fa0	@ 00096f78 12d0
.org 0x96f7a
	adds r1, r4, #0	@ 00096f7a 211c
.org 0x96f7c
	adds r1, #191	@ 00096f7c bf31
.org 0x96f7e
	movs r0, #1	@ 00096f7e 0120
.org 0x96f80
	strb r0, [r1, #0]	@ 00096f80 0870
.org 0x96f82
	ldr r1, [pc, #24]	@ 00096f82 0649
.org 0x96f84
	ldrb r0, [r4, #9]	@ 00096f84 607a
.org 0x96f86
	lsls r0, r0, #2	@ 00096f86 8000
.org 0x96f88
	adds r0, r0, r1	@ 00096f88 4018
.org 0x96f8a
	movs r1, #2	@ 00096f8a 0221
.org 0x96f8c
	str r1, [r4, #12]	@ 00096f8c e160
.org 0x96f8e
	ldr r0, [r0, #0]	@ 00096f8e 0068
.org 0x96f90
	ldr r0, [r0, #8]	@ 00096f90 8068
.org 0x96f92
	str r0, [r4, #20]	@ 00096f92 6061
.org 0x96f94
	adds r0, r4, #0	@ 00096f94 201c
.org 0x96f96
	bl 0x97220	@ 00096f96 00f043f9
.org 0x96f9a
	b.n 0x97060	@ 00096f9a 61e0
.org 0x96f9c
	.byte 0x40,0xdb,0x85,0x08	@ 00096f9c data
.org 0x96fa0
	adds r0, r4, #0	@ 00096fa0 201c
.org 0x96fa2
	adds r0, #192	@ 00096fa2 c030
.org 0x96fa4
	ldr r1, [r0, #0]	@ 00096fa4 0168
.org 0x96fa6
	adds r5, r0, #0	@ 00096fa6 051c
.org 0x96fa8
	cmp r1, #0	@ 00096fa8 0029
.org 0x96faa
	bne.n 0x96fd4	@ 00096faa 13d1
.org 0x96fac
	movs r0, #1	@ 00096fac 0120
.org 0x96fae
	ands r2, r0	@ 00096fae 0240
.org 0x96fb0
	cmp r2, #0	@ 00096fb0 002a
.org 0x96fb2
	beq.n 0x96fce	@ 00096fb2 0cd0
.org 0x96fb4
	ldr r2, [pc, #84]	@ 00096fb4 154a
.org 0x96fb6
	movs r0, #0	@ 00096fb6 0020
.org 0x96fb8
	adds r1, r4, #0	@ 00096fb8 211c
.org 0x96fba
	bl 0x2adac	@ 00096fba 93f7f7fe
.org 0x96fbe
	str r0, [r5, #0]	@ 00096fbe 2860
.org 0x96fc0
	cmp r0, #0	@ 00096fc0 0028
.org 0x96fc2
	beq.n 0x97022	@ 00096fc2 2ed0
.org 0x96fc4
	adds r0, r4, #0	@ 00096fc4 201c
.org 0x96fc6
	adds r0, #116	@ 00096fc6 7430
.org 0x96fc8
	ldr r1, [pc, #68]	@ 00096fc8 1149
.org 0x96fca
	bl 0x5784	@ 00096fca 6ef7dbfb
.org 0x96fce
	ldr r0, [r5, #0]	@ 00096fce 2868
.org 0x96fd0
	cmp r0, #0	@ 00096fd0 0028
.org 0x96fd2
	beq.n 0x97022	@ 00096fd2 26d0
.org 0x96fd4
	ldr r0, [r5, #0]	@ 00096fd4 2868
.org 0x96fd6
	bl 0x2b3e4	@ 00096fd6 94f705fa
.org 0x96fda
	cmp r0, #0	@ 00096fda 0028
.org 0x96fdc
	bne.n 0x97014	@ 00096fdc 1ad1
.org 0x96fde
	ldrb r0, [r4, #30]	@ 00096fde a07f
.org 0x96fe0
	lsls r0, r0, #8	@ 00096fe0 0002
.org 0x96fe2
	adds r1, r4, #0	@ 00096fe2 211c
.org 0x96fe4
	adds r1, #112	@ 00096fe4 7031
.org 0x96fe6
	ldrb r1, [r1, #0]	@ 00096fe6 0978
.org 0x96fe8
	orrs r1, r0	@ 00096fe8 0143
.org 0x96fea
	adds r0, r4, #0	@ 00096fea 201c
.org 0x96fec
	adds r0, #113	@ 00096fec 7130
.org 0x96fee
	movs r2, #0	@ 00096fee 0022
.org 0x96ff0
	ldrsb r2, [r0, r2]	@ 00096ff0 8256
.org 0x96ff2
	lsls r2, r2, #16	@ 00096ff2 1204
.org 0x96ff4
	lsrs r2, r2, #16	@ 00096ff4 120c
.org 0x96ff6
	adds r3, r1, #1	@ 00096ff6 4b1c
.org 0x96ff8
	lsls r3, r3, #16	@ 00096ff8 1b04
.org 0x96ffa
	lsrs r3, r3, #16	@ 00096ffa 1b0c
.org 0x96ffc
	adds r0, r4, #0	@ 00096ffc 201c
.org 0x96ffe
	bl 0x1cfc8	@ 00096ffe 85f7e3ff
.org 0x97002
	adds r0, r4, #0	@ 00097002 201c
.org 0x97004
	bl 0x1cff0	@ 00097004 85f7f4ff
.org 0x97008
	b.n 0x97060	@ 00097008 2ae0
.org 0x9700a
	.byte 0x00	@ 0009700a data
.org 0x9700b
	.byte 0x00	@ 0009700b data
.org 0x9700c
	.byte 0xa4,0x0a,0x86,0x08	@ 0009700c data
.org 0x97010
	.byte 0xb4,0x09,0x86,0x08	@ 00097010 data
.org 0x97014
	adds r0, r4, #0	@ 00097014 201c
.org 0x97016
	adds r0, #116	@ 00097016 7430
.org 0x97018
	ldr r1, [pc, #76]	@ 00097018 1349
.org 0x9701a
	bl 0x5784	@ 0009701a 6ef7b3fb
.org 0x9701e
	movs r0, #0	@ 0009701e 0020
.org 0x97020
	str r0, [r5, #0]	@ 00097020 2860
.org 0x97022
	ldrb r0, [r4, #13]	@ 00097022 607b
.org 0x97024
	cmp r0, #2	@ 00097024 0228
.org 0x97026
	beq.n 0x97050	@ 00097026 13d0
.org 0x97028
	cmp r0, #5	@ 00097028 0528
.org 0x9702a
	beq.n 0x97050	@ 0009702a 11d0
.org 0x9702c
	ldrb r0, [r4, #10]	@ 0009702c a07a
.org 0x9702e
	lsrs r2, r0, #4	@ 0009702e 0209
.org 0x97030
	movs r0, #1	@ 00097030 0120
.org 0x97032
	ands r2, r0	@ 00097032 0240
.org 0x97034
	movs r3, #0	@ 00097034 0023
.org 0x97036
	ldr r0, [pc, #52]	@ 00097036 0d48
.org 0x97038
	ldr r0, [r0, #0]	@ 00097038 0068
.org 0x9703a
	ldr r1, [r4, #84]	@ 0009703a 616d
.org 0x9703c
	ldr r0, [r0, #84]	@ 0009703c 406d
.org 0x9703e
	cmp r1, r0	@ 0009703e 8142
.org 0x97040
	bge.n 0x97044	@ 00097040 00da
.org 0x97042
	movs r3, #1	@ 00097042 0123
.org 0x97044
	cmp r2, r3	@ 00097044 9a42
.org 0x97046
	beq.n 0x97050	@ 00097046 03d0
.org 0x97048
	movs r1, #0	@ 00097048 0021
.org 0x9704a
	movs r0, #5	@ 0009704a 0520
.org 0x9704c
	strb r0, [r4, #13]	@ 0009704c 6073
.org 0x9704e
	strb r1, [r4, #14]	@ 0009704e a173
.org 0x97050
	ldr r0, [pc, #28]	@ 00097050 0748
.org 0x97052
	ldrb r1, [r4, #13]	@ 00097052 617b
.org 0x97054
	lsls r1, r1, #2	@ 00097054 8900
.org 0x97056
	adds r1, r1, r0	@ 00097056 0918
