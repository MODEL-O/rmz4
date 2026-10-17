@ FUN_0808f978  entry 0x0808f978  size 178
.thumb
.org 0x8f978
FUN_0808f978:
	push {r4, r5, r6, r7, lr}	@ 0008f978 f0b5
.org 0x8f97a
	sub sp, #8	@ 0008f97a 82b0
.org 0x8f97c
	adds r7, r0, #0	@ 0008f97c 071c
.org 0x8f97e
	movs r0, #49	@ 0008f97e 3120
.org 0x8f980
	bl 0x2b10	@ 0008f980 73f7c6f8
.org 0x8f984
	ldrb r1, [r7, #10]	@ 0008f984 b97a
.org 0x8f986
	movs r0, #254	@ 0008f986 fe20
.org 0x8f988
	ands r0, r1	@ 0008f988 0840
.org 0x8f98a
	movs r1, #0	@ 0008f98a 0021
.org 0x8f98c
	strb r0, [r7, #10]	@ 0008f98c b872
.org 0x8f98e
	adds r0, r7, #0	@ 0008f98e 381c
.org 0x8f990
	adds r0, #140	@ 0008f990 8c30
.org 0x8f992
	str r1, [r0, #0]	@ 0008f992 0160
.org 0x8f994
	adds r0, #4	@ 0008f994 0430
.org 0x8f996
	str r1, [r0, #0]	@ 0008f996 0160
.org 0x8f998
	adds r0, #4	@ 0008f998 0430
.org 0x8f99a
	strb r1, [r0, #0]	@ 0008f99a 0170
.org 0x8f99c
	ldrb r1, [r7, #10]	@ 0008f99c b97a
.org 0x8f99e
	movs r0, #251	@ 0008f99e fb20
.org 0x8f9a0
	ands r0, r1	@ 0008f9a0 0840
.org 0x8f9a2
	strb r0, [r7, #10]	@ 0008f9a2 b872
.org 0x8f9a4
	ldr r6, [pc, #132]	@ 0008f9a4 214e
.org 0x8f9a6
	ldr r0, [r6, #0]	@ 0008f9a6 3068
.org 0x8f9a8
	ldr r5, [pc, #132]	@ 0008f9a8 214d
.org 0x8f9aa
	muls r0, r5	@ 0008f9aa 6843
.org 0x8f9ac
	ldr r2, [pc, #132]	@ 0008f9ac 214a
.org 0x8f9ae
	adds r0, r0, r2	@ 0008f9ae 8018
.org 0x8f9b0
	lsls r0, r0, #1	@ 0008f9b0 4000
.org 0x8f9b2
	lsrs r4, r0, #1	@ 0008f9b2 4408
.org 0x8f9b4
	lsrs r0, r0, #17	@ 0008f9b4 400c
.org 0x8f9b6
	movs r3, #7	@ 0008f9b6 0723
.org 0x8f9b8
	ands r0, r3	@ 0008f9b8 1840
.org 0x8f9ba
	subs r0, #3	@ 0008f9ba 0338
.org 0x8f9bc
	lsls r0, r0, #8	@ 0008f9bc 0002
.org 0x8f9be
	ldr r1, [r7, #84]	@ 0008f9be 796d
.org 0x8f9c0
	adds r1, r1, r0	@ 0008f9c0 0918
.org 0x8f9c2
	str r1, [sp, #0]	@ 0008f9c2 0091
.org 0x8f9c4
	adds r0, r4, #0	@ 0008f9c4 201c
.org 0x8f9c6
	muls r0, r5	@ 0008f9c6 6843
.org 0x8f9c8
	adds r0, r0, r2	@ 0008f9c8 8018
.org 0x8f9ca
	lsls r0, r0, #1	@ 0008f9ca 4000
.org 0x8f9cc
	lsrs r1, r0, #1	@ 0008f9cc 4108
.org 0x8f9ce
	str r1, [r6, #0]	@ 0008f9ce 3160
.org 0x8f9d0
	lsrs r0, r0, #17	@ 0008f9d0 400c
.org 0x8f9d2
	ands r0, r3	@ 0008f9d2 1840
.org 0x8f9d4
	subs r0, #3	@ 0008f9d4 0338
.org 0x8f9d6
	lsls r0, r0, #8	@ 0008f9d6 0002
.org 0x8f9d8
	ldr r1, [r7, #88]	@ 0008f9d8 b96d
.org 0x8f9da
	adds r1, r1, r0	@ 0008f9da 0918
.org 0x8f9dc
	str r1, [sp, #4]	@ 0008f9dc 0191
.org 0x8f9de
	movs r0, #1	@ 0008f9de 0120
.org 0x8f9e0
	mov r1, sp	@ 0008f9e0 6946
.org 0x8f9e2
	bl 0xd0c88	@ 0008f9e2 41f051f9
.org 0x8f9e6
	adds r0, r7, #0	@ 0008f9e6 381c
.org 0x8f9e8
	bl 0x8fbd8	@ 0008f9e8 00f0f6f8
.org 0x8f9ec
	adds r4, r7, #0	@ 0008f9ec 3c1c
.org 0x8f9ee
	adds r4, #84	@ 0008f9ee 5434
.org 0x8f9f0
	movs r0, #4	@ 0008f9f0 0420
.org 0x8f9f2
	movs r1, #14	@ 0008f9f2 0e21
.org 0x8f9f4
	adds r2, r4, #0	@ 0008f9f4 221c
.org 0x8f9f6
	bl 0x2ab88	@ 0008f9f6 9bf7c7f8
.org 0x8f9fa
	ldr r2, [pc, #60]	@ 0008f9fa 0f4a
.org 0x8f9fc
	ldrh r1, [r2, #12]	@ 0008f9fc 9189
.org 0x8f9fe
	ldr r0, [pc, #60]	@ 0008f9fe 0f48
.org 0x8fa00
	cmp r1, r0	@ 0008fa00 8142
.org 0x8fa02
	bhi.n 0x8fa08	@ 0008fa02 01d8
.org 0x8fa04
	adds r0, r1, #1	@ 0008fa04 481c
.org 0x8fa06
	strh r0, [r2, #12]	@ 0008fa06 9081
.org 0x8fa08
	adds r0, r7, #0	@ 0008fa08 381c
.org 0x8fa0a
	adds r1, r4, #0	@ 0008fa0a 211c
.org 0x8fa0c
	bl 0x2abe0	@ 0008fa0c 9bf7e8f8
.org 0x8fa10
	ldr r1, [pc, #44]	@ 0008fa10 0b49
.org 0x8fa12
	ldrb r0, [r7, #9]	@ 0008fa12 787a
.org 0x8fa14
	lsls r0, r0, #2	@ 0008fa14 8000
.org 0x8fa16
	adds r0, r0, r1	@ 0008fa16 4018
.org 0x8fa18
	movs r1, #4	@ 0008fa18 0421
.org 0x8fa1a
	str r1, [r7, #12]	@ 0008fa1a f960
.org 0x8fa1c
	ldr r0, [r0, #0]	@ 0008fa1c 0068
.org 0x8fa1e
	ldr r0, [r0, #16]	@ 0008fa1e 0069
.org 0x8fa20
	str r0, [r7, #20]	@ 0008fa20 7861
.org 0x8fa22
	add sp, #8	@ 0008fa22 02b0
.org 0x8fa24
	pop {r4, r5, r6, r7}	@ 0008fa24 f0bc
.org 0x8fa26
	pop {r0}	@ 0008fa26 01bc
.org 0x8fa28
	bx r0	@ 0008fa28 0047
