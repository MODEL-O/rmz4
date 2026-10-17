@ FUN_080e71b4  entry 0x080e71b4  size 38
.thumb
.org 0xe71b4
FUN_080e71b4:
	push {r4, lr}	@ 000e71b4 10b5
.org 0xe71b6
	adds r4, r0, #0	@ 000e71b6 041c
.org 0xe71b8
	ldrb r0, [r4, #13]	@ 000e71b8 607b
.org 0xe71ba
	cmp r0, #2	@ 000e71ba 0228
.org 0xe71bc
	beq.n 0xe71ce	@ 000e71bc 07d0
.org 0xe71be
	ldr r0, [pc, #28]	@ 000e71be 0748
.org 0xe71c0
	ldrb r1, [r4, #13]	@ 000e71c0 617b
.org 0xe71c2
	lsls r1, r1, #2	@ 000e71c2 8900
.org 0xe71c4
	adds r1, r1, r0	@ 000e71c4 0918
.org 0xe71c6
	ldr r1, [r1, #0]	@ 000e71c6 0968
.org 0xe71c8
	adds r0, r4, #0	@ 000e71c8 201c
.org 0xe71ca
	bl 0x128f80	@ 000e71ca 41f0d9fe
.org 0xe71ce
	adds r0, r4, #0	@ 000e71ce 201c
.org 0xe71d0
	bl 0x1cff0	@ 000e71d0 35f70eff
.org 0xe71d4
	pop {r4}	@ 000e71d4 10bc
.org 0xe71d6
	pop {r0}	@ 000e71d6 01bc
.org 0xe71d8
	bx r0	@ 000e71d8 0047
