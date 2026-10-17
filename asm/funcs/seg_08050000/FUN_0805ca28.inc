@ FUN_0805ca28  entry 0x0805ca28  size 224
.thumb
.org 0x5ca28
FUN_0805ca28:
	push {r4, r5, r6, lr}	@ 0005ca28 70b5
.org 0x5ca2a
	sub sp, #8	@ 0005ca2a 82b0
.org 0x5ca2c
	adds r5, r0, #0	@ 0005ca2c 051c
.org 0x5ca2e
	ldr r1, [pc, #216]	@ 0005ca2e 3649
.org 0x5ca30
	mov r0, sp	@ 0005ca30 6846
.org 0x5ca32
	movs r2, #6	@ 0005ca32 0622
.org 0x5ca34
	bl 0x129258	@ 0005ca34 ccf010fc
.org 0x5ca38
	ldrb r6, [r5, #16]	@ 0005ca38 2e7c
.org 0x5ca3a
	ldrb r4, [r5, #15]	@ 0005ca3a ec7b
.org 0x5ca3c
	cmp r4, #0	@ 0005ca3c 002c
.org 0x5ca3e
	bne.n 0x5caa8	@ 0005ca3e 33d1
.org 0x5ca40
	ldr r0, [pc, #200]	@ 0005ca40 3248
.org 0x5ca42
	ldr r1, [pc, #204]	@ 0005ca42 3349
.org 0x5ca44
	adds r1, #164	@ 0005ca44 a431
.org 0x5ca46
	ldrh r1, [r1, #0]	@ 0005ca46 0988
.org 0x5ca48
	ldrh r2, [r0, #6]	@ 0005ca48 c288
.org 0x5ca4a
	lsrs r2, r2, #6	@ 0005ca4a 9209
.org 0x5ca4c
	subs r1, r1, r2	@ 0005ca4c 891a
.org 0x5ca4e
	lsls r1, r1, #5	@ 0005ca4e 4901
.org 0x5ca50
	movs r2, #128	@ 0005ca50 8022
.org 0x5ca52
	lsls r2, r2, #9	@ 0005ca52 5202
.org 0x5ca54
	adds r1, r1, r2	@ 0005ca54 8918
.org 0x5ca56
	bl 0x1d30	@ 0005ca56 a5f76bf9
.org 0x5ca5a
	ldr r0, [pc, #184]	@ 0005ca5a 2e48
.org 0x5ca5c
	ldr r1, [pc, #184]	@ 0005ca5c 2e49
.org 0x5ca5e
	adds r1, #164	@ 0005ca5e a431
.org 0x5ca60
	ldrh r1, [r1, #0]	@ 0005ca60 0988
.org 0x5ca62
	ldrb r2, [r0, #7]	@ 0005ca62 c279
.org 0x5ca64
	subs r1, r1, r2	@ 0005ca64 891a
.org 0x5ca66
	lsls r1, r1, #5	@ 0005ca66 4901
.org 0x5ca68
	movs r2, #128	@ 0005ca68 8022
.org 0x5ca6a
	lsls r2, r2, #2	@ 0005ca6a 9200
.org 0x5ca6c
	adds r1, r1, r2	@ 0005ca6c 8918
.org 0x5ca6e
	bl 0x2208	@ 0005ca6e a5f7cbfb
.org 0x5ca72
	ldr r2, [pc, #168]	@ 0005ca72 2a4a
.org 0x5ca74
	ldr r1, [r2, #0]	@ 0005ca74 1168
.org 0x5ca76
	ldr r0, [pc, #168]	@ 0005ca76 2a48
.org 0x5ca78
	muls r0, r1	@ 0005ca78 4843
.org 0x5ca7a
	ldr r1, [pc, #168]	@ 0005ca7a 2a49
.org 0x5ca7c
	adds r0, r0, r1	@ 0005ca7c 4018
.org 0x5ca7e
	lsls r0, r0, #1	@ 0005ca7e 4000
.org 0x5ca80
	lsrs r1, r0, #1	@ 0005ca80 4108
.org 0x5ca82
	str r1, [r2, #0]	@ 0005ca82 1160
.org 0x5ca84
	lsrs r0, r0, #17	@ 0005ca84 400c
.org 0x5ca86
	movs r1, #3	@ 0005ca86 0321
.org 0x5ca88
	ands r0, r1	@ 0005ca88 0840
.org 0x5ca8a
	adds r1, r5, #0	@ 0005ca8a 291c
.org 0x5ca8c
	adds r1, #187	@ 0005ca8c bb31
.org 0x5ca8e
	strb r0, [r1, #0]	@ 0005ca8e 0870
.org 0x5ca90
	adds r0, r5, #0	@ 0005ca90 281c
.org 0x5ca92
	adds r0, #188	@ 0005ca92 bc30
.org 0x5ca94
	strb r4, [r0, #0]	@ 0005ca94 0470
.org 0x5ca96
	lsls r0, r6, #1	@ 0005ca96 7000
.org 0x5ca98
	add r0, sp	@ 0005ca98 6844
.org 0x5ca9a
	ldrb r1, [r0, #0]	@ 0005ca9a 0178
.org 0x5ca9c
	adds r0, r5, #0	@ 0005ca9c 281c
.org 0x5ca9e
	bl 0x5ee6c	@ 0005ca9e 02f0e5f9
.org 0x5caa2
	ldrb r0, [r5, #15]	@ 0005caa2 e87b
.org 0x5caa4
	adds r0, #1	@ 0005caa4 0130
.org 0x5caa6
	strb r0, [r5, #15]	@ 0005caa6 e873
.org 0x5caa8
	adds r0, r5, #0	@ 0005caa8 281c
.org 0x5caaa
	bl 0x1cff0	@ 0005caaa c0f7a1fa
.org 0x5caae
	adds r0, r5, #0	@ 0005caae 281c
.org 0x5cab0
	adds r0, #116	@ 0005cab0 7430
.org 0x5cab2
	ldr r4, [pc, #116]	@ 0005cab2 1d4c
.org 0x5cab4
	ldr r3, [pc, #116]	@ 0005cab4 1d4b
.org 0x5cab6
	adds r1, r5, #0	@ 0005cab6 291c
.org 0x5cab8
	adds r1, #184	@ 0005cab8 b831
.org 0x5caba
	ldrb r2, [r1, #0]	@ 0005caba 0a78
.org 0x5cabc
	lsls r1, r2, #1	@ 0005cabc 5100
.org 0x5cabe
	adds r1, r1, r3	@ 0005cabe c918
.org 0x5cac0
	ldrh r1, [r1, #0]	@ 0005cac0 0988
.org 0x5cac2
	lsls r1, r1, #2	@ 0005cac2 8900
.org 0x5cac4
	adds r1, r1, r4	@ 0005cac4 0919
.org 0x5cac6
	adds r3, r5, #0	@ 0005cac6 2b1c
.org 0x5cac8
	adds r3, #113	@ 0005cac8 7133
.org 0x5caca
	movs r4, #0	@ 0005caca 0024
.org 0x5cacc
	ldrsb r4, [r3, r4]	@ 0005cacc 1c57
.org 0x5cace
	ldr r1, [r1, #0]	@ 0005cace 0968
.org 0x5cad0
	lsls r3, r4, #2	@ 0005cad0 a300
.org 0x5cad2
	adds r3, r3, r1	@ 0005cad2 5b18
.org 0x5cad4
	ldr r1, [pc, #88]	@ 0005cad4 1649
.org 0x5cad6
	lsls r2, r2, #2	@ 0005cad6 9200
.org 0x5cad8
	adds r2, r2, r1	@ 0005cad8 5218
.org 0x5cada
	ldr r1, [r2, #0]	@ 0005cada 1168
.org 0x5cadc
	adds r1, r1, r4	@ 0005cadc 0919
.org 0x5cade
	ldrb r1, [r1, #0]	@ 0005cade 0978
.org 0x5cae0
	lsls r2, r1, #1	@ 0005cae0 4a00
.org 0x5cae2
	adds r2, r2, r1	@ 0005cae2 5218
.org 0x5cae4
	lsls r2, r2, #3	@ 0005cae4 d200
.org 0x5cae6
	ldr r1, [r3, #0]	@ 0005cae6 1968
.org 0x5cae8
	adds r1, r1, r2	@ 0005cae8 8918
.org 0x5caea
	bl 0x5784	@ 0005caea a8f74bfe
.org 0x5caee
	adds r0, r5, #0	@ 0005caee 281c
.org 0x5caf0
	adds r0, #115	@ 0005caf0 7330
.org 0x5caf2
	ldrb r0, [r0, #0]	@ 0005caf2 0078
.org 0x5caf4
	cmp r0, #3	@ 0005caf4 0328
.org 0x5caf6
	bne.n 0x5cb00	@ 0005caf6 03d1
.org 0x5caf8
	movs r1, #0	@ 0005caf8 0021
.org 0x5cafa
	movs r0, #1	@ 0005cafa 0120
.org 0x5cafc
	strb r0, [r5, #14]	@ 0005cafc a873
.org 0x5cafe
	strb r1, [r5, #15]	@ 0005cafe e973
.org 0x5cb00
	add sp, #8	@ 0005cb00 02b0
.org 0x5cb02
	pop {r4, r5, r6}	@ 0005cb02 70bc
.org 0x5cb04
	pop {r0}	@ 0005cb04 01bc
.org 0x5cb06
	bx r0	@ 0005cb06 0047
