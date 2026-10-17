@ FUN_08068054  entry 0x08068054  size 62
.thumb
.org 0x68054
FUN_08068054:
	push {r4, lr}	@ 00068054 10b5
.org 0x68056
	adds r4, r0, #0	@ 00068056 041c
.org 0x68058
	ldrb r0, [r4, #14]	@ 00068058 a07b
.org 0x6805a
	cmp r0, #0	@ 0006805a 0028
.org 0x6805c
	bne.n 0x68076	@ 0006805c 0bd1
.org 0x6805e
	ldr r1, [pc, #52]	@ 0006805e 0d49
.org 0x68060
	adds r0, r4, #0	@ 00068060 201c
.org 0x68062
	bl 0x1cf00	@ 00068062 b4f74dff
.org 0x68066
	adds r0, r4, #0	@ 00068066 201c
.org 0x68068
	adds r0, #116	@ 00068068 7430
.org 0x6806a
	ldr r1, [pc, #44]	@ 0006806a 0b49
.org 0x6806c
	bl 0x5784	@ 0006806c 9df78afb
.org 0x68070
	ldrb r0, [r4, #14]	@ 00068070 a07b
.org 0x68072
	adds r0, #1	@ 00068072 0130
.org 0x68074
	strb r0, [r4, #14]	@ 00068074 a073
.org 0x68076
	adds r0, r4, #0	@ 00068076 201c
.org 0x68078
	bl 0x1cff0	@ 00068078 b4f7baff
.org 0x6807c
	adds r0, r4, #0	@ 0006807c 201c
.org 0x6807e
	adds r0, #115	@ 0006807e 7330
.org 0x68080
	ldrb r1, [r0, #0]	@ 00068080 0178
.org 0x68082
	cmp r1, #3	@ 00068082 0329
.org 0x68084
	bne.n 0x6808c	@ 00068084 02d1
.org 0x68086
	movs r0, #0	@ 00068086 0020
.org 0x68088
	strb r1, [r4, #13]	@ 00068088 6173
.org 0x6808a
	strb r0, [r4, #14]	@ 0006808a a073
.org 0x6808c
	pop {r4}	@ 0006808c 10bc
.org 0x6808e
	pop {r0}	@ 0006808e 01bc
.org 0x68090
	bx r0	@ 00068090 0047
