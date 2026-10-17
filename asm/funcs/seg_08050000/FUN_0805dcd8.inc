@ FUN_0805dcd8  entry 0x0805dcd8  size 198
.thumb
.org 0x5dcd8
FUN_0805dcd8:
	push {r4, r5, r6, r7, lr}	@ 0005dcd8 f0b5
.org 0x5dcda
	sub sp, #12	@ 0005dcda 83b0
.org 0x5dcdc
	adds r5, r0, #0	@ 0005dcdc 051c
.org 0x5dcde
	ldr r1, [pc, #192]	@ 0005dcde 3049
.org 0x5dce0
	mov r0, sp	@ 0005dce0 6846
.org 0x5dce2
	movs r2, #6	@ 0005dce2 0622
.org 0x5dce4
	bl 0x129258	@ 0005dce4 cbf0b8fa
.org 0x5dce8
	add r6, sp, #8	@ 0005dce8 02ae
.org 0x5dcea
	adds r0, r6, #0	@ 0005dcea 301c
.org 0x5dcec
	movs r1, #0	@ 0005dcec 0021
.org 0x5dcee
	movs r2, #3	@ 0005dcee 0322
.org 0x5dcf0
	bl 0x1292b8	@ 0005dcf0 cbf0e2fa
.org 0x5dcf4
	ldrb r1, [r5, #16]	@ 0005dcf4 297c
.org 0x5dcf6
	adds r7, r1, #0	@ 0005dcf6 0f1c
.org 0x5dcf8
	ldrb r0, [r5, #15]	@ 0005dcf8 e87b
.org 0x5dcfa
	cmp r0, #0	@ 0005dcfa 0028
.org 0x5dcfc
	bne.n 0x5dd22	@ 0005dcfc 11d1
.org 0x5dcfe
	lsls r0, r1, #1	@ 0005dcfe 4800
.org 0x5dd00
	add r0, sp	@ 0005dd00 6844
.org 0x5dd02
	ldrb r1, [r0, #0]	@ 0005dd02 0178
.org 0x5dd04
	adds r0, r5, #0	@ 0005dd04 281c
.org 0x5dd06
	bl 0x5ee6c	@ 0005dd06 01f0b1f8
.org 0x5dd0a
	adds r0, r5, #0	@ 0005dd0a 281c
.org 0x5dd0c
	adds r0, #180	@ 0005dd0c b430
.org 0x5dd0e
	ldr r0, [r0, #0]	@ 0005dd0e 0068
.org 0x5dd10
	ldr r1, [pc, #144]	@ 0005dd10 2449
.org 0x5dd12
	adds r0, r0, r1	@ 0005dd12 4018
.org 0x5dd14
	str r0, [r5, #92]	@ 0005dd14 e865
.org 0x5dd16
	movs r0, #32	@ 0005dd16 2020
.org 0x5dd18
	str r0, [r5, #96]	@ 0005dd18 2866
.org 0x5dd1a
	str r0, [r5, #104]	@ 0005dd1a a866
.org 0x5dd1c
	ldrb r0, [r5, #15]	@ 0005dd1c e87b
.org 0x5dd1e
	adds r0, #1	@ 0005dd1e 0130
.org 0x5dd20
	strb r0, [r5, #15]	@ 0005dd20 e873
.org 0x5dd22
	adds r0, r5, #0	@ 0005dd22 281c
.org 0x5dd24
	bl 0x1cff0	@ 0005dd24 bff764f9
.org 0x5dd28
	adds r0, r5, #0	@ 0005dd28 281c
.org 0x5dd2a
	adds r0, #116	@ 0005dd2a 7430
.org 0x5dd2c
	ldr r4, [pc, #120]	@ 0005dd2c 1e4c
.org 0x5dd2e
	ldr r3, [pc, #124]	@ 0005dd2e 1f4b
.org 0x5dd30
	adds r1, r5, #0	@ 0005dd30 291c
.org 0x5dd32
	adds r1, #184	@ 0005dd32 b831
.org 0x5dd34
	ldrb r2, [r1, #0]	@ 0005dd34 0a78
.org 0x5dd36
	lsls r1, r2, #1	@ 0005dd36 5100
.org 0x5dd38
	adds r1, r1, r3	@ 0005dd38 c918
.org 0x5dd3a
	ldrh r1, [r1, #0]	@ 0005dd3a 0988
.org 0x5dd3c
	lsls r1, r1, #2	@ 0005dd3c 8900
.org 0x5dd3e
	adds r1, r1, r4	@ 0005dd3e 0919
.org 0x5dd40
	adds r3, r5, #0	@ 0005dd40 2b1c
.org 0x5dd42
	adds r3, #113	@ 0005dd42 7133
.org 0x5dd44
	movs r4, #0	@ 0005dd44 0024
.org 0x5dd46
	ldrsb r4, [r3, r4]	@ 0005dd46 1c57
.org 0x5dd48
	ldr r1, [r1, #0]	@ 0005dd48 0968
.org 0x5dd4a
	lsls r3, r4, #2	@ 0005dd4a a300
.org 0x5dd4c
	adds r3, r3, r1	@ 0005dd4c 5b18
.org 0x5dd4e
	ldr r1, [pc, #96]	@ 0005dd4e 1849
.org 0x5dd50
	lsls r2, r2, #2	@ 0005dd50 9200
.org 0x5dd52
	adds r2, r2, r1	@ 0005dd52 5218
.org 0x5dd54
	ldr r1, [r2, #0]	@ 0005dd54 1168
.org 0x5dd56
	adds r1, r1, r4	@ 0005dd56 0919
.org 0x5dd58
	ldrb r1, [r1, #0]	@ 0005dd58 0978
.org 0x5dd5a
	lsls r2, r1, #1	@ 0005dd5a 4a00
.org 0x5dd5c
	adds r2, r2, r1	@ 0005dd5c 5218
.org 0x5dd5e
	lsls r2, r2, #3	@ 0005dd5e d200
.org 0x5dd60
	ldr r1, [r3, #0]	@ 0005dd60 1968
.org 0x5dd62
	adds r1, r1, r2	@ 0005dd62 8918
.org 0x5dd64
	bl 0x5784	@ 0005dd64 a7f70efd
.org 0x5dd68
	ldr r0, [r5, #88]	@ 0005dd68 a86d
.org 0x5dd6a
	ldr r1, [r5, #96]	@ 0005dd6a 296e
.org 0x5dd6c
	adds r0, r0, r1	@ 0005dd6c 4018
.org 0x5dd6e
	str r0, [r5, #88]	@ 0005dd6e a865
.org 0x5dd70
	ldr r0, [r5, #104]	@ 0005dd70 a86e
.org 0x5dd72
	adds r1, r1, r0	@ 0005dd72 0918
.org 0x5dd74
	str r1, [r5, #96]	@ 0005dd74 2966
.org 0x5dd76
	movs r0, #160	@ 0005dd76 a020
.org 0x5dd78
	lsls r0, r0, #2	@ 0005dd78 8000
.org 0x5dd7a
	cmp r1, r0	@ 0005dd7a 8142
.org 0x5dd7c
	ble.n 0x5dd80	@ 0005dd7c 00dd
.org 0x5dd7e
	str r0, [r5, #96]	@ 0005dd7e 2866
.org 0x5dd80
	ldr r0, [r5, #88]	@ 0005dd80 a86d
.org 0x5dd82
	ldr r1, [r5, #92]	@ 0005dd82 e96d
.org 0x5dd84
	cmp r0, r1	@ 0005dd84 8842
.org 0x5dd86
	blt.n 0x5dd96	@ 0005dd86 06db
.org 0x5dd88
	str r1, [r5, #88]	@ 0005dd88 a965
.org 0x5dd8a
	adds r0, r6, r7	@ 0005dd8a f019
.org 0x5dd8c
	ldrb r0, [r0, #0]	@ 0005dd8c 0078
.org 0x5dd8e
	movs r1, #0	@ 0005dd8e 0021
.org 0x5dd90
	strb r0, [r5, #13]	@ 0005dd90 6873
.org 0x5dd92
	strb r1, [r5, #14]	@ 0005dd92 a973
.org 0x5dd94
	strb r1, [r5, #15]	@ 0005dd94 e973
.org 0x5dd96
	add sp, #12	@ 0005dd96 03b0
.org 0x5dd98
	pop {r4, r5, r6, r7}	@ 0005dd98 f0bc
.org 0x5dd9a
	pop {r0}	@ 0005dd9a 01bc
.org 0x5dd9c
	bx r0	@ 0005dd9c 0047
