@ FUN_0808e63c  entry 0x0808e63c  size 58
.thumb
.org 0x8e63c
FUN_0808e63c:
	push {lr}	@ 0008e63c 00b5
.org 0x8e63e
	adds r2, r0, #0	@ 0008e63e 021c
.org 0x8e640
	ldr r0, [r2, #40]	@ 0008e640 906a
.org 0x8e642
	ldrb r0, [r0, #12]	@ 0008e642 007b
.org 0x8e644
	cmp r0, #1	@ 0008e644 0128
.org 0x8e646
	bls.n 0x8e668	@ 0008e646 0fd9
.org 0x8e648
	ldr r1, [pc, #24]	@ 0008e648 0649
.org 0x8e64a
	ldrb r0, [r2, #9]	@ 0008e64a 507a
.org 0x8e64c
	lsls r0, r0, #2	@ 0008e64c 8000
.org 0x8e64e
	adds r0, r0, r1	@ 0008e64e 4018
.org 0x8e650
	movs r1, #2	@ 0008e650 0221
.org 0x8e652
	str r1, [r2, #12]	@ 0008e652 d160
.org 0x8e654
	ldr r0, [r0, #0]	@ 0008e654 0068
.org 0x8e656
	ldr r0, [r0, #8]	@ 0008e656 8068
.org 0x8e658
	str r0, [r2, #20]	@ 0008e658 5061
.org 0x8e65a
	adds r0, r2, #0	@ 0008e65a 101c
.org 0x8e65c
	bl 0x8e6e0	@ 0008e65c 00f040f8
.org 0x8e660
	b.n 0x8e678	@ 0008e660 0ae0
.org 0x8e662
	.byte 0x00	@ 0008e662 data
.org 0x8e663
	.byte 0x00	@ 0008e663 data
.org 0x8e664
	.byte 0x40,0xdb,0x85,0x08	@ 0008e664 data
.org 0x8e668
	ldr r0, [pc, #16]	@ 0008e668 0448
.org 0x8e66a
	ldrb r1, [r2, #13]	@ 0008e66a 517b
.org 0x8e66c
	lsls r1, r1, #2	@ 0008e66c 8900
.org 0x8e66e
	adds r1, r1, r0	@ 0008e66e 0918
.org 0x8e670
	ldr r1, [r1, #0]	@ 0008e670 0968
.org 0x8e672
	adds r0, r2, #0	@ 0008e672 101c
.org 0x8e674
	bl 0x128f80	@ 0008e674 9af084fc
