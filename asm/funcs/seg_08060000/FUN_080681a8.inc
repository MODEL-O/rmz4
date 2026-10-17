@ FUN_080681a8  entry 0x080681a8  size 116
.thumb
.org 0x681a8
FUN_080681a8:
	push {r2, r6, lr}	@ 000681a8 44b5
.org 0x681aa
	lsrs r5, r0, #2	@ 000681aa 8508
.org 0x681ac
	push {r4, r5, lr}	@ 000681ac 30b5
.org 0x681ae
	sub sp, #8	@ 000681ae 82b0
.org 0x681b0
	adds r4, r0, #0	@ 000681b0 041c
.org 0x681b2
	ldrb r5, [r4, #14]	@ 000681b2 a57b
.org 0x681b4
	cmp r5, #0	@ 000681b4 002d
.org 0x681b6
	bne.n 0x681c6	@ 000681b6 06d1
.org 0x681b8
	ldr r1, [pc, #96]	@ 000681b8 1849
.org 0x681ba
	bl 0x1cf00	@ 000681ba b4f7a1fe
.org 0x681be
	strb r5, [r4, #15]	@ 000681be e573
.org 0x681c0
	ldrb r0, [r4, #14]	@ 000681c0 a07b
.org 0x681c2
	adds r0, #1	@ 000681c2 0130
.org 0x681c4
	strb r0, [r4, #14]	@ 000681c4 a073
.org 0x681c6
	adds r0, r4, #0	@ 000681c6 201c
.org 0x681c8
	bl 0x1cff0	@ 000681c8 b4f712ff
.org 0x681cc
	ldrb r0, [r4, #15]	@ 000681cc e07b
.org 0x681ce
	cmp r0, #0	@ 000681ce 0028
.org 0x681d0
	bne.n 0x68202	@ 000681d0 17d1
.org 0x681d2
	adds r0, r4, #0	@ 000681d2 201c
.org 0x681d4
	adds r0, #113	@ 000681d4 7130
.org 0x681d6
	ldrb r0, [r0, #0]	@ 000681d6 0078
.org 0x681d8
	lsls r0, r0, #24	@ 000681d8 0006
.org 0x681da
	asrs r0, r0, #24	@ 000681da 0016
.org 0x681dc
	cmp r0, #4	@ 000681dc 0428
.org 0x681de
	ble.n 0x68202	@ 000681de 10dd
.org 0x681e0
	ldr r0, [r4, #84]	@ 000681e0 606d
.org 0x681e2
	ldr r1, [pc, #60]	@ 000681e2 0f49
.org 0x681e4
	adds r0, r0, r1	@ 000681e4 4018
.org 0x681e6
	str r0, [sp, #0]	@ 000681e6 0090
.org 0x681e8
	ldr r0, [r4, #88]	@ 000681e8 a06d
.org 0x681ea
	ldr r1, [pc, #56]	@ 000681ea 0e49
.org 0x681ec
	adds r0, r0, r1	@ 000681ec 4018
.org 0x681ee
	str r0, [sp, #4]	@ 000681ee 0190
.org 0x681f0
	adds r0, r4, #0	@ 000681f0 201c
.org 0x681f2
	mov r1, sp	@ 000681f2 6946
.org 0x681f4
	movs r2, #3	@ 000681f4 0322
.org 0x681f6
	movs r3, #0	@ 000681f6 0023
.org 0x681f8
	bl 0x9cd78	@ 000681f8 34f0befd
.org 0x681fc
	ldrb r0, [r4, #15]	@ 000681fc e07b
.org 0x681fe
	adds r0, #1	@ 000681fe 0130
.org 0x68200
	strb r0, [r4, #15]	@ 00068200 e073
.org 0x68202
	adds r0, r4, #0	@ 00068202 201c
.org 0x68204
	adds r0, #115	@ 00068204 7330
.org 0x68206
	ldrb r0, [r0, #0]	@ 00068206 0078
.org 0x68208
	cmp r0, #3	@ 00068208 0328
.org 0x6820a
	bne.n 0x68214	@ 0006820a 03d1
.org 0x6820c
	movs r1, #0	@ 0006820c 0021
.org 0x6820e
	movs r0, #29	@ 0006820e 1d20
.org 0x68210
	strb r0, [r4, #13]	@ 00068210 6073
.org 0x68212
	strb r1, [r4, #14]	@ 00068212 a173
.org 0x68214
	add sp, #8	@ 00068214 02b0
.org 0x68216
	pop {r4, r5}	@ 00068216 30bc
.org 0x68218
	pop {r0}	@ 00068218 01bc
.org 0x6821a
	bx r0	@ 0006821a 0047
