@ FUN_08042bc8  entry 0x08042bc8  size 46
.thumb
.org 0x42bc8
FUN_08042bc8:
	push {r4, lr}	@ 00042bc8 10b5
.org 0x42bca
	adds r4, r0, #0	@ 00042bca 041c
.org 0x42bcc
	bl 0x1cc9c	@ 00042bcc daf766f8
.org 0x42bd0
	adds r0, r4, #0	@ 00042bd0 201c
.org 0x42bd2
	bl 0x1ceec	@ 00042bd2 daf78bf9
.org 0x42bd6
	ldrb r1, [r4, #10]	@ 00042bd6 a17a
.org 0x42bd8
	movs r0, #1	@ 00042bd8 0120
.org 0x42bda
	orrs r0, r1	@ 00042bda 0843
.org 0x42bdc
	movs r1, #2	@ 00042bdc 0221
.org 0x42bde
	orrs r0, r1	@ 00042bde 0843
.org 0x42be0
	strb r0, [r4, #10]	@ 00042be0 a072
.org 0x42be2
	ldr r1, [pc, #20]	@ 00042be2 0549
.org 0x42be4
	adds r0, r4, #0	@ 00042be4 201c
.org 0x42be6
	bl 0x1cf00	@ 00042be6 daf78bf9
.org 0x42bea
	adds r4, #37	@ 00042bea 2534
.org 0x42bec
	movs r0, #18	@ 00042bec 1220
.org 0x42bee
	strb r0, [r4, #0]	@ 00042bee 2070
.org 0x42bf0
	pop {r4}	@ 00042bf0 10bc
.org 0x42bf2
	pop {r0}	@ 00042bf2 01bc
.org 0x42bf4
	bx r0	@ 00042bf4 0047
