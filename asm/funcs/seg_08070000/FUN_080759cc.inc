@ FUN_080759cc  entry 0x080759cc  size 126
.thumb
.org 0x759cc
FUN_080759cc:
	push {r4, lr}	@ 000759cc 10b5
.org 0x759ce
	adds r4, r0, #0	@ 000759ce 041c
.org 0x759d0
	ldrb r0, [r4, #14]	@ 000759d0 a07b
.org 0x759d2
	cmp r0, #0	@ 000759d2 0028
.org 0x759d4
	bne.n 0x759e4	@ 000759d4 06d1
.org 0x759d6
	ldr r1, [pc, #60]	@ 000759d6 0f49
.org 0x759d8
	adds r0, r4, #0	@ 000759d8 201c
.org 0x759da
	bl 0x1cf00	@ 000759da a7f791fa
.org 0x759de
	ldrb r0, [r4, #14]	@ 000759de a07b
.org 0x759e0
	adds r0, #1	@ 000759e0 0130
.org 0x759e2
	strb r0, [r4, #14]	@ 000759e2 a073
.org 0x759e4
	adds r0, r4, #0	@ 000759e4 201c
.org 0x759e6
	adds r0, #114	@ 000759e6 7230
.org 0x759e8
	ldrb r0, [r0, #0]	@ 000759e8 0078
.org 0x759ea
	lsls r0, r0, #24	@ 000759ea 0006
.org 0x759ec
	asrs r0, r0, #24	@ 000759ec 0016
.org 0x759ee
	cmp r0, #1	@ 000759ee 0128
.org 0x759f0
	bgt.n 0x75a34	@ 000759f0 20dc
.org 0x759f2
	ldrb r1, [r4, #10]	@ 000759f2 a17a
.org 0x759f4
	movs r0, #16	@ 000759f4 1020
.org 0x759f6
	ands r0, r1	@ 000759f6 0840
.org 0x759f8
	cmp r0, #0	@ 000759f8 0028
.org 0x759fa
	beq.n 0x75a1c	@ 000759fa 0fd0
.org 0x759fc
	ldr r1, [pc, #24]	@ 000759fc 0649
.org 0x759fe
	adds r0, r4, #0	@ 000759fe 201c
.org 0x75a00
	adds r0, #113	@ 00075a00 7130
.org 0x75a02
	ldrb r0, [r0, #0]	@ 00075a02 0078
.org 0x75a04
	lsls r0, r0, #24	@ 00075a04 0006
.org 0x75a06
	asrs r0, r0, #24	@ 00075a06 0016
.org 0x75a08
	lsls r0, r0, #2	@ 00075a08 8000
.org 0x75a0a
	adds r0, r0, r1	@ 00075a0a 4018
.org 0x75a0c
	ldr r1, [r4, #84]	@ 00075a0c 616d
.org 0x75a0e
	ldr r0, [r0, #0]	@ 00075a0e 0068
.org 0x75a10
	adds r1, r1, r0	@ 00075a10 0918
.org 0x75a12
	b.n 0x75a32	@ 00075a12 0ee0
.org 0x75a14
	.byte 0x16,0xaf,0x00,0x00	@ 00075a14 data
.org 0x75a18
	.byte 0x00,0xd1,0x85,0x08	@ 00075a18 data
.org 0x75a1c
	ldr r1, [pc, #52]	@ 00075a1c 0d49
.org 0x75a1e
	adds r0, r4, #0	@ 00075a1e 201c
.org 0x75a20
	adds r0, #113	@ 00075a20 7130
.org 0x75a22
	ldrb r0, [r0, #0]	@ 00075a22 0078
.org 0x75a24
	lsls r0, r0, #24	@ 00075a24 0006
.org 0x75a26
	asrs r0, r0, #24	@ 00075a26 0016
.org 0x75a28
	lsls r0, r0, #2	@ 00075a28 8000
.org 0x75a2a
	adds r0, r0, r1	@ 00075a2a 4018
.org 0x75a2c
	ldr r1, [r4, #84]	@ 00075a2c 616d
.org 0x75a2e
	ldr r0, [r0, #0]	@ 00075a2e 0068
.org 0x75a30
	subs r1, r1, r0	@ 00075a30 091a
.org 0x75a32
	str r1, [r4, #84]	@ 00075a32 6165
.org 0x75a34
	adds r0, r4, #0	@ 00075a34 201c
.org 0x75a36
	bl 0x1cff0	@ 00075a36 a7f7dbfa
.org 0x75a3a
	adds r0, r4, #0	@ 00075a3a 201c
.org 0x75a3c
	adds r0, #115	@ 00075a3c 7330
.org 0x75a3e
	ldrb r0, [r0, #0]	@ 00075a3e 0078
.org 0x75a40
	cmp r0, #3	@ 00075a40 0328
.org 0x75a42
	bne.n 0x75a4c	@ 00075a42 03d1
.org 0x75a44
	movs r1, #0	@ 00075a44 0021
.org 0x75a46
	movs r0, #2	@ 00075a46 0220
.org 0x75a48
	strb r0, [r4, #13]	@ 00075a48 6073
