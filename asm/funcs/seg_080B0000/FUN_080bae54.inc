@ FUN_080bae54  entry 0x080bae54  size 72
.thumb
.org 0xbae54
FUN_080bae54:
	push {r4, lr}	@ 000bae54 10b5
.org 0xbae56
	adds r4, r0, #0	@ 000bae56 041c
.org 0xbae58
	ldrb r0, [r4, #15]	@ 000bae58 e07b
.org 0xbae5a
	cmp r0, #0	@ 000bae5a 0028
.org 0xbae5c
	bne.n 0xbae7a	@ 000bae5c 0dd1
.org 0xbae5e
	adds r0, r4, #0	@ 000bae5e 201c
.org 0xbae60
	adds r0, #116	@ 000bae60 7430
.org 0xbae62
	ldr r1, [pc, #56]	@ 000bae62 0e49
.org 0xbae64
	bl 0x5784	@ 000bae64 4af78efc
.org 0xbae68
	ldr r1, [pc, #52]	@ 000bae68 0d49
.org 0xbae6a
	adds r0, r4, #0	@ 000bae6a 201c
.org 0xbae6c
	bl 0x1cf00	@ 000bae6c 62f748f8
.org 0xbae70
	movs r0, #8	@ 000bae70 0820
.org 0xbae72
	strb r0, [r4, #18]	@ 000bae72 a074
.org 0xbae74
	ldrb r0, [r4, #15]	@ 000bae74 e07b
.org 0xbae76
	adds r0, #1	@ 000bae76 0130
.org 0xbae78
	strb r0, [r4, #15]	@ 000bae78 e073
.org 0xbae7a
	adds r0, r4, #0	@ 000bae7a 201c
.org 0xbae7c
	bl 0x1d134	@ 000bae7c 62f75af9
.org 0xbae80
	ldrb r0, [r4, #18]	@ 000bae80 a07c
.org 0xbae82
	subs r0, #1	@ 000bae82 0138
.org 0xbae84
	strb r0, [r4, #18]	@ 000bae84 a074
.org 0xbae86
	lsls r0, r0, #24	@ 000bae86 0006
.org 0xbae88
	lsrs r1, r0, #24	@ 000bae88 010e
.org 0xbae8a
	cmp r1, #0	@ 000bae8a 0029
.org 0xbae8c
	bne.n 0xbae96	@ 000bae8c 03d1
.org 0xbae8e
	movs r0, #2	@ 000bae8e 0220
.org 0xbae90
	strb r0, [r4, #13]	@ 000bae90 6073
.org 0xbae92
	strb r1, [r4, #14]	@ 000bae92 a173
.org 0xbae94
	strb r1, [r4, #15]	@ 000bae94 e173
.org 0xbae96
	pop {r4}	@ 000bae96 10bc
.org 0xbae98
	pop {r0}	@ 000bae98 01bc
.org 0xbae9a
	bx r0	@ 000bae9a 0047
