@ FUN_080d522c  entry 0x080d522c  size 82
.thumb
.org 0xd522c
FUN_080d522c:
	push {r4, r5, lr}	@ 000d522c 30b5
.org 0xd522e
	adds r3, r0, #0	@ 000d522e 031c
.org 0xd5230
	ldrb r4, [r3, #14]	@ 000d5230 9c7b
.org 0xd5232
	cmp r4, #0	@ 000d5232 002c
.org 0xd5234
	bne.n 0xd525c	@ 000d5234 12d1
.org 0xd5236
	ldr r2, [pc, #72]	@ 000d5236 124a
.org 0xd5238
	ldrh r1, [r2, #0]	@ 000d5238 1188
.org 0xd523a
	movs r5, #128	@ 000d523a 8025
.org 0xd523c
	lsls r5, r5, #7	@ 000d523c ed01
.org 0xd523e
	adds r0, r5, #0	@ 000d523e 281c
.org 0xd5240
	orrs r0, r1	@ 000d5240 0843
.org 0xd5242
	strh r0, [r2, #0]	@ 000d5242 1080
.org 0xd5244
	adds r0, r3, #0	@ 000d5244 181c
.org 0xd5246
	adds r0, #124	@ 000d5246 7c30
.org 0xd5248
	ldrb r0, [r0, #0]	@ 000d5248 0078
.org 0xd524a
	strb r0, [r2, #13]	@ 000d524a 5073
.org 0xd524c
	adds r1, r3, #0	@ 000d524c 191c
.org 0xd524e
	adds r1, #125	@ 000d524e 7d31
.org 0xd5250
	ldrb r0, [r2, #14]	@ 000d5250 907b
.org 0xd5252
	ldrb r1, [r1, #0]	@ 000d5252 0978
.org 0xd5254
	orrs r0, r1	@ 000d5254 0843
.org 0xd5256
	strb r0, [r2, #14]	@ 000d5256 9073
.org 0xd5258
	adds r0, r4, #1	@ 000d5258 601c
.org 0xd525a
	strb r0, [r3, #14]	@ 000d525a 9873
.org 0xd525c
	adds r0, r3, #0	@ 000d525c 181c
.org 0xd525e
	adds r0, #119	@ 000d525e 7730
.org 0xd5260
	ldrb r0, [r0, #0]	@ 000d5260 0078
.org 0xd5262
	cmp r0, #0	@ 000d5262 0028
.org 0xd5264
	beq.n 0xd5278	@ 000d5264 08d0
.org 0xd5266
	ldr r1, [pc, #28]	@ 000d5266 0749
.org 0xd5268
	ldrb r0, [r3, #9]	@ 000d5268 587a
.org 0xd526a
	lsls r0, r0, #2	@ 000d526a 8000
.org 0xd526c
	adds r0, r0, r1	@ 000d526c 4018
.org 0xd526e
	movs r1, #2	@ 000d526e 0221
.org 0xd5270
	str r1, [r3, #12]	@ 000d5270 d960
.org 0xd5272
	ldr r0, [r0, #0]	@ 000d5272 0068
.org 0xd5274
	ldr r0, [r0, #8]	@ 000d5274 8068
.org 0xd5276
	str r0, [r3, #20]	@ 000d5276 5861
.org 0xd5278
	pop {r4, r5}	@ 000d5278 30bc
.org 0xd527a
	pop {r0}	@ 000d527a 01bc
.org 0xd527c
	bx r0	@ 000d527c 0047
