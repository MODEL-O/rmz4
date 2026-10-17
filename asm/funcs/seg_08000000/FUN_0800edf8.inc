@ FUN_0800edf8  entry 0x0800edf8  size 396
.thumb
.org 0xedf8
FUN_0800edf8:
	push {r4, r5, r6, r7, lr}	@ 0000edf8 f0b5
.org 0xedfa
	mov r7, r9	@ 0000edfa 4f46
.org 0xedfc
	mov r6, r8	@ 0000edfc 4646
.org 0xedfe
	push {r6, r7}	@ 0000edfe c0b4
.org 0xee00
	ldr r7, [pc, #32]	@ 0000ee00 084f
.org 0xee02
	ldr r0, [pc, #36]	@ 0000ee02 0948
.org 0xee04
	adds r0, r0, r7	@ 0000ee04 c019
.org 0xee06
	mov ip, r0	@ 0000ee06 8446
.org 0xee08
	ldrb r6, [r0, #0]	@ 0000ee08 0678
.org 0xee0a
	mov r8, r7	@ 0000ee0a b846
.org 0xee0c
	cmp r6, #0	@ 0000ee0c 002e
.org 0xee0e
	bne.n 0xee12	@ 0000ee0e 00d1
.org 0xee10
	b.n 0xef6a	@ 0000ee10 abe0
.org 0xee12
	ldrb r5, [r0, #0]	@ 0000ee12 0578
.org 0xee14
	cmp r5, #2	@ 0000ee14 022d
.org 0xee16
	beq.n 0xee74	@ 0000ee16 2dd0
.org 0xee18
	cmp r5, #2	@ 0000ee18 022d
.org 0xee1a
	bgt.n 0xee2c	@ 0000ee1a 07dc
.org 0xee1c
	cmp r5, #1	@ 0000ee1c 012d
.org 0xee1e
	beq.n 0xee34	@ 0000ee1e 09d0
.org 0xee20
	b.n 0xef6a	@ 0000ee20 a3e0
.org 0xee22
	.byte 0x00	@ 0000ee22 data
.org 0xee23
	.byte 0x00	@ 0000ee23 data
.org 0xee24
	.byte 0xb0,0x0a,0x00,0x02	@ 0000ee24 data
.org 0xee28
	.byte 0x2e,0xd0,0x02,0x00	@ 0000ee28 data
.org 0xee2c
	cmp r5, #3	@ 0000ee2c 032d
.org 0xee2e
	bne.n 0xee32	@ 0000ee2e 00d1
.org 0xee30
	b.n 0xef44	@ 0000ee30 88e0
.org 0xee32
	b.n 0xef6a	@ 0000ee32 9ae0
.org 0xee34
	ldr r2, [pc, #96]	@ 0000ee34 184a
.org 0xee36
	ldrh r1, [r2, #8]	@ 0000ee36 1189
.org 0xee38
	ldr r0, [pc, #96]	@ 0000ee38 1848
.org 0xee3a
	movs r3, #0	@ 0000ee3a 0023
.org 0xee3c
	mov r9, r3	@ 0000ee3c 9946
.org 0xee3e
	ldr r4, [pc, #96]	@ 0000ee3e 184c
.org 0xee40
	adds r3, r4, #0	@ 0000ee40 231c
.org 0xee42
	ands r0, r1	@ 0000ee42 0840
.org 0xee44
	movs r1, #8	@ 0000ee44 0821
.org 0xee46
	orrs r0, r1	@ 0000ee46 0843
.org 0xee48
	strh r0, [r2, #8]	@ 0000ee48 1081
.org 0xee4a
	ldr r2, [pc, #88]	@ 0000ee4a 164a
.org 0xee4c
	ldrh r0, [r2, #0]	@ 0000ee4c 1088
.org 0xee4e
	movs r4, #128	@ 0000ee4e 8024
.org 0xee50
	lsls r4, r4, #7	@ 0000ee50 e401
.org 0xee52
	adds r1, r4, #0	@ 0000ee52 211c
.org 0xee54
	orrs r0, r1	@ 0000ee54 0843
.org 0xee56
	strh r0, [r2, #0]	@ 0000ee56 1080
.org 0xee58
	strb r5, [r2, #13]	@ 0000ee58 5573
.org 0xee5a
	movs r0, #240	@ 0000ee5a f020
.org 0xee5c
	strh r0, [r2, #6]	@ 0000ee5c d080
.org 0xee5e
	ldr r0, [pc, #72]	@ 0000ee5e 1248
.org 0xee60
	strh r0, [r2, #10]	@ 0000ee60 5081
.org 0xee62
	ldr r0, [pc, #72]	@ 0000ee62 1248
.org 0xee64
	strh r3, [r0, #0]	@ 0000ee64 0380
.org 0xee66
	ldr r1, [pc, #72]	@ 0000ee66 1249
.org 0xee68
	adds r0, r7, r1	@ 0000ee68 7818
.org 0xee6a
	mov r3, r9	@ 0000ee6a 4b46
.org 0xee6c
	strb r3, [r0, #0]	@ 0000ee6c 0370
.org 0xee6e
	adds r0, r6, #1	@ 0000ee6e 701c
.org 0xee70
	mov r4, ip	@ 0000ee70 6446
.org 0xee72
	strb r0, [r4, #0]	@ 0000ee72 2070
.org 0xee74
	ldr r3, [pc, #56]	@ 0000ee74 0e4b
.org 0xee76
	add r3, r8	@ 0000ee76 4344
.org 0xee78
	ldrb r0, [r3, #0]	@ 0000ee78 1878
.org 0xee7a
	adds r0, #1	@ 0000ee7a 0130
.org 0xee7c
	strb r0, [r3, #0]	@ 0000ee7c 1870
.org 0xee7e
	movs r1, #1	@ 0000ee7e 0121
.org 0xee80
	ands r0, r1	@ 0000ee80 0840
.org 0xee82
	cmp r0, #0	@ 0000ee82 0028
.org 0xee84
	bne.n 0xeeb4	@ 0000ee84 16d1
.org 0xee86
	ldr r0, [pc, #28]	@ 0000ee86 0748
.org 0xee88
	ldrb r1, [r3, #0]	@ 0000ee88 1978
.org 0xee8a
	lsls r1, r1, #3	@ 0000ee8a c900
.org 0xee8c
	movs r2, #160	@ 0000ee8c a022
.org 0xee8e
	subs r1, r2, r1	@ 0000ee8e 511a
.org 0xee90
	lsls r1, r1, #8	@ 0000ee90 0902
.org 0xee92
	orrs r1, r2	@ 0000ee92 1143
.org 0xee94
	strh r1, [r0, #10]	@ 0000ee94 4181
.org 0xee96
	b.n 0xeec6	@ 0000ee96 16e0
.org 0xee98
	.byte 0x10,0xe9,0x02,0x02	@ 0000ee98 data
.org 0xee9c
	.byte 0xfe,0xff,0x00,0x00	@ 0000ee9c data
.org 0xeea0
	.byte 0xff,0xff,0x00,0x00	@ 0000eea0 data
.org 0xeea4
	.byte 0x50,0x0a,0x00,0x02	@ 0000eea4 data
.org 0xeea8
	.byte 0xa0,0xa0,0x00,0x00	@ 0000eea8 data
.org 0xeeac
	.byte 0xc0,0x2a,0x00,0x03	@ 0000eeac data
.org 0xeeb0
	.byte 0x2f,0xd0,0x02,0x00	@ 0000eeb0 data
.org 0xeeb4
	ldr r2, [pc, #100]	@ 0000eeb4 194a
.org 0xeeb6
	ldrb r1, [r3, #0]	@ 0000eeb6 1978
.org 0xeeb8
	lsls r1, r1, #3	@ 0000eeb8 c900
.org 0xeeba
	movs r0, #168	@ 0000eeba a820
.org 0xeebc
	subs r0, r0, r1	@ 0000eebc 401a
.org 0xeebe
	lsls r0, r0, #8	@ 0000eebe 0002
.org 0xeec0
	movs r1, #160	@ 0000eec0 a021
.org 0xeec2
	orrs r0, r1	@ 0000eec2 0843
.org 0xeec4
	strh r0, [r2, #10]	@ 0000eec4 5081
.org 0xeec6
	ldr r6, [pc, #88]	@ 0000eec6 164e
.org 0xeec8
	ldr r0, [pc, #88]	@ 0000eec8 1648
.org 0xeeca
	adds r5, r6, r0	@ 0000eeca 3518
.org 0xeecc
	ldrb r0, [r5, #0]	@ 0000eecc 2878
.org 0xeece
	cmp r0, #10	@ 0000eece 0a28
.org 0xeed0
	bne.n 0xeee0	@ 0000eed0 06d1
.org 0xeed2
	ldr r0, [pc, #84]	@ 0000eed2 1548
.org 0xeed4
	ldr r1, [pc, #84]	@ 0000eed4 1549
.org 0xeed6
	adds r0, r0, r1	@ 0000eed6 4018
.org 0xeed8
	ldr r0, [r0, #0]	@ 0000eed8 0068
.org 0xeeda
	adds r0, #164	@ 0000eeda a430
.org 0xeedc
	movs r1, #0	@ 0000eedc 0021
.org 0xeede
	strh r1, [r0, #0]	@ 0000eede 0180
.org 0xeee0
	ldrb r0, [r5, #0]	@ 0000eee0 2878
.org 0xeee2
	cmp r0, #20	@ 0000eee2 1428
.org 0xeee4
	bne.n 0xef6a	@ 0000eee4 41d1
.org 0xeee6
	ldr r4, [pc, #72]	@ 0000eee6 124c
.org 0xeee8
	ldr r0, [pc, #72]	@ 0000eee8 1248
.org 0xeeea
	ldr r0, [r0, #64]	@ 0000eeea 006c
.org 0xeeec
	ldr r1, [r0, #120]	@ 0000eeec 816f
.org 0xeeee
	adds r0, r4, #0	@ 0000eeee 201c
.org 0xeef0
	bl 0x275f0	@ 0000eef0 18f07efb
.org 0xeef4
	subs r4, #16	@ 0000eef4 103c
.org 0xeef6
	ldrh r1, [r4, #8]	@ 0000eef6 2189
.org 0xeef8
	ldr r0, [pc, #60]	@ 0000eef8 0f48
.org 0xeefa
	ands r0, r1	@ 0000eefa 0840
.org 0xeefc
	movs r1, #8	@ 0000eefc 0821
.org 0xeefe
	orrs r0, r1	@ 0000eefe 0843
.org 0xef00
	strh r0, [r4, #8]	@ 0000ef00 2081
.org 0xef02
	movs r0, #120	@ 0000ef02 7820
.org 0xef04
	strb r0, [r5, #0]	@ 0000ef04 2870
.org 0xef06
	ldr r2, [pc, #52]	@ 0000ef06 0d4a
.org 0xef08
	ldrb r1, [r2, #1]	@ 0000ef08 5178
.org 0xef0a
	movs r0, #2	@ 0000ef0a 0220
.org 0xef0c
	orrs r0, r1	@ 0000ef0c 0843
.org 0xef0e
	strb r0, [r2, #1]	@ 0000ef0e 5070
.org 0xef10
	ldr r3, [pc, #44]	@ 0000ef10 0b4b
.org 0xef12
	adds r1, r6, r3	@ 0000ef12 f118
.org 0xef14
	ldrb r0, [r1, #0]	@ 0000ef14 0878
.org 0xef16
	adds r0, #1	@ 0000ef16 0130
.org 0xef18
	b.n 0xef68	@ 0000ef18 26e0
.org 0xef1a
	.byte 0x00	@ 0000ef1a data
.org 0xef1b
	.byte 0x00	@ 0000ef1b data
.org 0xef1c
	.byte 0x50,0x0a,0x00,0x02	@ 0000ef1c data
.org 0xef20
	.byte 0xb0,0x0a,0x00,0x02	@ 0000ef20 data
.org 0xef24
	.byte 0x2f,0xd0,0x02,0x00	@ 0000ef24 data
.org 0xef28
	.byte 0x10,0xf6,0x02,0x02	@ 0000ef28 data
.org 0xef2c
	.byte 0xa8,0x63,0x00,0x00	@ 0000ef2c data
.org 0xef30
	.byte 0x20,0xe9,0x02,0x02	@ 0000ef30 data
.org 0xef34
	.byte 0xf8,0x2c,0x84,0x08	@ 0000ef34 data
.org 0xef38
	.byte 0xfe,0xff,0x00,0x00	@ 0000ef38 data
.org 0xef3c
	.byte 0xe0,0x32,0x00,0x03	@ 0000ef3c data
.org 0xef40
	.byte 0x2e,0xd0,0x02,0x00	@ 0000ef40 data
.org 0xef44
	ldr r4, [pc, #140]	@ 0000ef44 234c
.org 0xef46
	adds r1, r7, r4	@ 0000ef46 3919
.org 0xef48
	ldrb r0, [r1, #0]	@ 0000ef48 0878
.org 0xef4a
	subs r0, #1	@ 0000ef4a 0138
.org 0xef4c
	strb r0, [r1, #0]	@ 0000ef4c 0870
.org 0xef4e
	lsls r0, r0, #24	@ 0000ef4e 0006
.org 0xef50
	lsrs r1, r0, #24	@ 0000ef50 010e
.org 0xef52
	cmp r1, #0	@ 0000ef52 0029
.org 0xef54
	bne.n 0xef6a	@ 0000ef54 09d1
.org 0xef56
	ldr r0, [pc, #128]	@ 0000ef56 2048
.org 0xef58
	strb r1, [r0, #1]	@ 0000ef58 4170
.org 0xef5a
	ldr r2, [pc, #128]	@ 0000ef5a 204a
.org 0xef5c
	ldrh r1, [r2, #0]	@ 0000ef5c 1188
.org 0xef5e
	ldr r0, [pc, #128]	@ 0000ef5e 2048
.org 0xef60
	ands r0, r1	@ 0000ef60 0840
.org 0xef62
	strh r0, [r2, #0]	@ 0000ef62 1080
.org 0xef64
	adds r0, r6, #1	@ 0000ef64 701c
.org 0xef66
	mov r1, ip	@ 0000ef66 6146
.org 0xef68
	strb r0, [r1, #0]	@ 0000ef68 0870
.org 0xef6a
	ldr r5, [pc, #120]	@ 0000ef6a 1e4d
.org 0xef6c
	ldr r3, [pc, #120]	@ 0000ef6c 1e4b
.org 0xef6e
	adds r0, r5, r3	@ 0000ef6e e818
.org 0xef70
	ldrh r1, [r0, #0]	@ 0000ef70 0188
.org 0xef72
	lsrs r0, r1, #8	@ 0000ef72 080a
.org 0xef74
	cmp r0, #4	@ 0000ef74 0428
.org 0xef76
	bne.n 0xefc8	@ 0000ef76 27d1
.org 0xef78
	movs r0, #255	@ 0000ef78 ff20
.org 0xef7a
	ands r0, r1	@ 0000ef7a 0840
.org 0xef7c
	cmp r0, #1	@ 0000ef7c 0128
.org 0xef7e
	bne.n 0xefc8	@ 0000ef7e 23d1
.org 0xef80
	ldr r6, [pc, #104]	@ 0000ef80 1a4e
.org 0xef82
	ldr r4, [pc, #108]	@ 0000ef82 1b4c
