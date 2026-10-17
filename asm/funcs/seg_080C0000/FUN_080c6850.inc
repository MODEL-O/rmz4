@ FUN_080c6850  entry 0x080c6850  size 146
.thumb
.org 0xc6850
FUN_080c6850:
	push {r4, r5, r6, lr}	@ 000c6850 70b5
.org 0xc6852
	mov r6, r9	@ 000c6852 4e46
.org 0xc6854
	mov r5, r8	@ 000c6854 4546
.org 0xc6856
	push {r5, r6}	@ 000c6856 60b4
.org 0xc6858
	adds r4, r0, #0	@ 000c6858 041c
.org 0xc685a
	bl 0x1cc9c	@ 000c685a 56f71ffa
.org 0xc685e
	ldrb r0, [r4, #10]	@ 000c685e a07a
.org 0xc6860
	movs r1, #1	@ 000c6860 0121
.org 0xc6862
	mov r9, r1	@ 000c6862 8946
.org 0xc6864
	mov r2, r9	@ 000c6864 4a46
.org 0xc6866
	orrs r0, r2	@ 000c6866 1043
.org 0xc6868
	movs r1, #2	@ 000c6868 0221
.org 0xc686a
	orrs r0, r1	@ 000c686a 0843
.org 0xc686c
	strb r0, [r4, #10]	@ 000c686c a072
.org 0xc686e
	movs r1, #196	@ 000c686e c421
.org 0xc6870
	lsls r1, r1, #7	@ 000c6870 c901
.org 0xc6872
	adds r0, r4, #0	@ 000c6872 201c
.org 0xc6874
	bl 0x1cf00	@ 000c6874 56f744fb
.org 0xc6878
	movs r0, #8	@ 000c6878 0820
.org 0xc687a
	strb r0, [r4, #18]	@ 000c687a a074
.org 0xc687c
	adds r0, r4, #0	@ 000c687c 201c
.org 0xc687e
	adds r0, #84	@ 000c687e 5430
.org 0xc6880
	ldr r5, [pc, #96]	@ 000c6880 184d
.org 0xc6882
	mov r8, r5	@ 000c6882 a846
.org 0xc6884
	ldr r1, [r5, #0]	@ 000c6884 2968
.org 0xc6886
	ldr r6, [pc, #96]	@ 000c6886 184e
.org 0xc6888
	adds r2, r1, #0	@ 000c6888 0a1c
.org 0xc688a
	muls r2, r6	@ 000c688a 7243
.org 0xc688c
	ldr r5, [pc, #92]	@ 000c688c 174d
.org 0xc688e
	adds r2, r2, r5	@ 000c688e 5219
.org 0xc6890
	lsls r2, r2, #1	@ 000c6890 5200
.org 0xc6892
	lsrs r3, r2, #1	@ 000c6892 5308
.org 0xc6894
	lsrs r2, r2, #17	@ 000c6894 520c
.org 0xc6896
	movs r1, #3	@ 000c6896 0321
.org 0xc6898
	ands r2, r1	@ 000c6898 0a40
.org 0xc689a
	lsls r1, r2, #3	@ 000c689a d100
.org 0xc689c
	subs r1, r1, r2	@ 000c689c 891a
.org 0xc689e
	lsls r1, r1, #2	@ 000c689e 8900
.org 0xc68a0
	ldr r2, [pc, #76]	@ 000c68a0 134a
.org 0xc68a2
	adds r1, r1, r2	@ 000c68a2 8918
.org 0xc68a4
	muls r3, r6	@ 000c68a4 7343
.org 0xc68a6
	adds r3, r3, r5	@ 000c68a6 5b19
.org 0xc68a8
	lsls r3, r3, #1	@ 000c68a8 5b00
.org 0xc68aa
	lsrs r2, r3, #1	@ 000c68aa 5a08
.org 0xc68ac
	mov r5, r8	@ 000c68ac 4546
.org 0xc68ae
	str r2, [r5, #0]	@ 000c68ae 2a60
.org 0xc68b0
	lsrs r3, r3, #17	@ 000c68b0 5b0c
.org 0xc68b2
	mov r2, r9	@ 000c68b2 4a46
.org 0xc68b4
	ands r3, r2	@ 000c68b4 1340
.org 0xc68b6
	lsls r3, r3, #4	@ 000c68b6 1b01
.org 0xc68b8
	movs r2, #0	@ 000c68b8 0022
.org 0xc68ba
	bl 0xd4c8c	@ 000c68ba 0ef0e7f9
.org 0xc68be
	ldr r1, [pc, #52]	@ 000c68be 0d49
.org 0xc68c0
	ldrb r0, [r4, #9]	@ 000c68c0 607a
.org 0xc68c2
	lsls r0, r0, #2	@ 000c68c2 8000
.org 0xc68c4
	adds r0, r0, r1	@ 000c68c4 4018
.org 0xc68c6
	movs r1, #1	@ 000c68c6 0121
.org 0xc68c8
	str r1, [r4, #12]	@ 000c68c8 e160
.org 0xc68ca
	ldr r0, [r0, #0]	@ 000c68ca 0068
.org 0xc68cc
	ldr r0, [r0, #4]	@ 000c68cc 4068
.org 0xc68ce
	str r0, [r4, #20]	@ 000c68ce 6061
.org 0xc68d0
	adds r0, r4, #0	@ 000c68d0 201c
.org 0xc68d2
	bl 0xc6518	@ 000c68d2 fff721fe
.org 0xc68d6
	pop {r3, r4}	@ 000c68d6 18bc
.org 0xc68d8
	mov r8, r3	@ 000c68d8 9846
.org 0xc68da
	mov r9, r4	@ 000c68da a146
.org 0xc68dc
	pop {r4, r5, r6}	@ 000c68dc 70bc
.org 0xc68de
	pop {r0}	@ 000c68de 01bc
.org 0xc68e0
	bx r0	@ 000c68e0 0047
