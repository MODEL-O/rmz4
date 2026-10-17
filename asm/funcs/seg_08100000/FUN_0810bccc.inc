@ FUN_0810bccc  entry 0x0810bccc  size 50
.thumb
.org 0x10bccc
FUN_0810bccc:
	push {r4, lr}	@ 0010bccc 10b5
.org 0x10bcce
	adds r4, r0, #0	@ 0010bcce 041c
.org 0x10bcd0
	ldr r1, [pc, #44]	@ 0010bcd0 0b49
.org 0x10bcd2
	ldrb r0, [r4, #16]	@ 0010bcd2 207c
.org 0x10bcd4
	lsls r0, r0, #2	@ 0010bcd4 8000
.org 0x10bcd6
	adds r0, r0, r1	@ 0010bcd6 4018
.org 0x10bcd8
	ldr r1, [r0, #0]	@ 0010bcd8 0168
.org 0x10bcda
	adds r0, r4, #0	@ 0010bcda 201c
.org 0x10bcdc
	bl 0x128f80	@ 0010bcdc 1df050f9
.org 0x10bce0
	ldr r1, [pc, #32]	@ 0010bce0 0849
.org 0x10bce2
	ldrb r0, [r4, #9]	@ 0010bce2 607a
.org 0x10bce4
	lsls r0, r0, #2	@ 0010bce4 8000
.org 0x10bce6
	adds r0, r0, r1	@ 0010bce6 4018
.org 0x10bce8
	movs r1, #1	@ 0010bce8 0121
.org 0x10bcea
	str r1, [r4, #12]	@ 0010bcea e160
.org 0x10bcec
	ldr r0, [r0, #0]	@ 0010bcec 0068
.org 0x10bcee
	ldr r0, [r0, #4]	@ 0010bcee 4068
.org 0x10bcf0
	str r0, [r4, #20]	@ 0010bcf0 6061
.org 0x10bcf2
	adds r0, r4, #0	@ 0010bcf2 201c
.org 0x10bcf4
	bl 0x10bd08	@ 0010bcf4 00f008f8
.org 0x10bcf8
	pop {r4}	@ 0010bcf8 10bc
.org 0x10bcfa
	pop {r0}	@ 0010bcfa 01bc
.org 0x10bcfc
	bx r0	@ 0010bcfc 0047
