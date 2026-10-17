@ FUN_08060f30  entry 0x08060f30  size 52
.thumb
.org 0x60f30
FUN_08060f30:
	push {r4, lr}	@ 00060f30 10b5
.org 0x60f32
	adds r4, r0, #0	@ 00060f32 041c
.org 0x60f34
	ldrb r0, [r4, #14]	@ 00060f34 a07b
.org 0x60f36
	cmp r0, #0	@ 00060f36 0028
.org 0x60f38
	bne.n 0x60f48	@ 00060f38 06d1
.org 0x60f3a
	ldr r1, [pc, #40]	@ 00060f3a 0a49
.org 0x60f3c
	adds r0, r4, #0	@ 00060f3c 201c
.org 0x60f3e
	bl 0x1cf00	@ 00060f3e bbf7dfff
.org 0x60f42
	ldrb r0, [r4, #14]	@ 00060f42 a07b
.org 0x60f44
	adds r0, #1	@ 00060f44 0130
.org 0x60f46
	strb r0, [r4, #14]	@ 00060f46 a073
.org 0x60f48
	adds r0, r4, #0	@ 00060f48 201c
.org 0x60f4a
	bl 0x1cff0	@ 00060f4a bcf751f8
.org 0x60f4e
	adds r0, r4, #0	@ 00060f4e 201c
.org 0x60f50
	adds r0, #115	@ 00060f50 7330
.org 0x60f52
	ldrb r1, [r0, #0]	@ 00060f52 0178
.org 0x60f54
	cmp r1, #3	@ 00060f54 0329
.org 0x60f56
	bne.n 0x60f5e	@ 00060f56 02d1
.org 0x60f58
	movs r0, #0	@ 00060f58 0020
.org 0x60f5a
	strb r1, [r4, #13]	@ 00060f5a 6173
.org 0x60f5c
	strb r0, [r4, #14]	@ 00060f5c a073
.org 0x60f5e
	pop {r4}	@ 00060f5e 10bc
.org 0x60f60
	pop {r0}	@ 00060f60 01bc
.org 0x60f62
	bx r0	@ 00060f62 0047
