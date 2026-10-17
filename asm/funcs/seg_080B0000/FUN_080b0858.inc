@ FUN_080b0858  entry 0x080b0858  size 72
.thumb
.org 0xb0858
FUN_080b0858:
	push {r4, lr}	@ 000b0858 10b5
.org 0xb085a
	adds r4, r0, #0	@ 000b085a 041c
.org 0xb085c
	ldrb r0, [r4, #14]	@ 000b085c a07b
.org 0xb085e
	cmp r0, #0	@ 000b085e 0028
.org 0xb0860
	bne.n 0xb0874	@ 000b0860 08d1
.org 0xb0862
	ldr r1, [pc, #60]	@ 000b0862 0f49
.org 0xb0864
	adds r0, r4, #0	@ 000b0864 201c
.org 0xb0866
	bl 0x1cf00	@ 000b0866 6cf74bfb
.org 0xb086a
	movs r0, #96	@ 000b086a 6020
.org 0xb086c
	strb r0, [r4, #18]	@ 000b086c a074
.org 0xb086e
	ldrb r0, [r4, #14]	@ 000b086e a07b
.org 0xb0870
	adds r0, #1	@ 000b0870 0130
.org 0xb0872
	strb r0, [r4, #14]	@ 000b0872 a073
.org 0xb0874
	ldrb r1, [r4, #18]	@ 000b0874 a17c
.org 0xb0876
	cmp r1, #0	@ 000b0876 0029
.org 0xb0878
	bne.n 0xb0884	@ 000b0878 04d1
.org 0xb087a
	movs r0, #3	@ 000b087a 0320
.org 0xb087c
	strb r0, [r4, #13]	@ 000b087c 6073
.org 0xb087e
	strb r1, [r4, #14]	@ 000b087e a173
.org 0xb0880
	movs r0, #96	@ 000b0880 6020
.org 0xb0882
	strb r0, [r4, #18]	@ 000b0882 a074
.org 0xb0884
	adds r0, r4, #0	@ 000b0884 201c
.org 0xb0886
	adds r0, #183	@ 000b0886 b730
.org 0xb0888
	adds r1, r4, #0	@ 000b0888 211c
.org 0xb088a
	adds r1, #182	@ 000b088a b631
.org 0xb088c
	ldrb r0, [r0, #0]	@ 000b088c 0078
.org 0xb088e
	ldrb r1, [r1, #0]	@ 000b088e 0978
.org 0xb0890
	cmp r0, r1	@ 000b0890 8842
.org 0xb0892
	beq.n 0xb089a	@ 000b0892 02d0
.org 0xb0894
	ldrb r0, [r4, #18]	@ 000b0894 a07c
.org 0xb0896
	subs r0, #1	@ 000b0896 0138
.org 0xb0898
	strb r0, [r4, #18]	@ 000b0898 a074
.org 0xb089a
	pop {r4}	@ 000b089a 10bc
.org 0xb089c
	pop {r0}	@ 000b089c 01bc
.org 0xb089e
	bx r0	@ 000b089e 0047
