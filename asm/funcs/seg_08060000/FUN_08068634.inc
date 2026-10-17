@ FUN_08068634  entry 0x08068634  size 64
.thumb
.org 0x68634
FUN_08068634:
	push {r4, lr}	@ 00068634 10b5
.org 0x68636
	adds r4, r0, #0	@ 00068636 041c
.org 0x68638
	ldrb r0, [r4, #14]	@ 00068638 a07b
.org 0x6863a
	cmp r0, #0	@ 0006863a 0028
.org 0x6863c
	bne.n 0x68656	@ 0006863c 0bd1
.org 0x6863e
	ldr r1, [pc, #52]	@ 0006863e 0d49
.org 0x68640
	adds r0, r4, #0	@ 00068640 201c
.org 0x68642
	bl 0x1cf00	@ 00068642 b4f75dfc
.org 0x68646
	adds r0, r4, #0	@ 00068646 201c
.org 0x68648
	adds r0, #116	@ 00068648 7430
.org 0x6864a
	ldr r1, [pc, #44]	@ 0006864a 0b49
.org 0x6864c
	bl 0x5784	@ 0006864c 9df79af8
.org 0x68650
	ldrb r0, [r4, #14]	@ 00068650 a07b
.org 0x68652
	adds r0, #1	@ 00068652 0130
.org 0x68654
	strb r0, [r4, #14]	@ 00068654 a073
.org 0x68656
	adds r0, r4, #0	@ 00068656 201c
.org 0x68658
	bl 0x1cff0	@ 00068658 b4f7cafc
.org 0x6865c
	adds r0, r4, #0	@ 0006865c 201c
.org 0x6865e
	adds r0, #115	@ 0006865e 7330
.org 0x68660
	ldrb r0, [r0, #0]	@ 00068660 0078
.org 0x68662
	cmp r0, #3	@ 00068662 0328
.org 0x68664
	bne.n 0x6866e	@ 00068664 03d1
.org 0x68666
	movs r1, #0	@ 00068666 0021
.org 0x68668
	movs r0, #37	@ 00068668 2520
.org 0x6866a
	strb r0, [r4, #13]	@ 0006866a 6073
.org 0x6866c
	strb r1, [r4, #14]	@ 0006866c a173
.org 0x6866e
	pop {r4}	@ 0006866e 10bc
.org 0x68670
	pop {r0}	@ 00068670 01bc
.org 0x68672
	bx r0	@ 00068672 0047
