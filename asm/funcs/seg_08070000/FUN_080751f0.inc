@ FUN_080751f0  entry 0x080751f0  size 102
.thumb
.org 0x751f0
FUN_080751f0:
	push {r4, lr}	@ 000751f0 10b5
.org 0x751f2
	adds r4, r0, #0	@ 000751f2 041c
.org 0x751f4
	ldrb r0, [r4, #13]	@ 000751f4 607b
.org 0x751f6
	cmp r0, #4	@ 000751f6 0428
.org 0x751f8
	bhi.n 0x75250	@ 000751f8 2ad8
.org 0x751fa
	adds r0, r4, #0	@ 000751fa 201c
.org 0x751fc
	adds r0, #222	@ 000751fc de30
.org 0x751fe
	ldrb r0, [r0, #0]	@ 000751fe 0078
.org 0x75200
	cmp r0, #0	@ 00075200 0028
.org 0x75202
	beq.n 0x75250	@ 00075202 25d0
.org 0x75204
	adds r0, r4, #0	@ 00075204 201c
.org 0x75206
	bl 0x503a8	@ 00075206 dbf7cff8
.org 0x7520a
	adds r2, r0, #0	@ 0007520a 021c
.org 0x7520c
	cmp r2, #0	@ 0007520c 002a
.org 0x7520e
	beq.n 0x75238	@ 0007520e 13d0
.org 0x75210
	ldr r0, [r2, #0]	@ 00075210 1068
.org 0x75212
	ldr r1, [r4, #84]	@ 00075212 616d
.org 0x75214
	subs r0, r0, r1	@ 00075214 401a
.org 0x75216
	movs r1, #128	@ 00075216 8021
.org 0x75218
	lsls r1, r1, #7	@ 00075218 c901
.org 0x7521a
	adds r0, r0, r1	@ 0007521a 4018
.org 0x7521c
	movs r1, #128	@ 0007521c 8021
.org 0x7521e
	lsls r1, r1, #8	@ 0007521e 0902
.org 0x75220
	cmp r0, r1	@ 00075220 8842
.org 0x75222
	bhi.n 0x75238	@ 00075222 09d8
.org 0x75224
	ldr r0, [r2, #4]	@ 00075224 5068
.org 0x75226
	ldr r1, [r4, #88]	@ 00075226 a16d
.org 0x75228
	subs r0, r0, r1	@ 00075228 401a
.org 0x7522a
	movs r1, #148	@ 0007522a 9421
.org 0x7522c
	lsls r1, r1, #7	@ 0007522c c901
.org 0x7522e
	adds r0, r0, r1	@ 0007522e 4018
.org 0x75230
	movs r1, #148	@ 00075230 9421
.org 0x75232
	lsls r1, r1, #8	@ 00075232 0902
.org 0x75234
	cmp r0, r1	@ 00075234 8842
.org 0x75236
	bls.n 0x75248	@ 00075236 07d9
.org 0x75238
	adds r0, r4, #0	@ 00075238 201c
.org 0x7523a
	adds r0, #140	@ 0007523a 8c30
.org 0x7523c
	ldr r0, [r0, #0]	@ 0007523c 0068
.org 0x7523e
	movs r1, #128	@ 0007523e 8021
.org 0x75240
	lsls r1, r1, #6	@ 00075240 8901
.org 0x75242
	ands r0, r1	@ 00075242 0840
.org 0x75244
	cmp r0, #0	@ 00075244 0028
.org 0x75246
	beq.n 0x75250	@ 00075246 03d0
.org 0x75248
	movs r1, #0	@ 00075248 0021
.org 0x7524a
	movs r0, #6	@ 0007524a 0620
.org 0x7524c
	strb r0, [r4, #13]	@ 0007524c 6073
.org 0x7524e
	strb r1, [r4, #14]	@ 0007524e a173
.org 0x75250
	pop {r4}	@ 00075250 10bc
.org 0x75252
	pop {r0}	@ 00075252 01bc
.org 0x75254
	bx r0	@ 00075254 0047
