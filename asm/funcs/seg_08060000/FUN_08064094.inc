@ FUN_08064094  entry 0x08064094  size 130
.thumb
.org 0x64094
FUN_08064094:
	push {r4, r5, r6, lr}	@ 00064094 70b5
.org 0x64096
	adds r6, r0, #0	@ 00064096 061c
.org 0x64098
	ldrb r0, [r6, #15]	@ 00064098 f07b
.org 0x6409a
	cmp r0, #0	@ 0006409a 0028
.org 0x6409c
	bne.n 0x640ac	@ 0006409c 06d1
.org 0x6409e
	adds r0, r6, #0	@ 0006409e 301c
.org 0x640a0
	movs r1, #19	@ 000640a0 1321
.org 0x640a2
	bl 0x65a94	@ 000640a2 01f0f7fc
.org 0x640a6
	ldrb r0, [r6, #15]	@ 000640a6 f07b
.org 0x640a8
	adds r0, #1	@ 000640a8 0130
.org 0x640aa
	strb r0, [r6, #15]	@ 000640aa f073
.org 0x640ac
	adds r0, r6, #0	@ 000640ac 301c
.org 0x640ae
	bl 0x1cff0	@ 000640ae b8f79fff
.org 0x640b2
	adds r0, r6, #0	@ 000640b2 301c
.org 0x640b4
	adds r0, #116	@ 000640b4 7430
.org 0x640b6
	ldr r4, [pc, #96]	@ 000640b6 184c
.org 0x640b8
	ldr r3, [pc, #96]	@ 000640b8 184b
.org 0x640ba
	adds r1, r6, #0	@ 000640ba 311c
.org 0x640bc
	adds r1, #180	@ 000640bc b431
.org 0x640be
	ldrb r2, [r1, #0]	@ 000640be 0a78
.org 0x640c0
	lsls r1, r2, #1	@ 000640c0 5100
.org 0x640c2
	adds r1, r1, r3	@ 000640c2 c918
.org 0x640c4
	ldrh r1, [r1, #0]	@ 000640c4 0988
.org 0x640c6
	lsls r1, r1, #2	@ 000640c6 8900
.org 0x640c8
	adds r1, r1, r4	@ 000640c8 0919
.org 0x640ca
	adds r3, r6, #0	@ 000640ca 331c
.org 0x640cc
	adds r3, #113	@ 000640cc 7133
.org 0x640ce
	movs r5, #0	@ 000640ce 0025
.org 0x640d0
	ldrsb r5, [r3, r5]	@ 000640d0 5d57
.org 0x640d2
	ldr r1, [r1, #0]	@ 000640d2 0968
.org 0x640d4
	lsls r3, r5, #2	@ 000640d4 ab00
.org 0x640d6
	adds r3, r3, r1	@ 000640d6 5b18
.org 0x640d8
	ldr r4, [pc, #68]	@ 000640d8 114c
.org 0x640da
	adds r1, r6, #0	@ 000640da 311c
.org 0x640dc
	adds r1, #181	@ 000640dc b531
.org 0x640de
	ldrb r1, [r1, #0]	@ 000640de 0978
.org 0x640e0
	lsls r1, r1, #2	@ 000640e0 8900
.org 0x640e2
	adds r1, r1, r4	@ 000640e2 0919
.org 0x640e4
	ldr r1, [r1, #0]	@ 000640e4 0968
.org 0x640e6
	lsls r2, r2, #2	@ 000640e6 9200
.org 0x640e8
	adds r2, r2, r1	@ 000640e8 5218
.org 0x640ea
	ldr r1, [r2, #0]	@ 000640ea 1168
.org 0x640ec
	adds r1, r1, r5	@ 000640ec 4919
.org 0x640ee
	ldrb r1, [r1, #0]	@ 000640ee 0978
.org 0x640f0
	lsls r2, r1, #1	@ 000640f0 4a00
.org 0x640f2
	adds r2, r2, r1	@ 000640f2 5218
.org 0x640f4
	lsls r2, r2, #3	@ 000640f4 d200
.org 0x640f6
	ldr r1, [r3, #0]	@ 000640f6 1968
.org 0x640f8
	adds r1, r1, r2	@ 000640f8 8918
.org 0x640fa
	bl 0x5784	@ 000640fa a1f743fb
.org 0x640fe
	adds r0, r6, #0	@ 000640fe 301c
.org 0x64100
	adds r0, #115	@ 00064100 7330
.org 0x64102
	ldrb r0, [r0, #0]	@ 00064102 0078
.org 0x64104
	cmp r0, #3	@ 00064104 0328
.org 0x64106
	bne.n 0x64110	@ 00064106 03d1
.org 0x64108
	movs r1, #0	@ 00064108 0021
.org 0x6410a
	movs r0, #2	@ 0006410a 0220
.org 0x6410c
	strb r0, [r6, #14]	@ 0006410c b073
.org 0x6410e
	strb r1, [r6, #15]	@ 0006410e f173
.org 0x64110
	pop {r4, r5, r6}	@ 00064110 70bc
.org 0x64112
	pop {r0}	@ 00064112 01bc
.org 0x64114
	bx r0	@ 00064114 0047
