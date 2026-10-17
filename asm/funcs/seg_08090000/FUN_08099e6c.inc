@ FUN_08099e6c  entry 0x08099e6c  size 152
.thumb
.org 0x99e6c
FUN_08099e6c:
	push {r4, r5, r6, r7, lr}	@ 00099e6c f0b5
.org 0x99e6e
	adds r5, r0, #0	@ 00099e6e 051c
.org 0x99e70
	lsls r1, r1, #24	@ 00099e70 0906
.org 0x99e72
	lsrs r7, r1, #24	@ 00099e72 0f0e
.org 0x99e74
	lsls r2, r2, #24	@ 00099e74 1206
.org 0x99e76
	lsrs r6, r2, #24	@ 00099e76 160e
.org 0x99e78
	lsls r3, r3, #24	@ 00099e78 1b06
.org 0x99e7a
	lsrs r4, r3, #24	@ 00099e7a 1c0e
.org 0x99e7c
	ldr r0, [pc, #80]	@ 00099e7c 1448
.org 0x99e7e
	ldr r0, [r0, #0]	@ 00099e7e 0068
.org 0x99e80
	bl 0x5500	@ 00099e80 6bf73efb
.org 0x99e84
	mov ip, r0	@ 00099e84 8446
.org 0x99e86
	cmp r0, #0	@ 00099e86 0028
.org 0x99e88
	beq.n 0x99f06	@ 00099e88 3dd0
.org 0x99e8a
	mov r1, ip	@ 00099e8a 6146
.org 0x99e8c
	adds r1, #37	@ 00099e8c 2531
.org 0x99e8e
	movs r2, #0	@ 00099e8e 0022
.org 0x99e90
	movs r0, #24	@ 00099e90 1820
.org 0x99e92
	strb r0, [r1, #0]	@ 00099e92 0870
.org 0x99e94
	ldr r0, [pc, #60]	@ 00099e94 0f48
.org 0x99e96
	movs r1, #36	@ 00099e96 2421
.org 0x99e98
	mov r3, ip	@ 00099e98 6346
.org 0x99e9a
	strb r1, [r3, #9]	@ 00099e9a 5972
.org 0x99e9c
	adds r0, #144	@ 00099e9c 9030
.org 0x99e9e
	ldr r0, [r0, #0]	@ 00099e9e 0068
.org 0x99ea0
	ldr r0, [r0, #0]	@ 00099ea0 0068
.org 0x99ea2
	str r0, [r3, #20]	@ 00099ea2 5861
.org 0x99ea4
	movs r0, #0	@ 00099ea4 0020
.org 0x99ea6
	strh r2, [r3, #32]	@ 00099ea6 1a84
.org 0x99ea8
	mov r1, ip	@ 00099ea8 6146
.org 0x99eaa
	adds r1, #34	@ 00099eaa 2231
.org 0x99eac
	strb r0, [r1, #0]	@ 00099eac 0870
.org 0x99eae
	ldrb r0, [r3, #11]	@ 00099eae d87a
.org 0x99eb0
	movs r2, #16	@ 00099eb0 1022
.org 0x99eb2
	orrs r0, r2	@ 00099eb2 1043
.org 0x99eb4
	strb r0, [r3, #11]	@ 00099eb4 d872
.org 0x99eb6
	ldrb r0, [r3, #28]	@ 00099eb6 187f
.org 0x99eb8
	strb r0, [r3, #29]	@ 00099eb8 5877
.org 0x99eba
	ldr r0, [r5, #0]	@ 00099eba 2868
.org 0x99ebc
	ldr r1, [r5, #4]	@ 00099ebc 6968
.org 0x99ebe
	str r0, [r3, #84]	@ 00099ebe 5865
.org 0x99ec0
	str r1, [r3, #88]	@ 00099ec0 9965
.org 0x99ec2
	adds r3, r4, #0	@ 00099ec2 231c
.org 0x99ec4
	cmp r3, #0	@ 00099ec4 002b
.org 0x99ec6
	beq.n 0x99ed8	@ 00099ec6 07d0
.org 0x99ec8
	mov r1, ip	@ 00099ec8 6146
.org 0x99eca
	ldrb r0, [r1, #10]	@ 00099eca 887a
.org 0x99ecc
	orrs r0, r2	@ 00099ecc 1043
.org 0x99ece
	b.n 0x99ee2	@ 00099ece 08e0
.org 0x99ed0
	.byte 0x90,0xed,0x02,0x02	@ 00099ed0 data
.org 0x99ed4
	.byte 0x40,0xdb,0x85,0x08	@ 00099ed4 data
.org 0x99ed8
	mov r0, ip	@ 00099ed8 6046
.org 0x99eda
	ldrb r1, [r0, #10]	@ 00099eda 817a
.org 0x99edc
	movs r0, #239	@ 00099edc ef20
.org 0x99ede
	ands r0, r1	@ 00099ede 0840
.org 0x99ee0
	mov r1, ip	@ 00099ee0 6146
.org 0x99ee2
	strb r0, [r1, #10]	@ 00099ee2 8872
.org 0x99ee4
	movs r1, #1	@ 00099ee4 0121
.org 0x99ee6
	ands r1, r3	@ 00099ee6 1940
.org 0x99ee8
	mov r0, ip	@ 00099ee8 6046
.org 0x99eea
	adds r0, #76	@ 00099eea 4c30
.org 0x99eec
	strb r1, [r0, #0]	@ 00099eec 0170
.org 0x99eee
	mov r3, ip	@ 00099eee 6346
.org 0x99ef0
	adds r3, #74	@ 00099ef0 4a33
.org 0x99ef2
	lsls r1, r1, #4	@ 00099ef2 0901
.org 0x99ef4
	ldrb r2, [r3, #0]	@ 00099ef4 1a78
.org 0x99ef6
	movs r0, #17	@ 00099ef6 1120
.org 0x99ef8
	negs r0, r0	@ 00099ef8 4042
.org 0x99efa
	ands r0, r2	@ 00099efa 1040
.org 0x99efc
	orrs r0, r1	@ 00099efc 0843
.org 0x99efe
	strb r0, [r3, #0]	@ 00099efe 1870
.org 0x99f00
	mov r3, ip	@ 00099f00 6346
.org 0x99f02
	strb r7, [r3, #16]	@ 00099f02 1f74
