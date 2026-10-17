@ FUN_080f53c0  entry 0x080f53c0  size 88
.thumb
.org 0xf53c0
FUN_080f53c0:
	push {r4, r5, lr}	@ 000f53c0 30b5
.org 0xf53c2
	adds r4, r0, #0	@ 000f53c2 041c
.org 0xf53c4
	adds r5, r4, #0	@ 000f53c4 251c
.org 0xf53c6
	adds r5, #194	@ 000f53c6 c235
.org 0xf53c8
	ldrh r0, [r5, #0]	@ 000f53c8 2888
.org 0xf53ca
	cmp r0, #119	@ 000f53ca 7728
.org 0xf53cc
	bne.n 0xf53d8	@ 000f53cc 04d1
.org 0xf53ce
	movs r0, #119	@ 000f53ce 7720
.org 0xf53d0
	bl 0x2b5c	@ 000f53d0 0df7c4fb
.org 0xf53d4
	movs r0, #0	@ 000f53d4 0020
.org 0xf53d6
	strh r0, [r5, #0]	@ 000f53d6 2880
.org 0xf53d8
	ldrb r1, [r4, #10]	@ 000f53d8 a17a
.org 0xf53da
	movs r0, #254	@ 000f53da fe20
.org 0xf53dc
	ands r0, r1	@ 000f53dc 0840
.org 0xf53de
	movs r1, #0	@ 000f53de 0021
.org 0xf53e0
	strb r0, [r4, #10]	@ 000f53e0 a072
.org 0xf53e2
	adds r0, r4, #0	@ 000f53e2 201c
.org 0xf53e4
	adds r0, #140	@ 000f53e4 8c30
.org 0xf53e6
	str r1, [r0, #0]	@ 000f53e6 0160
.org 0xf53e8
	adds r0, #4	@ 000f53e8 0430
.org 0xf53ea
	str r1, [r0, #0]	@ 000f53ea 0160
.org 0xf53ec
	adds r0, #4	@ 000f53ec 0430
.org 0xf53ee
	strb r1, [r0, #0]	@ 000f53ee 0170
.org 0xf53f0
	ldrb r1, [r4, #10]	@ 000f53f0 a17a
.org 0xf53f2
	movs r0, #251	@ 000f53f2 fb20
.org 0xf53f4
	ands r0, r1	@ 000f53f4 0840
.org 0xf53f6
	strb r0, [r4, #10]	@ 000f53f6 a072
.org 0xf53f8
	ldrb r1, [r4, #11]	@ 000f53f8 e17a
.org 0xf53fa
	movs r0, #247	@ 000f53fa f720
.org 0xf53fc
	ands r0, r1	@ 000f53fc 0840
.org 0xf53fe
	strb r0, [r4, #11]	@ 000f53fe e072
.org 0xf5400
	ldr r1, [pc, #20]	@ 000f5400 0549
.org 0xf5402
	ldrb r0, [r4, #9]	@ 000f5402 607a
.org 0xf5404
	lsls r0, r0, #2	@ 000f5404 8000
.org 0xf5406
	adds r0, r0, r1	@ 000f5406 4018
.org 0xf5408
	movs r1, #4	@ 000f5408 0421
.org 0xf540a
	str r1, [r4, #12]	@ 000f540a e160
.org 0xf540c
	ldr r0, [r0, #0]	@ 000f540c 0068
.org 0xf540e
	ldr r0, [r0, #16]	@ 000f540e 0069
.org 0xf5410
	str r0, [r4, #20]	@ 000f5410 6061
.org 0xf5412
	pop {r4, r5}	@ 000f5412 30bc
.org 0xf5414
	pop {r0}	@ 000f5414 01bc
.org 0xf5416
	bx r0	@ 000f5416 0047
