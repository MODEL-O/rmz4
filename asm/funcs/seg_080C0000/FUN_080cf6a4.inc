@ FUN_080cf6a4  entry 0x080cf6a4  size 126
.thumb
.org 0xcf6a4
FUN_080cf6a4:
	push {r4, r5, r6, r7, lr}	@ 000cf6a4 f0b5
.org 0xcf6a6
	adds r4, r0, #0	@ 000cf6a6 041c
.org 0xcf6a8
	ldr r5, [r4, #40]	@ 000cf6a8 a56a
.org 0xcf6aa
	ldrb r6, [r4, #17]	@ 000cf6aa 667c
.org 0xcf6ac
	adds r0, r5, #0	@ 000cf6ac 281c
.org 0xcf6ae
	adds r0, #184	@ 000cf6ae b830
.org 0xcf6b0
	ldr r0, [r0, #0]	@ 000cf6b0 0068
.org 0xcf6b2
	ldr r1, [pc, #80]	@ 000cf6b2 1449
.org 0xcf6b4
	adds r7, r0, r1	@ 000cf6b4 4718
.org 0xcf6b6
	ldrb r1, [r4, #15]	@ 000cf6b6 e17b
.org 0xcf6b8
	cmp r1, #0	@ 000cf6b8 0029
.org 0xcf6ba
	bne.n 0xcf6c6	@ 000cf6ba 04d1
.org 0xcf6bc
	movs r0, #208	@ 000cf6bc d020
.org 0xcf6be
	lsls r0, r0, #2	@ 000cf6be 8000
.org 0xcf6c0
	str r0, [r4, #96]	@ 000cf6c0 2066
.org 0xcf6c2
	adds r0, r1, #1	@ 000cf6c2 481c
.org 0xcf6c4
	strb r0, [r4, #15]	@ 000cf6c4 e073
.org 0xcf6c6
	adds r0, r4, #0	@ 000cf6c6 201c
.org 0xcf6c8
	bl 0x1cff0	@ 000cf6c8 4df792fc
.org 0xcf6cc
	ldr r1, [r4, #88]	@ 000cf6cc a16d
.org 0xcf6ce
	ldr r0, [r4, #96]	@ 000cf6ce 206e
.org 0xcf6d0
	adds r1, r1, r0	@ 000cf6d0 0918
.org 0xcf6d2
	str r1, [r4, #88]	@ 000cf6d2 a165
.org 0xcf6d4
	adds r0, r5, #0	@ 000cf6d4 281c
.org 0xcf6d6
	adds r0, #206	@ 000cf6d6 ce30
.org 0xcf6d8
	ldrb r0, [r0, #0]	@ 000cf6d8 0078
.org 0xcf6da
	asrs r0, r6	@ 000cf6da 3041
.org 0xcf6dc
	movs r3, #1	@ 000cf6dc 0123
.org 0xcf6de
	ands r0, r3	@ 000cf6de 1840
.org 0xcf6e0
	cmp r0, #0	@ 000cf6e0 0028
.org 0xcf6e2
	beq.n 0xcf708	@ 000cf6e2 11d0
.org 0xcf6e4
	cmp r1, r7	@ 000cf6e4 b942
.org 0xcf6e6
	blt.n 0xcf720	@ 000cf6e6 1bdb
.org 0xcf6e8
	adds r2, r5, #0	@ 000cf6e8 2a1c
.org 0xcf6ea
	adds r2, #207	@ 000cf6ea cf32
.org 0xcf6ec
	adds r0, r3, #0	@ 000cf6ec 181c
.org 0xcf6ee
	lsls r0, r6	@ 000cf6ee b040
.org 0xcf6f0
	ldrb r1, [r2, #0]	@ 000cf6f0 1178
.org 0xcf6f2
	orrs r0, r1	@ 000cf6f2 0843
.org 0xcf6f4
	movs r1, #0	@ 000cf6f4 0021
.org 0xcf6f6
	strb r0, [r2, #0]	@ 000cf6f6 1070
.org 0xcf6f8
	str r7, [r4, #88]	@ 000cf6f8 a765
.org 0xcf6fa
	movs r0, #4	@ 000cf6fa 0420
.org 0xcf6fc
	strb r0, [r4, #13]	@ 000cf6fc 6073
.org 0xcf6fe
	strb r1, [r4, #14]	@ 000cf6fe a173
.org 0xcf700
	strb r1, [r4, #15]	@ 000cf700 e173
.org 0xcf702
	b.n 0xcf720	@ 000cf702 0de0
.org 0xcf704
	.byte 0xff,0x8f,0x00,0x00	@ 000cf704 data
.org 0xcf708
	ldr r1, [pc, #28]	@ 000cf708 0749
.org 0xcf70a
	ldrb r0, [r4, #9]	@ 000cf70a 607a
.org 0xcf70c
	lsls r0, r0, #2	@ 000cf70c 8000
.org 0xcf70e
	adds r0, r0, r1	@ 000cf70e 4018
.org 0xcf710
	movs r1, #2	@ 000cf710 0221
.org 0xcf712
	str r1, [r4, #12]	@ 000cf712 e160
.org 0xcf714
	ldr r0, [r0, #0]	@ 000cf714 0068
.org 0xcf716
	ldr r0, [r0, #8]	@ 000cf716 8068
.org 0xcf718
	str r0, [r4, #20]	@ 000cf718 6061
.org 0xcf71a
	adds r0, r4, #0	@ 000cf71a 201c
.org 0xcf71c
	bl 0xcf7a8	@ 000cf71c 00f044f8
.org 0xcf720
	pop {r4, r5, r6, r7}	@ 000cf720 f0bc
