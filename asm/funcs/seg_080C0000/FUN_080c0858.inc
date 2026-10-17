@ FUN_080c0858  entry 0x080c0858  size 62
.thumb
.org 0xc0858
FUN_080c0858:
	push {r4, lr}	@ 000c0858 10b5
.org 0xc085a
	adds r4, r0, #0	@ 000c085a 041c
.org 0xc085c
	ldrb r0, [r4, #15]	@ 000c085c e07b
.org 0xc085e
	cmp r0, #0	@ 000c085e 0028
.org 0xc0860
	bne.n 0xc0878	@ 000c0860 0ad1
.org 0xc0862
	ldrb r1, [r4, #10]	@ 000c0862 a17a
.org 0xc0864
	movs r0, #1	@ 000c0864 0120
.org 0xc0866
	orrs r0, r1	@ 000c0866 0843
.org 0xc0868
	strb r0, [r4, #10]	@ 000c0868 a072
.org 0xc086a
	ldr r1, [pc, #44]	@ 000c086a 0b49
.org 0xc086c
	adds r0, r4, #0	@ 000c086c 201c
.org 0xc086e
	bl 0x1cf00	@ 000c086e 5cf747fb
.org 0xc0872
	ldrb r0, [r4, #15]	@ 000c0872 e07b
.org 0xc0874
	adds r0, #1	@ 000c0874 0130
.org 0xc0876
	strb r0, [r4, #15]	@ 000c0876 e073
.org 0xc0878
	adds r0, r4, #0	@ 000c0878 201c
.org 0xc087a
	bl 0x1cff0	@ 000c087a 5cf7b9fb
.org 0xc087e
	adds r0, r4, #0	@ 000c087e 201c
.org 0xc0880
	adds r0, #115	@ 000c0880 7330
.org 0xc0882
	ldrb r0, [r0, #0]	@ 000c0882 0078
.org 0xc0884
	cmp r0, #3	@ 000c0884 0328
.org 0xc0886
	bne.n 0xc0890	@ 000c0886 03d1
.org 0xc0888
	movs r1, #0	@ 000c0888 0021
.org 0xc088a
	movs r0, #1	@ 000c088a 0120
.org 0xc088c
	strb r0, [r4, #14]	@ 000c088c a073
.org 0xc088e
	strb r1, [r4, #15]	@ 000c088e e173
.org 0xc0890
	pop {r4}	@ 000c0890 10bc
.org 0xc0892
	pop {r0}	@ 000c0892 01bc
.org 0xc0894
	bx r0	@ 000c0894 0047
