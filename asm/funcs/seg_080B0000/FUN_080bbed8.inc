@ FUN_080bbed8  entry 0x080bbed8  size 182
.thumb
.org 0xbbed8
FUN_080bbed8:
	push {r4, r5, r6, lr}	@ 000bbed8 70b5
.org 0xbbeda
	sub sp, #8	@ 000bbeda 82b0
.org 0xbbedc
	adds r4, r0, #0	@ 000bbedc 041c
.org 0xbbede
	ldr r0, [pc, #176]	@ 000bbede 2c48
.org 0xbbee0
	ldr r1, [r0, #4]	@ 000bbee0 4168
.org 0xbbee2
	ldr r0, [r0, #0]	@ 000bbee2 0068
.org 0xbbee4
	str r0, [sp, #0]	@ 000bbee4 0090
.org 0xbbee6
	str r1, [sp, #4]	@ 000bbee6 0191
.org 0xbbee8
	ldrb r6, [r4, #16]	@ 000bbee8 267c
.org 0xbbeea
	ldrb r5, [r4, #18]	@ 000bbeea a57c
.org 0xbbeec
	ldrb r0, [r4, #15]	@ 000bbeec e07b
.org 0xbbeee
	cmp r0, #0	@ 000bbeee 0028
.org 0xbbef0
	bne.n 0xbbf3e	@ 000bbef0 25d1
.org 0xbbef2
	movs r0, #202	@ 000bbef2 ca20
.org 0xbbef4
	lsls r0, r0, #1	@ 000bbef4 4000
.org 0xbbef6
	bl 0x2b10	@ 000bbef6 46f70bfe
.org 0xbbefa
	adds r0, r4, #0	@ 000bbefa 201c
.org 0xbbefc
	adds r0, #116	@ 000bbefc 7430
.org 0xbbefe
	ldr r1, [pc, #148]	@ 000bbefe 2549
.org 0xbbf00
	bl 0x5784	@ 000bbf00 49f740fc
.org 0xbbf04
	lsls r0, r6, #2	@ 000bbf04 b000
.org 0xbbf06
	add r0, sp	@ 000bbf06 6844
.org 0xbbf08
	ldrh r1, [r0, #0]	@ 000bbf08 0188
.org 0xbbf0a
	adds r0, r4, #0	@ 000bbf0a 201c
.org 0xbbf0c
	bl 0x1cf00	@ 000bbf0c 60f7f8ff
.org 0xbbf10
	movs r2, #0	@ 000bbf10 0022
.org 0xbbf12
	ldr r0, [pc, #132]	@ 000bbf12 2148
.org 0xbbf14
	ldr r0, [r0, #0]	@ 000bbf14 0068
.org 0xbbf16
	ldr r1, [r4, #84]	@ 000bbf16 616d
.org 0xbbf18
	ldr r0, [r0, #84]	@ 000bbf18 406d
.org 0xbbf1a
	cmp r1, r0	@ 000bbf1a 8142
.org 0xbbf1c
	bge.n 0xbbf20	@ 000bbf1c 00da
.org 0xbbf1e
	movs r2, #1	@ 000bbf1e 0122
.org 0xbbf20
	adds r5, r2, #0	@ 000bbf20 151c
.org 0xbbf22
	lsls r1, r5, #1	@ 000bbf22 6900
.org 0xbbf24
	subs r1, #1	@ 000bbf24 0139
.org 0xbbf26
	lsls r0, r1, #3	@ 000bbf26 c800
.org 0xbbf28
	subs r0, r0, r1	@ 000bbf28 401a
.org 0xbbf2a
	lsls r0, r0, #7	@ 000bbf2a c001
.org 0xbbf2c
	str r0, [r4, #92]	@ 000bbf2c e065
.org 0xbbf2e
	strb r5, [r4, #18]	@ 000bbf2e a574
.org 0xbbf30
	movs r0, #1	@ 000bbf30 0120
.org 0xbbf32
	strb r0, [r4, #19]	@ 000bbf32 e074
.org 0xbbf34
	movs r0, #16	@ 000bbf34 1020
.org 0xbbf36
	str r0, [r4, #104]	@ 000bbf36 a066
.org 0xbbf38
	ldrb r0, [r4, #15]	@ 000bbf38 e07b
.org 0xbbf3a
	adds r0, #1	@ 000bbf3a 0130
.org 0xbbf3c
	strb r0, [r4, #15]	@ 000bbf3c e073
.org 0xbbf3e
	adds r0, r4, #0	@ 000bbf3e 201c
.org 0xbbf40
	bl 0x1cff0	@ 000bbf40 61f756f8
.org 0xbbf44
	ldr r0, [r4, #104]	@ 000bbf44 a06e
.org 0xbbf46
	cmp r0, #0	@ 000bbf46 0028
.org 0xbbf48
	beq.n 0xbbf4e	@ 000bbf48 01d0
.org 0xbbf4a
	subs r0, #1	@ 000bbf4a 0138
.org 0xbbf4c
	str r0, [r4, #104]	@ 000bbf4c a066
.org 0xbbf4e
	ldrb r0, [r4, #19]	@ 000bbf4e e07c
.org 0xbbf50
	cmp r0, #0	@ 000bbf50 0028
.org 0xbbf52
	beq.n 0xbbf78	@ 000bbf52 11d0
.org 0xbbf54
	ldr r1, [r4, #84]	@ 000bbf54 616d
.org 0xbbf56
	ldr r0, [r4, #92]	@ 000bbf56 e06d
.org 0xbbf58
	adds r1, r1, r0	@ 000bbf58 0918
.org 0xbbf5a
	str r1, [r4, #84]	@ 000bbf5a 6165
.org 0xbbf5c
	ldr r0, [pc, #56]	@ 000bbf5c 0e48
.org 0xbbf5e
	ldr r0, [r0, #0]	@ 000bbf5e 0068
.org 0xbbf60
	ldr r0, [r0, #84]	@ 000bbf60 406d
.org 0xbbf62
	subs r1, r1, r0	@ 000bbf62 091a
.org 0xbbf64
	lsls r0, r5, #1	@ 000bbf64 6800
.org 0xbbf66
	subs r0, #1	@ 000bbf66 0138
.org 0xbbf68
	muls r0, r1	@ 000bbf68 4843
.org 0xbbf6a
	cmp r0, #0	@ 000bbf6a 0028
.org 0xbbf6c
	blt.n 0xbbf72	@ 000bbf6c 01db
.org 0xbbf6e
	movs r0, #0	@ 000bbf6e 0020
.org 0xbbf70
	strb r0, [r4, #19]	@ 000bbf70 e074
.org 0xbbf72
	ldrb r0, [r4, #19]	@ 000bbf72 e07c
.org 0xbbf74
	cmp r0, #0	@ 000bbf74 0028
.org 0xbbf76
	bne.n 0xbbf86	@ 000bbf76 06d1
.org 0xbbf78
	ldr r1, [r4, #104]	@ 000bbf78 a16e
.org 0xbbf7a
	cmp r1, #0	@ 000bbf7a 0029
.org 0xbbf7c
	bne.n 0xbbf86	@ 000bbf7c 03d1
.org 0xbbf7e
	movs r0, #1	@ 000bbf7e 0120
.org 0xbbf80
	strb r0, [r4, #13]	@ 000bbf80 6073
.org 0xbbf82
	strb r1, [r4, #14]	@ 000bbf82 a173
.org 0xbbf84
	strb r1, [r4, #15]	@ 000bbf84 e173
.org 0xbbf86
	add sp, #8	@ 000bbf86 02b0
.org 0xbbf88
	pop {r4, r5, r6}	@ 000bbf88 70bc
.org 0xbbf8a
	pop {r0}	@ 000bbf8a 01bc
.org 0xbbf8c
	bx r0	@ 000bbf8c 0047
