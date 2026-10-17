@ FUN_0805a848  entry 0x0805a848  size 92
.thumb
.org 0x5a848
FUN_0805a848:
	push {r4, lr}	@ 0005a848 10b5
.org 0x5a84a
	adds r4, r0, #0	@ 0005a84a 041c
.org 0x5a84c
	ldrb r0, [r4, #15]	@ 0005a84c e07b
.org 0x5a84e
	cmp r0, #0	@ 0005a84e 0028
.org 0x5a850
	bne.n 0x5a886	@ 0005a850 19d1
.org 0x5a852
	adds r0, r4, #0	@ 0005a852 201c
.org 0x5a854
	adds r0, #116	@ 0005a854 7430
.org 0x5a856
	ldr r1, [pc, #76]	@ 0005a856 1349
.org 0x5a858
	bl 0x5784	@ 0005a858 aaf794ff
.org 0x5a85c
	ldrb r0, [r4, #30]	@ 0005a85c a07f
.org 0x5a85e
	lsls r0, r0, #8	@ 0005a85e 0002
.org 0x5a860
	adds r1, r4, #0	@ 0005a860 211c
.org 0x5a862
	adds r1, #112	@ 0005a862 7031
.org 0x5a864
	ldrb r1, [r1, #0]	@ 0005a864 0978
.org 0x5a866
	orrs r0, r1	@ 0005a866 0843
.org 0x5a868
	ldr r1, [pc, #60]	@ 0005a868 0f49
.org 0x5a86a
	cmp r0, r1	@ 0005a86a 8842
.org 0x5a86c
	beq.n 0x5a87c	@ 0005a86c 06d0
.org 0x5a86e
	adds r0, r4, #0	@ 0005a86e 201c
.org 0x5a870
	bl 0x1cf00	@ 0005a870 c2f746fb
.org 0x5a874
	adds r1, r4, #0	@ 0005a874 211c
.org 0x5a876
	adds r1, #189	@ 0005a876 bd31
.org 0x5a878
	movs r0, #1	@ 0005a878 0120
.org 0x5a87a
	strb r0, [r1, #0]	@ 0005a87a 0870
.org 0x5a87c
	movs r0, #16	@ 0005a87c 1020
.org 0x5a87e
	strb r0, [r4, #18]	@ 0005a87e a074
.org 0x5a880
	ldrb r0, [r4, #15]	@ 0005a880 e07b
.org 0x5a882
	adds r0, #1	@ 0005a882 0130
.org 0x5a884
	strb r0, [r4, #15]	@ 0005a884 e073
.org 0x5a886
	adds r0, r4, #0	@ 0005a886 201c
.org 0x5a888
	bl 0x1cff0	@ 0005a888 c2f7b2fb
.org 0x5a88c
	ldrb r0, [r4, #18]	@ 0005a88c a07c
.org 0x5a88e
	subs r0, #1	@ 0005a88e 0138
.org 0x5a890
	strb r0, [r4, #18]	@ 0005a890 a074
.org 0x5a892
	lsls r0, r0, #24	@ 0005a892 0006
.org 0x5a894
	cmp r0, #0	@ 0005a894 0028
.org 0x5a896
	bne.n 0x5a89e	@ 0005a896 02d1
.org 0x5a898
	adds r0, r4, #0	@ 0005a898 201c
.org 0x5a89a
	bl 0x5bf8c	@ 0005a89a 01f077fb
.org 0x5a89e
	pop {r4}	@ 0005a89e 10bc
.org 0x5a8a0
	pop {r0}	@ 0005a8a0 01bc
.org 0x5a8a2
	bx r0	@ 0005a8a2 0047
