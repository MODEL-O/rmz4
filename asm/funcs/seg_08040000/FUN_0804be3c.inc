@ FUN_0804be3c  entry 0x0804be3c  size 64
.thumb
.org 0x4be3c
FUN_0804be3c:
	push {r4, lr}	@ 0004be3c 10b5
.org 0x4be3e
	adds r4, r0, #0	@ 0004be3e 041c
.org 0x4be40
	bl 0x1cff0	@ 0004be40 d1f7d6f8
.org 0x4be44
	ldr r0, [r4, #84]	@ 0004be44 606d
.org 0x4be46
	ldr r1, [r4, #92]	@ 0004be46 e16d
.org 0x4be48
	adds r0, r0, r1	@ 0004be48 4018
.org 0x4be4a
	str r0, [r4, #84]	@ 0004be4a 6065
.org 0x4be4c
	ldr r0, [r4, #88]	@ 0004be4c a06d
.org 0x4be4e
	ldr r1, [r4, #96]	@ 0004be4e 216e
.org 0x4be50
	adds r0, r0, r1	@ 0004be50 4018
.org 0x4be52
	str r0, [r4, #88]	@ 0004be52 a065
.org 0x4be54
	adds r0, r4, #0	@ 0004be54 201c
.org 0x4be56
	adds r0, #115	@ 0004be56 7330
.org 0x4be58
	ldrb r0, [r0, #0]	@ 0004be58 0078
.org 0x4be5a
	cmp r0, #3	@ 0004be5a 0328
.org 0x4be5c
	bne.n 0x4be76	@ 0004be5c 0bd1
.org 0x4be5e
	ldr r1, [pc, #28]	@ 0004be5e 0749
.org 0x4be60
	ldrb r0, [r4, #9]	@ 0004be60 607a
.org 0x4be62
	lsls r0, r0, #2	@ 0004be62 8000
.org 0x4be64
	adds r0, r0, r1	@ 0004be64 4018
.org 0x4be66
	movs r1, #2	@ 0004be66 0221
.org 0x4be68
	str r1, [r4, #12]	@ 0004be68 e160
.org 0x4be6a
	ldr r0, [r0, #0]	@ 0004be6a 0068
.org 0x4be6c
	ldr r0, [r0, #8]	@ 0004be6c 8068
.org 0x4be6e
	str r0, [r4, #20]	@ 0004be6e 6061
.org 0x4be70
	adds r0, r4, #0	@ 0004be70 201c
.org 0x4be72
	bl 0x4be80	@ 0004be72 00f005f8
.org 0x4be76
	pop {r4}	@ 0004be76 10bc
.org 0x4be78
	pop {r0}	@ 0004be78 01bc
.org 0x4be7a
	bx r0	@ 0004be7a 0047
