@ FUN_080b87fc  entry 0x080b87fc  size 122
.thumb
.org 0xb87fc
FUN_080b87fc:
	push {r4, r5, r6, lr}	@ 000b87fc 70b5
.org 0xb87fe
	adds r6, r0, #0	@ 000b87fe 061c
.org 0xb8800
	movs r5, #0	@ 000b8800 0025
.org 0xb8802
	ldr r1, [pc, #116]	@ 000b8802 1d49
.org 0xb8804
	ldrb r0, [r6, #9]	@ 000b8804 707a
.org 0xb8806
	lsls r0, r0, #2	@ 000b8806 8000
.org 0xb8808
	adds r0, r0, r1	@ 000b8808 4018
.org 0xb880a
	movs r4, #1	@ 000b880a 0124
.org 0xb880c
	str r4, [r6, #12]	@ 000b880c f460
.org 0xb880e
	ldr r0, [r0, #0]	@ 000b880e 0068
.org 0xb8810
	ldr r0, [r0, #4]	@ 000b8810 4068
.org 0xb8812
	str r0, [r6, #20]	@ 000b8812 7061
.org 0xb8814
	strb r5, [r6, #13]	@ 000b8814 7573
.org 0xb8816
	strb r5, [r6, #14]	@ 000b8816 b573
.org 0xb8818
	strb r5, [r6, #15]	@ 000b8818 f573
.org 0xb881a
	ldrb r0, [r6, #10]	@ 000b881a b07a
.org 0xb881c
	movs r1, #1	@ 000b881c 0121
.org 0xb881e
	orrs r0, r1	@ 000b881e 0843
.org 0xb8820
	movs r1, #2	@ 000b8820 0221
.org 0xb8822
	orrs r0, r1	@ 000b8822 0843
.org 0xb8824
	strb r0, [r6, #10]	@ 000b8824 b072
.org 0xb8826
	adds r0, r6, #0	@ 000b8826 301c
.org 0xb8828
	bl 0x1cc9c	@ 000b8828 64f738fa
.org 0xb882c
	adds r0, r6, #0	@ 000b882c 301c
.org 0xb882e
	adds r0, #37	@ 000b882e 2530
.org 0xb8830
	strb r4, [r0, #0]	@ 000b8830 0470
.org 0xb8832
	ldrb r1, [r6, #10]	@ 000b8832 b17a
.org 0xb8834
	movs r0, #239	@ 000b8834 ef20
.org 0xb8836
	ands r0, r1	@ 000b8836 0840
.org 0xb8838
	strb r0, [r6, #10]	@ 000b8838 b072
.org 0xb883a
	adds r0, r6, #0	@ 000b883a 301c
.org 0xb883c
	adds r0, #76	@ 000b883c 4c30
.org 0xb883e
	strb r5, [r0, #0]	@ 000b883e 0570
.org 0xb8840
	adds r2, r6, #0	@ 000b8840 321c
.org 0xb8842
	adds r2, #74	@ 000b8842 4a32
.org 0xb8844
	ldrb r1, [r2, #0]	@ 000b8844 1178
.org 0xb8846
	movs r0, #17	@ 000b8846 1120
.org 0xb8848
	negs r0, r0	@ 000b8848 4042
.org 0xb884a
	ands r0, r1	@ 000b884a 0840
.org 0xb884c
	strb r0, [r2, #0]	@ 000b884c 1070
.org 0xb884e
	ldrb r1, [r6, #10]	@ 000b884e b17a
.org 0xb8850
	movs r0, #4	@ 000b8850 0420
.org 0xb8852
	orrs r0, r1	@ 000b8852 0843
.org 0xb8854
	strb r0, [r6, #10]	@ 000b8854 b072
.org 0xb8856
	adds r4, r6, #0	@ 000b8856 341c
.org 0xb8858
	adds r4, #116	@ 000b8858 7434
.org 0xb885a
	ldr r1, [pc, #32]	@ 000b885a 0849
.org 0xb885c
	adds r2, #10	@ 000b885c 0a32
.org 0xb885e
	adds r0, r4, #0	@ 000b885e 201c
.org 0xb8860
	movs r3, #64	@ 000b8860 4023
.org 0xb8862
	bl 0x5760	@ 000b8862 4cf77dff
.org 0xb8866
	str r6, [r4, #44]	@ 000b8866 e662
.org 0xb8868
	str r5, [r4, #36]	@ 000b8868 6562
.org 0xb886a
	adds r0, r6, #0	@ 000b886a 301c
.org 0xb886c
	bl 0xb8880	@ 000b886c 00f008f8
.org 0xb8870
	pop {r4, r5, r6}	@ 000b8870 70bc
.org 0xb8872
	pop {r0}	@ 000b8872 01bc
.org 0xb8874
	bx r0	@ 000b8874 0047
