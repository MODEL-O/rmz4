@ FUN_08073e00  entry 0x08073e00  size 42
.thumb
.org 0x73e00
FUN_08073e00:
	push {r4, lr}	@ 00073e00 10b5
.org 0x73e02
	sub sp, #8	@ 00073e02 82b0
.org 0x73e04
	adds r4, r0, #0	@ 00073e04 041c
.org 0x73e06
	ldr r1, [pc, #36]	@ 00073e06 0949
.org 0x73e08
	mov r0, sp	@ 00073e08 6846
.org 0x73e0a
	movs r2, #5	@ 00073e0a 0522
.org 0x73e0c
	bl 0x129258	@ 00073e0c b5f024fa
.org 0x73e10
	adds r4, #164	@ 00073e10 a434
.org 0x73e12
	movs r1, #0	@ 00073e12 0021
.org 0x73e14
	ldrsh r0, [r4, r1]	@ 00073e14 605e
.org 0x73e16
	cmp r0, #0	@ 00073e16 0028
.org 0x73e18
	bge.n 0x73e1c	@ 00073e18 00da
.org 0x73e1a
	adds r0, #15	@ 00073e1a 0f30
.org 0x73e1c
	asrs r0, r0, #4	@ 00073e1c 0011
.org 0x73e1e
	add r0, sp	@ 00073e1e 6844
.org 0x73e20
	ldrb r0, [r0, #0]	@ 00073e20 0078
.org 0x73e22
	add sp, #8	@ 00073e22 02b0
.org 0x73e24
	pop {r4}	@ 00073e24 10bc
.org 0x73e26
	pop {r1}	@ 00073e26 02bc
.org 0x73e28
	bx r1	@ 00073e28 0847
