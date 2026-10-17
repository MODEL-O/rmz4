@ FUN_0806fe2c  entry 0x0806fe2c  size 182
.thumb
.org 0x6fe2c
FUN_0806fe2c:
	push {r4, r5, r6, lr}	@ 0006fe2c 70b5
.org 0x6fe2e
	adds r4, r0, #0	@ 0006fe2e 041c
.org 0x6fe30
	ldrb r6, [r4, #14]	@ 0006fe30 a67b
.org 0x6fe32
	cmp r6, #0	@ 0006fe32 002e
.org 0x6fe34
	bne.n 0x6fe84	@ 0006fe34 26d1
.org 0x6fe36
	adds r0, #180	@ 0006fe36 b430
.org 0x6fe38
	ldr r1, [r0, #8]	@ 0006fe38 8168
.org 0x6fe3a
	ldrb r1, [r1, #13]	@ 0006fe3a 497b
.org 0x6fe3c
	adds r5, r0, #0	@ 0006fe3c 051c
.org 0x6fe3e
	cmp r1, #0	@ 0006fe3e 0029
.org 0x6fe40
	bne.n 0x6fe7c	@ 0006fe40 1cd1
.org 0x6fe42
	ldr r0, [r5, #12]	@ 0006fe42 e868
.org 0x6fe44
	ldrb r0, [r0, #13]	@ 0006fe44 407b
.org 0x6fe46
	cmp r0, #0	@ 0006fe46 0028
.org 0x6fe48
	bne.n 0x6fe7c	@ 0006fe48 18d1
.org 0x6fe4a
	ldr r1, [pc, #40]	@ 0006fe4a 0a49
.org 0x6fe4c
	adds r0, r4, #0	@ 0006fe4c 201c
.org 0x6fe4e
	bl 0x1cf00	@ 0006fe4e adf757f8
.org 0x6fe52
	ldr r0, [r5, #8]	@ 0006fe52 a868
.org 0x6fe54
	adds r0, #191	@ 0006fe54 bf30
.org 0x6fe56
	movs r1, #1	@ 0006fe56 0121
.org 0x6fe58
	strb r1, [r0, #0]	@ 0006fe58 0170
.org 0x6fe5a
	ldr r0, [r5, #12]	@ 0006fe5a e868
.org 0x6fe5c
	adds r0, #191	@ 0006fe5c bf30
.org 0x6fe5e
	strb r1, [r0, #0]	@ 0006fe5e 0170
.org 0x6fe60
	movs r0, #4	@ 0006fe60 0420
.org 0x6fe62
	str r0, [r4, #104]	@ 0006fe62 a066
.org 0x6fe64
	subs r0, #132	@ 0006fe64 8438
.org 0x6fe66
	str r0, [r4, #96]	@ 0006fe66 2066
.org 0x6fe68
	strb r6, [r4, #19]	@ 0006fe68 e674
.org 0x6fe6a
	ldr r0, [pc, #12]	@ 0006fe6a 0348
.org 0x6fe6c
	bl 0x2b10	@ 0006fe6c 92f750fe
.org 0x6fe70
	strb r6, [r4, #15]	@ 0006fe70 e673
.org 0x6fe72
	b.n 0x6fe9e	@ 0006fe72 14e0
.org 0x6fe74
	.byte 0x02,0x8d,0x00,0x00	@ 0006fe74 data
.org 0x6fe78
	.byte 0x5f,0x01,0x00,0x00	@ 0006fe78 data
.org 0x6fe7c
	adds r0, r4, #0	@ 0006fe7c 201c
.org 0x6fe7e
	bl 0x1cff0	@ 0006fe7e adf7b7f8
.org 0x6fe82
	b.n 0x6fee4	@ 0006fe82 2fe0
.org 0x6fe84
	adds r5, r4, #0	@ 0006fe84 251c
.org 0x6fe86
	adds r5, #180	@ 0006fe86 b435
.org 0x6fe88
	cmp r6, #1	@ 0006fe88 012e
.org 0x6fe8a
	bne.n 0x6fea4	@ 0006fe8a 0bd1
.org 0x6fe8c
	adds r0, r4, #0	@ 0006fe8c 201c
.org 0x6fe8e
	adds r0, #115	@ 0006fe8e 7330
.org 0x6fe90
	ldrb r0, [r0, #0]	@ 0006fe90 0078
.org 0x6fe92
	cmp r0, #3	@ 0006fe92 0328
.org 0x6fe94
	bne.n 0x6fea4	@ 0006fe94 06d1
.org 0x6fe96
	ldr r1, [pc, #84]	@ 0006fe96 1549
.org 0x6fe98
	adds r0, r4, #0	@ 0006fe98 201c
.org 0x6fe9a
	bl 0x1cf00	@ 0006fe9a adf731f8
.org 0x6fe9e
	ldrb r0, [r4, #14]	@ 0006fe9e a07b
.org 0x6fea0
	adds r0, #1	@ 0006fea0 0130
.org 0x6fea2
	strb r0, [r4, #14]	@ 0006fea2 a073
.org 0x6fea4
	adds r0, r4, #0	@ 0006fea4 201c
.org 0x6fea6
	bl 0x1cff0	@ 0006fea6 adf7a3f8
.org 0x6feaa
	ldr r0, [r4, #88]	@ 0006feaa a06d
.org 0x6feac
	ldr r1, [r4, #96]	@ 0006feac 216e
.org 0x6feae
	adds r2, r0, r1	@ 0006feae 4218
.org 0x6feb0
	str r2, [r4, #88]	@ 0006feb0 a265
.org 0x6feb2
	ldr r0, [r4, #104]	@ 0006feb2 a06e
.org 0x6feb4
	adds r1, r1, r0	@ 0006feb4 0918
.org 0x6feb6
	str r1, [r4, #96]	@ 0006feb6 2166
.org 0x6feb8
	cmp r1, #0	@ 0006feb8 0029
.org 0x6feba
	ble.n 0x6feca	@ 0006feba 06dd
.org 0x6febc
	ldr r0, [r5, #4]	@ 0006febc 6868
.org 0x6febe
	cmp r2, r0	@ 0006febe 8242
.org 0x6fec0
	ble.n 0x6feca	@ 0006fec0 03dd
.org 0x6fec2
	str r0, [r4, #88]	@ 0006fec2 a065
.org 0x6fec4
	ldrb r0, [r4, #15]	@ 0006fec4 e07b
.org 0x6fec6
	adds r0, #1	@ 0006fec6 0130
.org 0x6fec8
	strb r0, [r4, #15]	@ 0006fec8 e073
.org 0x6feca
	ldr r0, [r5, #8]	@ 0006feca a868
.org 0x6fecc
	adds r0, #191	@ 0006fecc bf30
.org 0x6fece
	ldrb r0, [r0, #0]	@ 0006fece 0078
.org 0x6fed0
	cmp r0, #0	@ 0006fed0 0028
.org 0x6fed2
	bne.n 0x6fee4	@ 0006fed2 07d1
.org 0x6fed4
	ldr r0, [r5, #12]	@ 0006fed4 e868
.org 0x6fed6
	adds r0, #191	@ 0006fed6 bf30
.org 0x6fed8
	ldrb r1, [r0, #0]	@ 0006fed8 0178
.org 0x6feda
	cmp r1, #0	@ 0006feda 0029
.org 0x6fedc
	bne.n 0x6fee4	@ 0006fedc 02d1
.org 0x6fede
	movs r0, #3	@ 0006fede 0320
.org 0x6fee0
	strb r0, [r4, #13]	@ 0006fee0 6073
