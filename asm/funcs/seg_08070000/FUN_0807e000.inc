@ FUN_0807e000  entry 0x0807e000  size 86
.thumb
.org 0x7e000
FUN_0807e000:
	push {r4, lr}	@ 0007e000 10b5
.org 0x7e002
	adds r3, r0, #0	@ 0007e002 031c
.org 0x7e004
	adds r0, #184	@ 0007e004 b830
.org 0x7e006
	ldr r0, [r0, #0]	@ 0007e006 0068
.org 0x7e008
	movs r1, #224	@ 0007e008 e021
.org 0x7e00a
	lsls r1, r1, #6	@ 0007e00a 8901
.org 0x7e00c
	adds r0, r0, r1	@ 0007e00c 4018
.org 0x7e00e
	str r0, [r3, #88]	@ 0007e00e 9865
.org 0x7e010
	adds r2, r3, #0	@ 0007e010 1a1c
.org 0x7e012
	adds r2, #200	@ 0007e012 c832
.org 0x7e014
	adds r1, r3, #0	@ 0007e014 191c
.org 0x7e016
	adds r1, #180	@ 0007e016 b431
.org 0x7e018
	ldr r0, [pc, #60]	@ 0007e018 0f48
.org 0x7e01a
	ldr r0, [r0, #8]	@ 0007e01a 8068
.org 0x7e01c
	movs r4, #240	@ 0007e01c f024
.org 0x7e01e
	lsls r4, r4, #7	@ 0007e01e e401
.org 0x7e020
	adds r0, r0, r4	@ 0007e020 0019
.org 0x7e022
	ldr r1, [r1, #0]	@ 0007e022 0968
.org 0x7e024
	adds r1, r1, r0	@ 0007e024 0918
.org 0x7e026
	str r1, [r2, #0]	@ 0007e026 1160
.org 0x7e028
	movs r2, #0	@ 0007e028 0022
.org 0x7e02a
	ldr r0, [pc, #48]	@ 0007e02a 0c48
.org 0x7e02c
	ldr r0, [r0, #0]	@ 0007e02c 0068
.org 0x7e02e
	ldr r0, [r0, #84]	@ 0007e02e 406d
.org 0x7e030
	cmp r1, r0	@ 0007e030 8142
.org 0x7e032
	bge.n 0x7e036	@ 0007e032 00da
.org 0x7e034
	movs r2, #1	@ 0007e034 0122
.org 0x7e036
	adds r0, r3, #0	@ 0007e036 181c
.org 0x7e038
	adds r0, #190	@ 0007e038 be30
.org 0x7e03a
	movs r1, #0	@ 0007e03a 0021
.org 0x7e03c
	strb r2, [r0, #0]	@ 0007e03c 0270
.org 0x7e03e
	movs r0, #12	@ 0007e03e 0c20
.org 0x7e040
	strb r0, [r3, #13]	@ 0007e040 5873
.org 0x7e042
	strb r1, [r3, #14]	@ 0007e042 9973
.org 0x7e044
	strb r1, [r3, #15]	@ 0007e044 d973
.org 0x7e046
	ldr r0, [pc, #24]	@ 0007e046 0648
.org 0x7e048
	ldr r1, [r0, #48]	@ 0007e048 016b
.org 0x7e04a
	adds r0, r3, #0	@ 0007e04a 181c
.org 0x7e04c
	bl 0x128f80	@ 0007e04c aaf098ff
.org 0x7e050
	pop {r4}	@ 0007e050 10bc
.org 0x7e052
	pop {r0}	@ 0007e052 01bc
.org 0x7e054
	bx r0	@ 0007e054 0047
