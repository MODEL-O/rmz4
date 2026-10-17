@ FUN_0804e03c  entry 0x0804e03c  size 80
.thumb
.org 0x4e03c
FUN_0804e03c:
	push {r4, r5, lr}	@ 0004e03c 30b5
.org 0x4e03e
	adds r4, r0, #0	@ 0004e03e 041c
.org 0x4e040
	ldr r1, [pc, #72]	@ 0004e040 1249
.org 0x4e042
	ldrb r0, [r4, #9]	@ 0004e042 607a
.org 0x4e044
	lsls r0, r0, #2	@ 0004e044 8000
.org 0x4e046
	adds r0, r0, r1	@ 0004e046 4018
.org 0x4e048
	movs r1, #1	@ 0004e048 0121
.org 0x4e04a
	str r1, [r4, #12]	@ 0004e04a e160
.org 0x4e04c
	ldr r0, [r0, #0]	@ 0004e04c 0068
.org 0x4e04e
	ldr r0, [r0, #4]	@ 0004e04e 4068
.org 0x4e050
	str r0, [r4, #20]	@ 0004e050 6061
.org 0x4e052
	adds r0, r4, #0	@ 0004e052 201c
.org 0x4e054
	bl 0x1cc9c	@ 0004e054 cef722fe
.org 0x4e058
	adds r0, r4, #0	@ 0004e058 201c
.org 0x4e05a
	bl 0x1ceec	@ 0004e05a cef747ff
.org 0x4e05e
	ldrb r1, [r4, #10]	@ 0004e05e a17a
.org 0x4e060
	movs r0, #254	@ 0004e060 fe20
.org 0x4e062
	ands r0, r1	@ 0004e062 0840
.org 0x4e064
	movs r5, #0	@ 0004e064 0025
.org 0x4e066
	movs r1, #2	@ 0004e066 0221
.org 0x4e068
	orrs r0, r1	@ 0004e068 0843
.org 0x4e06a
	strb r0, [r4, #10]	@ 0004e06a a072
.org 0x4e06c
	ldr r1, [pc, #32]	@ 0004e06c 0849
.org 0x4e06e
	adds r0, r4, #0	@ 0004e06e 201c
.org 0x4e070
	bl 0x1cf00	@ 0004e070 cef746ff
.org 0x4e074
	movs r0, #8	@ 0004e074 0820
.org 0x4e076
	strb r0, [r4, #18]	@ 0004e076 a074
.org 0x4e078
	strb r5, [r4, #19]	@ 0004e078 e574
.org 0x4e07a
	adds r0, r4, #0	@ 0004e07a 201c
.org 0x4e07c
	adds r0, #189	@ 0004e07c bd30
.org 0x4e07e
	strb r5, [r0, #0]	@ 0004e07e 0570
.org 0x4e080
	adds r0, r4, #0	@ 0004e080 201c
.org 0x4e082
	bl 0x4e094	@ 0004e082 00f007f8
.org 0x4e086
	pop {r4, r5}	@ 0004e086 30bc
.org 0x4e088
	pop {r0}	@ 0004e088 01bc
.org 0x4e08a
	bx r0	@ 0004e08a 0047
