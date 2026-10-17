@ FUN_080b6a14  entry 0x080b6a14  size 36
.thumb
.org 0xb6a14
FUN_080b6a14:
	push {r4, lr}	@ 000b6a14 10b5
.org 0xb6a16
	adds r3, r0, #0	@ 000b6a16 031c
.org 0xb6a18
	ldr r0, [r3, #40]	@ 000b6a18 986a
.org 0xb6a1a
	adds r1, r0, #0	@ 000b6a1a 011c
.org 0xb6a1c
	adds r1, #204	@ 000b6a1c cc31
.org 0xb6a1e
	ldrh r2, [r1, #0]	@ 000b6a1e 0a88
.org 0xb6a20
	movs r4, #0	@ 000b6a20 0024
.org 0xb6a22
	ldrsh r0, [r1, r4]	@ 000b6a22 085f
.org 0xb6a24
	cmp r0, #0	@ 000b6a24 0028
.org 0xb6a26
	beq.n 0xb6a2c	@ 000b6a26 01d0
.org 0xb6a28
	subs r0, r2, #1	@ 000b6a28 501e
.org 0xb6a2a
	strh r0, [r1, #0]	@ 000b6a2a 0880
.org 0xb6a2c
	adds r0, r3, #0	@ 000b6a2c 181c
.org 0xb6a2e
	bl 0x7f8ec	@ 000b6a2e c8f75dff
.org 0xb6a32
	pop {r4}	@ 000b6a32 10bc
.org 0xb6a34
	pop {r0}	@ 000b6a34 01bc
.org 0xb6a36
	bx r0	@ 000b6a36 0047
