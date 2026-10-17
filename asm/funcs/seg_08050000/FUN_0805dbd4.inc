@ FUN_0805dbd4  entry 0x0805dbd4  size 236
.thumb
.org 0x5dbd4
FUN_0805dbd4:
	push {r4, r5, lr}	@ 0005dbd4 30b5
.org 0x5dbd6
	sub sp, #8	@ 0005dbd6 82b0
.org 0x5dbd8
	adds r5, r0, #0	@ 0005dbd8 051c
.org 0x5dbda
	ldr r1, [pc, #228]	@ 0005dbda 3949
.org 0x5dbdc
	mov r0, sp	@ 0005dbdc 6846
.org 0x5dbde
	movs r2, #6	@ 0005dbde 0622
.org 0x5dbe0
	bl 0x129258	@ 0005dbe0 cbf03afb
.org 0x5dbe4
	ldrb r1, [r5, #16]	@ 0005dbe4 297c
.org 0x5dbe6
	ldrb r0, [r5, #15]	@ 0005dbe6 e87b
.org 0x5dbe8
	cmp r0, #0	@ 0005dbe8 0028
.org 0x5dbea
	bne.n 0x5dc16	@ 0005dbea 14d1
.org 0x5dbec
	lsls r0, r1, #1	@ 0005dbec 4800
.org 0x5dbee
	add r0, sp	@ 0005dbee 6844
.org 0x5dbf0
	ldrb r1, [r0, #0]	@ 0005dbf0 0178
.org 0x5dbf2
	adds r0, r5, #0	@ 0005dbf2 281c
.org 0x5dbf4
	bl 0x5ee6c	@ 0005dbf4 01f03af9
.org 0x5dbf8
	adds r0, r5, #0	@ 0005dbf8 281c
.org 0x5dbfa
	adds r0, #180	@ 0005dbfa b430
.org 0x5dbfc
	ldr r0, [r0, #0]	@ 0005dbfc 0068
.org 0x5dbfe
	ldr r1, [pc, #196]	@ 0005dbfe 3149
.org 0x5dc00
	adds r0, r0, r1	@ 0005dc00 4018
.org 0x5dc02
	str r0, [r5, #92]	@ 0005dc02 e865
.org 0x5dc04
	movs r0, #32	@ 0005dc04 2020
.org 0x5dc06
	negs r0, r0	@ 0005dc06 4042
.org 0x5dc08
	str r0, [r5, #96]	@ 0005dc08 2866
.org 0x5dc0a
	str r0, [r5, #104]	@ 0005dc0a a866
.org 0x5dc0c
	movs r0, #1	@ 0005dc0c 0120
.org 0x5dc0e
	strb r0, [r5, #18]	@ 0005dc0e a874
.org 0x5dc10
	ldrb r0, [r5, #15]	@ 0005dc10 e87b
.org 0x5dc12
	adds r0, #1	@ 0005dc12 0130
.org 0x5dc14
	strb r0, [r5, #15]	@ 0005dc14 e873
.org 0x5dc16
	adds r0, r5, #0	@ 0005dc16 281c
.org 0x5dc18
	bl 0x1cff0	@ 0005dc18 bff7eaf9
.org 0x5dc1c
	adds r0, r5, #0	@ 0005dc1c 281c
.org 0x5dc1e
	adds r0, #116	@ 0005dc1e 7430
.org 0x5dc20
	ldr r4, [pc, #164]	@ 0005dc20 294c
.org 0x5dc22
	ldr r3, [pc, #168]	@ 0005dc22 2a4b
.org 0x5dc24
	adds r1, r5, #0	@ 0005dc24 291c
.org 0x5dc26
	adds r1, #184	@ 0005dc26 b831
.org 0x5dc28
	ldrb r2, [r1, #0]	@ 0005dc28 0a78
.org 0x5dc2a
	lsls r1, r2, #1	@ 0005dc2a 5100
.org 0x5dc2c
	adds r1, r1, r3	@ 0005dc2c c918
.org 0x5dc2e
	ldrh r1, [r1, #0]	@ 0005dc2e 0988
.org 0x5dc30
	lsls r1, r1, #2	@ 0005dc30 8900
.org 0x5dc32
	adds r1, r1, r4	@ 0005dc32 0919
.org 0x5dc34
	adds r3, r5, #0	@ 0005dc34 2b1c
.org 0x5dc36
	adds r3, #113	@ 0005dc36 7133
.org 0x5dc38
	movs r4, #0	@ 0005dc38 0024
.org 0x5dc3a
	ldrsb r4, [r3, r4]	@ 0005dc3a 1c57
.org 0x5dc3c
	ldr r1, [r1, #0]	@ 0005dc3c 0968
.org 0x5dc3e
	lsls r3, r4, #2	@ 0005dc3e a300
.org 0x5dc40
	adds r3, r3, r1	@ 0005dc40 5b18
.org 0x5dc42
	ldr r1, [pc, #140]	@ 0005dc42 2349
.org 0x5dc44
	lsls r2, r2, #2	@ 0005dc44 9200
.org 0x5dc46
	adds r2, r2, r1	@ 0005dc46 5218
.org 0x5dc48
	ldr r1, [r2, #0]	@ 0005dc48 1168
.org 0x5dc4a
	adds r1, r1, r4	@ 0005dc4a 0919
.org 0x5dc4c
	ldrb r1, [r1, #0]	@ 0005dc4c 0978
.org 0x5dc4e
	lsls r2, r1, #1	@ 0005dc4e 4a00
.org 0x5dc50
	adds r2, r2, r1	@ 0005dc50 5218
.org 0x5dc52
	lsls r2, r2, #3	@ 0005dc52 d200
.org 0x5dc54
	ldr r1, [r3, #0]	@ 0005dc54 1968
.org 0x5dc56
	adds r1, r1, r2	@ 0005dc56 8918
.org 0x5dc58
	bl 0x5784	@ 0005dc58 a7f794fd
.org 0x5dc5c
	ldrb r0, [r5, #18]	@ 0005dc5c a87c
.org 0x5dc5e
	cmp r0, #0	@ 0005dc5e 0028
.org 0x5dc60
	beq.n 0x5dc92	@ 0005dc60 17d0
.org 0x5dc62
	ldr r2, [r5, #96]	@ 0005dc62 2a6e
.org 0x5dc64
	movs r0, #32	@ 0005dc64 2020
.org 0x5dc66
	negs r0, r0	@ 0005dc66 4042
.org 0x5dc68
	subs r0, r0, r2	@ 0005dc68 801a
.org 0x5dc6a
	adds r1, r0, #0	@ 0005dc6a 011c
.org 0x5dc6c
	cmp r0, #0	@ 0005dc6c 0028
.org 0x5dc6e
	bge.n 0x5dc72	@ 0005dc6e 00da
.org 0x5dc70
	adds r1, #31	@ 0005dc70 1f31
.org 0x5dc72
	asrs r1, r1, #5	@ 0005dc72 4911
.org 0x5dc74
	adds r3, r1, #1	@ 0005dc74 4b1c
.org 0x5dc76
	lsls r2, r2, #1	@ 0005dc76 5200
.org 0x5dc78
	lsls r0, r1, #5	@ 0005dc78 4801
.org 0x5dc7a
	adds r0, r2, r0	@ 0005dc7a 1018
.org 0x5dc7c
	muls r0, r3	@ 0005dc7c 5843
.org 0x5dc7e
	asrs r0, r0, #1	@ 0005dc7e 4010
.org 0x5dc80
	ldr r1, [r5, #88]	@ 0005dc80 a96d
.org 0x5dc82
	adds r1, r1, r0	@ 0005dc82 0918
.org 0x5dc84
	ldr r0, [r5, #92]	@ 0005dc84 e86d
.org 0x5dc86
	cmp r1, r0	@ 0005dc86 8142
.org 0x5dc88
	bgt.n 0x5dc92	@ 0005dc88 03dc
.org 0x5dc8a
	movs r0, #32	@ 0005dc8a 2020
.org 0x5dc8c
	str r0, [r5, #104]	@ 0005dc8c a866
.org 0x5dc8e
	movs r0, #0	@ 0005dc8e 0020
.org 0x5dc90
	strb r0, [r5, #18]	@ 0005dc90 a874
.org 0x5dc92
	ldr r0, [r5, #88]	@ 0005dc92 a86d
.org 0x5dc94
	ldr r1, [r5, #96]	@ 0005dc94 296e
.org 0x5dc96
	adds r0, r0, r1	@ 0005dc96 4018
.org 0x5dc98
	str r0, [r5, #88]	@ 0005dc98 a865
.org 0x5dc9a
	ldr r0, [r5, #104]	@ 0005dc9a a86e
.org 0x5dc9c
	adds r1, r1, r0	@ 0005dc9c 0918
.org 0x5dc9e
	str r1, [r5, #96]	@ 0005dc9e 2966
.org 0x5dca0
	ldr r0, [pc, #48]	@ 0005dca0 0c48
.org 0x5dca2
	cmp r1, r0	@ 0005dca2 8142
.org 0x5dca4
	bge.n 0x5dca8	@ 0005dca4 00da
.org 0x5dca6
	str r0, [r5, #96]	@ 0005dca6 2866
.org 0x5dca8
	ldr r1, [r5, #88]	@ 0005dca8 a96d
.org 0x5dcaa
	ldr r0, [r5, #92]	@ 0005dcaa e86d
.org 0x5dcac
	cmp r1, r0	@ 0005dcac 8142
.org 0x5dcae
	bgt.n 0x5dcb8	@ 0005dcae 03dc
.org 0x5dcb0
	movs r1, #0	@ 0005dcb0 0021
.org 0x5dcb2
	movs r0, #2	@ 0005dcb2 0220
.org 0x5dcb4
	strb r0, [r5, #14]	@ 0005dcb4 a873
.org 0x5dcb6
	strb r1, [r5, #15]	@ 0005dcb6 e973
.org 0x5dcb8
	add sp, #8	@ 0005dcb8 02b0
.org 0x5dcba
	pop {r4, r5}	@ 0005dcba 30bc
.org 0x5dcbc
	pop {r0}	@ 0005dcbc 01bc
.org 0x5dcbe
	bx r0	@ 0005dcbe 0047
