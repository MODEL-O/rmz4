@ FUN_080aea5c  entry 0x080aea5c  size 42
.thumb
.org 0xaea5c
FUN_080aea5c:
	push {lr}	@ 000aea5c 00b5
.org 0xaea5e
	adds r2, r0, #0	@ 000aea5e 021c
.org 0xaea60
	ldr r0, [r2, #20]	@ 000aea60 5069
.org 0xaea62
	movs r1, #1	@ 000aea62 0121
.org 0xaea64
	ands r0, r1	@ 000aea64 0840
.org 0xaea66
	cmp r0, #0	@ 000aea66 0028
.org 0xaea68
	beq.n 0xaea82	@ 000aea68 0bd0
.org 0xaea6a
	ldr r0, [r2, #12]	@ 000aea6a d068
.org 0xaea6c
	ldr r0, [r0, #44]	@ 000aea6c c06a
.org 0xaea6e
	ldr r2, [r2, #44]	@ 000aea6e d26a
.org 0xaea70
	movs r3, #0	@ 000aea70 0023
.org 0xaea72
	ldr r1, [r0, #84]	@ 000aea72 416d
.org 0xaea74
	ldr r0, [r2, #84]	@ 000aea74 506d
.org 0xaea76
	cmp r1, r0	@ 000aea76 8142
.org 0xaea78
	ble.n 0xaea7c	@ 000aea78 00dd
.org 0xaea7a
	movs r3, #1	@ 000aea7a 0123
.org 0xaea7c
	adds r0, r2, #0	@ 000aea7c 101c
.org 0xaea7e
	adds r0, #188	@ 000aea7e bc30
.org 0xaea80
	strb r3, [r0, #0]	@ 000aea80 0370
.org 0xaea82
	pop {r0}	@ 000aea82 01bc
.org 0xaea84
	bx r0	@ 000aea84 0047
