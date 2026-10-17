@ FUN_080d03b8  entry 0x080d03b8  size 36
.thumb
.org 0xd03b8
FUN_080d03b8:
	push {r4, lr}	@ 000d03b8 10b5
.org 0xd03ba
	adds r3, r0, #0	@ 000d03ba 031c
.org 0xd03bc
	ldr r0, [r3, #40]	@ 000d03bc 986a
.org 0xd03be
	adds r1, r0, #0	@ 000d03be 011c
.org 0xd03c0
	adds r1, #204	@ 000d03c0 cc31
.org 0xd03c2
	ldrh r2, [r1, #0]	@ 000d03c2 0a88
.org 0xd03c4
	movs r4, #0	@ 000d03c4 0024
.org 0xd03c6
	ldrsh r0, [r1, r4]	@ 000d03c6 085f
.org 0xd03c8
	cmp r0, #0	@ 000d03c8 0028
.org 0xd03ca
	beq.n 0xd03d0	@ 000d03ca 01d0
.org 0xd03cc
	subs r0, r2, #1	@ 000d03cc 501e
.org 0xd03ce
	strh r0, [r1, #0]	@ 000d03ce 0880
.org 0xd03d0
	adds r0, r3, #0	@ 000d03d0 181c
.org 0xd03d2
	bl 0xbd3f8	@ 000d03d2 edf711f8
.org 0xd03d6
	pop {r4}	@ 000d03d6 10bc
.org 0xd03d8
	pop {r0}	@ 000d03d8 01bc
.org 0xd03da
	bx r0	@ 000d03da 0047
