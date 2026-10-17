@ FUN_0802718c  entry 0x0802718c  size 64
.thumb
.org 0x2718c
FUN_0802718c:
	push {r4, r5, r6, lr}	@ 0002718c 70b5
.org 0x2718e
	movs r1, #190	@ 0002718e be21
.org 0x27190
	lsls r1, r1, #1	@ 00027190 4900
.org 0x27192
	adds r6, r0, r1	@ 00027192 4618
.org 0x27194
	ldrb r0, [r6, #0]	@ 00027194 3078
.org 0x27196
	cmp r0, #0	@ 00027196 0028
.org 0x27198
	bne.n 0x271c4	@ 00027198 14d1
.org 0x2719a
	ldr r4, [pc, #48]	@ 0002719a 0c4c
.org 0x2719c
	ldrh r0, [r4, #8]	@ 0002719c 2089
.org 0x2719e
	movs r5, #1	@ 0002719e 0125
.org 0x271a0
	orrs r0, r5	@ 000271a0 2843
.org 0x271a2
	strh r0, [r4, #8]	@ 000271a2 2081
.org 0x271a4
	ldr r2, [pc, #40]	@ 000271a4 0a4a
.org 0x271a6
	ldrb r1, [r2, #4]	@ 000271a6 1179
.org 0x271a8
	movs r0, #247	@ 000271a8 f720
.org 0x271aa
	ands r0, r1	@ 000271aa 0840
.org 0x271ac
	strb r0, [r2, #4]	@ 000271ac 1071
.org 0x271ae
	movs r0, #1	@ 000271ae 0120
.org 0x271b0
	bl 0x1f63c	@ 000271b0 f8f744fa
.org 0x271b4
	adds r4, #16	@ 000271b4 1034
.org 0x271b6
	ldr r0, [pc, #28]	@ 000271b6 0748
.org 0x271b8
	ldr r0, [r0, #64]	@ 000271b8 006c
.org 0x271ba
	ldr r1, [r0, #4]	@ 000271ba 4168
.org 0x271bc
	adds r0, r4, #0	@ 000271bc 201c
.org 0x271be
	bl 0x275f0	@ 000271be 00f017fa
.org 0x271c2
	strb r5, [r6, #0]	@ 000271c2 3570
.org 0x271c4
	movs r0, #0	@ 000271c4 0020
.org 0x271c6
	pop {r4, r5, r6}	@ 000271c6 70bc
.org 0x271c8
	pop {r1}	@ 000271c8 02bc
.org 0x271ca
	bx r1	@ 000271ca 0847
