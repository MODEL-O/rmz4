@ FUN_080bbaa0  entry 0x080bbaa0  size 82
.thumb
.org 0xbbaa0
FUN_080bbaa0:
	push {r4, lr}	@ 000bbaa0 10b5
.org 0xbbaa2
	adds r4, r0, #0	@ 000bbaa2 041c
.org 0xbbaa4
	ldrb r0, [r4, #15]	@ 000bbaa4 e07b
.org 0xbbaa6
	cmp r0, #0	@ 000bbaa6 0028
.org 0xbbaa8
	bne.n 0xbbac6	@ 000bbaa8 0dd1
.org 0xbbaaa
	adds r0, r4, #0	@ 000bbaaa 201c
.org 0xbbaac
	adds r0, #116	@ 000bbaac 7430
.org 0xbbaae
	ldr r1, [pc, #68]	@ 000bbaae 1149
.org 0xbbab0
	bl 0x5784	@ 000bbab0 49f768fe
.org 0xbbab4
	ldr r1, [pc, #64]	@ 000bbab4 1049
.org 0xbbab6
	adds r0, r4, #0	@ 000bbab6 201c
.org 0xbbab8
	bl 0x1cf00	@ 000bbab8 61f722fa
.org 0xbbabc
	movs r0, #18	@ 000bbabc 1220
.org 0xbbabe
	strb r0, [r4, #18]	@ 000bbabe a074
.org 0xbbac0
	ldrb r0, [r4, #15]	@ 000bbac0 e07b
.org 0xbbac2
	adds r0, #1	@ 000bbac2 0130
.org 0xbbac4
	strb r0, [r4, #15]	@ 000bbac4 e073
.org 0xbbac6
	adds r0, r4, #0	@ 000bbac6 201c
.org 0xbbac8
	bl 0x1cff0	@ 000bbac8 61f792fa
.org 0xbbacc
	adds r0, r4, #0	@ 000bbacc 201c
.org 0xbbace
	adds r0, #115	@ 000bbace 7330
.org 0xbbad0
	ldrb r0, [r0, #0]	@ 000bbad0 0078
.org 0xbbad2
	cmp r0, #3	@ 000bbad2 0328
.org 0xbbad4
	bne.n 0xbbaec	@ 000bbad4 0ad1
.org 0xbbad6
	ldrb r0, [r4, #18]	@ 000bbad6 a07c
.org 0xbbad8
	subs r0, #1	@ 000bbad8 0138
.org 0xbbada
	strb r0, [r4, #18]	@ 000bbada a074
.org 0xbbadc
	lsls r0, r0, #24	@ 000bbadc 0006
.org 0xbbade
	lsrs r1, r0, #24	@ 000bbade 010e
.org 0xbbae0
	cmp r1, #0	@ 000bbae0 0029
.org 0xbbae2
	bne.n 0xbbaec	@ 000bbae2 03d1
.org 0xbbae4
	movs r0, #4	@ 000bbae4 0420
.org 0xbbae6
	strb r0, [r4, #13]	@ 000bbae6 6073
.org 0xbbae8
	strb r1, [r4, #14]	@ 000bbae8 a173
.org 0xbbaea
	strb r1, [r4, #15]	@ 000bbaea e173
.org 0xbbaec
	pop {r4}	@ 000bbaec 10bc
.org 0xbbaee
	pop {r0}	@ 000bbaee 01bc
.org 0xbbaf0
	bx r0	@ 000bbaf0 0047
