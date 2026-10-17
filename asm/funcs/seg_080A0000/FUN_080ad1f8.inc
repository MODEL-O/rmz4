@ FUN_080ad1f8  entry 0x080ad1f8  size 152
.thumb
.org 0xad1f8
FUN_080ad1f8:
	push {r4, r5, r6, r7, lr}	@ 000ad1f8 f0b5
.org 0xad1fa
	mov r7, r8	@ 000ad1fa 4746
.org 0xad1fc
	push {r7}	@ 000ad1fc 80b4
.org 0xad1fe
	sub sp, #16	@ 000ad1fe 84b0
.org 0xad200
	adds r4, r0, #0	@ 000ad200 041c
.org 0xad202
	mov r1, sp	@ 000ad202 6946
.org 0xad204
	ldr r0, [pc, #108]	@ 000ad204 1b48
.org 0xad206
	ldmia r0!, {r2, r3, r5}	@ 000ad206 2cc8
.org 0xad208
	stmia r1!, {r2, r3, r5}	@ 000ad208 2cc1
.org 0xad20a
	ldr r0, [r0, #0]	@ 000ad20a 0068
.org 0xad20c
	str r0, [r1, #0]	@ 000ad20c 0860
.org 0xad20e
	ldr r7, [r4, #40]	@ 000ad20e a76a
.org 0xad210
	ldrb r5, [r4, #17]	@ 000ad210 657c
.org 0xad212
	mov r8, r5	@ 000ad212 a846
.org 0xad214
	ldrb r0, [r4, #15]	@ 000ad214 e07b
.org 0xad216
	cmp r0, #0	@ 000ad216 0028
.org 0xad218
	bne.n 0xad22c	@ 000ad218 08d1
.org 0xad21a
	lsls r0, r5, #2	@ 000ad21a a800
.org 0xad21c
	add r0, sp	@ 000ad21c 6844
.org 0xad21e
	ldrh r1, [r0, #0]	@ 000ad21e 0188
.org 0xad220
	adds r0, r4, #0	@ 000ad220 201c
.org 0xad222
	bl 0x1cf00	@ 000ad222 6ff76dfe
.org 0xad226
	ldrb r0, [r4, #15]	@ 000ad226 e07b
.org 0xad228
	adds r0, #1	@ 000ad228 0130
.org 0xad22a
	strb r0, [r4, #15]	@ 000ad22a e073
.org 0xad22c
	adds r0, r4, #0	@ 000ad22c 201c
.org 0xad22e
	bl 0x1cff0	@ 000ad22e 6ff7dffe
.org 0xad232
	movs r0, #187	@ 000ad232 bb20
.org 0xad234
	adds r0, r0, r7	@ 000ad234 c019
.org 0xad236
	mov ip, r0	@ 000ad236 8446
.org 0xad238
	ldrb r0, [r0, #0]	@ 000ad238 0078
.org 0xad23a
	asrs r0, r5	@ 000ad23a 2841
.org 0xad23c
	movs r6, #1	@ 000ad23c 0126
.org 0xad23e
	ands r0, r6	@ 000ad23e 3040
.org 0xad240
	cmp r0, #0	@ 000ad240 0028
.org 0xad242
	beq.n 0xad27c	@ 000ad242 1bd0
.org 0xad244
	adds r3, r7, #0	@ 000ad244 3b1c
.org 0xad246
	adds r3, #181	@ 000ad246 b533
.org 0xad248
	adds r1, r6, #0	@ 000ad248 311c
.org 0xad24a
	lsls r1, r5	@ 000ad24a a940
.org 0xad24c
	ldrb r2, [r3, #0]	@ 000ad24c 1a78
.org 0xad24e
	adds r0, r1, #0	@ 000ad24e 081c
.org 0xad250
	orrs r0, r2	@ 000ad250 1043
.org 0xad252
	movs r2, #0	@ 000ad252 0022
.org 0xad254
	strb r0, [r3, #0]	@ 000ad254 1870
.org 0xad256
	mov r3, ip	@ 000ad256 6346
.org 0xad258
	ldrb r0, [r3, #0]	@ 000ad258 1878
.org 0xad25a
	bics r0, r1	@ 000ad25a 8843
.org 0xad25c
	strb r0, [r3, #0]	@ 000ad25c 1870
.org 0xad25e
	strb r6, [r4, #14]	@ 000ad25e a673
.org 0xad260
	strb r2, [r4, #15]	@ 000ad260 e273
.org 0xad262
	ldr r1, [pc, #20]	@ 000ad262 0549
.org 0xad264
	ldrb r0, [r4, #13]	@ 000ad264 607b
.org 0xad266
	lsls r0, r0, #2	@ 000ad266 8000
.org 0xad268
	adds r0, r0, r1	@ 000ad268 4018
.org 0xad26a
	ldr r1, [r0, #0]	@ 000ad26a 0168
.org 0xad26c
	adds r0, r4, #0	@ 000ad26c 201c
.org 0xad26e
	bl 0x128f80	@ 000ad26e 7bf087fe
.org 0xad272
	b.n 0xad28c	@ 000ad272 0be0
.org 0xad274
	.byte 0xac,0x9d,0x12,0x08	@ 000ad274 data
.org 0xad278
	.byte 0x70,0x2d,0x86,0x08	@ 000ad278 data
.org 0xad27c
	adds r2, r7, #0	@ 000ad27c 3a1c
.org 0xad27e
	adds r2, #181	@ 000ad27e b532
.org 0xad280
	adds r1, r6, #0	@ 000ad280 311c
.org 0xad282
	mov r5, r8	@ 000ad282 4546
.org 0xad284
	lsls r1, r5	@ 000ad284 a940
.org 0xad286
	ldrb r0, [r2, #0]	@ 000ad286 1078
.org 0xad288
	bics r0, r1	@ 000ad288 8843
.org 0xad28a
	strb r0, [r2, #0]	@ 000ad28a 1070
.org 0xad28c
	add sp, #16	@ 000ad28c 04b0
.org 0xad28e
	pop {r3}	@ 000ad28e 08bc
