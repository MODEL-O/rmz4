@ FUN_0811fa14  entry 0x0811fa14  size 156
.thumb
.org 0x11fa14
FUN_0811fa14:
	push {r4, r5, lr}	@ 0011fa14 30b5
.org 0x11fa16
	adds r4, r0, #0	@ 0011fa16 041c
.org 0x11fa18
	ldr r1, [pc, #132]	@ 0011fa18 2149
.org 0x11fa1a
	ldrb r0, [r4, #2]	@ 0011fa1a a078
.org 0x11fa1c
	lsls r0, r0, #2	@ 0011fa1c 8000
.org 0x11fa1e
	adds r0, r0, r1	@ 0011fa1e 4018
.org 0x11fa20
	ldr r1, [r0, #0]	@ 0011fa20 0168
.org 0x11fa22
	adds r0, r4, #0	@ 0011fa22 201c
.org 0x11fa24
	bl 0x128f80	@ 0011fa24 09f0acfa
.org 0x11fa28
	lsls r0, r0, #24	@ 0011fa28 0006
.org 0x11fa2a
	cmp r0, #0	@ 0011fa2a 0028
.org 0x11fa2c
	beq.n 0x11fa3e	@ 0011fa2c 07d0
.org 0x11fa2e
	ldr r0, [pc, #116]	@ 0011fa2e 1d48
.org 0x11fa30
	ldrb r1, [r4, #2]	@ 0011fa30 a178
.org 0x11fa32
	lsls r1, r1, #2	@ 0011fa32 8900
.org 0x11fa34
	adds r1, r1, r0	@ 0011fa34 0918
.org 0x11fa36
	ldr r1, [r1, #0]	@ 0011fa36 0968
.org 0x11fa38
	adds r0, r4, #0	@ 0011fa38 201c
.org 0x11fa3a
	bl 0x128f80	@ 0011fa3a 09f0a1fa
.org 0x11fa3e
	ldr r0, [pc, #104]	@ 0011fa3e 1a48
.org 0x11fa40
	adds r5, r4, r0	@ 0011fa40 2518
.org 0x11fa42
	ldrb r0, [r5, #17]	@ 0011fa42 687c
.org 0x11fa44
	cmp r0, #0	@ 0011fa44 0028
.org 0x11fa46
	beq.n 0x11fa4c	@ 0011fa46 01d0
.org 0x11fa48
	movs r0, #3	@ 0011fa48 0320
.org 0x11fa4a
	strb r0, [r4, #1]	@ 0011fa4a 6070
.org 0x11fa4c
	movs r0, #47	@ 0011fa4c 2f20
.org 0x11fa4e
	bl 0x25d8	@ 0011fa4e e2f6c3fd
.org 0x11fa52
	ldrb r0, [r5, #19]	@ 0011fa52 e87c
.org 0x11fa54
	cmp r0, #0	@ 0011fa54 0028
.org 0x11fa56
	beq.n 0x11fab4	@ 0011fa56 2dd0
.org 0x11fa58
	ldr r1, [pc, #80]	@ 0011fa58 1449
.org 0x11fa5a
	movs r0, #0	@ 0011fa5a 0020
.org 0x11fa5c
	strh r0, [r1, #0]	@ 0011fa5c 0880
.org 0x11fa5e
	ldr r2, [pc, #80]	@ 0011fa5e 144a
.org 0x11fa60
	ldrh r0, [r2, #0]	@ 0011fa60 1088
.org 0x11fa62
	movs r3, #128	@ 0011fa62 8023
.org 0x11fa64
	lsls r3, r3, #6	@ 0011fa64 9b01
.org 0x11fa66
	adds r1, r3, #0	@ 0011fa66 191c
.org 0x11fa68
	orrs r0, r1	@ 0011fa68 0843
.org 0x11fa6a
	strh r0, [r2, #0]	@ 0011fa6a 1080
.org 0x11fa6c
	movs r0, #16	@ 0011fa6c 1020
.org 0x11fa6e
	strb r0, [r2, #12]	@ 0011fa6e 1073
.org 0x11fa70
	ldrb r1, [r2, #14]	@ 0011fa70 917b
.org 0x11fa72
	movs r0, #3	@ 0011fa72 0320
.org 0x11fa74
	orrs r0, r1	@ 0011fa74 0843
.org 0x11fa76
	strb r0, [r2, #14]	@ 0011fa76 9073
.org 0x11fa78
	ldrb r3, [r5, #19]	@ 0011fa78 eb7c
.org 0x11fa7a
	adds r1, r3, #0	@ 0011fa7a 191c
.org 0x11fa7c
	adds r1, #64	@ 0011fa7c 4031
.org 0x11fa7e
	movs r4, #255	@ 0011fa7e ff24
.org 0x11fa80
	ands r1, r4	@ 0011fa80 2140
.org 0x11fa82
	movs r0, #64	@ 0011fa82 4020
.org 0x11fa84
	subs r0, r0, r3	@ 0011fa84 c01a
.org 0x11fa86
	lsls r0, r0, #8	@ 0011fa86 0002
.org 0x11fa88
	orrs r1, r0	@ 0011fa88 0143
.org 0x11fa8a
	strh r1, [r2, #4]	@ 0011fa8a 9180
.org 0x11fa8c
	ldrb r3, [r5, #20]	@ 0011fa8c 2b7d
.org 0x11fa8e
	adds r1, r3, #0	@ 0011fa8e 191c
.org 0x11fa90
	adds r1, #80	@ 0011fa90 5031
.org 0x11fa92
	ands r1, r4	@ 0011fa92 2140
.org 0x11fa94
	movs r0, #80	@ 0011fa94 5020
.org 0x11fa96
	subs r0, r0, r3	@ 0011fa96 c01a
.org 0x11fa98
	lsls r0, r0, #8	@ 0011fa98 0002
.org 0x11fa9a
	orrs r1, r0	@ 0011fa9a 0143
.org 0x11fa9c
	strh r1, [r2, #8]	@ 0011fa9c 1181
.org 0x11fa9e
	b.n 0x11fabe	@ 0011fa9e 0ee0
.org 0x11faa0
	.byte 0xd8,0x1f,0x88,0x08	@ 0011faa0 data
.org 0x11faa4
	.byte 0xe8,0x1f,0x88,0x08	@ 0011faa4 data
.org 0x11faa8
	.byte 0xcc,0x0d,0x00,0x00	@ 0011faa8 data
.org 0x11faac
	.byte 0xc0,0x2a,0x00,0x03	@ 0011faac data
