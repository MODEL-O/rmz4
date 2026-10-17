@ FUN_080becb0  entry 0x080becb0  size 36
.thumb
.org 0xbecb0
FUN_080becb0:
	push {lr}	@ 000becb0 00b5
.org 0xbecb2
	adds r2, r0, #0	@ 000becb2 021c
.org 0xbecb4
	adds r0, #180	@ 000becb4 b430
.org 0xbecb6
	ldr r1, [r0, #0]	@ 000becb6 0168
.org 0xbecb8
	adds r3, r2, #0	@ 000becb8 131c
.org 0xbecba
	adds r3, #184	@ 000becba b833
.org 0xbecbc
	ldrb r0, [r3, #0]	@ 000becbc 1878
.org 0xbecbe
	cmp r0, #0	@ 000becbe 0028
.org 0xbecc0
	beq.n 0xbecca	@ 000becc0 03d0
.org 0xbecc2
	adds r1, #201	@ 000becc2 c931
.org 0xbecc4
	movs r0, #0	@ 000becc4 0020
.org 0xbecc6
	strb r0, [r1, #0]	@ 000becc6 0870
.org 0xbecc8
	strb r0, [r3, #0]	@ 000becc8 1870
.org 0xbecca
	adds r0, r2, #0	@ 000becca 101c
.org 0xbeccc
	bl 0xbd3f8	@ 000beccc fef794fb
.org 0xbecd0
	pop {r0}	@ 000becd0 01bc
.org 0xbecd2
	bx r0	@ 000becd2 0047
