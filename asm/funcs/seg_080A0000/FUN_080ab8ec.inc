@ FUN_080ab8ec  entry 0x080ab8ec  size 110
.thumb
.org 0xab8ec
FUN_080ab8ec:
	push {r4, r5, lr}	@ 000ab8ec 30b5
.org 0xab8ee
	adds r5, r0, #0	@ 000ab8ee 051c
.org 0xab8f0
	ldr r4, [r5, #40]	@ 000ab8f0 ac6a
.org 0xab8f2
	bl 0x1cc9c	@ 000ab8f2 71f7d3f9
.org 0xab8f6
	adds r0, r5, #0	@ 000ab8f6 281c
.org 0xab8f8
	bl 0x1ceec	@ 000ab8f8 71f7f8fa
.org 0xab8fc
	ldrb r1, [r5, #10]	@ 000ab8fc a97a
.org 0xab8fe
	movs r0, #1	@ 000ab8fe 0120
.org 0xab900
	orrs r0, r1	@ 000ab900 0843
.org 0xab902
	movs r1, #2	@ 000ab902 0221
.org 0xab904
	orrs r0, r1	@ 000ab904 0843
.org 0xab906
	strb r0, [r5, #10]	@ 000ab906 a872
.org 0xab908
	ldr r1, [pc, #36]	@ 000ab908 0949
.org 0xab90a
	adds r0, r5, #0	@ 000ab90a 281c
.org 0xab90c
	bl 0x1cf00	@ 000ab90c 71f7f8fa
.org 0xab910
	ldrb r1, [r5, #11]	@ 000ab910 e97a
.org 0xab912
	movs r0, #16	@ 000ab912 1020
.org 0xab914
	orrs r0, r1	@ 000ab914 0843
.org 0xab916
	strb r0, [r5, #11]	@ 000ab916 e872
.org 0xab918
	ldrb r0, [r4, #28]	@ 000ab918 207f
.org 0xab91a
	strb r0, [r5, #29]	@ 000ab91a 6877
.org 0xab91c
	ldrb r1, [r5, #10]	@ 000ab91c a97a
.org 0xab91e
	movs r0, #16	@ 000ab91e 1020
.org 0xab920
	ands r0, r1	@ 000ab920 0840
.org 0xab922
	cmp r0, #0	@ 000ab922 0028
.org 0xab924
	beq.n 0xab934	@ 000ab924 06d0
.org 0xab926
	movs r0, #128	@ 000ab926 8020
.org 0xab928
	negs r0, r0	@ 000ab928 4042
.org 0xab92a
	str r0, [r5, #92]	@ 000ab92a e865
.org 0xab92c
	movs r0, #2	@ 000ab92c 0220
.org 0xab92e
	b.n 0xab93a	@ 000ab92e 04e0
.org 0xab930
	.byte 0x0d,0xaf,0x00,0x00	@ 000ab930 data
.org 0xab934
	movs r0, #128	@ 000ab934 8020
.org 0xab936
	str r0, [r5, #92]	@ 000ab936 e865
.org 0xab938
	subs r0, #130	@ 000ab938 8238
.org 0xab93a
	str r0, [r5, #100]	@ 000ab93a 6866
.org 0xab93c
	movs r0, #0	@ 000ab93c 0020
.org 0xab93e
	strb r0, [r5, #18]	@ 000ab93e a874
.org 0xab940
	ldr r1, [pc, #28]	@ 000ab940 0749
.org 0xab942
	ldrb r0, [r5, #9]	@ 000ab942 687a
.org 0xab944
	lsls r0, r0, #2	@ 000ab944 8000
.org 0xab946
	adds r0, r0, r1	@ 000ab946 4018
.org 0xab948
	movs r1, #1	@ 000ab948 0121
.org 0xab94a
	str r1, [r5, #12]	@ 000ab94a e960
.org 0xab94c
	ldr r0, [r0, #0]	@ 000ab94c 0068
.org 0xab94e
	ldr r0, [r0, #4]	@ 000ab94e 4068
.org 0xab950
	str r0, [r5, #20]	@ 000ab950 6861
.org 0xab952
	adds r0, r5, #0	@ 000ab952 281c
.org 0xab954
	bl 0xab964	@ 000ab954 00f006f8
.org 0xab958
	pop {r4, r5}	@ 000ab958 30bc
