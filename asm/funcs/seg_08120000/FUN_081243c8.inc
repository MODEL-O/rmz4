@ FUN_081243c8  entry 0x081243c8  size 46
.thumb
.org 0x1243c8
FUN_081243c8:
	push {r4, r5, lr}	@ 001243c8 30b5
.org 0x1243ca
	adds r5, r0, #0	@ 001243ca 051c
.org 0x1243cc
	ldr r1, [pc, #32]	@ 001243cc 0849
.org 0x1243ce
	adds r0, r5, r1	@ 001243ce 6818
.org 0x1243d0
	ldr r1, [r0, #0]	@ 001243d0 0168
.org 0x1243d2
	movs r2, #149	@ 001243d2 9522
.org 0x1243d4
	lsls r2, r2, #2	@ 001243d4 9200
.org 0x1243d6
	adds r1, r1, r2	@ 001243d6 8918
.org 0x1243d8
	movs r2, #2	@ 001243d8 0222
.org 0x1243da
	strb r2, [r1, #0]	@ 001243da 0a70
.org 0x1243dc
	ldrb r0, [r0, #25]	@ 001243dc 407e
.org 0x1243de
	cmp r0, #5	@ 001243de 0528
.org 0x1243e0
	bls.n 0x1243e4	@ 001243e0 00d9
.org 0x1243e2
	b.n 0x1244d4	@ 001243e2 77e0
.org 0x1243e4
	lsls r0, r0, #2	@ 001243e4 8000
.org 0x1243e6
	ldr r1, [pc, #12]	@ 001243e6 0349
.org 0x1243e8
	adds r0, r0, r1	@ 001243e8 4018
.org 0x1243ea
	ldr r0, [r0, #0]	@ 001243ea 0068
.org 0x1243ec
	mov pc, r0	@ 001243ec 8746
.org 0x1243ee
	.byte 0x00	@ 001243ee data
.org 0x1243ef
	.byte 0x00	@ 001243ef data
.org 0x1243f0
	.byte 0xcc,0x0d,0x00,0x00	@ 001243f0 data
.org 0x1243f4
	.byte 0xf8,0x43,0x12,0x08	@ 001243f4 data
