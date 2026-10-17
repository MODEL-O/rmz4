@ FUN_080b976c  entry 0x080b976c  size 36
.thumb
.org 0xb976c
FUN_080b976c:
	push {r4, lr}	@ 000b976c 10b5
.org 0xb976e
	adds r3, r0, #0	@ 000b976e 031c
.org 0xb9770
	ldr r0, [r3, #40]	@ 000b9770 986a
.org 0xb9772
	adds r1, r0, #0	@ 000b9772 011c
.org 0xb9774
	adds r1, #204	@ 000b9774 cc31
.org 0xb9776
	ldrh r2, [r1, #0]	@ 000b9776 0a88
.org 0xb9778
	movs r4, #0	@ 000b9778 0024
.org 0xb977a
	ldrsh r0, [r1, r4]	@ 000b977a 085f
.org 0xb977c
	cmp r0, #0	@ 000b977c 0028
.org 0xb977e
	beq.n 0xb9784	@ 000b977e 01d0
.org 0xb9780
	subs r0, r2, #1	@ 000b9780 501e
.org 0xb9782
	strh r0, [r1, #0]	@ 000b9782 0880
.org 0xb9784
	adds r0, r3, #0	@ 000b9784 181c
.org 0xb9786
	bl 0x7f8ec	@ 000b9786 c6f7b1f8
.org 0xb978a
	pop {r4}	@ 000b978a 10bc
.org 0xb978c
	pop {r0}	@ 000b978c 01bc
.org 0xb978e
	bx r0	@ 000b978e 0047
