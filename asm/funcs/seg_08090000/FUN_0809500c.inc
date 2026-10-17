@ FUN_0809500c  entry 0x0809500c  size 152
.thumb
.org 0x9500c
FUN_0809500c:
	push {r4, r5, r6, r7, lr}	@ 0009500c f0b5
.org 0x9500e
	adds r5, r0, #0	@ 0009500e 051c
.org 0x95010
	ldr r7, [r5, #40]	@ 00095010 af6a
.org 0x95012
	ldrb r4, [r5, #17]	@ 00095012 6c7c
.org 0x95014
	ldr r1, [pc, #72]	@ 00095014 1249
.org 0x95016
	ldrb r0, [r5, #9]	@ 00095016 687a
.org 0x95018
	lsls r0, r0, #2	@ 00095018 8000
.org 0x9501a
	adds r0, r0, r1	@ 0009501a 4018
.org 0x9501c
	movs r2, #1	@ 0009501c 0122
.org 0x9501e
	str r2, [r5, #12]	@ 0009501e ea60
.org 0x95020
	ldr r0, [r0, #0]	@ 00095020 0068
.org 0x95022
	ldr r0, [r0, #4]	@ 00095022 4068
.org 0x95024
	str r0, [r5, #20]	@ 00095024 6861
.org 0x95026
	ldrb r1, [r5, #10]	@ 00095026 a97a
.org 0x95028
	movs r0, #1	@ 00095028 0120
.org 0x9502a
	movs r6, #0	@ 0009502a 0026
.org 0x9502c
	orrs r0, r1	@ 0009502c 0843
.org 0x9502e
	movs r1, #2	@ 0009502e 0221
.org 0x95030
	orrs r0, r1	@ 00095030 0843
.org 0x95032
	strb r0, [r5, #10]	@ 00095032 a872
.org 0x95034
	lsls r0, r4, #1	@ 00095034 6000
.org 0x95036
	subs r2, r2, r0	@ 00095036 121a
.org 0x95038
	lsls r2, r2, #7	@ 00095038 d201
.org 0x9503a
	str r2, [r5, #92]	@ 0009503a ea65
.org 0x9503c
	movs r0, #56	@ 0009503c 3820
.org 0x9503e
	strb r0, [r5, #18]	@ 0009503e a874
.org 0x95040
	adds r0, r5, #0	@ 00095040 281c
.org 0x95042
	bl 0x1cc9c	@ 00095042 87f72bfe
.org 0x95046
	adds r0, r5, #0	@ 00095046 281c
.org 0x95048
	bl 0x1ceec	@ 00095048 87f750ff
.org 0x9504c
	adds r1, r5, #0	@ 0009504c 291c
.org 0x9504e
	adds r1, #37	@ 0009504e 2531
.org 0x95050
	movs r0, #23	@ 00095050 1720
.org 0x95052
	strb r0, [r1, #0]	@ 00095052 0870
.org 0x95054
	cmp r4, #0	@ 00095054 002c
.org 0x95056
	beq.n 0x95064	@ 00095056 05d0
.org 0x95058
	ldrb r0, [r5, #10]	@ 00095058 a87a
.org 0x9505a
	movs r1, #16	@ 0009505a 1021
.org 0x9505c
	orrs r0, r1	@ 0009505c 0843
.org 0x9505e
	b.n 0x9506a	@ 0009505e 04e0
.org 0x95060
	.byte 0x40,0xdb,0x85,0x08	@ 00095060 data
.org 0x95064
	ldrb r1, [r5, #10]	@ 00095064 a97a
.org 0x95066
	movs r0, #239	@ 00095066 ef20
.org 0x95068
	ands r0, r1	@ 00095068 0840
.org 0x9506a
	strb r0, [r5, #10]	@ 0009506a a872
.org 0x9506c
	movs r1, #1	@ 0009506c 0121
.org 0x9506e
	ands r1, r4	@ 0009506e 2140
.org 0x95070
	adds r0, r5, #0	@ 00095070 281c
.org 0x95072
	adds r0, #76	@ 00095072 4c30
.org 0x95074
	strb r1, [r0, #0]	@ 00095074 0170
.org 0x95076
	adds r3, r5, #0	@ 00095076 2b1c
.org 0x95078
	adds r3, #74	@ 00095078 4a33
.org 0x9507a
	lsls r1, r1, #4	@ 0009507a 0901
.org 0x9507c
	ldrb r2, [r3, #0]	@ 0009507c 1a78
.org 0x9507e
	movs r0, #17	@ 0009507e 1120
.org 0x95080
	negs r0, r0	@ 00095080 4042
.org 0x95082
	ands r0, r2	@ 00095082 1040
.org 0x95084
	orrs r0, r1	@ 00095084 0843
.org 0x95086
	strb r0, [r3, #0]	@ 00095086 1870
.org 0x95088
	ldr r1, [pc, #28]	@ 00095088 0749
.org 0x9508a
	adds r0, r5, #0	@ 0009508a 281c
.org 0x9508c
	bl 0x1cf00	@ 0009508c 87f738ff
.org 0x95090
	ldrb r1, [r5, #11]	@ 00095090 e97a
.org 0x95092
	movs r0, #16	@ 00095092 1020
.org 0x95094
	orrs r0, r1	@ 00095094 0843
.org 0x95096
	strb r0, [r5, #11]	@ 00095096 e872
.org 0x95098
	ldrb r0, [r7, #28]	@ 00095098 387f
.org 0x9509a
	strb r0, [r5, #29]	@ 0009509a 6877
.org 0x9509c
	adds r0, r5, #0	@ 0009509c 281c
.org 0x9509e
	bl 0x950ac	@ 0009509e 00f005f8
.org 0x950a2
	pop {r4, r5, r6, r7}	@ 000950a2 f0bc
