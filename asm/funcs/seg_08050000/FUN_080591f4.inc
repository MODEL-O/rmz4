@ FUN_080591f4  entry 0x080591f4  size 42
.thumb
.org 0x591f4
FUN_080591f4:
	push {r4, r5, lr}	@ 000591f4 30b5
.org 0x591f6
	sub sp, #16	@ 000591f6 84b0
.org 0x591f8
	adds r4, r0, #0	@ 000591f8 041c
.org 0x591fa
	ldr r0, [pc, #28]	@ 000591fa 0748
.org 0x591fc
	ldr r1, [r0, #4]	@ 000591fc 4168
.org 0x591fe
	ldr r0, [r0, #0]	@ 000591fe 0068
.org 0x59200
	str r0, [sp, #0]	@ 00059200 0090
.org 0x59202
	str r1, [sp, #4]	@ 00059202 0191
.org 0x59204
	ldrb r0, [r4, #15]	@ 00059204 e07b
.org 0x59206
	cmp r0, #7	@ 00059206 0728
.org 0x59208
	bls.n 0x5920c	@ 00059208 00d9
.org 0x5920a
	b.n 0x5933e	@ 0005920a 98e0
.org 0x5920c
	lsls r0, r0, #2	@ 0005920c 8000
.org 0x5920e
	ldr r1, [pc, #12]	@ 0005920e 0349
.org 0x59210
	adds r0, r0, r1	@ 00059210 4018
.org 0x59212
	ldr r0, [r0, #0]	@ 00059212 0068
.org 0x59214
	mov pc, r0	@ 00059214 8746
.org 0x59216
	.byte 0x00	@ 00059216 data
.org 0x59217
	.byte 0x00	@ 00059217 data
.org 0x59218
	.byte 0x48,0x96,0x12,0x08	@ 00059218 data
.org 0x5921c
	.byte 0x20,0x92,0x05,0x08	@ 0005921c data
