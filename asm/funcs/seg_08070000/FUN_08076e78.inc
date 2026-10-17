@ FUN_08076e78  entry 0x08076e78  size 62
.thumb
.org 0x76e78
FUN_08076e78:
	push {r4, lr}	@ 00076e78 10b5
.org 0x76e7a
	adds r4, r0, #0	@ 00076e7a 041c
.org 0x76e7c
	ldrb r0, [r4, #14]	@ 00076e7c a07b
.org 0x76e7e
	cmp r0, #0	@ 00076e7e 0028
.org 0x76e80
	bne.n 0x76e9a	@ 00076e80 0bd1
.org 0x76e82
	ldr r1, [pc, #52]	@ 00076e82 0d49
.org 0x76e84
	adds r0, r4, #0	@ 00076e84 201c
.org 0x76e86
	bl 0x1cf00	@ 00076e86 a6f73bf8
.org 0x76e8a
	adds r0, r4, #0	@ 00076e8a 201c
.org 0x76e8c
	adds r0, #116	@ 00076e8c 7430
.org 0x76e8e
	ldr r1, [pc, #44]	@ 00076e8e 0b49
.org 0x76e90
	bl 0x5784	@ 00076e90 8ef778fc
.org 0x76e94
	ldrb r0, [r4, #14]	@ 00076e94 a07b
.org 0x76e96
	adds r0, #1	@ 00076e96 0130
.org 0x76e98
	strb r0, [r4, #14]	@ 00076e98 a073
.org 0x76e9a
	adds r0, r4, #0	@ 00076e9a 201c
.org 0x76e9c
	bl 0x1cff0	@ 00076e9c a6f7a8f8
.org 0x76ea0
	adds r0, r4, #0	@ 00076ea0 201c
.org 0x76ea2
	adds r0, #115	@ 00076ea2 7330
.org 0x76ea4
	ldrb r1, [r0, #0]	@ 00076ea4 0178
.org 0x76ea6
	cmp r1, #3	@ 00076ea6 0329
.org 0x76ea8
	bne.n 0x76eb0	@ 00076ea8 02d1
.org 0x76eaa
	movs r0, #0	@ 00076eaa 0020
.org 0x76eac
	strb r1, [r4, #13]	@ 00076eac 6173
.org 0x76eae
	strb r0, [r4, #14]	@ 00076eae a073
.org 0x76eb0
	pop {r4}	@ 00076eb0 10bc
.org 0x76eb2
	pop {r0}	@ 00076eb2 01bc
.org 0x76eb4
	bx r0	@ 00076eb4 0047
