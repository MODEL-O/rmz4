@ FUN_08020088  entry 0x08020088  size 64
.thumb
.org 0x20088
FUN_08020088:
	push {r4, r5, r6, lr}	@ 00020088 70b5
.org 0x2008a
	movs r1, #190	@ 0002008a be21
.org 0x2008c
	lsls r1, r1, #1	@ 0002008c 4900
.org 0x2008e
	adds r6, r0, r1	@ 0002008e 4618
.org 0x20090
	ldrb r0, [r6, #0]	@ 00020090 3078
.org 0x20092
	cmp r0, #0	@ 00020092 0028
.org 0x20094
	bne.n 0x200c0	@ 00020094 14d1
.org 0x20096
	ldr r4, [pc, #48]	@ 00020096 0c4c
.org 0x20098
	ldrh r0, [r4, #8]	@ 00020098 2089
.org 0x2009a
	movs r5, #1	@ 0002009a 0125
.org 0x2009c
	orrs r0, r5	@ 0002009c 2843
.org 0x2009e
	strh r0, [r4, #8]	@ 0002009e 2081
.org 0x200a0
	ldr r2, [pc, #40]	@ 000200a0 0a4a
.org 0x200a2
	ldrb r1, [r2, #4]	@ 000200a2 1179
.org 0x200a4
	movs r0, #247	@ 000200a4 f720
.org 0x200a6
	ands r0, r1	@ 000200a6 0840
.org 0x200a8
	strb r0, [r2, #4]	@ 000200a8 1071
.org 0x200aa
	movs r0, #1	@ 000200aa 0120
.org 0x200ac
	bl 0x1f63c	@ 000200ac fff7c6fa
.org 0x200b0
	adds r4, #16	@ 000200b0 1034
.org 0x200b2
	ldr r0, [pc, #28]	@ 000200b2 0748
.org 0x200b4
	ldr r0, [r0, #0]	@ 000200b4 0068
.org 0x200b6
	ldr r1, [r0, #4]	@ 000200b6 4168
.org 0x200b8
	adds r0, r4, #0	@ 000200b8 201c
.org 0x200ba
	bl 0x275f0	@ 000200ba 07f099fa
.org 0x200be
	strb r5, [r6, #0]	@ 000200be 3570
.org 0x200c0
	movs r0, #0	@ 000200c0 0020
.org 0x200c2
	pop {r4, r5, r6}	@ 000200c2 70bc
.org 0x200c4
	pop {r1}	@ 000200c4 02bc
.org 0x200c6
	bx r1	@ 000200c6 0847
