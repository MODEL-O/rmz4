@ FUN_080aa954  entry 0x080aa954  size 168
.thumb
.org 0xaa954
FUN_080aa954:
	push {r4, lr}	@ 000aa954 10b5
.org 0xaa956
	adds r4, r0, #0	@ 000aa956 041c
.org 0xaa958
	ldrb r0, [r4, #14]	@ 000aa958 a07b
.org 0xaa95a
	cmp r0, #0	@ 000aa95a 0028
.org 0xaa95c
	bne.n 0xaa9e8	@ 000aa95c 44d1
.org 0xaa95e
	adds r0, r4, #0	@ 000aa95e 201c
.org 0xaa960
	adds r0, #180	@ 000aa960 b430
.org 0xaa962
	ldrb r0, [r0, #0]	@ 000aa962 0078
.org 0xaa964
	cmp r0, #0	@ 000aa964 0028
.org 0xaa966
	beq.n 0xaa978	@ 000aa966 07d0
.org 0xaa968
	ldr r1, [pc, #8]	@ 000aa968 0249
.org 0xaa96a
	adds r0, r4, #0	@ 000aa96a 201c
.org 0xaa96c
	bl 0x1cf00	@ 000aa96c 72f7c8fa
.org 0xaa970
	b.n 0xaa9e2	@ 000aa970 37e0
.org 0xaa972
	.byte 0x00	@ 000aa972 data
.org 0xaa973
	.byte 0x00	@ 000aa973 data
.org 0xaa974
	.byte 0x04,0x94,0x00,0x00	@ 000aa974 data
.org 0xaa978
	adds r0, r4, #0	@ 000aa978 201c
.org 0xaa97a
	adds r0, #116	@ 000aa97a 7430
.org 0xaa97c
	ldr r1, [pc, #28]	@ 000aa97c 0749
.org 0xaa97e
	bl 0x5784	@ 000aa97e 5af701ff
.org 0xaa982
	ldr r1, [pc, #28]	@ 000aa982 0749
.org 0xaa984
	adds r0, r4, #0	@ 000aa984 201c
.org 0xaa986
	bl 0x1cf00	@ 000aa986 72f7bbfa
.org 0xaa98a
	ldrb r2, [r4, #10]	@ 000aa98a a27a
.org 0xaa98c
	lsrs r0, r2, #4	@ 000aa98c 1009
.org 0xaa98e
	movs r1, #1	@ 000aa98e 0121
.org 0xaa990
	bics r1, r0	@ 000aa990 8143
.org 0xaa992
	cmp r1, #0	@ 000aa992 0029
.org 0xaa994
	beq.n 0xaa9a4	@ 000aa994 06d0
.org 0xaa996
	movs r0, #16	@ 000aa996 1020
.org 0xaa998
	orrs r0, r2	@ 000aa998 1043
.org 0xaa99a
	b.n 0xaa9a8	@ 000aa99a 05e0
.org 0xaa99c
	.byte 0xd8,0x2a,0x86,0x08	@ 000aa99c data
.org 0xaa9a0
	.byte 0x05,0x94,0x00,0x00	@ 000aa9a0 data
.org 0xaa9a4
	movs r0, #239	@ 000aa9a4 ef20
.org 0xaa9a6
	ands r0, r2	@ 000aa9a6 1040
.org 0xaa9a8
	strb r0, [r4, #10]	@ 000aa9a8 a072
.org 0xaa9aa
	adds r0, r4, #0	@ 000aa9aa 201c
.org 0xaa9ac
	adds r0, #76	@ 000aa9ac 4c30
.org 0xaa9ae
	strb r1, [r0, #0]	@ 000aa9ae 0170
.org 0xaa9b0
	adds r3, r4, #0	@ 000aa9b0 231c
.org 0xaa9b2
	adds r3, #74	@ 000aa9b2 4a33
.org 0xaa9b4
	lsls r1, r1, #4	@ 000aa9b4 0901
.org 0xaa9b6
	ldrb r2, [r3, #0]	@ 000aa9b6 1a78
.org 0xaa9b8
	movs r0, #17	@ 000aa9b8 1120
.org 0xaa9ba
	negs r0, r0	@ 000aa9ba 4042
.org 0xaa9bc
	ands r0, r2	@ 000aa9bc 1040
.org 0xaa9be
	orrs r0, r1	@ 000aa9be 0843
.org 0xaa9c0
	strb r0, [r3, #0]	@ 000aa9c0 1870
.org 0xaa9c2
	ldr r0, [r4, #92]	@ 000aa9c2 e06d
.org 0xaa9c4
	lsls r0, r0, #8	@ 000aa9c4 0002
.org 0xaa9c6
	negs r0, r0	@ 000aa9c6 4042
.org 0xaa9c8
	cmp r0, #0	@ 000aa9c8 0028
.org 0xaa9ca
	bge.n 0xaa9ce	@ 000aa9ca 00da
.org 0xaa9cc
	adds r0, #255	@ 000aa9cc ff30
.org 0xaa9ce
	asrs r0, r0, #8	@ 000aa9ce 0012
.org 0xaa9d0
	str r0, [r4, #92]	@ 000aa9d0 e065
.org 0xaa9d2
	ldr r0, [r4, #96]	@ 000aa9d2 206e
.org 0xaa9d4
	lsls r0, r0, #8	@ 000aa9d4 0002
.org 0xaa9d6
	negs r0, r0	@ 000aa9d6 4042
.org 0xaa9d8
	cmp r0, #0	@ 000aa9d8 0028
.org 0xaa9da
	bge.n 0xaa9de	@ 000aa9da 00da
.org 0xaa9dc
	adds r0, #255	@ 000aa9dc ff30
.org 0xaa9de
	asrs r0, r0, #8	@ 000aa9de 0012
.org 0xaa9e0
	str r0, [r4, #96]	@ 000aa9e0 2066
.org 0xaa9e2
	ldrb r0, [r4, #14]	@ 000aa9e2 a07b
.org 0xaa9e4
	adds r0, #1	@ 000aa9e4 0130
.org 0xaa9e6
	strb r0, [r4, #14]	@ 000aa9e6 a073
.org 0xaa9e8
	adds r0, r4, #0	@ 000aa9e8 201c
.org 0xaa9ea
	adds r0, #115	@ 000aa9ea 7330
.org 0xaa9ec
	ldrb r1, [r0, #0]	@ 000aa9ec 0178
.org 0xaa9ee
	cmp r1, #3	@ 000aa9ee 0329
.org 0xaa9f0
	bne.n 0xaaa04	@ 000aa9f0 08d1
.org 0xaa9f2
	adds r0, #65	@ 000aa9f2 4130
.org 0xaa9f4
	ldrb r0, [r0, #0]	@ 000aa9f4 0078
.org 0xaa9f6
	cmp r0, #0	@ 000aa9f6 0028
.org 0xaa9f8
	beq.n 0xaaa00	@ 000aa9f8 02d0
.org 0xaa9fa
	movs r0, #0	@ 000aa9fa 0020
