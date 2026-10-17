@ FUN_080b3844  entry 0x080b3844  size 102
.thumb
.org 0xb3844
FUN_080b3844:
	push {r4, r5, lr}	@ 000b3844 30b5
.org 0xb3846
	adds r5, r0, #0	@ 000b3846 051c
.org 0xb3848
	bl 0x1cc9c	@ 000b3848 69f728fa
.org 0xb384c
	ldrb r1, [r5, #10]	@ 000b384c a97a
.org 0xb384e
	movs r0, #1	@ 000b384e 0120
.org 0xb3850
	movs r4, #0	@ 000b3850 0024
.org 0xb3852
	orrs r0, r1	@ 000b3852 0843
.org 0xb3854
	movs r1, #2	@ 000b3854 0221
.org 0xb3856
	orrs r0, r1	@ 000b3856 0843
.org 0xb3858
	strb r0, [r5, #10]	@ 000b3858 a872
.org 0xb385a
	adds r0, r5, #0	@ 000b385a 281c
.org 0xb385c
	adds r0, #140	@ 000b385c 8c30
.org 0xb385e
	str r4, [r0, #0]	@ 000b385e 0460
.org 0xb3860
	adds r0, #4	@ 000b3860 0430
.org 0xb3862
	str r4, [r0, #0]	@ 000b3862 0460
.org 0xb3864
	adds r0, #4	@ 000b3864 0430
.org 0xb3866
	strb r4, [r0, #0]	@ 000b3866 0470
.org 0xb3868
	ldrb r1, [r5, #10]	@ 000b3868 a97a
.org 0xb386a
	movs r0, #251	@ 000b386a fb20
.org 0xb386c
	ands r0, r1	@ 000b386c 0840
.org 0xb386e
	strb r0, [r5, #10]	@ 000b386e a872
.org 0xb3870
	ldr r1, [pc, #56]	@ 000b3870 0e49
.org 0xb3872
	ldrb r0, [r5, #9]	@ 000b3872 687a
.org 0xb3874
	lsls r0, r0, #2	@ 000b3874 8000
.org 0xb3876
	adds r0, r0, r1	@ 000b3876 4018
.org 0xb3878
	movs r1, #1	@ 000b3878 0121
.org 0xb387a
	str r1, [r5, #12]	@ 000b387a e960
.org 0xb387c
	ldr r0, [r0, #0]	@ 000b387c 0068
.org 0xb387e
	ldr r0, [r0, #4]	@ 000b387e 4068
.org 0xb3880
	str r0, [r5, #20]	@ 000b3880 6861
.org 0xb3882
	str r4, [r5, #44]	@ 000b3882 ec62
.org 0xb3884
	adds r0, r5, #0	@ 000b3884 281c
.org 0xb3886
	adds r0, #180	@ 000b3886 b430
.org 0xb3888
	strb r4, [r0, #0]	@ 000b3888 0470
.org 0xb388a
	ldr r0, [r5, #84]	@ 000b388a 686d
.org 0xb388c
	ldr r1, [r5, #88]	@ 000b388c a96d
.org 0xb388e
	bl 0x8534	@ 000b388e 54f751fe
.org 0xb3892
	str r0, [r5, #88]	@ 000b3892 a865
.org 0xb3894
	adds r0, r5, #0	@ 000b3894 281c
.org 0xb3896
	adds r0, #181	@ 000b3896 b530
.org 0xb3898
	strb r4, [r0, #0]	@ 000b3898 0470
.org 0xb389a
	strb r4, [r5, #13]	@ 000b389a 6c73
.org 0xb389c
	strb r4, [r5, #14]	@ 000b389c ac73
.org 0xb389e
	adds r0, r5, #0	@ 000b389e 281c
.org 0xb38a0
	bl 0xb38b0	@ 000b38a0 00f006f8
.org 0xb38a4
	pop {r4, r5}	@ 000b38a4 30bc
.org 0xb38a6
	pop {r0}	@ 000b38a6 01bc
.org 0xb38a8
	bx r0	@ 000b38a8 0047
