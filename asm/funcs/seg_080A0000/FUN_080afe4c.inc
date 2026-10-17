@ FUN_080afe4c  entry 0x080afe4c  size 204
.thumb
.org 0xafe4c
FUN_080afe4c:
	push {r4, r5, lr}	@ 000afe4c 30b5
.org 0xafe4e
	adds r4, r0, #0	@ 000afe4e 041c
.org 0xafe50
	ldrb r0, [r4, #14]	@ 000afe50 a07b
.org 0xafe52
	cmp r0, #0	@ 000afe52 0028
.org 0xafe54
	bne.n 0xafeb8	@ 000afe54 30d1
.org 0xafe56
	adds r0, r4, #0	@ 000afe56 201c
.org 0xafe58
	adds r0, #183	@ 000afe58 b730
.org 0xafe5a
	ldr r2, [pc, #36]	@ 000afe5a 094a
.org 0xafe5c
	adds r1, r2, #0	@ 000afe5c 111c
.org 0xafe5e
	ldrb r0, [r0, #0]	@ 000afe5e 0078
.org 0xafe60
	adds r1, r1, r0	@ 000afe60 0918
.org 0xafe62
	lsls r1, r1, #16	@ 000afe62 0904
.org 0xafe64
	lsrs r1, r1, #16	@ 000afe64 090c
.org 0xafe66
	adds r0, r4, #0	@ 000afe66 201c
.org 0xafe68
	bl 0x1cf00	@ 000afe68 6df74af8
.org 0xafe6c
	ldrb r2, [r4, #10]	@ 000afe6c a27a
.org 0xafe6e
	lsrs r0, r2, #4	@ 000afe6e 1009
.org 0xafe70
	movs r1, #1	@ 000afe70 0121
.org 0xafe72
	bics r1, r0	@ 000afe72 8143
.org 0xafe74
	cmp r1, #0	@ 000afe74 0029
.org 0xafe76
	beq.n 0xafe84	@ 000afe76 05d0
.org 0xafe78
	movs r0, #16	@ 000afe78 1020
.org 0xafe7a
	orrs r0, r2	@ 000afe7a 1043
.org 0xafe7c
	b.n 0xafe88	@ 000afe7c 04e0
.org 0xafe7e
	.byte 0x00	@ 000afe7e data
.org 0xafe7f
	.byte 0x00	@ 000afe7f data
.org 0xafe80
	.byte 0x02,0xa6,0x00,0x00	@ 000afe80 data
.org 0xafe84
	movs r0, #239	@ 000afe84 ef20
.org 0xafe86
	ands r0, r2	@ 000afe86 1040
.org 0xafe88
	strb r0, [r4, #10]	@ 000afe88 a072
.org 0xafe8a
	adds r0, r4, #0	@ 000afe8a 201c
.org 0xafe8c
	adds r0, #76	@ 000afe8c 4c30
.org 0xafe8e
	strb r1, [r0, #0]	@ 000afe8e 0170
.org 0xafe90
	adds r3, r4, #0	@ 000afe90 231c
.org 0xafe92
	adds r3, #74	@ 000afe92 4a33
.org 0xafe94
	lsls r1, r1, #4	@ 000afe94 0901
.org 0xafe96
	ldrb r2, [r3, #0]	@ 000afe96 1a78
.org 0xafe98
	movs r0, #17	@ 000afe98 1120
.org 0xafe9a
	negs r0, r0	@ 000afe9a 4042
.org 0xafe9c
	ands r0, r2	@ 000afe9c 1040
.org 0xafe9e
	orrs r0, r1	@ 000afe9e 0843
.org 0xafea0
	strb r0, [r3, #0]	@ 000afea0 1870
.org 0xafea2
	ldr r1, [r4, #44]	@ 000afea2 e16a
.org 0xafea4
	cmp r1, #0	@ 000afea4 0029
.org 0xafea6
	beq.n 0xafeb2	@ 000afea6 04d0
.org 0xafea8
	movs r0, #2	@ 000afea8 0220
.org 0xafeaa
	strb r0, [r1, #13]	@ 000afeaa 4873
.org 0xafeac
	ldr r1, [r4, #44]	@ 000afeac e16a
.org 0xafeae
	movs r0, #0	@ 000afeae 0020
.org 0xafeb0
	strb r0, [r1, #14]	@ 000afeb0 8873
.org 0xafeb2
	ldrb r0, [r4, #14]	@ 000afeb2 a07b
.org 0xafeb4
	adds r0, #1	@ 000afeb4 0130
.org 0xafeb6
	strb r0, [r4, #14]	@ 000afeb6 a073
.org 0xafeb8
	adds r0, r4, #0	@ 000afeb8 201c
.org 0xafeba
	adds r0, #115	@ 000afeba 7330
.org 0xafebc
	ldrb r0, [r0, #0]	@ 000afebc 0078
.org 0xafebe
	cmp r0, #3	@ 000afebe 0328
.org 0xafec0
	bne.n 0xaff18	@ 000afec0 2ad1
.org 0xafec2
	ldrb r1, [r4, #10]	@ 000afec2 a17a
.org 0xafec4
	lsrs r0, r1, #4	@ 000afec4 0809
.org 0xafec6
	movs r2, #1	@ 000afec6 0122
.org 0xafec8
	bics r2, r0	@ 000afec8 8243
.org 0xafeca
	cmp r2, #0	@ 000afeca 002a
.org 0xafecc
	beq.n 0xafed4	@ 000afecc 02d0
.org 0xafece
	movs r0, #16	@ 000afece 1020
.org 0xafed0
	orrs r0, r1	@ 000afed0 0843
.org 0xafed2
	b.n 0xafed8	@ 000afed2 01e0
.org 0xafed4
	movs r0, #239	@ 000afed4 ef20
.org 0xafed6
	ands r0, r1	@ 000afed6 0840
.org 0xafed8
	strb r0, [r4, #10]	@ 000afed8 a072
.org 0xafeda
	movs r5, #1	@ 000afeda 0125
.org 0xafedc
	adds r1, r5, #0	@ 000afedc 291c
.org 0xafede
	ands r1, r2	@ 000afede 1140
.org 0xafee0
	adds r0, r4, #0	@ 000afee0 201c
.org 0xafee2
	adds r0, #76	@ 000afee2 4c30
.org 0xafee4
	strb r1, [r0, #0]	@ 000afee4 0170
.org 0xafee6
	adds r3, r4, #0	@ 000afee6 231c
.org 0xafee8
	adds r3, #74	@ 000afee8 4a33
.org 0xafeea
	lsls r1, r1, #4	@ 000afeea 0901
.org 0xafeec
	ldrb r2, [r3, #0]	@ 000afeec 1a78
.org 0xafeee
	movs r0, #17	@ 000afeee 1120
.org 0xafef0
	negs r0, r0	@ 000afef0 4042
.org 0xafef2
	ands r0, r2	@ 000afef2 1040
.org 0xafef4
	orrs r0, r1	@ 000afef4 0843
.org 0xafef6
	strb r0, [r3, #0]	@ 000afef6 1870
.org 0xafef8
	adds r0, r4, #0	@ 000afef8 201c
.org 0xafefa
	adds r0, #183	@ 000afefa b730
.org 0xafefc
	ldr r2, [pc, #32]	@ 000afefc 084a
.org 0xafefe
	adds r1, r2, #0	@ 000afefe 111c
.org 0xaff00
	ldrb r0, [r0, #0]	@ 000aff00 0078
.org 0xaff02
	adds r1, r1, r0	@ 000aff02 0918
.org 0xaff04
	lsls r1, r1, #16	@ 000aff04 0904
.org 0xaff06
	lsrs r1, r1, #16	@ 000aff06 090c
.org 0xaff08
	adds r0, r4, #0	@ 000aff08 201c
.org 0xaff0a
	bl 0x1cf00	@ 000aff0a 6cf7f9ff
.org 0xaff0e
	ldrb r0, [r4, #16]	@ 000aff0e 207c
.org 0xaff10
	cmp r0, #0	@ 000aff10 0028
.org 0xaff12
	bne.n 0xaff18	@ 000aff12 01d1
.org 0xaff14
	strb r5, [r4, #13]	@ 000aff14 6573
.org 0xaff16
	strb r0, [r4, #14]	@ 000aff16 a073
