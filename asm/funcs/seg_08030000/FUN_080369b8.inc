@ FUN_080369b8  entry 0x080369b8  size 64
.thumb
.org 0x369b8
FUN_080369b8:
	push {r4, lr}	@ 000369b8 10b5
.org 0x369ba
	adds r4, r0, #0	@ 000369ba 041c
.org 0x369bc
	ldr r0, [pc, #56]	@ 000369bc 0e48
.org 0x369be
	adds r2, r4, r0	@ 000369be 2218
.org 0x369c0
	ldrb r0, [r2, #0]	@ 000369c0 1078
.org 0x369c2
	movs r1, #4	@ 000369c2 0421
.org 0x369c4
	orrs r0, r1	@ 000369c4 0843
.org 0x369c6
	movs r1, #2	@ 000369c6 0221
.org 0x369c8
	orrs r0, r1	@ 000369c8 0843
.org 0x369ca
	strb r0, [r2, #0]	@ 000369ca 1070
.org 0x369cc
	ldr r1, [pc, #44]	@ 000369cc 0b49
.org 0x369ce
	ldr r2, [pc, #48]	@ 000369ce 0c4a
.org 0x369d0
	adds r0, r4, r2	@ 000369d0 a018
.org 0x369d2
	ldrb r0, [r0, #0]	@ 000369d2 0078
.org 0x369d4
	lsls r0, r0, #2	@ 000369d4 8000
.org 0x369d6
	adds r0, r0, r1	@ 000369d6 4018
.org 0x369d8
	ldr r1, [r0, #0]	@ 000369d8 0168
.org 0x369da
	adds r0, r4, #0	@ 000369da 201c
.org 0x369dc
	bl 0x128f80	@ 000369dc f2f0d0fa
.org 0x369e0
	ldr r1, [pc, #32]	@ 000369e0 0849
.org 0x369e2
	ldr r2, [pc, #36]	@ 000369e2 094a
.org 0x369e4
	adds r0, r4, r2	@ 000369e4 a018
.org 0x369e6
	ldrb r0, [r0, #0]	@ 000369e6 0078
.org 0x369e8
	adds r0, r0, r1	@ 000369e8 4018
.org 0x369ea
	ldrb r1, [r0, #0]	@ 000369ea 0178
.org 0x369ec
	subs r2, #7	@ 000369ec 073a
.org 0x369ee
	adds r0, r4, r2	@ 000369ee a018
.org 0x369f0
	strb r1, [r0, #0]	@ 000369f0 0170
.org 0x369f2
	pop {r4}	@ 000369f2 10bc
.org 0x369f4
	pop {r0}	@ 000369f4 01bc
.org 0x369f6
	bx r0	@ 000369f6 0047
