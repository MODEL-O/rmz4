@ FUN_080c354c  entry 0x080c354c  size 64
.thumb
.org 0xc354c
FUN_080c354c:
	push {lr}	@ 000c354c 00b5
.org 0xc354e
	adds r2, r0, #0	@ 000c354e 021c
.org 0xc3550
	adds r0, #140	@ 000c3550 8c30
.org 0xc3552
	ldr r0, [r0, #0]	@ 000c3552 0068
.org 0xc3554
	movs r1, #128	@ 000c3554 8021
.org 0xc3556
	lsls r1, r1, #2	@ 000c3556 8900
.org 0xc3558
	ands r0, r1	@ 000c3558 0840
.org 0xc355a
	cmp r0, #0	@ 000c355a 0028
.org 0xc355c
	beq.n 0xc357c	@ 000c355c 0ed0
.org 0xc355e
	ldr r1, [pc, #24]	@ 000c355e 0649
.org 0xc3560
	ldrb r0, [r2, #9]	@ 000c3560 507a
.org 0xc3562
	lsls r0, r0, #2	@ 000c3562 8000
.org 0xc3564
	adds r0, r0, r1	@ 000c3564 4018
.org 0xc3566
	movs r1, #2	@ 000c3566 0221
.org 0xc3568
	str r1, [r2, #12]	@ 000c3568 d160
.org 0xc356a
	ldr r0, [r0, #0]	@ 000c356a 0068
.org 0xc356c
	ldr r0, [r0, #8]	@ 000c356c 8068
.org 0xc356e
	str r0, [r2, #20]	@ 000c356e 5061
.org 0xc3570
	adds r0, r2, #0	@ 000c3570 101c
.org 0xc3572
	bl 0xc3594	@ 000c3572 00f00ff8
.org 0xc3576
	b.n 0xc358c	@ 000c3576 09e0
.org 0xc3578
	.byte 0xf4,0x49,0x86,0x08	@ 000c3578 data
.org 0xc357c
	ldr r0, [pc, #16]	@ 000c357c 0448
.org 0xc357e
	ldrb r1, [r2, #16]	@ 000c357e 117c
.org 0xc3580
	lsls r1, r1, #2	@ 000c3580 8900
.org 0xc3582
	adds r1, r1, r0	@ 000c3582 0918
.org 0xc3584
	ldr r1, [r1, #0]	@ 000c3584 0968
.org 0xc3586
	adds r0, r2, #0	@ 000c3586 101c
.org 0xc3588
	bl 0x128f80	@ 000c3588 65f0fafc
