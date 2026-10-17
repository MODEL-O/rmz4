@ FUN_080aaa44  entry 0x080aaa44  size 62
.thumb
.org 0xaaa44
FUN_080aaa44:
	push {lr}	@ 000aaa44 00b5
.org 0xaaa46
	sub sp, #8	@ 000aaa46 82b0
.org 0xaaa48
	adds r2, r0, #0	@ 000aaa48 021c
.org 0xaaa4a
	ldrb r1, [r2, #10]	@ 000aaa4a 917a
.org 0xaaa4c
	movs r0, #16	@ 000aaa4c 1020
.org 0xaaa4e
	ands r0, r1	@ 000aaa4e 0840
.org 0xaaa50
	cmp r0, #0	@ 000aaa50 0028
.org 0xaaa52
	bne.n 0xaaa5c	@ 000aaa52 03d1
.org 0xaaa54
	ldr r0, [r2, #84]	@ 000aaa54 506d
.org 0xaaa56
	movs r1, #152	@ 000aaa56 9821
.org 0xaaa58
	lsls r1, r1, #5	@ 000aaa58 4901
.org 0xaaa5a
	b.n 0xaaa60	@ 000aaa5a 01e0
.org 0xaaa5c
	ldr r0, [r2, #84]	@ 000aaa5c 506d
.org 0xaaa5e
	ldr r1, [pc, #36]	@ 000aaa5e 0949
.org 0xaaa60
	adds r0, r0, r1	@ 000aaa60 4018
.org 0xaaa62
	str r0, [sp, #0]	@ 000aaa62 0090
.org 0xaaa64
	ldr r0, [r2, #88]	@ 000aaa64 906d
.org 0xaaa66
	ldr r1, [pc, #32]	@ 000aaa66 0849
.org 0xaaa68
	adds r0, r0, r1	@ 000aaa68 4018
.org 0xaaa6a
	str r0, [sp, #4]	@ 000aaa6a 0190
.org 0xaaa6c
	ldr r1, [pc, #28]	@ 000aaa6c 0749
.org 0xaaa6e
	ldrb r2, [r2, #10]	@ 000aaa6e 927a
.org 0xaaa70
	lsrs r2, r2, #4	@ 000aaa70 1209
.org 0xaaa72
	movs r0, #1	@ 000aaa72 0120
.org 0xaaa74
	ands r2, r0	@ 000aaa74 0240
.org 0xaaa76
	mov r0, sp	@ 000aaa76 6846
.org 0xaaa78
	bl 0xe2914	@ 000aaa78 37f04cff
.org 0xaaa7c
	add sp, #8	@ 000aaa7c 02b0
.org 0xaaa7e
	pop {r0}	@ 000aaa7e 01bc
.org 0xaaa80
	bx r0	@ 000aaa80 0047
