@ FUN_080cadc0  entry 0x080cadc0  size 106
.thumb
.org 0xcadc0
FUN_080cadc0:
	push {r4, r5, lr}	@ 000cadc0 30b5
.org 0xcadc2
	adds r4, r0, #0	@ 000cadc2 041c
.org 0xcadc4
	ldr r0, [r4, #84]	@ 000cadc4 606d
.org 0xcadc6
	ldr r5, [r4, #92]	@ 000cadc6 e56d
.org 0xcadc8
	adds r0, r0, r5	@ 000cadc8 4019
.org 0xcadca
	str r0, [r4, #84]	@ 000cadca 6065
.org 0xcadcc
	ldr r0, [r4, #88]	@ 000cadcc a06d
.org 0xcadce
	ldr r3, [r4, #96]	@ 000cadce 236e
.org 0xcadd0
	adds r0, r0, r3	@ 000cadd0 c018
.org 0xcadd2
	str r0, [r4, #88]	@ 000cadd2 a065
.org 0xcadd4
	adds r2, r4, #0	@ 000cadd4 221c
.org 0xcadd6
	adds r2, #180	@ 000cadd6 b432
.org 0xcadd8
	ldr r1, [r2, #0]	@ 000cadd8 1168
.org 0xcadda
	ldr r0, [pc, #80]	@ 000cadda 1448
.org 0xcaddc
	cmp r1, r0	@ 000caddc 8142
.org 0xcadde
	bgt.n 0xcadf2	@ 000cadde 08dc
.org 0xcade0
	ldr r0, [r4, #100]	@ 000cade0 606e
.org 0xcade2
	adds r0, r5, r0	@ 000cade2 2818
.org 0xcade4
	str r0, [r4, #92]	@ 000cade4 e065
.org 0xcade6
	ldr r0, [r4, #104]	@ 000cade6 a06e
.org 0xcade8
	adds r0, r3, r0	@ 000cade8 1818
.org 0xcadea
	str r0, [r4, #96]	@ 000cadea 2066
.org 0xcadec
	ldr r0, [r2, #0]	@ 000cadec 1068
.org 0xcadee
	adds r0, #16	@ 000cadee 1030
.org 0xcadf0
	str r0, [r2, #0]	@ 000cadf0 1060
.org 0xcadf2
	ldr r0, [r4, #84]	@ 000cadf2 606d
.org 0xcadf4
	ldr r1, [r4, #88]	@ 000cadf4 a16d
.org 0xcadf6
	bl 0x7c7c	@ 000cadf6 3cf741ff
.org 0xcadfa
	lsls r0, r0, #16	@ 000cadfa 0004
.org 0xcadfc
	cmp r0, #0	@ 000cadfc 0028
.org 0xcadfe
	bne.n 0xcae06	@ 000cadfe 02d1
.org 0xcae00
	ldrb r0, [r4, #18]	@ 000cae00 a07c
.org 0xcae02
	cmp r0, #0	@ 000cae02 0028
.org 0xcae04
	bne.n 0xcae18	@ 000cae04 08d1
.org 0xcae06
	ldr r1, [pc, #40]	@ 000cae06 0a49
.org 0xcae08
	ldrb r0, [r4, #9]	@ 000cae08 607a
.org 0xcae0a
	lsls r0, r0, #2	@ 000cae0a 8000
.org 0xcae0c
	adds r0, r0, r1	@ 000cae0c 4018
.org 0xcae0e
	movs r1, #2	@ 000cae0e 0221
.org 0xcae10
	str r1, [r4, #12]	@ 000cae10 e160
.org 0xcae12
	ldr r0, [r0, #0]	@ 000cae12 0068
.org 0xcae14
	ldr r0, [r0, #8]	@ 000cae14 8068
.org 0xcae16
	str r0, [r4, #20]	@ 000cae16 6061
.org 0xcae18
	adds r0, r4, #0	@ 000cae18 201c
.org 0xcae1a
	bl 0x1cff0	@ 000cae1a 52f7e9f8
.org 0xcae1e
	ldrb r0, [r4, #18]	@ 000cae1e a07c
.org 0xcae20
	subs r0, #1	@ 000cae20 0138
.org 0xcae22
	strb r0, [r4, #18]	@ 000cae22 a074
.org 0xcae24
	pop {r4, r5}	@ 000cae24 30bc
.org 0xcae26
	pop {r0}	@ 000cae26 01bc
.org 0xcae28
	bx r0	@ 000cae28 0047
