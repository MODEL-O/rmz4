@ FUN_0805c240  entry 0x0805c240  size 42
.thumb
.org 0x5c240
FUN_0805c240:
	push {r4, lr}	@ 0005c240 10b5
.org 0x5c242
	sub sp, #4	@ 0005c242 81b0
.org 0x5c244
	adds r4, r0, #0	@ 0005c244 041c
.org 0x5c246
	ldr r1, [pc, #36]	@ 0005c246 0949
.org 0x5c248
	mov r0, sp	@ 0005c248 6846
.org 0x5c24a
	movs r2, #3	@ 0005c24a 0322
.org 0x5c24c
	bl 0x129258	@ 0005c24c cdf004f8
.org 0x5c250
	adds r4, #164	@ 0005c250 a434
.org 0x5c252
	movs r1, #0	@ 0005c252 0021
.org 0x5c254
	ldrsh r0, [r4, r1]	@ 0005c254 605e
.org 0x5c256
	cmp r0, #0	@ 0005c256 0028
.org 0x5c258
	bge.n 0x5c25c	@ 0005c258 00da
.org 0x5c25a
	adds r0, #31	@ 0005c25a 1f30
.org 0x5c25c
	asrs r0, r0, #5	@ 0005c25c 4011
.org 0x5c25e
	add r0, sp	@ 0005c25e 6844
.org 0x5c260
	ldrb r0, [r0, #0]	@ 0005c260 0078
.org 0x5c262
	add sp, #4	@ 0005c262 01b0
.org 0x5c264
	pop {r4}	@ 0005c264 10bc
.org 0x5c266
	pop {r1}	@ 0005c266 02bc
.org 0x5c268
	bx r1	@ 0005c268 0847
