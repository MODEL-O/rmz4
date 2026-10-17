@ FUN_0803f9dc  entry 0x0803f9dc  size 220
.thumb
.org 0x3f9dc
FUN_0803f9dc:
	push {r4, r5, lr}	@ 0003f9dc 30b5
.org 0x3f9de
	adds r5, r0, #0	@ 0003f9de 051c
.org 0x3f9e0
	adds r4, r1, #0	@ 0003f9e0 0c1c
.org 0x3f9e2
	ldr r0, [pc, #64]	@ 0003f9e2 1048
.org 0x3f9e4
	ldr r0, [r0, #0]	@ 0003f9e4 0068
.org 0x3f9e6
	bl 0x5500	@ 0003f9e6 c5f78bfd
.org 0x3f9ea
	adds r3, r0, #0	@ 0003f9ea 031c
.org 0x3f9ec
	cmp r3, #0	@ 0003f9ec 002b
.org 0x3f9ee
	beq.n 0x3fad0	@ 0003f9ee 6fd0
.org 0x3f9f0
	adds r0, r5, #0	@ 0003f9f0 281c
.org 0x3f9f2
	adds r0, #248	@ 0003f9f2 f830
.org 0x3f9f4
	ldrb r0, [r0, #0]	@ 0003f9f4 0078
.org 0x3f9f6
	cmp r0, #2	@ 0003f9f6 0228
.org 0x3f9f8
	bne.n 0x3fa34	@ 0003f9f8 1cd1
.org 0x3f9fa
	ldr r1, [pc, #44]	@ 0003f9fa 0b49
.org 0x3f9fc
	movs r0, #7	@ 0003f9fc 0720
.org 0x3f9fe
	strb r0, [r3, #9]	@ 0003f9fe 5872
.org 0x3fa00
	ldr r0, [r1, #28]	@ 0003fa00 c869
.org 0x3fa02
	ldr r0, [r0, #0]	@ 0003fa02 0068
.org 0x3fa04
	str r0, [r3, #20]	@ 0003fa04 5861
.org 0x3fa06
	ldrb r1, [r3, #11]	@ 0003fa06 d97a
.org 0x3fa08
	movs r0, #191	@ 0003fa08 bf20
.org 0x3fa0a
	ands r0, r1	@ 0003fa0a 0840
.org 0x3fa0c
	strb r0, [r3, #11]	@ 0003fa0c d872
.org 0x3fa0e
	adds r1, r3, #0	@ 0003fa0e 191c
.org 0x3fa10
	adds r1, #37	@ 0003fa10 2531
.org 0x3fa12
	movs r0, #16	@ 0003fa12 1020
.org 0x3fa14
	strb r0, [r1, #0]	@ 0003fa14 0870
.org 0x3fa16
	ldr r0, [pc, #20]	@ 0003fa16 0548
.org 0x3fa18
	ldrh r0, [r0, #0]	@ 0003fa18 0088
.org 0x3fa1a
	strh r0, [r3, #32]	@ 0003fa1a 1884
.org 0x3fa1c
	ldr r0, [pc, #16]	@ 0003fa1c 0448
.org 0x3fa1e
	ldrb r0, [r0, #0]	@ 0003fa1e 0078
.org 0x3fa20
	b.n 0x3fa5a	@ 0003fa20 1be0
.org 0x3fa22
	.byte 0x00	@ 0003fa22 data
.org 0x3fa23
	.byte 0x00	@ 0003fa23 data
.org 0x3fa24
	.byte 0x88,0xed,0x02,0x02	@ 0003fa24 data
.org 0x3fa28
	.byte 0xf8,0x39,0x85,0x08	@ 0003fa28 data
.org 0x3fa2c
	.byte 0xfc,0x36,0x85,0x08	@ 0003fa2c data
.org 0x3fa30
	.byte 0x04,0x37,0x85,0x08	@ 0003fa30 data
.org 0x3fa34
	ldr r1, [pc, #68]	@ 0003fa34 1149
.org 0x3fa36
	movs r0, #7	@ 0003fa36 0720
.org 0x3fa38
	strb r0, [r3, #9]	@ 0003fa38 5872
.org 0x3fa3a
	ldr r0, [r1, #28]	@ 0003fa3a c869
.org 0x3fa3c
	ldr r0, [r0, #0]	@ 0003fa3c 0068
.org 0x3fa3e
	str r0, [r3, #20]	@ 0003fa3e 5861
.org 0x3fa40
	ldrb r1, [r3, #11]	@ 0003fa40 d97a
.org 0x3fa42
	movs r0, #191	@ 0003fa42 bf20
.org 0x3fa44
	ands r0, r1	@ 0003fa44 0840
.org 0x3fa46
	strb r0, [r3, #11]	@ 0003fa46 d872
.org 0x3fa48
	adds r1, r3, #0	@ 0003fa48 191c
.org 0x3fa4a
	adds r1, #37	@ 0003fa4a 2531
.org 0x3fa4c
	movs r0, #16	@ 0003fa4c 1020
.org 0x3fa4e
	strb r0, [r1, #0]	@ 0003fa4e 0870
.org 0x3fa50
	ldr r0, [pc, #44]	@ 0003fa50 0b48
.org 0x3fa52
	ldrh r0, [r0, #2]	@ 0003fa52 4088
.org 0x3fa54
	strh r0, [r3, #32]	@ 0003fa54 1884
.org 0x3fa56
	ldr r0, [pc, #44]	@ 0003fa56 0b48
.org 0x3fa58
	ldrb r0, [r0, #1]	@ 0003fa58 4078
.org 0x3fa5a
	subs r1, #3	@ 0003fa5a 0339
.org 0x3fa5c
	strb r0, [r1, #0]	@ 0003fa5c 0870
.org 0x3fa5e
	str r4, [r3, #40]	@ 0003fa5e 9c62
.org 0x3fa60
	str r5, [r3, #44]	@ 0003fa60 dd62
.org 0x3fa62
	movs r0, #0	@ 0003fa62 0020
.org 0x3fa64
	strb r0, [r3, #16]	@ 0003fa64 1874
.org 0x3fa66
	strb r0, [r3, #17]	@ 0003fa66 5874
.org 0x3fa68
	ldrb r0, [r4, #10]	@ 0003fa68 a07a
.org 0x3fa6a
	lsrs r2, r0, #4	@ 0003fa6a 0209
.org 0x3fa6c
	movs r0, #1	@ 0003fa6c 0120
.org 0x3fa6e
	ands r2, r0	@ 0003fa6e 0240
.org 0x3fa70
	cmp r2, #0	@ 0003fa70 002a
.org 0x3fa72
	beq.n 0x3fa88	@ 0003fa72 09d0
.org 0x3fa74
	ldrb r0, [r3, #10]	@ 0003fa74 987a
.org 0x3fa76
	movs r1, #16	@ 0003fa76 1021
.org 0x3fa78
	orrs r0, r1	@ 0003fa78 0843
.org 0x3fa7a
	b.n 0x3fa8e	@ 0003fa7a 08e0
.org 0x3fa7c
	.byte 0xf8,0x39,0x85,0x08	@ 0003fa7c data
.org 0x3fa80
	.byte 0xfc,0x36,0x85,0x08	@ 0003fa80 data
.org 0x3fa84
	.byte 0x04,0x37,0x85,0x08	@ 0003fa84 data
.org 0x3fa88
	ldrb r1, [r3, #10]	@ 0003fa88 997a
.org 0x3fa8a
	movs r0, #239	@ 0003fa8a ef20
.org 0x3fa8c
	ands r0, r1	@ 0003fa8c 0840
.org 0x3fa8e
	strb r0, [r3, #10]	@ 0003fa8e 9872
.org 0x3fa90
	adds r1, r2, #0	@ 0003fa90 111c
.org 0x3fa92
	adds r0, r3, #0	@ 0003fa92 181c
.org 0x3fa94
	adds r0, #76	@ 0003fa94 4c30
.org 0x3fa96
	strb r1, [r0, #0]	@ 0003fa96 0170
.org 0x3fa98
	movs r0, #74	@ 0003fa98 4a20
.org 0x3fa9a
	adds r0, r0, r3	@ 0003fa9a c018
.org 0x3fa9c
	mov ip, r0	@ 0003fa9c 8446
.org 0x3fa9e
	lsls r1, r1, #4	@ 0003fa9e 0901
.org 0x3faa0
	ldrb r2, [r0, #0]	@ 0003faa0 0278
.org 0x3faa2
	movs r0, #17	@ 0003faa2 1120
.org 0x3faa4
	negs r0, r0	@ 0003faa4 4042
.org 0x3faa6
	ands r0, r2	@ 0003faa6 1040
.org 0x3faa8
	orrs r0, r1	@ 0003faa8 0843
.org 0x3faaa
	mov r1, ip	@ 0003faaa 6146
.org 0x3faac
	strb r0, [r1, #0]	@ 0003faac 0870
.org 0x3faae
	ldrb r1, [r3, #10]	@ 0003faae 997a
.org 0x3fab0
	movs r0, #16	@ 0003fab0 1020
.org 0x3fab2
	ands r0, r1	@ 0003fab2 0840
.org 0x3fab4
	cmp r0, #0	@ 0003fab4 0028
.org 0x3fab6
	beq.n 0x3fac0	@ 0003fab6 03d0
