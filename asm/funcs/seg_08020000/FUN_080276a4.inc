@ FUN_080276a4  entry 0x080276a4  size 54
.thumb
.org 0x276a4
FUN_080276a4:
	push {r4, r5, r6, lr}	@ 000276a4 70b5
.org 0x276a6
	adds r5, r0, #0	@ 000276a6 051c
.org 0x276a8
	adds r6, r1, #0	@ 000276a8 0e1c
.org 0x276aa
	adds r3, r5, #0	@ 000276aa 2b1c
.org 0x276ac
	adds r3, #48	@ 000276ac 3033
.org 0x276ae
	ldr r4, [r5, #48]	@ 000276ae 2c6b
.org 0x276b0
	cmp r4, #0	@ 000276b0 002c
.org 0x276b2
	bne.n 0x276d4	@ 000276b2 0fd1
.org 0x276b4
	ldrb r0, [r2, #10]	@ 000276b4 907a
.org 0x276b6
	movs r1, #128	@ 000276b6 8021
.org 0x276b8
	orrs r1, r0	@ 000276b8 0143
.org 0x276ba
	strb r1, [r2, #10]	@ 000276ba 9172
.org 0x276bc
	str r3, [r2, #24]	@ 000276bc 9361
.org 0x276be
	str r2, [r5, #48]	@ 000276be 2a63
.org 0x276c0
	movs r0, #2	@ 000276c0 0220
.org 0x276c2
	strb r0, [r3, #8]	@ 000276c2 1872
.org 0x276c4
	strb r4, [r3, #9]	@ 000276c4 5c72
.org 0x276c6
	strh r4, [r3, #14]	@ 000276c6 dc81
.org 0x276c8
	strh r4, [r3, #12]	@ 000276c8 9c81
.org 0x276ca
	strh r4, [r3, #10]	@ 000276ca 5c81
.org 0x276cc
	adds r0, r5, #0	@ 000276cc 281c
.org 0x276ce
	adds r1, r6, #0	@ 000276ce 311c
.org 0x276d0
	bl 0x275f0	@ 000276d0 fff78eff
.org 0x276d4
	pop {r4, r5, r6}	@ 000276d4 70bc
.org 0x276d6
	pop {r0}	@ 000276d6 01bc
.org 0x276d8
	bx r0	@ 000276d8 0047
