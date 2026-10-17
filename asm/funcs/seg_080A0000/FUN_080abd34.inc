@ FUN_080abd34  entry 0x080abd34  size 76
.thumb
.org 0xabd34
FUN_080abd34:
	push {r4, r5, r6, lr}	@ 000abd34 70b5
.org 0xabd36
	adds r4, r0, #0	@ 000abd36 041c
.org 0xabd38
	ldrb r1, [r4, #15]	@ 000abd38 e17b
.org 0xabd3a
	cmp r1, #0	@ 000abd3a 0029
.org 0xabd3c
	bne.n 0xabd46	@ 000abd3c 03d1
.org 0xabd3e
	movs r0, #16	@ 000abd3e 1020
.org 0xabd40
	strb r0, [r4, #18]	@ 000abd40 a074
.org 0xabd42
	adds r0, r1, #1	@ 000abd42 481c
.org 0xabd44
	strb r0, [r4, #15]	@ 000abd44 e073
.org 0xabd46
	ldrb r0, [r4, #18]	@ 000abd46 a07c
.org 0xabd48
	subs r0, #1	@ 000abd48 0138
.org 0xabd4a
	strb r0, [r4, #18]	@ 000abd4a a074
.org 0xabd4c
	ldrb r0, [r4, #18]	@ 000abd4c a07c
.org 0xabd4e
	ldr r1, [pc, #48]	@ 000abd4e 0c49
.org 0xabd50
	lsls r0, r0, #26	@ 000abd50 8006
.org 0xabd52
	lsrs r0, r0, #23	@ 000abd52 c00d
.org 0xabd54
	adds r0, r0, r1	@ 000abd54 4018
.org 0xabd56
	movs r1, #0	@ 000abd56 0021
.org 0xabd58
	ldrsh r0, [r0, r1]	@ 000abd58 405e
.org 0xabd5a
	asrs r0, r0, #4	@ 000abd5a 0011
.org 0xabd5c
	ldr r5, [pc, #36]	@ 000abd5c 094d
.org 0xabd5e
	movs r6, #0	@ 000abd5e 0026
.org 0xabd60
	strh r0, [r5, #4]	@ 000abd60 a880
.org 0xabd62
	adds r0, r4, #0	@ 000abd62 201c
.org 0xabd64
	bl 0xac300	@ 000abd64 00f0ccfa
.org 0xabd68
	ldrb r0, [r4, #18]	@ 000abd68 a07c
.org 0xabd6a
	cmp r0, #0	@ 000abd6a 0028
.org 0xabd6c
	bne.n 0xabd7a	@ 000abd6c 05d1
.org 0xabd6e
	strh r0, [r5, #0]	@ 000abd6e 2880
.org 0xabd70
	ldrb r0, [r4, #13]	@ 000abd70 607b
.org 0xabd72
	adds r0, #1	@ 000abd72 0130
.org 0xabd74
	strb r0, [r4, #13]	@ 000abd74 6073
.org 0xabd76
	strb r6, [r4, #14]	@ 000abd76 a673
.org 0xabd78
	strb r6, [r4, #15]	@ 000abd78 e673
.org 0xabd7a
	pop {r4, r5, r6}	@ 000abd7a 70bc
.org 0xabd7c
	pop {r0}	@ 000abd7c 01bc
.org 0xabd7e
	bx r0	@ 000abd7e 0047
