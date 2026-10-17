@ FUN_080b798c  entry 0x080b798c  size 76
.thumb
.org 0xb798c
FUN_080b798c:
	push {r4, r5, r6, lr}	@ 000b798c 70b5
.org 0xb798e
	adds r4, r0, #0	@ 000b798e 041c
.org 0xb7990
	adds r6, r4, #0	@ 000b7990 261c
.org 0xb7992
	adds r6, #192	@ 000b7992 c036
.org 0xb7994
	ldr r5, [r6, #0]	@ 000b7994 3568
.org 0xb7996
	cmp r5, #0	@ 000b7996 002d
.org 0xb7998
	bne.n 0xb79d2	@ 000b7998 1bd1
.org 0xb799a
	adds r0, #140	@ 000b799a 8c30
.org 0xb799c
	ldr r0, [r0, #0]	@ 000b799c 0068
.org 0xb799e
	movs r1, #1	@ 000b799e 0121
.org 0xb79a0
	ands r0, r1	@ 000b79a0 0840
.org 0xb79a2
	cmp r0, #0	@ 000b79a2 0028
.org 0xb79a4
	beq.n 0xb79d2	@ 000b79a4 15d0
.org 0xb79a6
	ldr r2, [pc, #48]	@ 000b79a6 0c4a
.org 0xb79a8
	str r5, [r2, #0]	@ 000b79a8 1560
.org 0xb79aa
	ldr r0, [pc, #48]	@ 000b79aa 0c48
.org 0xb79ac
	str r0, [r2, #4]	@ 000b79ac 5060
.org 0xb79ae
	movs r0, #0	@ 000b79ae 0020
.org 0xb79b0
	adds r1, r4, #0	@ 000b79b0 211c
.org 0xb79b2
	bl 0x2adac	@ 000b79b2 73f7fbf9
.org 0xb79b6
	str r0, [r6, #0]	@ 000b79b6 3060
.org 0xb79b8
	cmp r0, #0	@ 000b79b8 0028
.org 0xb79ba
	beq.n 0xb79d2	@ 000b79ba 0ad0
.org 0xb79bc
	adds r0, r4, #0	@ 000b79bc 201c
.org 0xb79be
	adds r0, #116	@ 000b79be 7430
.org 0xb79c0
	ldr r1, [pc, #28]	@ 000b79c0 0749
.org 0xb79c2
	bl 0x5784	@ 000b79c2 4df7dffe
.org 0xb79c6
	movs r1, #210	@ 000b79c6 d221
.org 0xb79c8
	lsls r1, r1, #8	@ 000b79c8 0902
.org 0xb79ca
	adds r0, r4, #0	@ 000b79ca 201c
.org 0xb79cc
	bl 0x1cf00	@ 000b79cc 65f798fa
.org 0xb79d0
	str r5, [r4, #96]	@ 000b79d0 2566
.org 0xb79d2
	pop {r4, r5, r6}	@ 000b79d2 70bc
.org 0xb79d4
	pop {r0}	@ 000b79d4 01bc
.org 0xb79d6
	bx r0	@ 000b79d6 0047
