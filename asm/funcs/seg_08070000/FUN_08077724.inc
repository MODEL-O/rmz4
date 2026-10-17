@ FUN_08077724  entry 0x08077724  size 30
.thumb
.org 0x77724
FUN_08077724:
	push {r4, lr}	@ 00077724 10b5
.org 0x77726
	adds r4, r0, #0	@ 00077726 041c
.org 0x77728
	bl 0x79270	@ 00077728 01f0a2fd
.org 0x7772c
	ldr r1, [pc, #20]	@ 0007772c 0549
.org 0x7772e
	ldrb r0, [r4, #13]	@ 0007772e 607b
.org 0x77730
	lsls r0, r0, #2	@ 00077730 8000
.org 0x77732
	adds r0, r0, r1	@ 00077732 4018
.org 0x77734
	ldr r1, [r0, #0]	@ 00077734 0168
.org 0x77736
	adds r0, r4, #0	@ 00077736 201c
.org 0x77738
	bl 0x128f80	@ 00077738 b1f022fc
.org 0x7773c
	pop {r4}	@ 0007773c 10bc
.org 0x7773e
	pop {r0}	@ 0007773e 01bc
.org 0x77740
	bx r0	@ 00077740 0047
