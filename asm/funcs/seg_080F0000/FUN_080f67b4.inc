@ FUN_080f67b4  entry 0x080f67b4  size 144
.thumb
.org 0xf67b4
FUN_080f67b4:
	push {r4, lr}	@ 000f67b4 10b5
.org 0xf67b6
	adds r4, r0, #0	@ 000f67b6 041c
.org 0xf67b8
	ldrb r0, [r4, #14]	@ 000f67b8 a07b
.org 0xf67ba
	cmp r0, #1	@ 000f67ba 0128
.org 0xf67bc
	beq.n 0xf67de	@ 000f67bc 0fd0
.org 0xf67be
	cmp r0, #1	@ 000f67be 0128
.org 0xf67c0
	bgt.n 0xf67c8	@ 000f67c0 02dc
.org 0xf67c2
	cmp r0, #0	@ 000f67c2 0028
.org 0xf67c4
	beq.n 0xf67d2	@ 000f67c4 05d0
.org 0xf67c6
	b.n 0xf683e	@ 000f67c6 3ae0
.org 0xf67c8
	cmp r0, #2	@ 000f67c8 0228
.org 0xf67ca
	beq.n 0xf67f2	@ 000f67ca 12d0
.org 0xf67cc
	cmp r0, #3	@ 000f67cc 0328
.org 0xf67ce
	beq.n 0xf6800	@ 000f67ce 17d0
.org 0xf67d0
	b.n 0xf683e	@ 000f67d0 35e0
.org 0xf67d2
	str r0, [r4, #96]	@ 000f67d2 2066
.org 0xf67d4
	movs r0, #60	@ 000f67d4 3c20
.org 0xf67d6
	strb r0, [r4, #18]	@ 000f67d6 a074
.org 0xf67d8
	ldrb r0, [r4, #14]	@ 000f67d8 a07b
.org 0xf67da
	adds r0, #1	@ 000f67da 0130
.org 0xf67dc
	strb r0, [r4, #14]	@ 000f67dc a073
.org 0xf67de
	ldrb r0, [r4, #18]	@ 000f67de a07c
.org 0xf67e0
	subs r0, #1	@ 000f67e0 0138
.org 0xf67e2
	strb r0, [r4, #18]	@ 000f67e2 a074
.org 0xf67e4
	lsls r0, r0, #24	@ 000f67e4 0006
.org 0xf67e6
	cmp r0, #0	@ 000f67e6 0028
.org 0xf67e8
	bne.n 0xf683e	@ 000f67e8 29d1
.org 0xf67ea
	ldrb r0, [r4, #14]	@ 000f67ea a07b
.org 0xf67ec
	adds r0, #1	@ 000f67ec 0130
.org 0xf67ee
	strb r0, [r4, #14]	@ 000f67ee a073
.org 0xf67f0
	b.n 0xf683e	@ 000f67f0 25e0
.org 0xf67f2
	movs r0, #0	@ 000f67f2 0020
.org 0xf67f4
	str r0, [r4, #96]	@ 000f67f4 2066
.org 0xf67f6
	subs r0, #16	@ 000f67f6 1038
.org 0xf67f8
	str r0, [r4, #104]	@ 000f67f8 a066
.org 0xf67fa
	ldrb r0, [r4, #14]	@ 000f67fa a07b
.org 0xf67fc
	adds r0, #1	@ 000f67fc 0130
.org 0xf67fe
	strb r0, [r4, #14]	@ 000f67fe a073
.org 0xf6800
	ldr r0, [r4, #96]	@ 000f6800 206e
.org 0xf6802
	ldr r1, [r4, #104]	@ 000f6802 a16e
.org 0xf6804
	adds r0, r0, r1	@ 000f6804 4018
.org 0xf6806
	str r0, [r4, #96]	@ 000f6806 2066
.org 0xf6808
	ldr r1, [pc, #56]	@ 000f6808 0e49
.org 0xf680a
	cmp r0, r1	@ 000f680a 8842
.org 0xf680c
	bge.n 0xf6810	@ 000f680c 00da
.org 0xf680e
	str r1, [r4, #96]	@ 000f680e 2166
.org 0xf6810
	ldr r1, [r4, #88]	@ 000f6810 a16d
.org 0xf6812
	ldr r0, [r4, #96]	@ 000f6812 206e
.org 0xf6814
	adds r1, r1, r0	@ 000f6814 0918
.org 0xf6816
	str r1, [r4, #88]	@ 000f6816 a165
.org 0xf6818
	ldr r0, [r4, #84]	@ 000f6818 606d
.org 0xf681a
	ldr r2, [pc, #44]	@ 000f681a 0b4a
.org 0xf681c
	adds r0, r0, r2	@ 000f681c 8018
.org 0xf681e
	bl 0x7db4	@ 000f681e 11f7c9fa
.org 0xf6822
	cmp r0, #0	@ 000f6822 0028
.org 0xf6824
	beq.n 0xf683e	@ 000f6824 0bd0
.org 0xf6826
	ldr r0, [r4, #84]	@ 000f6826 606d
.org 0xf6828
	ldr r1, [pc, #28]	@ 000f6828 0749
.org 0xf682a
	adds r0, r0, r1	@ 000f682a 4018
.org 0xf682c
	ldr r1, [r4, #88]	@ 000f682c a16d
.org 0xf682e
	bl 0x8748	@ 000f682e 11f78bff
.org 0xf6832
	adds r0, #1	@ 000f6832 0130
.org 0xf6834
	str r0, [r4, #88]	@ 000f6834 a065
.org 0xf6836
	movs r1, #0	@ 000f6836 0021
.org 0xf6838
	movs r0, #1	@ 000f6838 0120
.org 0xf683a
	strb r0, [r4, #13]	@ 000f683a 6073
.org 0xf683c
	strb r1, [r4, #14]	@ 000f683c a173
.org 0xf683e
	pop {r4}	@ 000f683e 10bc
.org 0xf6840
	pop {r0}	@ 000f6840 01bc
.org 0xf6842
	bx r0	@ 000f6842 0047
