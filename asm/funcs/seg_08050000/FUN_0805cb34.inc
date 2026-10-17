@ FUN_0805cb34  entry 0x0805cb34  size 242
.thumb
.org 0x5cb34
FUN_0805cb34:
	push {r4, r5, r6, r7, lr}	@ 0005cb34 f0b5
.org 0x5cb36
	adds r5, r0, #0	@ 0005cb36 051c
.org 0x5cb38
	adds r0, #187	@ 0005cb38 bb30
.org 0x5cb3a
	ldrb r0, [r0, #0]	@ 0005cb3a 0078
.org 0x5cb3c
	adds r1, r5, #0	@ 0005cb3c 291c
.org 0x5cb3e
	adds r1, #188	@ 0005cb3e bc31
.org 0x5cb40
	ldrb r2, [r1, #0]	@ 0005cb40 0a78
.org 0x5cb42
	ldr r1, [pc, #44]	@ 0005cb42 0b49
.org 0x5cb44
	lsls r0, r0, #2	@ 0005cb44 8000
.org 0x5cb46
	adds r0, r0, r1	@ 0005cb46 4018
.org 0x5cb48
	ldr r0, [r0, #0]	@ 0005cb48 0068
.org 0x5cb4a
	adds r0, r0, r2	@ 0005cb4a 8018
.org 0x5cb4c
	ldrb r7, [r0, #0]	@ 0005cb4c 0778
.org 0x5cb4e
	ldrb r0, [r5, #15]	@ 0005cb4e e87b
.org 0x5cb50
	cmp r0, #0	@ 0005cb50 0028
.org 0x5cb52
	bne.n 0x5cbc8	@ 0005cb52 39d1
.org 0x5cb54
	movs r6, #0	@ 0005cb54 0026
.org 0x5cb56
	adds r4, r5, #0	@ 0005cb56 2c1c
.org 0x5cb58
	adds r4, #204	@ 0005cb58 cc34
.org 0x5cb5a
	ldr r0, [r4, #0]	@ 0005cb5a 2068
.org 0x5cb5c
	cmp r0, #0	@ 0005cb5c 0028
.org 0x5cb5e
	bne.n 0x5cb74	@ 0005cb5e 09d1
.org 0x5cb60
	adds r0, r5, #0	@ 0005cb60 281c
.org 0x5cb62
	bl 0xc3eb4	@ 0005cb62 67f0a7f9
.org 0x5cb66
	str r0, [r4, #0]	@ 0005cb66 2060
.org 0x5cb68
	cmp r0, #0	@ 0005cb68 0028
.org 0x5cb6a
	bne.n 0x5cb76	@ 0005cb6a 04d1
.org 0x5cb6c
	b.n 0x5cb7a	@ 0005cb6c 05e0
.org 0x5cb6e
	.byte 0x00	@ 0005cb6e data
.org 0x5cb6f
	.byte 0x00	@ 0005cb6f data
.org 0x5cb70
	.byte 0x94,0xa9,0x85,0x08	@ 0005cb70 data
.org 0x5cb74
	movs r6, #1	@ 0005cb74 0126
.org 0x5cb76
	cmp r6, #0	@ 0005cb76 002e
.org 0x5cb78
	beq.n 0x5cb94	@ 0005cb78 0cd0
.org 0x5cb7a
	movs r1, #0	@ 0005cb7a 0021
.org 0x5cb7c
	movs r0, #3	@ 0005cb7c 0320
.org 0x5cb7e
	strb r0, [r5, #14]	@ 0005cb7e a873
.org 0x5cb80
	strb r1, [r5, #15]	@ 0005cb80 e973
.org 0x5cb82
	ldr r0, [pc, #12]	@ 0005cb82 0348
.org 0x5cb84
	ldr r1, [r0, #12]	@ 0005cb84 c168
.org 0x5cb86
	adds r0, r5, #0	@ 0005cb86 281c
.org 0x5cb88
	bl 0x128f80	@ 0005cb88 ccf0faf9
.org 0x5cb8c
	b.n 0x5cc2c	@ 0005cb8c 4ee0
.org 0x5cb8e
	.byte 0x00	@ 0005cb8e data
.org 0x5cb8f
	.byte 0x00	@ 0005cb8f data
.org 0x5cb90
	.byte 0xc8,0x89,0x85,0x08	@ 0005cb90 data
.org 0x5cb94
	adds r2, r5, #0	@ 0005cb94 2a1c
.org 0x5cb96
	adds r2, #180	@ 0005cb96 b432
.org 0x5cb98
	ldr r1, [pc, #152]	@ 0005cb98 2649
.org 0x5cb9a
	lsls r0, r7, #1	@ 0005cb9a 7800
.org 0x5cb9c
	adds r0, r0, r1	@ 0005cb9c 4018
.org 0x5cb9e
	movs r1, #0	@ 0005cb9e 0021
.org 0x5cba0
	ldrsh r0, [r0, r1]	@ 0005cba0 405e
.org 0x5cba2
	ldr r1, [pc, #148]	@ 0005cba2 2549
.org 0x5cba4
	adds r0, r0, r1	@ 0005cba4 4018
.org 0x5cba6
	ldr r1, [r2, #0]	@ 0005cba6 1168
.org 0x5cba8
	adds r1, r1, r0	@ 0005cba8 0918
.org 0x5cbaa
	str r1, [r5, #92]	@ 0005cbaa e965
.org 0x5cbac
	ldr r0, [r5, #88]	@ 0005cbac a86d
.org 0x5cbae
	movs r2, #1	@ 0005cbae 0122
.org 0x5cbb0
	negs r2, r2	@ 0005cbb0 5242
.org 0x5cbb2
	cmp r0, r1	@ 0005cbb2 8842
.org 0x5cbb4
	bge.n 0x5cbb8	@ 0005cbb4 00da
.org 0x5cbb6
	movs r2, #1	@ 0005cbb6 0122
.org 0x5cbb8
	str r2, [r5, #100]	@ 0005cbb8 6a66
.org 0x5cbba
	lsls r0, r2, #1	@ 0005cbba 5000
.org 0x5cbbc
	adds r0, r0, r2	@ 0005cbbc 8018
.org 0x5cbbe
	lsls r0, r0, #8	@ 0005cbbe 0002
.org 0x5cbc0
	str r0, [r5, #96]	@ 0005cbc0 2866
.org 0x5cbc2
	ldrb r0, [r5, #15]	@ 0005cbc2 e87b
.org 0x5cbc4
	adds r0, #1	@ 0005cbc4 0130
.org 0x5cbc6
	strb r0, [r5, #15]	@ 0005cbc6 e873
.org 0x5cbc8
	adds r0, r5, #0	@ 0005cbc8 281c
.org 0x5cbca
	bl 0x1cff0	@ 0005cbca c0f711fa
.org 0x5cbce
	adds r0, r5, #0	@ 0005cbce 281c
.org 0x5cbd0
	adds r0, #116	@ 0005cbd0 7430
.org 0x5cbd2
	ldr r4, [pc, #104]	@ 0005cbd2 1a4c
.org 0x5cbd4
	ldr r3, [pc, #104]	@ 0005cbd4 1a4b
.org 0x5cbd6
	adds r1, r5, #0	@ 0005cbd6 291c
.org 0x5cbd8
	adds r1, #184	@ 0005cbd8 b831
.org 0x5cbda
	ldrb r2, [r1, #0]	@ 0005cbda 0a78
.org 0x5cbdc
	lsls r1, r2, #1	@ 0005cbdc 5100
.org 0x5cbde
	adds r1, r1, r3	@ 0005cbde c918
.org 0x5cbe0
	ldrh r1, [r1, #0]	@ 0005cbe0 0988
.org 0x5cbe2
	lsls r1, r1, #2	@ 0005cbe2 8900
.org 0x5cbe4
	adds r1, r1, r4	@ 0005cbe4 0919
.org 0x5cbe6
	adds r3, r5, #0	@ 0005cbe6 2b1c
.org 0x5cbe8
	adds r3, #113	@ 0005cbe8 7133
.org 0x5cbea
	movs r4, #0	@ 0005cbea 0024
.org 0x5cbec
	ldrsb r4, [r3, r4]	@ 0005cbec 1c57
.org 0x5cbee
	ldr r1, [r1, #0]	@ 0005cbee 0968
.org 0x5cbf0
	lsls r3, r4, #2	@ 0005cbf0 a300
.org 0x5cbf2
	adds r3, r3, r1	@ 0005cbf2 5b18
.org 0x5cbf4
	ldr r1, [pc, #76]	@ 0005cbf4 1349
.org 0x5cbf6
	lsls r2, r2, #2	@ 0005cbf6 9200
.org 0x5cbf8
	adds r2, r2, r1	@ 0005cbf8 5218
.org 0x5cbfa
	ldr r1, [r2, #0]	@ 0005cbfa 1168
.org 0x5cbfc
	adds r1, r1, r4	@ 0005cbfc 0919
.org 0x5cbfe
	ldrb r1, [r1, #0]	@ 0005cbfe 0978
.org 0x5cc00
	lsls r2, r1, #1	@ 0005cc00 4a00
.org 0x5cc02
	adds r2, r2, r1	@ 0005cc02 5218
.org 0x5cc04
	lsls r2, r2, #3	@ 0005cc04 d200
.org 0x5cc06
	ldr r1, [r3, #0]	@ 0005cc06 1968
.org 0x5cc08
	adds r1, r1, r2	@ 0005cc08 8918
.org 0x5cc0a
	bl 0x5784	@ 0005cc0a a8f7bbfd
.org 0x5cc0e
	ldr r0, [r5, #88]	@ 0005cc0e a86d
.org 0x5cc10
	ldr r1, [r5, #96]	@ 0005cc10 296e
.org 0x5cc12
	adds r0, r0, r1	@ 0005cc12 4018
.org 0x5cc14
	str r0, [r5, #88]	@ 0005cc14 a865
.org 0x5cc16
	ldr r2, [r5, #92]	@ 0005cc16 ea6d
.org 0x5cc18
	subs r0, r0, r2	@ 0005cc18 801a
.org 0x5cc1a
	ldr r1, [r5, #100]	@ 0005cc1a 696e
.org 0x5cc1c
	muls r0, r1	@ 0005cc1c 4843
.org 0x5cc1e
	cmp r0, #0	@ 0005cc1e 0028
.org 0x5cc20
	blt.n 0x5cc2c	@ 0005cc20 04db
.org 0x5cc22
	str r2, [r5, #88]	@ 0005cc22 aa65
.org 0x5cc24
	movs r1, #0	@ 0005cc24 0021
