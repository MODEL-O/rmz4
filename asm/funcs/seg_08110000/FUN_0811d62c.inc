@ FUN_0811d62c  entry 0x0811d62c  size 134
.thumb
.org 0x11d62c
FUN_0811d62c:
	push {r4, r5, r6, r7, lr}	@ 0011d62c f0b5
.org 0x11d62e
	mov r7, r8	@ 0011d62e 4746
.org 0x11d630
	push {r7}	@ 0011d630 80b4
.org 0x11d632
	adds r7, r0, #0	@ 0011d632 071c
.org 0x11d634
	lsls r1, r1, #24	@ 0011d634 0906
.org 0x11d636
	lsrs r1, r1, #24	@ 0011d636 090e
.org 0x11d638
	mov ip, r1	@ 0011d638 8c46
.org 0x11d63a
	ldr r0, [pc, #24]	@ 0011d63a 0648
.org 0x11d63c
	adds r6, r7, r0	@ 0011d63c 3e18
.org 0x11d63e
	adds r0, #13	@ 0011d63e 0d30
.org 0x11d640
	adds r0, r0, r7	@ 0011d640 c019
.org 0x11d642
	mov r8, r0	@ 0011d642 8046
.org 0x11d644
	mov r1, r8	@ 0011d644 4146
.org 0x11d646
	add r1, ip	@ 0011d646 6144
.org 0x11d648
	ldrb r0, [r1, #0]	@ 0011d648 0878
.org 0x11d64a
	cmp r0, #255	@ 0011d64a ff28
.org 0x11d64c
	bne.n 0x11d658	@ 0011d64c 04d1
.org 0x11d64e
	movs r0, #0	@ 0011d64e 0020
.org 0x11d650
	b.n 0x11d6ae	@ 0011d650 2de0
.org 0x11d652
	.byte 0x00	@ 0011d652 data
.org 0x11d653
	.byte 0x00	@ 0011d653 data
.org 0x11d654
	.byte 0xcc,0x0d,0x00,0x00	@ 0011d654 data
.org 0x11d658
	ldrb r5, [r1, #0]	@ 0011d658 0d78
.org 0x11d65a
	ldr r0, [pc, #92]	@ 0011d65a 1748
.org 0x11d65c
	ldr r4, [r0, #0]	@ 0011d65c 0468
.org 0x11d65e
	lsrs r0, r5, #1	@ 0011d65e 6808
.org 0x11d660
	adds r4, r4, r0	@ 0011d660 2418
.org 0x11d662
	ldrb r3, [r4, #0]	@ 0011d662 2378
.org 0x11d664
	movs r1, #1	@ 0011d664 0121
.org 0x11d666
	ands r1, r5	@ 0011d666 2940
.org 0x11d668
	lsls r1, r1, #2	@ 0011d668 8900
.org 0x11d66a
	adds r0, r3, #0	@ 0011d66a 181c
.org 0x11d66c
	asrs r0, r1	@ 0011d66c 0841
.org 0x11d66e
	movs r2, #15	@ 0011d66e 0f22
.org 0x11d670
	ands r0, r2	@ 0011d670 1040
.org 0x11d672
	adds r0, #1	@ 0011d672 0130
.org 0x11d674
	lsls r0, r1	@ 0011d674 8840
.org 0x11d676
	lsls r2, r1	@ 0011d676 8a40
.org 0x11d678
	bics r3, r2	@ 0011d678 9343
.org 0x11d67a
	orrs r0, r3	@ 0011d67a 1843
.org 0x11d67c
	strb r0, [r4, #0]	@ 0011d67c 2070
.org 0x11d67e
	ldrb r0, [r6, #6]	@ 0011d67e b079
.org 0x11d680
	cmp r5, r0	@ 0011d680 8542
.org 0x11d682
	bcs.n 0x11d68a	@ 0011d682 02d2
.org 0x11d684
	ldrb r0, [r6, #22]	@ 0011d684 b07d
.org 0x11d686
	adds r0, #1	@ 0011d686 0130
.org 0x11d688
	strb r0, [r6, #22]	@ 0011d688 b075
.org 0x11d68a
	mov r1, ip	@ 0011d68a 6146
.org 0x11d68c
	cmp r1, #2	@ 0011d68c 0229
.org 0x11d68e
	bhi.n 0x11d6a4	@ 0011d68e 09d8
.org 0x11d690
	mov r3, r8	@ 0011d690 4346
.org 0x11d692
	adds r2, r3, r1	@ 0011d692 5a18
.org 0x11d694
	adds r1, #1	@ 0011d694 0131
.org 0x11d696
	adds r0, r3, r1	@ 0011d696 5818
.org 0x11d698
	ldrb r0, [r0, #0]	@ 0011d698 0078
.org 0x11d69a
	strb r0, [r2, #0]	@ 0011d69a 1070
.org 0x11d69c
	lsls r1, r1, #24	@ 0011d69c 0906
.org 0x11d69e
	lsrs r1, r1, #24	@ 0011d69e 090e
.org 0x11d6a0
	cmp r1, #2	@ 0011d6a0 0229
.org 0x11d6a2
	bls.n 0x11d692	@ 0011d6a2 f6d9
.org 0x11d6a4
	ldr r0, [pc, #20]	@ 0011d6a4 0548
.org 0x11d6a6
	adds r1, r7, r0	@ 0011d6a6 3918
.org 0x11d6a8
	movs r0, #255	@ 0011d6a8 ff20
.org 0x11d6aa
	strb r0, [r1, #16]	@ 0011d6aa 0874
.org 0x11d6ac
	movs r0, #1	@ 0011d6ac 0120
.org 0x11d6ae
	pop {r3}	@ 0011d6ae 08bc
.org 0x11d6b0
	mov r8, r3	@ 0011d6b0 9846
