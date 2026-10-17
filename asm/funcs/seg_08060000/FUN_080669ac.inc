@ FUN_080669ac  entry 0x080669ac  size 60
.thumb
.org 0x669ac
FUN_080669ac:
	push {r2, r3, r5, r6, r7, lr}	@ 000669ac ecb5
.org 0x669ae
	lsrs r5, r0, #2	@ 000669ae 8508
.org 0x669b0
	push {r2, r4, r5, r6, r7, lr}	@ 000669b0 f4b5
.org 0x669b2
	lsrs r5, r0, #2	@ 000669b2 8508
.org 0x669b4
	bhi.n 0x669b8	@ 000669b4 00d8
.org 0x669b6
	.byte 0xff,0xff	@ 000669b6 (raw)
.org 0x669b8
	.byte 0xb0,0x0a	@ 000669b8 (raw)
.org 0x669ba
	lsls r0, r0, #8	@ 000669ba 0002
.org 0x669bc
	stmia r0!, {r4}	@ 000669bc 10c0
.org 0x669be
	movs r2, r0	@ 000669be 0200
.org 0x669c0
	.byte 0xb0,0xe8	@ 000669c0 (raw)
.org 0x669c2
	.byte 0x02,0x02	@ 000669c2 (raw)
.org 0x669c4
	.byte 0x10,0xe9	@ 000669c4 (raw)
.org 0x669c6
	.byte 0x02,0x02	@ 000669c6 (raw)
.org 0x669c8
	lsls r1, r7, #6	@ 000669c8 b901
.org 0x669ca
	movs r0, r0	@ 000669ca 0000
.org 0x669cc
	adds r0, r4, #0	@ 000669cc 201c
.org 0x669ce
	adds r0, #222	@ 000669ce de30
.org 0x669d0
	strb r1, [r0, #0]	@ 000669d0 0170
.org 0x669d2
	ldr r0, [pc, #20]	@ 000669d2 0548
.org 0x669d4
	ldrb r1, [r4, #13]	@ 000669d4 617b
.org 0x669d6
	lsls r1, r1, #2	@ 000669d6 8900
.org 0x669d8
	adds r1, r1, r0	@ 000669d8 0918
.org 0x669da
	ldr r1, [r1, #0]	@ 000669da 0968
.org 0x669dc
	adds r0, r4, #0	@ 000669dc 201c
.org 0x669de
	bl 0x128f80	@ 000669de c2f0cffa
.org 0x669e2
	pop {r4, r5, r6}	@ 000669e2 70bc
.org 0x669e4
	pop {r0}	@ 000669e4 01bc
.org 0x669e6
	bx r0	@ 000669e6 0047
