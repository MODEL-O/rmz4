@ FUN_080cfb78  entry 0x080cfb78  size 72
.thumb
.org 0xcfb78
FUN_080cfb78:
	push {r4, r5, lr}	@ 000cfb78 30b5
.org 0xcfb7a
	adds r4, r0, #0	@ 000cfb7a 041c
.org 0xcfb7c
	ldr r5, [r4, #40]	@ 000cfb7c a56a
.org 0xcfb7e
	ldrb r0, [r4, #15]	@ 000cfb7e e07b
.org 0xcfb80
	cmp r0, #0	@ 000cfb80 0028
.org 0xcfb82
	bne.n 0xcfb92	@ 000cfb82 06d1
.org 0xcfb84
	adds r1, r4, #0	@ 000cfb84 211c
.org 0xcfb86
	adds r1, #184	@ 000cfb86 b831
.org 0xcfb88
	movs r0, #96	@ 000cfb88 6020
.org 0xcfb8a
	str r0, [r1, #0]	@ 000cfb8a 0860
.org 0xcfb8c
	ldrb r0, [r4, #15]	@ 000cfb8c e07b
.org 0xcfb8e
	adds r0, #1	@ 000cfb8e 0130
.org 0xcfb90
	strb r0, [r4, #15]	@ 000cfb90 e073
.org 0xcfb92
	adds r0, r4, #0	@ 000cfb92 201c
.org 0xcfb94
	bl 0x1cff0	@ 000cfb94 4df72cfa
.org 0xcfb98
	ldr r0, [r5, #84]	@ 000cfb98 686d
.org 0xcfb9a
	str r0, [r4, #84]	@ 000cfb9a 6065
.org 0xcfb9c
	ldr r0, [r5, #88]	@ 000cfb9c a86d
.org 0xcfb9e
	ldr r1, [pc, #32]	@ 000cfb9e 0849
.org 0xcfba0
	adds r0, r0, r1	@ 000cfba0 4018
.org 0xcfba2
	str r0, [r4, #88]	@ 000cfba2 a065
.org 0xcfba4
	adds r1, r4, #0	@ 000cfba4 211c
.org 0xcfba6
	adds r1, #184	@ 000cfba6 b831
.org 0xcfba8
	ldr r0, [r1, #0]	@ 000cfba8 0868
.org 0xcfbaa
	subs r2, r0, #1	@ 000cfbaa 421e
.org 0xcfbac
	str r2, [r1, #0]	@ 000cfbac 0a60
.org 0xcfbae
	cmp r2, #0	@ 000cfbae 002a
.org 0xcfbb0
	bne.n 0xcfbba	@ 000cfbb0 03d1
.org 0xcfbb2
	movs r0, #1	@ 000cfbb2 0120
.org 0xcfbb4
	strb r0, [r4, #13]	@ 000cfbb4 6073
.org 0xcfbb6
	strb r2, [r4, #14]	@ 000cfbb6 a273
.org 0xcfbb8
	strb r2, [r4, #15]	@ 000cfbb8 e273
.org 0xcfbba
	pop {r4, r5}	@ 000cfbba 30bc
.org 0xcfbbc
	pop {r0}	@ 000cfbbc 01bc
.org 0xcfbbe
	bx r0	@ 000cfbbe 0047
