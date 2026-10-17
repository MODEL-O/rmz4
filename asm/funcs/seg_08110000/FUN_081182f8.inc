@ FUN_081182f8  entry 0x081182f8  size 80
.thumb
.org 0x1182f8
FUN_081182f8:
	push {r4, r5, r6, r7, lr}	@ 001182f8 f0b5
.org 0x1182fa
	mov ip, r0	@ 001182fa 8446
.org 0x1182fc
	adds r4, r1, #0	@ 001182fc 0c1c
.org 0x1182fe
	lsls r2, r2, #24	@ 001182fe 1206
.org 0x118300
	lsls r3, r3, #24	@ 00118300 1b06
.org 0x118302
	ldrb r6, [r4, #4]	@ 00118302 2679
.org 0x118304
	ldrb r7, [r4, #6]	@ 00118304 a779
.org 0x118306
	adds r4, #8	@ 00118306 0834
.org 0x118308
	lsrs r3, r3, #18	@ 00118308 9b0c
.org 0x11830a
	add r3, ip	@ 0011830a 6344
.org 0x11830c
	lsrs r2, r2, #23	@ 0011830c d20d
.org 0x11830e
	adds r3, r3, r2	@ 0011830e 9b18
.org 0x118310
	mov ip, r3	@ 00118310 9c46
.org 0x118312
	movs r1, #0	@ 00118312 0021
.org 0x118314
	cmp r1, r7	@ 00118314 b942
.org 0x118316
	bcs.n 0x118342	@ 00118316 14d2
.org 0x118318
	lsls r0, r1, #6	@ 00118318 8801
.org 0x11831a
	mov r2, ip	@ 0011831a 6246
.org 0x11831c
	adds r3, r2, r0	@ 0011831c 1318
.org 0x11831e
	movs r2, #0	@ 0011831e 0022
.org 0x118320
	adds r5, r1, #1	@ 00118320 4d1c
.org 0x118322
	cmp r2, r6	@ 00118322 b242
.org 0x118324
	bcs.n 0x11833a	@ 00118324 09d2
.org 0x118326
	lsls r0, r2, #1	@ 00118326 5000
.org 0x118328
	adds r0, r0, r3	@ 00118328 c018
.org 0x11832a
	ldrh r1, [r4, #0]	@ 0011832a 2188
.org 0x11832c
	strh r1, [r0, #0]	@ 0011832c 0180
.org 0x11832e
	adds r4, #2	@ 0011832e 0234
.org 0x118330
	adds r0, r2, #1	@ 00118330 501c
.org 0x118332
	lsls r0, r0, #24	@ 00118332 0006
.org 0x118334
	lsrs r2, r0, #24	@ 00118334 020e
.org 0x118336
	cmp r2, r6	@ 00118336 b242
.org 0x118338
	bcc.n 0x118326	@ 00118338 f5d3
.org 0x11833a
	lsls r0, r5, #24	@ 0011833a 2806
.org 0x11833c
	lsrs r1, r0, #24	@ 0011833c 010e
.org 0x11833e
	cmp r1, r7	@ 0011833e b942
.org 0x118340
	bcc.n 0x118318	@ 00118340 ead3
.org 0x118342
	pop {r4, r5, r6, r7}	@ 00118342 f0bc
.org 0x118344
	pop {r0}	@ 00118344 01bc
.org 0x118346
	bx r0	@ 00118346 0047
