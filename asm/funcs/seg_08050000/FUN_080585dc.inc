@ FUN_080585dc  entry 0x080585dc  size 36
.thumb
.org 0x585dc
FUN_080585dc:
	push {r4, r5, r6, lr}	@ 000585dc 70b5
.org 0x585de
	adds r4, r0, #0	@ 000585de 041c
.org 0x585e0
	ldrb r0, [r4, #10]	@ 000585e0 a07a
.org 0x585e2
	lsrs r6, r0, #4	@ 000585e2 0609
.org 0x585e4
	movs r0, #1	@ 000585e4 0120
.org 0x585e6
	ands r6, r0	@ 000585e6 0640
.org 0x585e8
	ldrb r0, [r4, #15]	@ 000585e8 e07b
.org 0x585ea
	cmp r0, #5	@ 000585ea 0528
.org 0x585ec
	bls.n 0x585f0	@ 000585ec 00d9
.org 0x585ee
	b.n 0x58946	@ 000585ee aae1
.org 0x585f0
	lsls r0, r0, #2	@ 000585f0 8000
.org 0x585f2
	ldr r1, [pc, #8]	@ 000585f2 0249
.org 0x585f4
	adds r0, r0, r1	@ 000585f4 4018
.org 0x585f6
	ldr r0, [r0, #0]	@ 000585f6 0068
.org 0x585f8
	mov pc, r0	@ 000585f8 8746
.org 0x585fa
	.byte 0x00	@ 000585fa data
.org 0x585fb
	.byte 0x00	@ 000585fb data
.org 0x585fc
	.byte 0x00,0x86,0x05,0x08	@ 000585fc data
