@ FUN_080cb860  entry 0x080cb860  size 84
.thumb
.org 0xcb860
FUN_080cb860:
	push {r4, r5, lr}	@ 000cb860 30b5
.org 0xcb862
	adds r4, r0, #0	@ 000cb862 041c
.org 0xcb864
	ldrb r5, [r4, #13]	@ 000cb864 657b
.org 0xcb866
	cmp r5, #0	@ 000cb866 002d
.org 0xcb868
	bne.n 0xcb88c	@ 000cb868 10d1
.org 0xcb86a
	ldr r1, [pc, #72]	@ 000cb86a 1249
.org 0xcb86c
	bl 0x1cf00	@ 000cb86c 51f748fb
.org 0xcb870
	adds r0, r4, #0	@ 000cb870 201c
.org 0xcb872
	adds r0, #140	@ 000cb872 8c30
.org 0xcb874
	str r5, [r0, #0]	@ 000cb874 0560
.org 0xcb876
	adds r0, #4	@ 000cb876 0430
.org 0xcb878
	str r5, [r0, #0]	@ 000cb878 0560
.org 0xcb87a
	adds r0, #4	@ 000cb87a 0430
.org 0xcb87c
	strb r5, [r0, #0]	@ 000cb87c 0570
.org 0xcb87e
	ldrb r1, [r4, #10]	@ 000cb87e a17a
.org 0xcb880
	movs r0, #251	@ 000cb880 fb20
.org 0xcb882
	ands r0, r1	@ 000cb882 0840
.org 0xcb884
	strb r0, [r4, #10]	@ 000cb884 a072
.org 0xcb886
	ldrb r0, [r4, #13]	@ 000cb886 607b
.org 0xcb888
	adds r0, #1	@ 000cb888 0130
.org 0xcb88a
	strb r0, [r4, #13]	@ 000cb88a 6073
.org 0xcb88c
	adds r0, r4, #0	@ 000cb88c 201c
.org 0xcb88e
	bl 0x1cff0	@ 000cb88e 51f7affb
.org 0xcb892
	adds r0, r4, #0	@ 000cb892 201c
.org 0xcb894
	adds r0, #115	@ 000cb894 7330
.org 0xcb896
	ldrb r0, [r0, #0]	@ 000cb896 0078
.org 0xcb898
	cmp r0, #3	@ 000cb898 0328
.org 0xcb89a
	bne.n 0xcb8ae	@ 000cb89a 08d1
.org 0xcb89c
	ldr r1, [pc, #24]	@ 000cb89c 0649
.org 0xcb89e
	ldrb r0, [r4, #9]	@ 000cb89e 607a
.org 0xcb8a0
	lsls r0, r0, #2	@ 000cb8a0 8000
.org 0xcb8a2
	adds r0, r0, r1	@ 000cb8a2 4018
.org 0xcb8a4
	movs r1, #4	@ 000cb8a4 0421
.org 0xcb8a6
	str r1, [r4, #12]	@ 000cb8a6 e160
.org 0xcb8a8
	ldr r0, [r0, #0]	@ 000cb8a8 0068
.org 0xcb8aa
	ldr r0, [r0, #16]	@ 000cb8aa 0069
.org 0xcb8ac
	str r0, [r4, #20]	@ 000cb8ac 6061
.org 0xcb8ae
	pop {r4, r5}	@ 000cb8ae 30bc
.org 0xcb8b0
	pop {r0}	@ 000cb8b0 01bc
.org 0xcb8b2
	bx r0	@ 000cb8b2 0047
