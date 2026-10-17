@ FUN_080bbb8c  entry 0x080bbb8c  size 66
.thumb
.org 0xbbb8c
FUN_080bbb8c:
	push {r4, lr}	@ 000bbb8c 10b5
.org 0xbbb8e
	adds r4, r0, #0	@ 000bbb8e 041c
.org 0xbbb90
	ldrb r0, [r4, #15]	@ 000bbb90 e07b
.org 0xbbb92
	cmp r0, #0	@ 000bbb92 0028
.org 0xbbb94
	bne.n 0xbbbae	@ 000bbb94 0bd1
.org 0xbbb96
	adds r0, r4, #0	@ 000bbb96 201c
.org 0xbbb98
	adds r0, #116	@ 000bbb98 7430
.org 0xbbb9a
	ldr r1, [pc, #52]	@ 000bbb9a 0d49
.org 0xbbb9c
	bl 0x5784	@ 000bbb9c 49f7f2fd
.org 0xbbba0
	ldr r1, [pc, #48]	@ 000bbba0 0c49
.org 0xbbba2
	adds r0, r4, #0	@ 000bbba2 201c
.org 0xbbba4
	bl 0x1cf00	@ 000bbba4 61f7acf9
.org 0xbbba8
	ldrb r0, [r4, #15]	@ 000bbba8 e07b
.org 0xbbbaa
	adds r0, #1	@ 000bbbaa 0130
.org 0xbbbac
	strb r0, [r4, #15]	@ 000bbbac e073
.org 0xbbbae
	adds r0, r4, #0	@ 000bbbae 201c
.org 0xbbbb0
	bl 0x1cff0	@ 000bbbb0 61f71efa
.org 0xbbbb4
	adds r0, r4, #0	@ 000bbbb4 201c
.org 0xbbbb6
	adds r0, #115	@ 000bbbb6 7330
.org 0xbbbb8
	ldrb r0, [r0, #0]	@ 000bbbb8 0078
.org 0xbbbba
	cmp r0, #3	@ 000bbbba 0328
.org 0xbbbbc
	bne.n 0xbbbc8	@ 000bbbbc 04d1
.org 0xbbbbe
	movs r1, #0	@ 000bbbbe 0021
.org 0xbbbc0
	movs r0, #6	@ 000bbbc0 0620
.org 0xbbbc2
	strb r0, [r4, #13]	@ 000bbbc2 6073
.org 0xbbbc4
	strb r1, [r4, #14]	@ 000bbbc4 a173
.org 0xbbbc6
	strb r1, [r4, #15]	@ 000bbbc6 e173
.org 0xbbbc8
	pop {r4}	@ 000bbbc8 10bc
.org 0xbbbca
	pop {r0}	@ 000bbbca 01bc
.org 0xbbbcc
	bx r0	@ 000bbbcc 0047
