@ FUN_081205ac  entry 0x081205ac  size 294
.thumb
.org 0x1205ac
FUN_081205ac:
	push {r4, r5, r6, r7, lr}	@ 001205ac f0b5
.org 0x1205ae
	mov r7, r8	@ 001205ae 4746
.org 0x1205b0
	push {r7}	@ 001205b0 80b4
.org 0x1205b2
	adds r5, r0, #0	@ 001205b2 051c
.org 0x1205b4
	bl 0x120c08	@ 001205b4 00f028fb
.org 0x1205b8
	movs r4, #0	@ 001205b8 0024
.org 0x1205ba
	ldr r7, [pc, #12]	@ 001205ba 034f
.org 0x1205bc
	ldr r0, [pc, #12]	@ 001205bc 0348
.org 0x1205be
	adds r0, r0, r7	@ 001205be c019
.org 0x1205c0
	mov r8, r0	@ 001205c0 8046
.org 0x1205c2
	ldr r6, [pc, #12]	@ 001205c2 034e
.org 0x1205c4
	b.n 0x1205f4	@ 001205c4 16e0
.org 0x1205c6
	.byte 0x00	@ 001205c6 data
.org 0x1205c7
	.byte 0x00	@ 001205c7 data
.org 0x1205c8
	.byte 0xf8,0xcf,0x86,0x08	@ 001205c8 data
.org 0x1205cc
	.byte 0xbe,0x03,0x00,0x00	@ 001205cc data
.org 0x1205d0
	.byte 0x5f,0x0e,0x01,0x09	@ 001205d0 data
.org 0x1205d4
	ldrb r0, [r1, #0]	@ 001205d4 0878
.org 0x1205d6
	movs r1, #150	@ 001205d6 9621
.org 0x1205d8
	lsls r1, r1, #2	@ 001205d8 8900
.org 0x1205da
	adds r0, r0, r1	@ 001205da 4018
.org 0x1205dc
	lsls r0, r0, #1	@ 001205dc 4000
.org 0x1205de
	adds r0, r0, r7	@ 001205de c019
.org 0x1205e0
	ldrh r0, [r0, #0]	@ 001205e0 0088
.org 0x1205e2
	adds r0, r0, r6	@ 001205e2 8019
.org 0x1205e4
	lsls r2, r4, #1	@ 001205e4 6200
.org 0x1205e6
	adds r2, #2	@ 001205e6 0232
.org 0x1205e8
	movs r1, #2	@ 001205e8 0221
.org 0x1205ea
	bl 0x10d85c	@ 001205ea edf737f9
.org 0x1205ee
	adds r0, r4, #1	@ 001205ee 601c
.org 0x1205f0
	lsls r0, r0, #24	@ 001205f0 0006
.org 0x1205f2
	lsrs r4, r0, #24	@ 001205f2 040e
.org 0x1205f4
	cmp r4, #6	@ 001205f4 062c
.org 0x1205f6
	bhi.n 0x120616	@ 001205f6 0ed8
.org 0x1205f8
	ldr r2, [pc, #132]	@ 001205f8 214a
.org 0x1205fa
	adds r0, r5, r2	@ 001205fa a818
.org 0x1205fc
	adds r1, r0, r4	@ 001205fc 0119
.org 0x1205fe
	ldrb r0, [r1, #0]	@ 001205fe 0878
.org 0x120600
	cmp r0, #255	@ 00120600 ff28
.org 0x120602
	bne.n 0x1205d4	@ 00120602 e7d1
.org 0x120604
	cmp r4, #0	@ 00120604 002c
.org 0x120606
	bne.n 0x120616	@ 00120606 06d1
.org 0x120608
	mov r1, r8	@ 00120608 4146
.org 0x12060a
	ldrh r0, [r1, #0]	@ 0012060a 0888
.org 0x12060c
	adds r0, r0, r6	@ 0012060c 8019
.org 0x12060e
	movs r1, #2	@ 0012060e 0221
.org 0x120610
	movs r2, #2	@ 00120610 0222
.org 0x120612
	bl 0x10d85c	@ 00120612 edf723f9
.org 0x120616
	ldrb r0, [r5, #3]	@ 00120616 e878
.org 0x120618
	cmp r0, #1	@ 00120618 0128
.org 0x12061a
	bhi.n 0x120694	@ 0012061a 3bd8
.org 0x12061c
	movs r4, #0	@ 0012061c 0024
.org 0x12061e
	movs r6, #0	@ 0012061e 0026
.org 0x120620
	ldr r5, [pc, #96]	@ 00120620 184d
.org 0x120622
	movs r3, #7	@ 00120622 0723
.org 0x120624
	movs r2, #1	@ 00120624 0122
.org 0x120626
	adds r0, r4, #4	@ 00120626 201d
.org 0x120628
	asrs r1, r0, #3	@ 00120628 c110
.org 0x12062a
	adds r1, r1, r5	@ 0012062a 4919
.org 0x12062c
	ldrb r1, [r1, #0]	@ 0012062c 0978
.org 0x12062e
	ands r0, r3	@ 0012062e 1840
.org 0x120630
	asrs r1, r0	@ 00120630 0141
.org 0x120632
	ands r1, r2	@ 00120632 1140
.org 0x120634
	cmp r1, #0	@ 00120634 0029
.org 0x120636
	beq.n 0x12063e	@ 00120636 02d0
.org 0x120638
	adds r0, r6, #1	@ 00120638 701c
.org 0x12063a
	lsls r0, r0, #24	@ 0012063a 0006
.org 0x12063c
	lsrs r6, r0, #24	@ 0012063c 060e
.org 0x12063e
	adds r0, r4, #1	@ 0012063e 601c
.org 0x120640
	lsls r0, r0, #24	@ 00120640 0006
.org 0x120642
	lsrs r4, r0, #24	@ 00120642 040e
.org 0x120644
	cmp r4, #55	@ 00120644 372c
.org 0x120646
	bls.n 0x120626	@ 00120646 eed9
.org 0x120648
	adds r0, r6, #0	@ 00120648 301c
.org 0x12064a
	movs r1, #21	@ 0012064a 1521
.org 0x12064c
	movs r2, #1	@ 0012064c 0122
.org 0x12064e
	bl 0x118348	@ 0012064e f7f77bfe
.org 0x120652
	ldr r4, [pc, #52]	@ 00120652 0d4c
.org 0x120654
	ldrh r0, [r4, #12]	@ 00120654 a089
.org 0x120656
	ldr r5, [pc, #52]	@ 00120656 0d4d
.org 0x120658
	adds r0, r0, r5	@ 00120658 4019
.org 0x12065a
	movs r1, #22	@ 0012065a 1621
.org 0x12065c
	movs r2, #1	@ 0012065c 0122
.org 0x12065e
	bl 0x10d85c	@ 0012065e edf7fdf8
.org 0x120662
	movs r0, #56	@ 00120662 3820
.org 0x120664
	movs r1, #24	@ 00120664 1821
.org 0x120666
	movs r2, #1	@ 00120666 0122
.org 0x120668
	bl 0x118348	@ 00120668 f7f76efe
.org 0x12066c
	ldr r2, [pc, #32]	@ 0012066c 084a
.org 0x12066e
	adds r4, r4, r2	@ 0012066e a418
.org 0x120670
	ldrh r0, [r4, #0]	@ 00120670 2088
.org 0x120672
	adds r0, r0, r5	@ 00120672 4019
.org 0x120674
	movs r1, #17	@ 00120674 1121
.org 0x120676
	movs r2, #5	@ 00120676 0522
.org 0x120678
	bl 0x10d85c	@ 00120678 edf7f0f8
.org 0x12067c
	b.n 0x120700	@ 0012067c 40e0
.org 0x12067e
	.byte 0x00	@ 0012067e data
.org 0x12067f
	.byte 0x00	@ 0012067f data
.org 0x120680
	.byte 0xd2,0x0d,0x00,0x00	@ 00120680 data
.org 0x120684
	.byte 0x70,0x0a,0x00,0x02	@ 00120684 data
.org 0x120688
	.byte 0xf8,0xcf,0x86,0x08	@ 00120688 data
.org 0x12068c
	.byte 0x5f,0x0e,0x01,0x09	@ 0012068c data
.org 0x120690
	.byte 0x74,0x05,0x00,0x00	@ 00120690 data
.org 0x120694
	ldr r0, [pc, #36]	@ 00120694 0948
.org 0x120696
	adds r1, r5, r0	@ 00120696 2918
.org 0x120698
	ldr r2, [pc, #36]	@ 00120698 094a
.org 0x12069a
	adds r0, r5, r2	@ 0012069a a818
.org 0x12069c
	ldrb r1, [r1, #2]	@ 0012069c 8978
.org 0x12069e
	adds r0, r0, r1	@ 0012069e 4018
.org 0x1206a0
	ldrb r6, [r0, #0]	@ 001206a0 0678
.org 0x1206a2
	cmp r6, #255	@ 001206a2 ff2e
.org 0x1206a4
	bne.n 0x1206d0	@ 001206a4 14d1
.org 0x1206a6
	ldr r0, [pc, #28]	@ 001206a6 0748
.org 0x1206a8
	ldr r1, [pc, #28]	@ 001206a8 0749
.org 0x1206aa
	adds r0, r0, r1	@ 001206aa 4018
.org 0x1206ac
	ldrh r0, [r0, #0]	@ 001206ac 0088
.org 0x1206ae
	ldr r1, [pc, #28]	@ 001206ae 0749
.org 0x1206b0
	adds r0, r0, r1	@ 001206b0 4018
.org 0x1206b2
	movs r1, #17	@ 001206b2 1121
.org 0x1206b4
	movs r2, #1	@ 001206b4 0122
.org 0x1206b6
	bl 0x10d85c	@ 001206b6 edf7d1f8
.org 0x1206ba
	b.n 0x120700	@ 001206ba 21e0
.org 0x1206bc
	.byte 0xcc,0x0d,0x00,0x00	@ 001206bc data
.org 0x1206c0
	.byte 0xd2,0x0d,0x00,0x00	@ 001206c0 data
.org 0x1206c4
	.byte 0xf8,0xcf,0x86,0x08	@ 001206c4 data
.org 0x1206c8
	.byte 0xbe,0x03,0x00,0x00	@ 001206c8 data
.org 0x1206cc
	.byte 0x5f,0x0e,0x01,0x09	@ 001206cc data
.org 0x1206d0
	ldr r5, [pc, #56]	@ 001206d0 0e4d
