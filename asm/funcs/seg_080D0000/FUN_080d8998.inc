@ FUN_080d8998  entry 0x080d8998  size 66
.thumb
.org 0xd8998
FUN_080d8998:
	push {r4, r5, r6, r7, lr}	@ 000d8998 f0b5
.org 0xd899a
	sub sp, #8	@ 000d899a 82b0
.org 0xd899c
	ldrb r1, [r0, #10]	@ 000d899c 817a
.org 0xd899e
	lsrs r1, r1, #4	@ 000d899e 0909
.org 0xd89a0
	movs r2, #1	@ 000d89a0 0122
.org 0xd89a2
	ands r1, r2	@ 000d89a2 1140
.org 0xd89a4
	adds r2, r0, #0	@ 000d89a4 021c
.org 0xd89a6
	adds r2, #116	@ 000d89a6 7432
.org 0xd89a8
	ldrb r3, [r2, #0]	@ 000d89a8 1378
.org 0xd89aa
	ldr r2, [r0, #84]	@ 000d89aa 426d
.org 0xd89ac
	str r2, [sp, #0]	@ 000d89ac 0092
.org 0xd89ae
	ldr r0, [r0, #88]	@ 000d89ae 806d
.org 0xd89b0
	str r0, [sp, #4]	@ 000d89b0 0190
.org 0xd89b2
	lsls r1, r1, #4	@ 000d89b2 0901
.org 0xd89b4
	orrs r3, r1	@ 000d89b4 0b43
.org 0xd89b6
	lsls r6, r3, #24	@ 000d89b6 1e06
.org 0xd89b8
	movs r5, #0	@ 000d89b8 0025
.org 0xd89ba
	ldr r7, [pc, #32]	@ 000d89ba 084f
.org 0xd89bc
	movs r4, #2	@ 000d89bc 0224
.org 0xd89be
	adds r1, r5, r7	@ 000d89be e919
.org 0xd89c0
	mov r0, sp	@ 000d89c0 6846
.org 0xd89c2
	movs r2, #0	@ 000d89c2 0022
.org 0xd89c4
	lsrs r3, r6, #24	@ 000d89c4 330e
.org 0xd89c6
	bl 0xd4c8c	@ 000d89c6 fcf761f9
.org 0xd89ca
	adds r5, #28	@ 000d89ca 1c35
.org 0xd89cc
	subs r4, #1	@ 000d89cc 013c
.org 0xd89ce
	cmp r4, #0	@ 000d89ce 002c
.org 0xd89d0
	bge.n 0xd89be	@ 000d89d0 f5da
.org 0xd89d2
	add sp, #8	@ 000d89d2 02b0
.org 0xd89d4
	pop {r4, r5, r6, r7}	@ 000d89d4 f0bc
.org 0xd89d6
	pop {r0}	@ 000d89d6 01bc
.org 0xd89d8
	bx r0	@ 000d89d8 0047
