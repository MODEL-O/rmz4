@ FUN_080ab0d0  entry 0x080ab0d0  size 78
.thumb
.org 0xab0d0
FUN_080ab0d0:
	push {r4, lr}	@ 000ab0d0 10b5
.org 0xab0d2
	adds r4, r0, #0	@ 000ab0d2 041c
.org 0xab0d4
	ldrb r0, [r4, #15]	@ 000ab0d4 e07b
.org 0xab0d6
	cmp r0, #0	@ 000ab0d6 0028
.org 0xab0d8
	bne.n 0xab0e8	@ 000ab0d8 06d1
.org 0xab0da
	ldr r1, [pc, #68]	@ 000ab0da 1149
.org 0xab0dc
	adds r0, r4, #0	@ 000ab0dc 201c
.org 0xab0de
	bl 0x1cf00	@ 000ab0de 71f70fff
.org 0xab0e2
	ldrb r0, [r4, #15]	@ 000ab0e2 e07b
.org 0xab0e4
	adds r0, #1	@ 000ab0e4 0130
.org 0xab0e6
	strb r0, [r4, #15]	@ 000ab0e6 e073
.org 0xab0e8
	adds r0, r4, #0	@ 000ab0e8 201c
.org 0xab0ea
	bl 0x1cff0	@ 000ab0ea 71f781ff
.org 0xab0ee
	adds r0, r4, #0	@ 000ab0ee 201c
.org 0xab0f0
	adds r0, #116	@ 000ab0f0 7430
.org 0xab0f2
	ldr r1, [pc, #48]	@ 000ab0f2 0c49
.org 0xab0f4
	bl 0x5784	@ 000ab0f4 5af746fb
.org 0xab0f8
	ldr r1, [r4, #84]	@ 000ab0f8 616d
.org 0xab0fa
	ldr r2, [r4, #88]	@ 000ab0fa a26d
.org 0xab0fc
	adds r0, r1, #0	@ 000ab0fc 081c
.org 0xab0fe
	adds r1, r2, #0	@ 000ab0fe 111c
.org 0xab100
	bl 0x8534	@ 000ab100 5df718fa
.org 0xab104
	subs r0, #1	@ 000ab104 0138
.org 0xab106
	str r0, [r4, #88]	@ 000ab106 a065
.org 0xab108
	adds r0, r4, #0	@ 000ab108 201c
.org 0xab10a
	adds r0, #115	@ 000ab10a 7330
.org 0xab10c
	ldrb r0, [r0, #0]	@ 000ab10c 0078
.org 0xab10e
	cmp r0, #3	@ 000ab10e 0328
.org 0xab110
	bne.n 0xab118	@ 000ab110 02d1
.org 0xab112
	adds r0, r4, #0	@ 000ab112 201c
.org 0xab114
	bl 0xab610	@ 000ab114 00f07cfa
.org 0xab118
	pop {r4}	@ 000ab118 10bc
.org 0xab11a
	pop {r0}	@ 000ab11a 01bc
.org 0xab11c
	bx r0	@ 000ab11c 0047
