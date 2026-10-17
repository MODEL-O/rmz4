@ FUN_080b874c  entry 0x080b874c  size 42
.thumb
.org 0xb874c
FUN_080b874c:
	push {lr}	@ 000b874c 00b5
.org 0xb874e
	adds r2, r0, #0	@ 000b874e 021c
.org 0xb8750
	ldr r0, [r2, #20]	@ 000b8750 5069
.org 0xb8752
	movs r1, #1	@ 000b8752 0121
.org 0xb8754
	ands r0, r1	@ 000b8754 0840
.org 0xb8756
	cmp r0, #0	@ 000b8756 0028
.org 0xb8758
	beq.n 0xb8772	@ 000b8758 0bd0
.org 0xb875a
	ldr r0, [r2, #12]	@ 000b875a d068
.org 0xb875c
	ldr r0, [r0, #44]	@ 000b875c c06a
.org 0xb875e
	ldr r2, [r2, #44]	@ 000b875e d26a
.org 0xb8760
	movs r3, #0	@ 000b8760 0023
.org 0xb8762
	ldr r1, [r0, #84]	@ 000b8762 416d
.org 0xb8764
	ldr r0, [r2, #84]	@ 000b8764 506d
.org 0xb8766
	cmp r1, r0	@ 000b8766 8142
.org 0xb8768
	ble.n 0xb876c	@ 000b8768 00dd
.org 0xb876a
	movs r3, #1	@ 000b876a 0123
.org 0xb876c
	adds r0, r2, #0	@ 000b876c 101c
.org 0xb876e
	adds r0, #188	@ 000b876e bc30
.org 0xb8770
	strb r3, [r0, #0]	@ 000b8770 0370
.org 0xb8772
	pop {r0}	@ 000b8772 01bc
.org 0xb8774
	bx r0	@ 000b8774 0047
