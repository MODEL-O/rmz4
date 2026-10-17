@ FUN_080b7638  entry 0x080b7638  size 96
.thumb
.org 0xb7638
FUN_080b7638:
	push {r4, lr}	@ 000b7638 10b5
.org 0xb763a
	adds r4, r0, #0	@ 000b763a 041c
.org 0xb763c
	adds r0, #140	@ 000b763c 8c30
.org 0xb763e
	ldr r0, [r0, #0]	@ 000b763e 0068
.org 0xb7640
	movs r1, #128	@ 000b7640 8021
.org 0xb7642
	lsls r1, r1, #2	@ 000b7642 8900
.org 0xb7644
	ands r0, r1	@ 000b7644 0840
.org 0xb7646
	cmp r0, #0	@ 000b7646 0028
.org 0xb7648
	beq.n 0xb7668	@ 000b7648 0ed0
.org 0xb764a
	ldr r1, [pc, #24]	@ 000b764a 0649
.org 0xb764c
	ldrb r0, [r4, #9]	@ 000b764c 607a
.org 0xb764e
	lsls r0, r0, #2	@ 000b764e 8000
.org 0xb7650
	adds r0, r0, r1	@ 000b7650 4018
.org 0xb7652
	movs r1, #2	@ 000b7652 0221
.org 0xb7654
	str r1, [r4, #12]	@ 000b7654 e160
.org 0xb7656
	ldr r0, [r0, #0]	@ 000b7656 0068
.org 0xb7658
	ldr r0, [r0, #8]	@ 000b7658 8068
.org 0xb765a
	str r0, [r4, #20]	@ 000b765a 6061
.org 0xb765c
	adds r0, r4, #0	@ 000b765c 201c
.org 0xb765e
	bl 0xb76a4	@ 000b765e 00f021f8
.org 0xb7662
	b.n 0xb769c	@ 000b7662 1be0
.org 0xb7664
	.byte 0x40,0xdb,0x85,0x08	@ 000b7664 data
.org 0xb7668
	adds r0, r4, #0	@ 000b7668 201c
.org 0xb766a
	bl 0xb798c	@ 000b766a 00f08ff9
.org 0xb766e
	adds r0, r4, #0	@ 000b766e 201c
.org 0xb7670
	adds r0, #192	@ 000b7670 c030
.org 0xb7672
	ldr r0, [r0, #0]	@ 000b7672 0068
.org 0xb7674
	cmp r0, #0	@ 000b7674 0028
.org 0xb7676
	bne.n 0xb7690	@ 000b7676 0bd1
.org 0xb7678
	ldr r0, [pc, #16]	@ 000b7678 0448
.org 0xb767a
	ldrb r1, [r4, #13]	@ 000b767a 617b
.org 0xb767c
	lsls r1, r1, #2	@ 000b767c 8900
.org 0xb767e
	adds r1, r1, r0	@ 000b767e 0918
.org 0xb7680
	ldr r1, [r1, #0]	@ 000b7680 0968
.org 0xb7682
	adds r0, r4, #0	@ 000b7682 201c
.org 0xb7684
	bl 0x128f80	@ 000b7684 71f07cfc
.org 0xb7688
	b.n 0xb7696	@ 000b7688 05e0
.org 0xb768a
	.byte 0x00	@ 000b768a data
.org 0xb768b
	.byte 0x00	@ 000b768b data
.org 0xb768c
	.byte 0x70,0x3f,0x86,0x08	@ 000b768c data
.org 0xb7690
	adds r0, r4, #0	@ 000b7690 201c
.org 0xb7692
	bl 0xb79e4	@ 000b7692 00f0a7f9
.org 0xb7696
	adds r0, r4, #0	@ 000b7696 201c
