@ FUN_080f684c  entry 0x080f684c  size 142
.thumb
.org 0xf684c
FUN_080f684c:
	push {r4, lr}	@ 000f684c 10b5
.org 0xf684e
	adds r4, r0, #0	@ 000f684e 041c
.org 0xf6850
	ldrb r0, [r4, #14]	@ 000f6850 a07b
.org 0xf6852
	cmp r0, #1	@ 000f6852 0128
.org 0xf6854
	beq.n 0xf6876	@ 000f6854 0fd0
.org 0xf6856
	cmp r0, #1	@ 000f6856 0128
.org 0xf6858
	bgt.n 0xf6860	@ 000f6858 02dc
.org 0xf685a
	cmp r0, #0	@ 000f685a 0028
.org 0xf685c
	beq.n 0xf686a	@ 000f685c 05d0
.org 0xf685e
	b.n 0xf68d4	@ 000f685e 39e0
.org 0xf6860
	cmp r0, #2	@ 000f6860 0228
.org 0xf6862
	beq.n 0xf6888	@ 000f6862 11d0
.org 0xf6864
	cmp r0, #3	@ 000f6864 0328
.org 0xf6866
	beq.n 0xf6896	@ 000f6866 16d0
.org 0xf6868
	b.n 0xf68d4	@ 000f6868 34e0
.org 0xf686a
	str r0, [r4, #96]	@ 000f686a 2066
.org 0xf686c
	movs r0, #60	@ 000f686c 3c20
.org 0xf686e
	strb r0, [r4, #18]	@ 000f686e a074
.org 0xf6870
	ldrb r0, [r4, #14]	@ 000f6870 a07b
.org 0xf6872
	adds r0, #1	@ 000f6872 0130
.org 0xf6874
	strb r0, [r4, #14]	@ 000f6874 a073
.org 0xf6876
	ldrb r0, [r4, #18]	@ 000f6876 a07c
.org 0xf6878
	subs r0, #1	@ 000f6878 0138
.org 0xf687a
	strb r0, [r4, #18]	@ 000f687a a074
.org 0xf687c
	lsls r0, r0, #24	@ 000f687c 0006
.org 0xf687e
	cmp r0, #0	@ 000f687e 0028
.org 0xf6880
	bne.n 0xf68d4	@ 000f6880 28d1
.org 0xf6882
	ldrb r0, [r4, #14]	@ 000f6882 a07b
.org 0xf6884
	adds r0, #1	@ 000f6884 0130
.org 0xf6886
	b.n 0xf68d2	@ 000f6886 24e0
.org 0xf6888
	movs r0, #0	@ 000f6888 0020
.org 0xf688a
	str r0, [r4, #96]	@ 000f688a 2066
.org 0xf688c
	movs r0, #16	@ 000f688c 1020
.org 0xf688e
	str r0, [r4, #104]	@ 000f688e a066
.org 0xf6890
	ldrb r0, [r4, #14]	@ 000f6890 a07b
.org 0xf6892
	adds r0, #1	@ 000f6892 0130
.org 0xf6894
	strb r0, [r4, #14]	@ 000f6894 a073
.org 0xf6896
	ldr r0, [r4, #96]	@ 000f6896 206e
.org 0xf6898
	ldr r1, [r4, #104]	@ 000f6898 a16e
.org 0xf689a
	adds r0, r0, r1	@ 000f689a 4018
.org 0xf689c
	str r0, [r4, #96]	@ 000f689c 2066
.org 0xf689e
	movs r1, #192	@ 000f689e c021
.org 0xf68a0
	lsls r1, r1, #2	@ 000f68a0 8900
.org 0xf68a2
	cmp r0, r1	@ 000f68a2 8842
.org 0xf68a4
	ble.n 0xf68a8	@ 000f68a4 00dd
.org 0xf68a6
	str r1, [r4, #96]	@ 000f68a6 2166
.org 0xf68a8
	ldr r1, [r4, #88]	@ 000f68a8 a16d
.org 0xf68aa
	ldr r0, [r4, #96]	@ 000f68aa 206e
.org 0xf68ac
	adds r1, r1, r0	@ 000f68ac 0918
.org 0xf68ae
	str r1, [r4, #88]	@ 000f68ae a165
.org 0xf68b0
	ldr r0, [r4, #84]	@ 000f68b0 606d
.org 0xf68b2
	movs r2, #128	@ 000f68b2 8022
.org 0xf68b4
	lsls r2, r2, #6	@ 000f68b4 9201
.org 0xf68b6
	adds r1, r1, r2	@ 000f68b6 8918
.org 0xf68b8
	bl 0x7f8c	@ 000f68b8 11f768fb
.org 0xf68bc
	cmp r0, #0	@ 000f68bc 0028
.org 0xf68be
	beq.n 0xf68d4	@ 000f68be 09d0
.org 0xf68c0
	ldr r0, [r4, #84]	@ 000f68c0 606d
.org 0xf68c2
	ldr r1, [r4, #88]	@ 000f68c2 a16d
.org 0xf68c4
	bl 0x8534	@ 000f68c4 11f736fe
.org 0xf68c8
	ldr r1, [pc, #16]	@ 000f68c8 0449
.org 0xf68ca
	adds r0, r0, r1	@ 000f68ca 4018
.org 0xf68cc
	str r0, [r4, #88]	@ 000f68cc a065
.org 0xf68ce
	movs r0, #0	@ 000f68ce 0020
.org 0xf68d0
	strb r0, [r4, #13]	@ 000f68d0 6073
.org 0xf68d2
	strb r0, [r4, #14]	@ 000f68d2 a073
.org 0xf68d4
	pop {r4}	@ 000f68d4 10bc
.org 0xf68d6
	pop {r0}	@ 000f68d6 01bc
.org 0xf68d8
	bx r0	@ 000f68d8 0047
