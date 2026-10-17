@ FUN_0808432c  entry 0x0808432c  size 58
.thumb
.org 0x8432c
FUN_0808432c:
	push {r4, lr}	@ 0008432c 10b5
.org 0x8432e
	adds r4, r0, #0	@ 0008432e 041c
.org 0x84330
	ldrb r0, [r4, #14]	@ 00084330 a07b
.org 0x84332
	cmp r0, #0	@ 00084332 0028
.org 0x84334
	bne.n 0x8434a	@ 00084334 09d1
.org 0x84336
	movs r1, #224	@ 00084336 e021
.org 0x84338
	lsls r1, r1, #5	@ 00084338 4901
.org 0x8433a
	adds r0, r4, #0	@ 0008433a 201c
.org 0x8433c
	bl 0x1cf00	@ 0008433c 98f7e0fd
.org 0x84340
	movs r0, #8	@ 00084340 0820
.org 0x84342
	strb r0, [r4, #18]	@ 00084342 a074
.org 0x84344
	ldrb r0, [r4, #14]	@ 00084344 a07b
.org 0x84346
	adds r0, #1	@ 00084346 0130
.org 0x84348
	strb r0, [r4, #14]	@ 00084348 a073
.org 0x8434a
	ldrb r0, [r4, #18]	@ 0008434a a07c
.org 0x8434c
	subs r0, #1	@ 0008434c 0138
.org 0x8434e
	strb r0, [r4, #18]	@ 0008434e a074
.org 0x84350
	lsls r0, r0, #24	@ 00084350 0006
.org 0x84352
	lsrs r0, r0, #24	@ 00084352 000e
.org 0x84354
	cmp r0, #255	@ 00084354 ff28
.org 0x84356
	bne.n 0x84360	@ 00084356 03d1
.org 0x84358
	movs r0, #2	@ 00084358 0220
.org 0x8435a
	strb r0, [r4, #13]	@ 0008435a 6073
.org 0x8435c
	movs r0, #0	@ 0008435c 0020
.org 0x8435e
	strb r0, [r4, #14]	@ 0008435e a073
.org 0x84360
	pop {r4}	@ 00084360 10bc
.org 0x84362
	pop {r0}	@ 00084362 01bc
.org 0x84364
	bx r0	@ 00084364 0047
