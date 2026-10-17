@ FUN_0801c618  entry 0x0801c618  size 36
.thumb
.org 0x1c618
FUN_0801c618:
	push {lr}	@ 0001c618 00b5
.org 0x1c61a
	ldr r0, [pc, #32]	@ 0001c61a 0848
.org 0x1c61c
	ldr r2, [pc, #32]	@ 0001c61c 084a
.org 0x1c61e
	adds r1, r0, r2	@ 0001c61e 8118
.org 0x1c620
	ldrb r0, [r1, #0]	@ 0001c620 0878
.org 0x1c622
	adds r0, #1	@ 0001c622 0130
.org 0x1c624
	strb r0, [r1, #0]	@ 0001c624 0870
.org 0x1c626
	lsls r0, r0, #24	@ 0001c626 0006
.org 0x1c628
	lsrs r0, r0, #24	@ 0001c628 000e
.org 0x1c62a
	cmp r0, #44	@ 0001c62a 2c28
.org 0x1c62c
	bls.n 0x1c632	@ 0001c62c 01d9
.org 0x1c62e
	movs r0, #0	@ 0001c62e 0020
.org 0x1c630
	strb r0, [r1, #0]	@ 0001c630 0870
.org 0x1c632
	movs r0, #200	@ 0001c632 c820
.org 0x1c634
	bl 0x25d8	@ 0001c634 e5f7d0ff
.org 0x1c638
	pop {r0}	@ 0001c638 01bc
.org 0x1c63a
	bx r0	@ 0001c63a 0047
