@ FUN_080b5c88  entry 0x080b5c88  size 36
.thumb
.org 0xb5c88
FUN_080b5c88:
	push {r4, lr}	@ 000b5c88 10b5
.org 0xb5c8a
	adds r3, r0, #0	@ 000b5c8a 031c
.org 0xb5c8c
	ldr r0, [r3, #40]	@ 000b5c8c 986a
.org 0xb5c8e
	adds r1, r0, #0	@ 000b5c8e 011c
.org 0xb5c90
	adds r1, #204	@ 000b5c90 cc31
.org 0xb5c92
	ldrh r2, [r1, #0]	@ 000b5c92 0a88
.org 0xb5c94
	movs r4, #0	@ 000b5c94 0024
.org 0xb5c96
	ldrsh r0, [r1, r4]	@ 000b5c96 085f
.org 0xb5c98
	cmp r0, #0	@ 000b5c98 0028
.org 0xb5c9a
	beq.n 0xb5ca0	@ 000b5c9a 01d0
.org 0xb5c9c
	subs r0, r2, #1	@ 000b5c9c 501e
.org 0xb5c9e
	strh r0, [r1, #0]	@ 000b5c9e 0880
.org 0xb5ca0
	adds r0, r3, #0	@ 000b5ca0 181c
.org 0xb5ca2
	bl 0x7f8ec	@ 000b5ca2 c9f723fe
.org 0xb5ca6
	pop {r4}	@ 000b5ca6 10bc
.org 0xb5ca8
	pop {r0}	@ 000b5ca8 01bc
.org 0xb5caa
	bx r0	@ 000b5caa 0047
