@ FUN_080d0c50  entry 0x080d0c50  size 50
.thumb
.org 0xd0c50
FUN_080d0c50:
	push {r4, r5, r6, lr}	@ 000d0c50 70b5
.org 0xd0c52
	adds r6, r0, #0	@ 000d0c52 061c
.org 0xd0c54
	ldr r0, [pc, #44]	@ 000d0c54 0b48
.org 0xd0c56
	ldr r4, [r0, #0]	@ 000d0c56 0468
.org 0xd0c58
	adds r0, r4, #0	@ 000d0c58 201c
.org 0xd0c5a
	bl 0x54c4	@ 000d0c5a 34f733fc
.org 0xd0c5e
	ldr r0, [r4, #12]	@ 000d0c5e e068
.org 0xd0c60
	ldr r0, [r0, #4]	@ 000d0c60 4068
.org 0xd0c62
	str r0, [r4, #12]	@ 000d0c62 e060
.org 0xd0c64
	adds r1, r4, #0	@ 000d0c64 211c
.org 0xd0c66
	adds r1, #20	@ 000d0c66 1431
.org 0xd0c68
	cmp r0, r1	@ 000d0c68 8842
.org 0xd0c6a
	beq.n 0xd0c7c	@ 000d0c6a 07d0
.org 0xd0c6c
	adds r5, r1, #0	@ 000d0c6c 0d1c
.org 0xd0c6e
	bl 0x128f94	@ 000d0c6e 58f091f9
.org 0xd0c72
	ldr r0, [r4, #12]	@ 000d0c72 e068
.org 0xd0c74
	ldr r0, [r0, #4]	@ 000d0c74 4068
.org 0xd0c76
	str r0, [r4, #12]	@ 000d0c76 e060
.org 0xd0c78
	cmp r0, r5	@ 000d0c78 a842
.org 0xd0c7a
	bne.n 0xd0c6e	@ 000d0c7a f8d1
.org 0xd0c7c
	pop {r4, r5, r6}	@ 000d0c7c 70bc
.org 0xd0c7e
	pop {r0}	@ 000d0c7e 01bc
.org 0xd0c80
	bx r0	@ 000d0c80 0047
