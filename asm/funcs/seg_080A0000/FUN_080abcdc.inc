@ FUN_080abcdc  entry 0x080abcdc  size 78
.thumb
.org 0xabcdc
FUN_080abcdc:
	push {r4, r5, lr}	@ 000abcdc 30b5
.org 0xabcde
	adds r4, r0, #0	@ 000abcde 041c
.org 0xabce0
	ldrb r0, [r4, #15]	@ 000abce0 e07b
.org 0xabce2
	cmp r0, #0	@ 000abce2 0028
.org 0xabce4
	bne.n 0xabd00	@ 000abce4 0cd1
.org 0xabce6
	adds r0, r4, #0	@ 000abce6 201c
.org 0xabce8
	bl 0xac2cc	@ 000abce8 00f0f0fa
.org 0xabcec
	adds r0, r4, #0	@ 000abcec 201c
.org 0xabcee
	adds r0, #116	@ 000abcee 7430
.org 0xabcf0
	ldr r1, [pc, #56]	@ 000abcf0 0e49
.org 0xabcf2
	bl 0x5784	@ 000abcf2 59f747fd
.org 0xabcf6
	movs r0, #4	@ 000abcf6 0420
.org 0xabcf8
	strb r0, [r4, #18]	@ 000abcf8 a074
.org 0xabcfa
	ldrb r0, [r4, #15]	@ 000abcfa e07b
.org 0xabcfc
	adds r0, #1	@ 000abcfc 0130
.org 0xabcfe
	strb r0, [r4, #15]	@ 000abcfe e073
.org 0xabd00
	ldrb r0, [r4, #18]	@ 000abd00 a07c
.org 0xabd02
	subs r0, #1	@ 000abd02 0138
.org 0xabd04
	strb r0, [r4, #18]	@ 000abd04 a074
.org 0xabd06
	ldr r1, [pc, #40]	@ 000abd06 0a49
.org 0xabd08
	movs r5, #0	@ 000abd08 0025
.org 0xabd0a
	movs r0, #16	@ 000abd0a 1020
.org 0xabd0c
	strh r0, [r1, #4]	@ 000abd0c 8880
.org 0xabd0e
	adds r0, r4, #0	@ 000abd0e 201c
.org 0xabd10
	bl 0xac300	@ 000abd10 00f0f6fa
.org 0xabd14
	ldrb r0, [r4, #18]	@ 000abd14 a07c
.org 0xabd16
	cmp r0, #0	@ 000abd16 0028
.org 0xabd18
	bne.n 0xabd24	@ 000abd18 04d1
.org 0xabd1a
	ldrb r0, [r4, #13]	@ 000abd1a 607b
.org 0xabd1c
	adds r0, #1	@ 000abd1c 0130
.org 0xabd1e
	strb r0, [r4, #13]	@ 000abd1e 6073
.org 0xabd20
	strb r5, [r4, #14]	@ 000abd20 a573
.org 0xabd22
	strb r5, [r4, #15]	@ 000abd22 e573
.org 0xabd24
	pop {r4, r5}	@ 000abd24 30bc
.org 0xabd26
	pop {r0}	@ 000abd26 01bc
.org 0xabd28
	bx r0	@ 000abd28 0047
