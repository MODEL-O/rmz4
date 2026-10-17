@ FUN_080fb064  entry 0x080fb064  size 94
.thumb
.org 0xfb064
FUN_080fb064:
	push {r4, r5, lr}	@ 000fb064 30b5
.org 0xfb066
	sub sp, #8	@ 000fb066 82b0
.org 0xfb068
	adds r4, r0, #0	@ 000fb068 041c
.org 0xfb06a
	ldr r1, [pc, #88]	@ 000fb06a 1649
.org 0xfb06c
	mov r0, sp	@ 000fb06c 6846
.org 0xfb06e
	movs r2, #4	@ 000fb06e 0422
.org 0xfb070
	bl 0x129258	@ 000fb070 2ef0f2f8
.org 0xfb074
	add r5, sp, #4	@ 000fb074 01ad
.org 0xfb076
	ldr r1, [pc, #80]	@ 000fb076 1449
.org 0xfb078
	adds r0, r5, #0	@ 000fb078 281c
.org 0xfb07a
	movs r2, #4	@ 000fb07a 0422
.org 0xfb07c
	bl 0x129258	@ 000fb07c 2ef0ecf8
.org 0xfb080
	ldrb r0, [r4, #15]	@ 000fb080 e07b
.org 0xfb082
	cmp r0, #0	@ 000fb082 0028
.org 0xfb084
	bne.n 0xfb0a4	@ 000fb084 0ed1
.org 0xfb086
	adds r0, r5, #0	@ 000fb086 281c
.org 0xfb088
	movs r1, #4	@ 000fb088 0421
.org 0xfb08a
	bl 0x73e30	@ 000fb08a 78f7d1fe
.org 0xfb08e
	add r0, sp	@ 000fb08e 6844
.org 0xfb090
	ldrb r0, [r0, #0]	@ 000fb090 0078
.org 0xfb092
	adds r1, r4, #0	@ 000fb092 211c
.org 0xfb094
	adds r1, #181	@ 000fb094 b531
.org 0xfb096
	strb r0, [r1, #0]	@ 000fb096 0870
.org 0xfb098
	adds r1, #3	@ 000fb098 0331
.org 0xfb09a
	movs r0, #192	@ 000fb09a c020
.org 0xfb09c
	str r0, [r1, #0]	@ 000fb09c 0860
.org 0xfb09e
	ldrb r0, [r4, #15]	@ 000fb09e e07b
.org 0xfb0a0
	adds r0, #1	@ 000fb0a0 0130
.org 0xfb0a2
	strb r0, [r4, #15]	@ 000fb0a2 e073
.org 0xfb0a4
	adds r1, r4, #0	@ 000fb0a4 211c
.org 0xfb0a6
	adds r1, #184	@ 000fb0a6 b831
.org 0xfb0a8
	ldr r0, [r1, #0]	@ 000fb0a8 0868
.org 0xfb0aa
	subs r2, r0, #1	@ 000fb0aa 421e
.org 0xfb0ac
	str r2, [r1, #0]	@ 000fb0ac 0a60
.org 0xfb0ae
	cmp r2, #0	@ 000fb0ae 002a
.org 0xfb0b0
	bne.n 0xfb0ba	@ 000fb0b0 03d1
.org 0xfb0b2
	movs r0, #2	@ 000fb0b2 0220
.org 0xfb0b4
	strb r0, [r4, #13]	@ 000fb0b4 6073
.org 0xfb0b6
	strb r2, [r4, #14]	@ 000fb0b6 a273
.org 0xfb0b8
	strb r2, [r4, #15]	@ 000fb0b8 e273
.org 0xfb0ba
	add sp, #8	@ 000fb0ba 02b0
.org 0xfb0bc
	pop {r4, r5}	@ 000fb0bc 30bc
.org 0xfb0be
	pop {r0}	@ 000fb0be 01bc
.org 0xfb0c0
	bx r0	@ 000fb0c0 0047
