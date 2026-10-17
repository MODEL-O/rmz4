@ FUN_080b55f8  entry 0x080b55f8  size 76
.thumb
.org 0xb55f8
FUN_080b55f8:
	push {lr}	@ 000b55f8 00b5
.org 0xb55fa
	sub sp, #8	@ 000b55fa 82b0
.org 0xb55fc
	adds r3, r0, #0	@ 000b55fc 031c
.org 0xb55fe
	ldr r0, [pc, #60]	@ 000b55fe 0f48
.org 0xb5600
	ldr r1, [r0, #4]	@ 000b5600 4168
.org 0xb5602
	ldr r0, [r0, #0]	@ 000b5602 0068
.org 0xb5604
	str r0, [sp, #0]	@ 000b5604 0090
.org 0xb5606
	str r1, [sp, #4]	@ 000b5606 0191
.org 0xb5608
	adds r0, r3, #0	@ 000b5608 181c
.org 0xb560a
	adds r0, #182	@ 000b560a b630
.org 0xb560c
	ldrb r2, [r0, #0]	@ 000b560c 0278
.org 0xb560e
	ldrb r1, [r3, #10]	@ 000b560e 997a
.org 0xb5610
	movs r0, #16	@ 000b5610 1020
.org 0xb5612
	ands r0, r1	@ 000b5612 0840
.org 0xb5614
	cmp r0, #0	@ 000b5614 0028
.org 0xb5616
	beq.n 0xb561c	@ 000b5616 01d0
.org 0xb5618
	movs r0, #1	@ 000b5618 0120
.org 0xb561a
	eors r2, r0	@ 000b561a 4240
.org 0xb561c
	lsls r0, r2, #2	@ 000b561c 9000
.org 0xb561e
	add r0, sp	@ 000b561e 6844
.org 0xb5620
	ldr r1, [r0, #0]	@ 000b5620 0168
.org 0xb5622
	lsls r1, r1, #8	@ 000b5622 0902
.org 0xb5624
	ldr r0, [r3, #84]	@ 000b5624 586d
.org 0xb5626
	adds r0, r0, r1	@ 000b5626 4018
.org 0xb5628
	ldr r1, [r3, #88]	@ 000b5628 996d
.org 0xb562a
	ldr r2, [pc, #20]	@ 000b562a 054a
.org 0xb562c
	adds r1, r1, r2	@ 000b562c 8918
.org 0xb562e
	bl 0x7c7c	@ 000b562e 52f725fb
.org 0xb5632
	lsls r0, r0, #16	@ 000b5632 0004
.org 0xb5634
	cmp r0, #0	@ 000b5634 0028
.org 0xb5636
	bne.n 0xb5644	@ 000b5636 05d1
.org 0xb5638
	movs r0, #0	@ 000b5638 0020
.org 0xb563a
	b.n 0xb5646	@ 000b563a 04e0
.org 0xb563c
	.byte 0x40,0x9e,0x12,0x08	@ 000b563c data
.org 0xb5640
	.byte 0x00,0xf8,0xff,0xff	@ 000b5640 data
