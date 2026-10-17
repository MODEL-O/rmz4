@ FUN_08060eec  entry 0x08060eec  size 62
.thumb
.org 0x60eec
FUN_08060eec:
	push {r4, lr}	@ 00060eec 10b5
.org 0x60eee
	adds r4, r0, #0	@ 00060eee 041c
.org 0x60ef0
	ldrb r0, [r4, #14]	@ 00060ef0 a07b
.org 0x60ef2
	cmp r0, #0	@ 00060ef2 0028
.org 0x60ef4
	bne.n 0x60f08	@ 00060ef4 08d1
.org 0x60ef6
	ldr r1, [pc, #52]	@ 00060ef6 0d49
.org 0x60ef8
	adds r0, r4, #0	@ 00060ef8 201c
.org 0x60efa
	bl 0x1cf00	@ 00060efa bcf701f8
.org 0x60efe
	movs r0, #64	@ 00060efe 4020
.org 0x60f00
	strb r0, [r4, #18]	@ 00060f00 a074
.org 0x60f02
	ldrb r0, [r4, #14]	@ 00060f02 a07b
.org 0x60f04
	adds r0, #1	@ 00060f04 0130
.org 0x60f06
	strb r0, [r4, #14]	@ 00060f06 a073
.org 0x60f08
	adds r0, r4, #0	@ 00060f08 201c
.org 0x60f0a
	bl 0x1cff0	@ 00060f0a bcf771f8
.org 0x60f0e
	ldrb r0, [r4, #18]	@ 00060f0e a07c
.org 0x60f10
	subs r0, #1	@ 00060f10 0138
.org 0x60f12
	strb r0, [r4, #18]	@ 00060f12 a074
.org 0x60f14
	lsls r0, r0, #24	@ 00060f14 0006
.org 0x60f16
	lsrs r0, r0, #24	@ 00060f16 000e
.org 0x60f18
	cmp r0, #255	@ 00060f18 ff28
.org 0x60f1a
	bne.n 0x60f24	@ 00060f1a 03d1
.org 0x60f1c
	movs r0, #26	@ 00060f1c 1a20
.org 0x60f1e
	strb r0, [r4, #13]	@ 00060f1e 6073
.org 0x60f20
	movs r0, #0	@ 00060f20 0020
.org 0x60f22
	strb r0, [r4, #14]	@ 00060f22 a073
.org 0x60f24
	pop {r4}	@ 00060f24 10bc
.org 0x60f26
	pop {r0}	@ 00060f26 01bc
.org 0x60f28
	bx r0	@ 00060f28 0047
