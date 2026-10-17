@ FUN_0802e63c  entry 0x0802e63c  size 94
.thumb
.org 0x2e63c
FUN_0802e63c:
	push {r4, r5, r6, r7, lr}	@ 0002e63c f0b5
.org 0x2e63e
	mov ip, r0	@ 0002e63e 8446
.org 0x2e640
	lsls r1, r1, #16	@ 0002e640 0904
.org 0x2e642
	lsrs r1, r1, #16	@ 0002e642 090c
.org 0x2e644
	ldr r2, [pc, #68]	@ 0002e644 114a
.org 0x2e646
	lsls r0, r1, #1	@ 0002e646 4800
.org 0x2e648
	adds r0, r0, r1	@ 0002e648 4018
.org 0x2e64a
	lsls r0, r0, #3	@ 0002e64a c000
.org 0x2e64c
	adds r1, r0, r2	@ 0002e64c 8118
.org 0x2e64e
	movs r2, #234	@ 0002e64e ea22
.org 0x2e650
	lsls r2, r2, #1	@ 0002e650 5200
.org 0x2e652
	adds r0, r1, r2	@ 0002e652 8818
.org 0x2e654
	ldrh r3, [r0, #0]	@ 0002e654 0388
.org 0x2e656
	movs r2, #0	@ 0002e656 0022
.org 0x2e658
	ldr r6, [pc, #52]	@ 0002e658 0d4e
.org 0x2e65a
	movs r0, #235	@ 0002e65a eb20
.org 0x2e65c
	lsls r0, r0, #1	@ 0002e65c 4000
.org 0x2e65e
	adds r4, r1, r0	@ 0002e65e 0c18
.org 0x2e660
	movs r7, #128	@ 0002e660 8027
.org 0x2e662
	lsls r7, r7, #2	@ 0002e662 bf00
.org 0x2e664
	ldr r5, [pc, #44]	@ 0002e664 0b4d
.org 0x2e666
	add r5, ip	@ 0002e666 6544
.org 0x2e668
	lsls r1, r2, #1	@ 0002e668 5100
.org 0x2e66a
	movs r0, #204	@ 0002e66a cc20
.org 0x2e66c
	lsls r0, r0, #1	@ 0002e66c 4000
.org 0x2e66e
	add r0, ip	@ 0002e66e 6044
.org 0x2e670
	adds r0, r0, r1	@ 0002e670 4018
.org 0x2e672
	ldrh r1, [r0, #0]	@ 0002e672 0188
.org 0x2e674
	cmp r1, r6	@ 0002e674 b142
.org 0x2e676
	bne.n 0x2e698	@ 0002e676 0fd1
.org 0x2e678
	strh r3, [r0, #0]	@ 0002e678 0380
.org 0x2e67a
	ldrh r1, [r4, #0]	@ 0002e67a 2188
.org 0x2e67c
	adds r0, r7, #0	@ 0002e67c 381c
.org 0x2e67e
	ands r0, r1	@ 0002e67e 0840
.org 0x2e680
	cmp r0, #0	@ 0002e680 0028
.org 0x2e682
	beq.n 0x2e6a2	@ 0002e682 0ed0
.org 0x2e684
	movs r0, #1	@ 0002e684 0120
.org 0x2e686
	strb r0, [r5, #0]	@ 0002e686 2870
.org 0x2e688
	b.n 0x2e6a2	@ 0002e688 0be0
.org 0x2e68a
	.byte 0x00	@ 0002e68a data
.org 0x2e68b
	.byte 0x00	@ 0002e68b data
.org 0x2e68c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002e68c data
.org 0x2e690
	.byte 0xff,0xff,0x00,0x00	@ 0002e690 data
.org 0x2e694
	.byte 0xcf,0x01,0x00,0x00	@ 0002e694 data
.org 0x2e698
	cmp r1, r3	@ 0002e698 9942
