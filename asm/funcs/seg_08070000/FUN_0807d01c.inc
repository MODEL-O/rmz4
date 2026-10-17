@ FUN_0807d01c  entry 0x0807d01c  size 86
.thumb
.org 0x7d01c
FUN_0807d01c:
	push {r4, lr}	@ 0007d01c 10b5
.org 0x7d01e
	adds r3, r0, #0	@ 0007d01e 031c
.org 0x7d020
	adds r0, #184	@ 0007d020 b830
.org 0x7d022
	ldr r0, [r0, #0]	@ 0007d022 0068
.org 0x7d024
	movs r1, #224	@ 0007d024 e021
.org 0x7d026
	lsls r1, r1, #6	@ 0007d026 8901
.org 0x7d028
	adds r0, r0, r1	@ 0007d028 4018
.org 0x7d02a
	str r0, [r3, #88]	@ 0007d02a 9865
.org 0x7d02c
	adds r2, r3, #0	@ 0007d02c 1a1c
.org 0x7d02e
	adds r2, #200	@ 0007d02e c832
.org 0x7d030
	adds r1, r3, #0	@ 0007d030 191c
.org 0x7d032
	adds r1, #180	@ 0007d032 b431
.org 0x7d034
	ldr r0, [pc, #60]	@ 0007d034 0f48
.org 0x7d036
	ldr r0, [r0, #8]	@ 0007d036 8068
.org 0x7d038
	movs r4, #240	@ 0007d038 f024
.org 0x7d03a
	lsls r4, r4, #7	@ 0007d03a e401
.org 0x7d03c
	adds r0, r0, r4	@ 0007d03c 0019
.org 0x7d03e
	ldr r1, [r1, #0]	@ 0007d03e 0968
.org 0x7d040
	adds r1, r1, r0	@ 0007d040 0918
.org 0x7d042
	str r1, [r2, #0]	@ 0007d042 1160
.org 0x7d044
	movs r2, #0	@ 0007d044 0022
.org 0x7d046
	ldr r0, [pc, #48]	@ 0007d046 0c48
.org 0x7d048
	ldr r0, [r0, #0]	@ 0007d048 0068
.org 0x7d04a
	ldr r0, [r0, #84]	@ 0007d04a 406d
.org 0x7d04c
	cmp r1, r0	@ 0007d04c 8142
.org 0x7d04e
	bge.n 0x7d052	@ 0007d04e 00da
.org 0x7d050
	movs r2, #1	@ 0007d050 0122
.org 0x7d052
	adds r0, r3, #0	@ 0007d052 181c
.org 0x7d054
	adds r0, #190	@ 0007d054 be30
.org 0x7d056
	movs r1, #0	@ 0007d056 0021
.org 0x7d058
	strb r2, [r0, #0]	@ 0007d058 0270
.org 0x7d05a
	movs r0, #12	@ 0007d05a 0c20
.org 0x7d05c
	strb r0, [r3, #13]	@ 0007d05c 5873
.org 0x7d05e
	strb r1, [r3, #14]	@ 0007d05e 9973
.org 0x7d060
	strb r1, [r3, #15]	@ 0007d060 d973
.org 0x7d062
	ldr r0, [pc, #24]	@ 0007d062 0648
.org 0x7d064
	ldr r1, [r0, #48]	@ 0007d064 016b
.org 0x7d066
	adds r0, r3, #0	@ 0007d066 181c
.org 0x7d068
	bl 0x128f80	@ 0007d068 abf08aff
.org 0x7d06c
	pop {r4}	@ 0007d06c 10bc
.org 0x7d06e
	pop {r0}	@ 0007d06e 01bc
.org 0x7d070
	bx r0	@ 0007d070 0047
