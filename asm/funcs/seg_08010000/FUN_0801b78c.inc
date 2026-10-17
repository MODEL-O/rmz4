@ FUN_0801b78c  entry 0x0801b78c  size 40
.thumb
.org 0x1b78c
FUN_0801b78c:
	push {lr}	@ 0001b78c 00b5
.org 0x1b78e
	adds r3, r0, #0	@ 0001b78e 031c
.org 0x1b790
	ldrb r2, [r3, #14]	@ 0001b790 9a7b
.org 0x1b792
	cmp r2, #0	@ 0001b792 002a
.org 0x1b794
	bne.n 0x1b7b0	@ 0001b794 0cd1
.org 0x1b796
	ldr r1, [pc, #28]	@ 0001b796 0749
.org 0x1b798
	ldr r0, [pc, #28]	@ 0001b798 0748
.org 0x1b79a
	strh r0, [r1, #0]	@ 0001b79a 0880
.org 0x1b79c
	ldr r0, [pc, #28]	@ 0001b79c 0748
.org 0x1b79e
	strh r0, [r1, #2]	@ 0001b79e 4880
.org 0x1b7a0
	ldr r0, [pc, #28]	@ 0001b7a0 0748
.org 0x1b7a2
	ldr r1, [pc, #32]	@ 0001b7a2 0849
.org 0x1b7a4
	adds r0, r0, r1	@ 0001b7a4 4018
.org 0x1b7a6
	movs r1, #170	@ 0001b7a6 aa21
.org 0x1b7a8
	lsls r1, r1, #11	@ 0001b7a8 c902
.org 0x1b7aa
	str r1, [r0, #0]	@ 0001b7aa 0160
.org 0x1b7ac
	adds r0, r2, #1	@ 0001b7ac 501c
.org 0x1b7ae
	strb r0, [r3, #14]	@ 0001b7ae 9873
.org 0x1b7b0
	pop {r0}	@ 0001b7b0 01bc
.org 0x1b7b2
	bx r0	@ 0001b7b2 0047
