@ FUN_080de20c  entry 0x080de20c  size 102
.thumb
.org 0xde20c
FUN_080de20c:
	push {r4, r5, r6, lr}	@ 000de20c 70b5
.org 0xde20e
	mov r6, r8	@ 000de20e 4646
.org 0xde210
	push {r6}	@ 000de210 40b4
.org 0xde212
	adds r6, r0, #0	@ 000de212 061c
.org 0xde214
	movs r0, #84	@ 000de214 5420
.org 0xde216
	adds r0, r0, r6	@ 000de216 8019
.org 0xde218
	mov r8, r0	@ 000de218 8046
.org 0xde21a
	ldr r5, [pc, #88]	@ 000de21a 164d
.org 0xde21c
	ldrb r0, [r6, #10]	@ 000de21c b07a
.org 0xde21e
	movs r4, #16	@ 000de21e 1024
.org 0xde220
	adds r3, r4, #0	@ 000de220 231c
.org 0xde222
	ands r3, r0	@ 000de222 0340
.org 0xde224
	lsls r3, r3, #24	@ 000de224 1b06
.org 0xde226
	lsrs r3, r3, #24	@ 000de226 1b0e
.org 0xde228
	mov r0, r8	@ 000de228 4046
.org 0xde22a
	adds r1, r5, #0	@ 000de22a 291c
.org 0xde22c
	movs r2, #0	@ 000de22c 0022
.org 0xde22e
	bl 0xd4c8c	@ 000de22e f6f72dfd
.org 0xde232
	adds r5, #28	@ 000de232 1c35
.org 0xde234
	ldrb r0, [r6, #10]	@ 000de234 b07a
.org 0xde236
	ands r4, r0	@ 000de236 0440
.org 0xde238
	lsls r4, r4, #24	@ 000de238 2406
.org 0xde23a
	lsrs r4, r4, #24	@ 000de23a 240e
.org 0xde23c
	mov r0, r8	@ 000de23c 4046
.org 0xde23e
	adds r1, r5, #0	@ 000de23e 291c
.org 0xde240
	movs r2, #0	@ 000de240 0022
.org 0xde242
	adds r3, r4, #0	@ 000de242 231c
.org 0xde244
	bl 0xd4c8c	@ 000de244 f6f722fd
.org 0xde248
	movs r0, #1	@ 000de248 0120
.org 0xde24a
	mov r1, r8	@ 000de24a 4146
.org 0xde24c
	bl 0xd0c88	@ 000de24c f2f71cfd
.org 0xde250
	movs r0, #42	@ 000de250 2a20
.org 0xde252
	bl 0x2b10	@ 000de252 24f75dfc
.org 0xde256
	ldr r1, [pc, #32]	@ 000de256 0849
.org 0xde258
	ldrb r0, [r6, #9]	@ 000de258 707a
.org 0xde25a
	lsls r0, r0, #2	@ 000de25a 8000
.org 0xde25c
	adds r0, r0, r1	@ 000de25c 4018
.org 0xde25e
	movs r1, #4	@ 000de25e 0421
.org 0xde260
	str r1, [r6, #12]	@ 000de260 f160
.org 0xde262
	ldr r0, [r0, #0]	@ 000de262 0068
.org 0xde264
	ldr r0, [r0, #16]	@ 000de264 0069
.org 0xde266
	str r0, [r6, #20]	@ 000de266 7061
.org 0xde268
	pop {r3}	@ 000de268 08bc
.org 0xde26a
	mov r8, r3	@ 000de26a 9846
.org 0xde26c
	pop {r4, r5, r6}	@ 000de26c 70bc
.org 0xde26e
	pop {r0}	@ 000de26e 01bc
.org 0xde270
	bx r0	@ 000de270 0047
