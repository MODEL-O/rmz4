@ FUN_080f6660  entry 0x080f6660  size 150
.thumb
.org 0xf6660
FUN_080f6660:
	push {r4, r5, r6, lr}	@ 000f6660 70b5
.org 0xf6662
	adds r6, r0, #0	@ 000f6662 061c
.org 0xf6664
	bl 0x1cc9c	@ 000f6664 26f71afb
.org 0xf6668
	ldrb r1, [r6, #10]	@ 000f6668 b17a
.org 0xf666a
	movs r0, #1	@ 000f666a 0120
.org 0xf666c
	orrs r0, r1	@ 000f666c 0843
.org 0xf666e
	movs r1, #2	@ 000f666e 0221
.org 0xf6670
	orrs r0, r1	@ 000f6670 0843
.org 0xf6672
	strb r0, [r6, #10]	@ 000f6672 b072
.org 0xf6674
	ldr r1, [r6, #84]	@ 000f6674 716d
.org 0xf6676
	ldr r0, [pc, #16]	@ 000f6676 0448
.org 0xf6678
	cmp r1, r0	@ 000f6678 8142
.org 0xf667a
	bgt.n 0xf668c	@ 000f667a 07dc
.org 0xf667c
	movs r1, #150	@ 000f667c 9621
.org 0xf667e
	lsls r1, r1, #7	@ 000f667e c901
.org 0xf6680
	adds r0, r6, #0	@ 000f6680 301c
.org 0xf6682
	bl 0x1cf00	@ 000f6682 26f73dfc
.org 0xf6686
	b.n 0xf6696	@ 000f6686 06e0
.org 0xf6688
	.byte 0xff,0x1f,0x1c,0x00	@ 000f6688 data
.org 0xf668c
	movs r1, #252	@ 000f668c fc21
.org 0xf668e
	lsls r1, r1, #7	@ 000f668e c901
.org 0xf6690
	adds r0, r6, #0	@ 000f6690 301c
.org 0xf6692
	bl 0x1cf00	@ 000f6692 26f735fc
.org 0xf6696
	ldrb r1, [r6, #11]	@ 000f6696 f17a
.org 0xf6698
	movs r0, #8	@ 000f6698 0820
.org 0xf669a
	orrs r0, r1	@ 000f669a 0843
.org 0xf669c
	strb r0, [r6, #11]	@ 000f669c f072
.org 0xf669e
	ldrb r0, [r6, #16]	@ 000f669e 307c
.org 0xf66a0
	lsls r0, r0, #3	@ 000f66a0 c000
.org 0xf66a2
	ldr r1, [pc, #88]	@ 000f66a2 1649
.org 0xf66a4
	adds r0, r0, r1	@ 000f66a4 4018
.org 0xf66a6
	str r0, [r6, #48]	@ 000f66a6 3063
.org 0xf66a8
	movs r5, #0	@ 000f66a8 0025
.org 0xf66aa
	ldr r0, [pc, #84]	@ 000f66aa 1548
.org 0xf66ac
	strh r0, [r6, #38]	@ 000f66ac f084
.org 0xf66ae
	ldr r0, [r6, #84]	@ 000f66ae 706d
.org 0xf66b0
	ldr r1, [r6, #88]	@ 000f66b0 b16d
.org 0xf66b2
	movs r4, #128	@ 000f66b2 8024
.org 0xf66b4
	lsls r4, r4, #5	@ 000f66b4 6401
.org 0xf66b6
	adds r1, r1, r4	@ 000f66b6 0919
.org 0xf66b8
	bl 0x8988	@ 000f66b8 12f766f9
.org 0xf66bc
	adds r0, r0, r4	@ 000f66bc 0019
.org 0xf66be
	str r0, [r6, #84]	@ 000f66be 7065
.org 0xf66c0
	ldr r0, [r6, #88]	@ 000f66c0 b06d
.org 0xf66c2
	adds r0, #1	@ 000f66c2 0130
.org 0xf66c4
	str r0, [r6, #88]	@ 000f66c4 b065
.org 0xf66c6
	movs r0, #3	@ 000f66c6 0320
.org 0xf66c8
	strb r0, [r6, #13]	@ 000f66c8 7073
.org 0xf66ca
	strb r5, [r6, #14]	@ 000f66ca b573
.org 0xf66cc
	ldrb r1, [r6, #16]	@ 000f66cc 317c
.org 0xf66ce
	adds r0, r6, #0	@ 000f66ce 301c
.org 0xf66d0
	bl 0xf6a24	@ 000f66d0 00f0a8f9
.org 0xf66d4
	ldrb r2, [r6, #13]	@ 000f66d4 727b
.org 0xf66d6
	ldrb r3, [r6, #14]	@ 000f66d6 b37b
.org 0xf66d8
	ldr r1, [pc, #40]	@ 000f66d8 0a49
.org 0xf66da
	ldrb r0, [r6, #9]	@ 000f66da 707a
.org 0xf66dc
	lsls r0, r0, #2	@ 000f66dc 8000
.org 0xf66de
	adds r0, r0, r1	@ 000f66de 4018
.org 0xf66e0
	movs r1, #1	@ 000f66e0 0121
.org 0xf66e2
	str r1, [r6, #12]	@ 000f66e2 f160
.org 0xf66e4
	ldr r0, [r0, #0]	@ 000f66e4 0068
.org 0xf66e6
	ldr r0, [r0, #4]	@ 000f66e6 4068
.org 0xf66e8
	str r0, [r6, #20]	@ 000f66e8 7061
.org 0xf66ea
	strb r2, [r6, #13]	@ 000f66ea 7273
.org 0xf66ec
	strb r3, [r6, #14]	@ 000f66ec b373
.org 0xf66ee
	adds r0, r6, #0	@ 000f66ee 301c
.org 0xf66f0
	bl 0xf64c0	@ 000f66f0 fff7e6fe
.org 0xf66f4
	pop {r4, r5, r6}	@ 000f66f4 70bc
