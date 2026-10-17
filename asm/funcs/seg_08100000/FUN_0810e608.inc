@ FUN_0810e608  entry 0x0810e608  size 84
.thumb
.org 0x10e608
FUN_0810e608:
	push {r4, r5, lr}	@ 0010e608 30b5
.org 0x10e60a
	lsls r0, r0, #16	@ 0010e60a 0004
.org 0x10e60c
	lsls r1, r1, #16	@ 0010e60c 0904
.org 0x10e60e
	ldr r5, [pc, #44]	@ 0010e60e 0b4d
.org 0x10e610
	ldr r4, [pc, #44]	@ 0010e610 0b4c
.org 0x10e612
	lsrs r3, r0, #24	@ 0010e612 030e
.org 0x10e614
	lsls r3, r3, #2	@ 0010e614 9b00
.org 0x10e616
	adds r4, r3, r4	@ 0010e616 1c19
.org 0x10e618
	ldr r2, [pc, #40]	@ 0010e618 0a4a
.org 0x10e61a
	adds r3, r3, r2	@ 0010e61a 9b18
.org 0x10e61c
	movs r2, #255	@ 0010e61c ff22
.org 0x10e61e
	lsls r2, r2, #16	@ 0010e61e 1204
.org 0x10e620
	ands r2, r0	@ 0010e620 0240
.org 0x10e622
	ldr r0, [r3, #0]	@ 0010e622 1868
.org 0x10e624
	lsrs r2, r2, #15	@ 0010e624 d20b
.org 0x10e626
	adds r2, r2, r0	@ 0010e626 1218
.org 0x10e628
	ldrh r2, [r2, #0]	@ 0010e628 1288
.org 0x10e62a
	ldr r0, [r4, #0]	@ 0010e62a 2068
.org 0x10e62c
	adds r4, r0, r2	@ 0010e62c 8418
.org 0x10e62e
	cmp r1, #0	@ 0010e62e 0029
.org 0x10e630
	bne.n 0x10e648	@ 0010e630 0ad1
.org 0x10e632
	movs r0, #6	@ 0010e632 0620
.org 0x10e634
	bl 0x2b10	@ 0010e634 f4f66cfa
.org 0x10e638
	b.n 0x10e64e	@ 0010e638 09e0
.org 0x10e63a
	.byte 0x00	@ 0010e63a data
.org 0x10e63b
	.byte 0x00	@ 0010e63b data
.org 0x10e63c
	.byte 0x88,0xf3,0x02,0x02	@ 0010e63c data
.org 0x10e640
	.byte 0xcc,0x0c,0x87,0x08	@ 0010e640 data
.org 0x10e644
	.byte 0x74,0x0c,0x87,0x08	@ 0010e644 data
.org 0x10e648
	movs r0, #4	@ 0010e648 0420
.org 0x10e64a
	bl 0x2b10	@ 0010e64a f4f661fa
.org 0x10e64e
	str r4, [r5, #24]	@ 0010e64e ac61
.org 0x10e650
	movs r0, #0	@ 0010e650 0020
.org 0x10e652
	str r0, [r5, #8]	@ 0010e652 a860
.org 0x10e654
	adds r0, r5, #0	@ 0010e654 281c
.org 0x10e656
	bl 0x10e66c	@ 0010e656 00f009f8
.org 0x10e65a
	adds r0, r5, #0	@ 0010e65a 281c
