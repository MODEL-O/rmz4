@ FUN_080ddd48  entry 0x080ddd48  size 68
.thumb
.org 0xddd48
FUN_080ddd48:
	push {r4, lr}	@ 000ddd48 10b5
.org 0xddd4a
	adds r4, r0, #0	@ 000ddd4a 041c
.org 0xddd4c
	bl 0x1cff0	@ 000ddd4c 3ff750f9
.org 0xddd50
	ldr r0, [r4, #84]	@ 000ddd50 606d
.org 0xddd52
	ldr r1, [r4, #92]	@ 000ddd52 e16d
.org 0xddd54
	adds r0, r0, r1	@ 000ddd54 4018
.org 0xddd56
	str r0, [r4, #84]	@ 000ddd56 6065
.org 0xddd58
	ldr r1, [r4, #88]	@ 000ddd58 a16d
.org 0xddd5a
	ldr r2, [r4, #96]	@ 000ddd5a 226e
.org 0xddd5c
	adds r1, r1, r2	@ 000ddd5c 8918
.org 0xddd5e
	str r1, [r4, #88]	@ 000ddd5e a165
.org 0xddd60
	adds r2, #64	@ 000ddd60 4032
.org 0xddd62
	str r2, [r4, #96]	@ 000ddd62 2266
.org 0xddd64
	bl 0x7c7c	@ 000ddd64 29f78aff
.org 0xddd68
	lsls r0, r0, #16	@ 000ddd68 0004
.org 0xddd6a
	cmp r0, #0	@ 000ddd6a 0028
.org 0xddd6c
	beq.n 0xddd86	@ 000ddd6c 0bd0
.org 0xddd6e
	ldr r1, [pc, #28]	@ 000ddd6e 0749
.org 0xddd70
	ldrb r0, [r4, #9]	@ 000ddd70 607a
.org 0xddd72
	lsls r0, r0, #2	@ 000ddd72 8000
.org 0xddd74
	adds r0, r0, r1	@ 000ddd74 4018
.org 0xddd76
	movs r1, #2	@ 000ddd76 0221
.org 0xddd78
	str r1, [r4, #12]	@ 000ddd78 e160
.org 0xddd7a
	ldr r0, [r0, #0]	@ 000ddd7a 0068
.org 0xddd7c
	ldr r0, [r0, #8]	@ 000ddd7c 8068
.org 0xddd7e
	str r0, [r4, #20]	@ 000ddd7e 6061
.org 0xddd80
	adds r0, r4, #0	@ 000ddd80 201c
.org 0xddd82
	bl 0xdd6e0	@ 000ddd82 fff7adfc
.org 0xddd86
	pop {r4}	@ 000ddd86 10bc
.org 0xddd88
	pop {r0}	@ 000ddd88 01bc
.org 0xddd8a
	bx r0	@ 000ddd8a 0047
