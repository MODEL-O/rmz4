@ FUN_0802e2d0  entry 0x0802e2d0  size 154
.thumb
.org 0x2e2d0
FUN_0802e2d0:
	push {r4, r5, r6, r7, lr}	@ 0002e2d0 f0b5
.org 0x2e2d2
	mov r7, sl	@ 0002e2d2 5746
.org 0x2e2d4
	mov r6, r9	@ 0002e2d4 4e46
.org 0x2e2d6
	mov r5, r8	@ 0002e2d6 4546
.org 0x2e2d8
	push {r5, r6, r7}	@ 0002e2d8 e0b4
.org 0x2e2da
	adds r4, r0, #0	@ 0002e2da 041c
.org 0x2e2dc
	mov r8, r1	@ 0002e2dc 8846
.org 0x2e2de
	adds r7, r2, #0	@ 0002e2de 171c
.org 0x2e2e0
	movs r2, #0	@ 0002e2e0 0022
.org 0x2e2e2
	movs r1, #220	@ 0002e2e2 dc21
.org 0x2e2e4
	lsls r1, r1, #1	@ 0002e2e4 4900
.org 0x2e2e6
	adds r0, r4, r1	@ 0002e2e6 6018
.org 0x2e2e8
	ldrb r0, [r0, #0]	@ 0002e2e8 0078
.org 0x2e2ea
	cmp r2, r0	@ 0002e2ea 8242
.org 0x2e2ec
	bcs.n 0x2e35e	@ 0002e2ec 37d2
.org 0x2e2ee
	ldr r5, [pc, #96]	@ 0002e2ee 184d
.org 0x2e2f0
	adds r1, #36	@ 0002e2f0 2431
.org 0x2e2f2
	adds r1, r1, r5	@ 0002e2f2 4919
.org 0x2e2f4
	mov sl, r1	@ 0002e2f4 8a46
.org 0x2e2f6
	movs r1, #240	@ 0002e2f6 f021
.org 0x2e2f8
	lsls r1, r1, #1	@ 0002e2f8 4900
.org 0x2e2fa
	adds r1, r1, r5	@ 0002e2fa 4919
.org 0x2e2fc
	mov r9, r1	@ 0002e2fc 8946
.org 0x2e2fe
	adds r6, r0, #0	@ 0002e2fe 061c
.org 0x2e300
	movs r1, #196	@ 0002e300 c421
.org 0x2e302
	lsls r1, r1, #1	@ 0002e302 4900
.org 0x2e304
	adds r0, r4, r1	@ 0002e304 6018
.org 0x2e306
	adds r0, r0, r2	@ 0002e306 8018
.org 0x2e308
	ldrb r1, [r0, #0]	@ 0002e308 0178
.org 0x2e30a
	lsls r0, r1, #1	@ 0002e30a 4800
.org 0x2e30c
	adds r0, r0, r1	@ 0002e30c 4018
.org 0x2e30e
	lsls r3, r0, #3	@ 0002e30e c300
.org 0x2e310
	mov r1, sl	@ 0002e310 5146
.org 0x2e312
	adds r0, r3, r1	@ 0002e312 5818
.org 0x2e314
	ldr r1, [r0, #0]	@ 0002e314 0168
.org 0x2e316
	mov r0, r8	@ 0002e316 4046
.org 0x2e318
	subs r1, r0, r1	@ 0002e318 411a
.org 0x2e31a
	adds r0, r3, r5	@ 0002e31a 5819
.org 0x2e31c
	mov ip, r0	@ 0002e31c 8446
.org 0x2e31e
	movs r0, #236	@ 0002e31e ec20
.org 0x2e320
	lsls r0, r0, #1	@ 0002e320 4000
.org 0x2e322
	add r0, ip	@ 0002e322 6044
.org 0x2e324
	ldrh r0, [r0, #0]	@ 0002e324 0088
.org 0x2e326
	adds r1, r1, r0	@ 0002e326 0918
.org 0x2e328
	lsls r0, r0, #1	@ 0002e328 4000
.org 0x2e32a
	cmp r1, r0	@ 0002e32a 8142
.org 0x2e32c
	bcs.n 0x2e354	@ 0002e32c 12d2
.org 0x2e32e
	mov r1, r9	@ 0002e32e 4946
.org 0x2e330
	adds r0, r3, r1	@ 0002e330 5818
.org 0x2e332
	ldr r1, [r0, #0]	@ 0002e332 0168
.org 0x2e334
	subs r1, r7, r1	@ 0002e334 791a
.org 0x2e336
	movs r0, #237	@ 0002e336 ed20
.org 0x2e338
	lsls r0, r0, #1	@ 0002e338 4000
.org 0x2e33a
	add r0, ip	@ 0002e33a 6044
.org 0x2e33c
	ldrh r0, [r0, #0]	@ 0002e33c 0088
.org 0x2e33e
	adds r1, r1, r0	@ 0002e33e 0918
.org 0x2e340
	lsls r0, r0, #1	@ 0002e340 4000
.org 0x2e342
	cmp r1, r0	@ 0002e342 8142
.org 0x2e344
	bcs.n 0x2e354	@ 0002e344 06d2
.org 0x2e346
	movs r0, #235	@ 0002e346 eb20
.org 0x2e348
	lsls r0, r0, #1	@ 0002e348 4000
.org 0x2e34a
	add r0, ip	@ 0002e34a 6044
.org 0x2e34c
	ldrh r0, [r0, #0]	@ 0002e34c 0088
.org 0x2e34e
	b.n 0x2e360	@ 0002e34e 07e0
.org 0x2e350
	.byte 0xb0,0x0a,0x00,0x02	@ 0002e350 data
.org 0x2e354
	adds r0, r2, #1	@ 0002e354 501c
.org 0x2e356
	lsls r0, r0, #24	@ 0002e356 0006
.org 0x2e358
	lsrs r2, r0, #24	@ 0002e358 020e
.org 0x2e35a
	cmp r2, r6	@ 0002e35a b242
.org 0x2e35c
	bcc.n 0x2e300	@ 0002e35c d0d3
.org 0x2e35e
	movs r0, #0	@ 0002e35e 0020
.org 0x2e360
	pop {r3, r4, r5}	@ 0002e360 38bc
.org 0x2e362
	mov r8, r3	@ 0002e362 9846
.org 0x2e364
	mov r9, r4	@ 0002e364 a146
.org 0x2e366
	mov sl, r5	@ 0002e366 aa46
.org 0x2e368
	pop {r4, r5, r6, r7}	@ 0002e368 f0bc
