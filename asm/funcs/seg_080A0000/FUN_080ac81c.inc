@ FUN_080ac81c  entry 0x080ac81c  size 96
.thumb
.org 0xac81c
FUN_080ac81c:
	push {r4, r5, lr}	@ 000ac81c 30b5
.org 0xac81e
	adds r4, r0, #0	@ 000ac81e 041c
.org 0xac820
	ldr r5, [r4, #40]	@ 000ac820 a56a
.org 0xac822
	ldrb r0, [r4, #15]	@ 000ac822 e07b
.org 0xac824
	cmp r0, #0	@ 000ac824 0028
.org 0xac826
	bne.n 0xac848	@ 000ac826 0fd1
.org 0xac828
	ldrb r1, [r4, #10]	@ 000ac828 a17a
.org 0xac82a
	movs r0, #1	@ 000ac82a 0120
.org 0xac82c
	orrs r0, r1	@ 000ac82c 0843
.org 0xac82e
	strb r0, [r4, #10]	@ 000ac82e a072
.org 0xac830
	adds r1, r4, #0	@ 000ac830 211c
.org 0xac832
	adds r1, #184	@ 000ac832 b831
.org 0xac834
	movs r0, #1	@ 000ac834 0120
.org 0xac836
	strb r0, [r1, #0]	@ 000ac836 0870
.org 0xac838
	movs r1, #176	@ 000ac838 b021
.org 0xac83a
	lsls r1, r1, #8	@ 000ac83a 0902
.org 0xac83c
	adds r0, r4, #0	@ 000ac83c 201c
.org 0xac83e
	bl 0x1cf00	@ 000ac83e 70f75ffb
.org 0xac842
	ldrb r0, [r4, #15]	@ 000ac842 e07b
.org 0xac844
	adds r0, #1	@ 000ac844 0130
.org 0xac846
	strb r0, [r4, #15]	@ 000ac846 e073
.org 0xac848
	adds r0, r4, #0	@ 000ac848 201c
.org 0xac84a
	bl 0x1cff0	@ 000ac84a 70f7d1fb
.org 0xac84e
	ldr r0, [r5, #84]	@ 000ac84e 686d
.org 0xac850
	ldr r1, [r5, #88]	@ 000ac850 a96d
.org 0xac852
	str r0, [r4, #84]	@ 000ac852 6065
.org 0xac854
	str r1, [r4, #88]	@ 000ac854 a165
.org 0xac856
	adds r0, r4, #0	@ 000ac856 201c
.org 0xac858
	bl 0xacb5c	@ 000ac858 00f080f9
.org 0xac85c
	adds r0, r4, #0	@ 000ac85c 201c
.org 0xac85e
	adds r0, #115	@ 000ac85e 7330
.org 0xac860
	ldrb r0, [r0, #0]	@ 000ac860 0078
.org 0xac862
	cmp r0, #4	@ 000ac862 0428
.org 0xac864
	bne.n 0xac86e	@ 000ac864 03d1
.org 0xac866
	adds r1, r4, #0	@ 000ac866 211c
.org 0xac868
	adds r1, #180	@ 000ac868 b431
.org 0xac86a
	movs r0, #1	@ 000ac86a 0120
.org 0xac86c
	b.n 0xac874	@ 000ac86c 02e0
.org 0xac86e
	adds r1, r4, #0	@ 000ac86e 211c
.org 0xac870
	adds r1, #180	@ 000ac870 b431
.org 0xac872
	movs r0, #0	@ 000ac872 0020
.org 0xac874
	strb r0, [r1, #0]	@ 000ac874 0870
.org 0xac876
	pop {r4, r5}	@ 000ac876 30bc
.org 0xac878
	pop {r0}	@ 000ac878 01bc
.org 0xac87a
	bx r0	@ 000ac87a 0047
