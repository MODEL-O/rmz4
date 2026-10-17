@ FUN_08093f34  entry 0x08093f34  size 70
.thumb
.org 0x93f34
FUN_08093f34:
	push {r4, lr}	@ 00093f34 10b5
.org 0x93f36
	adds r4, r0, #0	@ 00093f36 041c
.org 0x93f38
	ldrb r0, [r4, #15]	@ 00093f38 e07b
.org 0x93f3a
	cmp r0, #0	@ 00093f3a 0028
.org 0x93f3c
	bne.n 0x93f56	@ 00093f3c 0bd1
.org 0x93f3e
	adds r0, r4, #0	@ 00093f3e 201c
.org 0x93f40
	adds r0, #116	@ 00093f40 7430
.org 0x93f42
	ldr r1, [pc, #56]	@ 00093f42 0e49
.org 0x93f44
	bl 0x5784	@ 00093f44 71f71efc
.org 0x93f48
	ldr r1, [pc, #52]	@ 00093f48 0d49
.org 0x93f4a
	adds r0, r4, #0	@ 00093f4a 201c
.org 0x93f4c
	bl 0x1cf00	@ 00093f4c 88f7d8ff
.org 0x93f50
	ldrb r0, [r4, #15]	@ 00093f50 e07b
.org 0x93f52
	adds r0, #1	@ 00093f52 0130
.org 0x93f54
	strb r0, [r4, #15]	@ 00093f54 e073
.org 0x93f56
	adds r0, r4, #0	@ 00093f56 201c
.org 0x93f58
	bl 0x1cff0	@ 00093f58 89f74af8
.org 0x93f5c
	adds r0, r4, #0	@ 00093f5c 201c
.org 0x93f5e
	bl 0x94a38	@ 00093f5e 00f06bfd
.org 0x93f62
	adds r0, r4, #0	@ 00093f62 201c
.org 0x93f64
	adds r0, #115	@ 00093f64 7330
.org 0x93f66
	ldrb r0, [r0, #0]	@ 00093f66 0078
.org 0x93f68
	cmp r0, #3	@ 00093f68 0328
.org 0x93f6a
	bne.n 0x93f74	@ 00093f6a 03d1
.org 0x93f6c
	movs r0, #0	@ 00093f6c 0020
.org 0x93f6e
	strb r0, [r4, #13]	@ 00093f6e 6073
.org 0x93f70
	strb r0, [r4, #14]	@ 00093f70 a073
.org 0x93f72
	strb r0, [r4, #15]	@ 00093f72 e073
.org 0x93f74
	pop {r4}	@ 00093f74 10bc
.org 0x93f76
	pop {r0}	@ 00093f76 01bc
.org 0x93f78
	bx r0	@ 00093f78 0047
