@ FUN_0801797c  entry 0x0801797c  size 128
.thumb
.org 0x1797c
FUN_0801797c:
	push {r4, r5, r6, r7, lr}	@ 0001797c f0b5
.org 0x1797e
	mov r7, r8	@ 0001797e 4746
.org 0x17980
	push {r7}	@ 00017980 80b4
.org 0x17982
	sub sp, #8	@ 00017982 82b0
.org 0x17984
	adds r7, r0, #0	@ 00017984 071c
.org 0x17986
	ldrb r0, [r7, #14]	@ 00017986 b87b
.org 0x17988
	mov r8, r0	@ 00017988 8046
.org 0x1798a
	cmp r0, #0	@ 0001798a 0028
.org 0x1798c
	bne.n 0x179f0	@ 0001798c 30d1
.org 0x1798e
	ldr r0, [r7, #92]	@ 0001798e f86d
.org 0x17990
	lsls r0, r0, #16	@ 00017990 0004
.org 0x17992
	lsrs r0, r0, #20	@ 00017992 000d
.org 0x17994
	lsls r5, r0, #1	@ 00017994 4500
.org 0x17996
	ldr r3, [pc, #100]	@ 00017996 194b
.org 0x17998
	adds r5, r5, r3	@ 00017998 ed18
.org 0x1799a
	ldr r1, [r7, #100]	@ 0001799a 796e
.org 0x1799c
	ldr r4, [pc, #96]	@ 0001799c 184c
.org 0x1799e
	adds r2, r4, #0	@ 0001799e 221c
.org 0x179a0
	orrs r1, r2	@ 000179a0 1143
.org 0x179a2
	strh r1, [r5, #0]	@ 000179a2 2980
.org 0x179a4
	lsls r0, r0, #2	@ 000179a4 8000
.org 0x179a6
	adds r3, #8	@ 000179a6 0833
.org 0x179a8
	adds r0, r0, r3	@ 000179a8 c018
.org 0x179aa
	mov r2, r8	@ 000179aa 4246
.org 0x179ac
	str r2, [r0, #0]	@ 000179ac 0260
.org 0x179ae
	ldr r0, [pc, #84]	@ 000179ae 1548
.org 0x179b0
	ldr r0, [r0, #0]	@ 000179b0 0068
.org 0x179b2
	ldr r4, [pc, #84]	@ 000179b2 154c
.org 0x179b4
	adds r0, r0, r4	@ 000179b4 0019
.org 0x179b6
	movs r4, #248	@ 000179b6 f824
.org 0x179b8
	lsls r4, r4, #5	@ 000179b8 6401
.org 0x179ba
	ands r1, r4	@ 000179ba 2140
.org 0x179bc
	lsls r1, r1, #3	@ 000179bc c900
.org 0x179be
	movs r2, #192	@ 000179be c022
.org 0x179c0
	lsls r2, r2, #19	@ 000179c0 d204
.org 0x179c2
	adds r1, r1, r2	@ 000179c2 8918
.org 0x179c4
	movs r6, #128	@ 000179c4 8026
.org 0x179c6
	lsls r6, r6, #2	@ 000179c6 b600
.org 0x179c8
	adds r2, r6, #0	@ 000179c8 321c
.org 0x179ca
	bl 0x128be0	@ 000179ca 11f109f9
.org 0x179ce
	ldrh r0, [r5, #0]	@ 000179ce 2888
.org 0x179d0
	ands r4, r0	@ 000179d0 0440
.org 0x179d2
	lsls r4, r4, #3	@ 000179d2 e400
.org 0x179d4
	ldr r0, [pc, #52]	@ 000179d4 0d48
.org 0x179d6
	adds r4, r4, r0	@ 000179d6 2418
.org 0x179d8
	mov r2, r8	@ 000179d8 4246
.org 0x179da
	str r2, [sp, #0]	@ 000179da 0092
.org 0x179dc
	movs r2, #128	@ 000179dc 8022
.org 0x179de
	lsls r2, r2, #17	@ 000179de 5204
.org 0x179e0
	orrs r2, r6	@ 000179e0 3243
.org 0x179e2
	mov r0, sp	@ 000179e2 6846
.org 0x179e4
	adds r1, r4, #0	@ 000179e4 211c
.org 0x179e6
	bl 0x128be0	@ 000179e6 11f1fbf8
.org 0x179ea
	ldrb r0, [r7, #14]	@ 000179ea b87b
.org 0x179ec
	adds r0, #1	@ 000179ec 0130
.org 0x179ee
	strb r0, [r7, #14]	@ 000179ee b873
.org 0x179f0
	add sp, #8	@ 000179f0 02b0
.org 0x179f2
	pop {r3}	@ 000179f2 08bc
.org 0x179f4
	mov r8, r3	@ 000179f4 9846
.org 0x179f6
	pop {r4, r5, r6, r7}	@ 000179f6 f0bc
.org 0x179f8
	pop {r0}	@ 000179f8 01bc
.org 0x179fa
	bx r0	@ 000179fa 0047
