@ FUN_080c81fc  entry 0x080c81fc  size 86
.thumb
.org 0xc81fc
FUN_080c81fc:
	push {r4, r5, r6, r7, lr}	@ 000c81fc f0b5
.org 0xc81fe
	mov r7, r8	@ 000c81fe 4746
.org 0xc8200
	push {r7}	@ 000c8200 80b4
.org 0xc8202
	adds r4, r0, #0	@ 000c8202 041c
.org 0xc8204
	ldr r6, [r4, #40]	@ 000c8204 a66a
.org 0xc8206
	ldrb r7, [r4, #17]	@ 000c8206 677c
.org 0xc8208
	ldrb r0, [r4, #10]	@ 000c8208 a07a
.org 0xc820a
	lsrs r5, r0, #4	@ 000c820a 0509
.org 0xc820c
	movs r0, #1	@ 000c820c 0120
.org 0xc820e
	mov r8, r0	@ 000c820e 8046
.org 0xc8210
	ands r5, r0	@ 000c8210 0540
.org 0xc8212
	ldrb r0, [r4, #15]	@ 000c8212 e07b
.org 0xc8214
	cmp r0, #0	@ 000c8214 0028
.org 0xc8216
	bne.n 0xc821c	@ 000c8216 01d1
.org 0xc8218
	adds r0, #1	@ 000c8218 0130
.org 0xc821a
	strb r0, [r4, #15]	@ 000c821a e073
.org 0xc821c
	adds r0, r4, #0	@ 000c821c 201c
.org 0xc821e
	bl 0x1cff0	@ 000c821e 54f7e7fe
.org 0xc8222
	adds r1, r7, #1	@ 000c8222 791c
.org 0xc8224
	lsls r0, r5, #1	@ 000c8224 6800
.org 0xc8226
	subs r0, #1	@ 000c8226 0138
.org 0xc8228
	lsls r0, r0, #12	@ 000c8228 0003
.org 0xc822a
	negs r0, r0	@ 000c822a 4042
.org 0xc822c
	muls r1, r0	@ 000c822c 4143
.org 0xc822e
	ldr r0, [r6, #84]	@ 000c822e 706d
.org 0xc8230
	adds r0, r0, r1	@ 000c8230 4018
.org 0xc8232
	str r0, [r4, #84]	@ 000c8232 6065
.org 0xc8234
	ldr r0, [r6, #88]	@ 000c8234 b06d
.org 0xc8236
	str r0, [r4, #88]	@ 000c8236 a065
.org 0xc8238
	ldrb r0, [r6, #13]	@ 000c8238 707b
.org 0xc823a
	cmp r0, #2	@ 000c823a 0228
.org 0xc823c
	bne.n 0xc8248	@ 000c823c 04d1
.org 0xc823e
	movs r0, #0	@ 000c823e 0020
.org 0xc8240
	mov r1, r8	@ 000c8240 4146
.org 0xc8242
	strb r1, [r4, #13]	@ 000c8242 6173
.org 0xc8244
	strb r0, [r4, #14]	@ 000c8244 a073
.org 0xc8246
	strb r0, [r4, #15]	@ 000c8246 e073
.org 0xc8248
	pop {r3}	@ 000c8248 08bc
.org 0xc824a
	mov r8, r3	@ 000c824a 9846
.org 0xc824c
	pop {r4, r5, r6, r7}	@ 000c824c f0bc
.org 0xc824e
	pop {r0}	@ 000c824e 01bc
.org 0xc8250
	bx r0	@ 000c8250 0047
