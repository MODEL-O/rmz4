@ FUN_080a67d8  entry 0x080a67d8  size 118
.thumb
.org 0xa67d8
FUN_080a67d8:
	push {r4, lr}	@ 000a67d8 10b5
.org 0xa67da
	adds r4, r0, #0	@ 000a67da 041c
.org 0xa67dc
	adds r0, #181	@ 000a67dc b530
.org 0xa67de
	ldrb r0, [r0, #0]	@ 000a67de 0078
.org 0xa67e0
	cmp r0, #1	@ 000a67e0 0128
.org 0xa67e2
	bne.n 0xa67fc	@ 000a67e2 0bd1
.org 0xa67e4
	ldr r0, [pc, #12]	@ 000a67e4 0348
.org 0xa67e6
	ldr r0, [r0, #0]	@ 000a67e6 0068
.org 0xa67e8
	ldr r1, [r0, #84]	@ 000a67e8 416d
.org 0xa67ea
	ldr r0, [r0, #88]	@ 000a67ea 806d
.org 0xa67ec
	ldr r3, [pc, #8]	@ 000a67ec 024b
.org 0xa67ee
	adds r2, r0, r3	@ 000a67ee c218
.org 0xa67f0
	b.n 0xa6806	@ 000a67f0 09e0
.org 0xa67f2
	.byte 0x00	@ 000a67f2 data
.org 0xa67f3
	.byte 0x00	@ 000a67f3 data
.org 0xa67f4
	.byte 0xf0,0xdb,0x02,0x02	@ 000a67f4 data
.org 0xa67f8
	.byte 0x00,0xe8,0xff,0xff	@ 000a67f8 data
.org 0xa67fc
	adds r0, r4, #0	@ 000a67fc 201c
.org 0xa67fe
	adds r0, #184	@ 000a67fe b830
.org 0xa6800
	ldr r1, [r0, #0]	@ 000a6800 0168
.org 0xa6802
	adds r0, #4	@ 000a6802 0430
.org 0xa6804
	ldr r2, [r0, #0]	@ 000a6804 0268
.org 0xa6806
	ldr r0, [r4, #84]	@ 000a6806 606d
.org 0xa6808
	subs r0, r1, r0	@ 000a6808 081a
.org 0xa680a
	ldr r1, [r4, #88]	@ 000a680a a16d
.org 0xa680c
	subs r1, r2, r1	@ 000a680c 511a
.org 0xa680e
	lsls r0, r0, #8	@ 000a680e 0002
.org 0xa6810
	asrs r0, r0, #16	@ 000a6810 0014
.org 0xa6812
	lsls r1, r1, #8	@ 000a6812 0902
.org 0xa6814
	asrs r1, r1, #16	@ 000a6814 0914
.org 0xa6816
	bl 0x128bdc	@ 000a6816 82f0e1f9
.org 0xa681a
	lsls r0, r0, #16	@ 000a681a 0004
.org 0xa681c
	lsrs r1, r0, #24	@ 000a681c 010e
.org 0xa681e
	ldr r2, [pc, #56]	@ 000a681e 0e4a
.org 0xa6820
	adds r0, r1, #0	@ 000a6820 081c
.org 0xa6822
	adds r0, #64	@ 000a6822 4030
.org 0xa6824
	lsls r0, r0, #24	@ 000a6824 0006
.org 0xa6826
	lsrs r0, r0, #23	@ 000a6826 c00d
.org 0xa6828
	adds r0, r0, r2	@ 000a6828 8018
.org 0xa682a
	movs r3, #0	@ 000a682a 0023
.org 0xa682c
	ldrsh r0, [r0, r3]	@ 000a682c c05e
.org 0xa682e
	cmp r0, #0	@ 000a682e 0028
.org 0xa6830
	bge.n 0xa6834	@ 000a6830 00da
.org 0xa6832
	adds r0, #7	@ 000a6832 0730
.org 0xa6834
	asrs r0, r0, #3	@ 000a6834 c010
.org 0xa6836
	str r0, [r4, #100]	@ 000a6836 6066
.org 0xa6838
	lsls r0, r1, #1	@ 000a6838 4800
.org 0xa683a
	adds r0, r0, r2	@ 000a683a 8018
.org 0xa683c
	movs r1, #0	@ 000a683c 0021
.org 0xa683e
	ldrsh r0, [r0, r1]	@ 000a683e 405e
.org 0xa6840
	cmp r0, #0	@ 000a6840 0028
.org 0xa6842
	bge.n 0xa6846	@ 000a6842 00da
.org 0xa6844
	adds r0, #7	@ 000a6844 0730
.org 0xa6846
	asrs r0, r0, #3	@ 000a6846 c010
.org 0xa6848
	str r0, [r4, #104]	@ 000a6848 a066
.org 0xa684a
	adds r1, r4, #0	@ 000a684a 211c
.org 0xa684c
	adds r1, #192	@ 000a684c c031
