@ FUN_080ad974  entry 0x080ad974  size 122
.thumb
.org 0xad974
FUN_080ad974:
	push {r4, r5, lr}	@ 000ad974 30b5
.org 0xad976
	ldr r1, [r0, #12]	@ 000ad976 c168
.org 0xad978
	ldr r5, [r1, #44]	@ 000ad978 cd6a
.org 0xad97a
	ldr r4, [r0, #44]	@ 000ad97a c46a
.org 0xad97c
	ldr r0, [r0, #20]	@ 000ad97c 4069
.org 0xad97e
	movs r1, #4	@ 000ad97e 0421
.org 0xad980
	ands r0, r1	@ 000ad980 0840
.org 0xad982
	cmp r0, #0	@ 000ad982 0028
.org 0xad984
	bne.n 0xad990	@ 000ad984 04d1
.org 0xad986
	ldrb r0, [r5, #9]	@ 000ad986 687a
.org 0xad988
	cmp r0, #78	@ 000ad988 4e28
.org 0xad98a
	beq.n 0xad990	@ 000ad98a 01d0
.org 0xad98c
	cmp r0, #48	@ 000ad98c 3028
.org 0xad98e
	bne.n 0xad9c0	@ 000ad98e 17d1
.org 0xad990
	ldr r1, [pc, #40]	@ 000ad990 0a49
.org 0xad992
	ldrb r0, [r4, #9]	@ 000ad992 607a
.org 0xad994
	lsls r0, r0, #2	@ 000ad994 8000
.org 0xad996
	adds r0, r0, r1	@ 000ad996 4018
.org 0xad998
	movs r1, #2	@ 000ad998 0221
.org 0xad99a
	str r1, [r4, #12]	@ 000ad99a e160
.org 0xad99c
	ldr r0, [r0, #0]	@ 000ad99c 0068
.org 0xad99e
	ldr r0, [r0, #8]	@ 000ad99e 8068
.org 0xad9a0
	str r0, [r4, #20]	@ 000ad9a0 6061
.org 0xad9a2
	adds r0, r4, #0	@ 000ad9a2 201c
.org 0xad9a4
	adds r0, #140	@ 000ad9a4 8c30
.org 0xad9a6
	movs r1, #0	@ 000ad9a6 0021
.org 0xad9a8
	str r1, [r0, #0]	@ 000ad9a8 0160
.org 0xad9aa
	adds r0, #4	@ 000ad9aa 0430
.org 0xad9ac
	str r1, [r0, #0]	@ 000ad9ac 0160
.org 0xad9ae
	adds r0, #4	@ 000ad9ae 0430
.org 0xad9b0
	strb r1, [r0, #0]	@ 000ad9b0 0170
.org 0xad9b2
	ldrb r1, [r4, #10]	@ 000ad9b2 a17a
.org 0xad9b4
	movs r0, #251	@ 000ad9b4 fb20
.org 0xad9b6
	ands r0, r1	@ 000ad9b6 0840
.org 0xad9b8
	strb r0, [r4, #10]	@ 000ad9b8 a072
.org 0xad9ba
	b.n 0xad9ec	@ 000ad9ba 17e0
.org 0xad9bc
	.byte 0x40,0xdb,0x85,0x08	@ 000ad9bc data
.org 0xad9c0
	movs r1, #8	@ 000ad9c0 0821
.org 0xad9c2
	ldrsb r1, [r5, r1]	@ 000ad9c2 6956
.org 0xad9c4
	cmp r1, #1	@ 000ad9c4 0129
.org 0xad9c6
	bne.n 0xad9ec	@ 000ad9c6 11d1
.org 0xad9c8
	cmp r0, #29	@ 000ad9c8 1d28
.org 0xad9ca
	bne.n 0xad9d8	@ 000ad9ca 05d1
.org 0xad9cc
	adds r0, r4, #0	@ 000ad9cc 201c
.org 0xad9ce
	adds r0, #184	@ 000ad9ce b830
.org 0xad9d0
	strb r1, [r0, #0]	@ 000ad9d0 0170
.org 0xad9d2
	adds r0, r4, #0	@ 000ad9d2 201c
.org 0xad9d4
	bl 0xadbcc	@ 000ad9d4 00f0faf8
.org 0xad9d8
	ldrb r0, [r5, #9]	@ 000ad9d8 687a
.org 0xad9da
	cmp r0, #30	@ 000ad9da 1e28
.org 0xad9dc
	bne.n 0xad9ec	@ 000ad9dc 06d1
.org 0xad9de
	adds r1, r4, #0	@ 000ad9de 211c
.org 0xad9e0
	adds r1, #184	@ 000ad9e0 b831
.org 0xad9e2
	movs r0, #2	@ 000ad9e2 0220
.org 0xad9e4
	strb r0, [r1, #0]	@ 000ad9e4 0870
.org 0xad9e6
	adds r0, r4, #0	@ 000ad9e6 201c
.org 0xad9e8
	bl 0xadbcc	@ 000ad9e8 00f0f0f8
.org 0xad9ec
	pop {r4, r5}	@ 000ad9ec 30bc
