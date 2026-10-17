@ FUN_080e3110  entry 0x080e3110  size 80
.thumb
.org 0xe3110
FUN_080e3110:
	push {r4, r5, r6, lr}	@ 000e3110 70b5
.org 0xe3112
	adds r6, r0, #0	@ 000e3112 061c
.org 0xe3114
	lsls r1, r1, #24	@ 000e3114 0906
.org 0xe3116
	lsrs r5, r1, #24	@ 000e3116 0d0e
.org 0xe3118
	lsls r2, r2, #24	@ 000e3118 1206
.org 0xe311a
	lsrs r4, r2, #24	@ 000e311a 140e
.org 0xe311c
	ldr r0, [pc, #64]	@ 000e311c 1048
.org 0xe311e
	ldr r0, [r0, #0]	@ 000e311e 0068
.org 0xe3120
	bl 0x5500	@ 000e3120 22f7eef9
.org 0xe3124
	adds r3, r0, #0	@ 000e3124 031c
.org 0xe3126
	cmp r3, #0	@ 000e3126 002b
.org 0xe3128
	beq.n 0xe315a	@ 000e3128 17d0
.org 0xe312a
	adds r1, r3, #0	@ 000e312a 191c
.org 0xe312c
	adds r1, #37	@ 000e312c 2531
.org 0xe312e
	movs r2, #0	@ 000e312e 0022
.org 0xe3130
	movs r0, #1	@ 000e3130 0120
.org 0xe3132
	strb r0, [r1, #0]	@ 000e3132 0870
.org 0xe3134
	ldr r0, [pc, #44]	@ 000e3134 0b48
.org 0xe3136
	movs r1, #69	@ 000e3136 4521
.org 0xe3138
	strb r1, [r3, #9]	@ 000e3138 5972
.org 0xe313a
	adds r1, #207	@ 000e313a cf31
.org 0xe313c
	adds r0, r0, r1	@ 000e313c 4018
.org 0xe313e
	ldr r0, [r0, #0]	@ 000e313e 0068
.org 0xe3140
	ldr r0, [r0, #0]	@ 000e3140 0068
.org 0xe3142
	str r0, [r3, #20]	@ 000e3142 5861
.org 0xe3144
	movs r0, #0	@ 000e3144 0020
.org 0xe3146
	strh r2, [r3, #32]	@ 000e3146 1a84
.org 0xe3148
	adds r1, r3, #0	@ 000e3148 191c
.org 0xe314a
	adds r1, #34	@ 000e314a 2231
.org 0xe314c
	strb r0, [r1, #0]	@ 000e314c 0870
.org 0xe314e
	ldr r0, [r6, #0]	@ 000e314e 3068
.org 0xe3150
	ldr r1, [r6, #4]	@ 000e3150 7168
.org 0xe3152
	str r0, [r3, #84]	@ 000e3152 5865
.org 0xe3154
	str r1, [r3, #88]	@ 000e3154 9965
.org 0xe3156
	strb r5, [r3, #16]	@ 000e3156 1d74
.org 0xe3158
	strb r4, [r3, #17]	@ 000e3158 5c74
.org 0xe315a
	pop {r4, r5, r6}	@ 000e315a 70bc
.org 0xe315c
	pop {r0}	@ 000e315c 01bc
.org 0xe315e
	bx r0	@ 000e315e 0047
