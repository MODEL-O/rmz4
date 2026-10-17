@ FUN_080c33c0  entry 0x080c33c0  size 76
.thumb
.org 0xc33c0
FUN_080c33c0:
	push {lr}	@ 000c33c0 00b5
.org 0xc33c2
	adds r2, r0, #0	@ 000c33c2 021c
.org 0xc33c4
	ldr r3, [r2, #40]	@ 000c33c4 936a
.org 0xc33c6
	ldrb r1, [r2, #10]	@ 000c33c6 917a
.org 0xc33c8
	movs r0, #254	@ 000c33c8 fe20
.org 0xc33ca
	ands r0, r1	@ 000c33ca 0840
.org 0xc33cc
	movs r1, #0	@ 000c33cc 0021
.org 0xc33ce
	strb r0, [r2, #10]	@ 000c33ce 9072
.org 0xc33d0
	adds r0, r2, #0	@ 000c33d0 101c
.org 0xc33d2
	adds r0, #140	@ 000c33d2 8c30
.org 0xc33d4
	str r1, [r0, #0]	@ 000c33d4 0160
.org 0xc33d6
	adds r0, #4	@ 000c33d6 0430
.org 0xc33d8
	str r1, [r0, #0]	@ 000c33d8 0160
.org 0xc33da
	adds r0, #4	@ 000c33da 0430
.org 0xc33dc
	strb r1, [r0, #0]	@ 000c33dc 0170
.org 0xc33de
	ldrb r1, [r2, #10]	@ 000c33de 917a
.org 0xc33e0
	movs r0, #251	@ 000c33e0 fb20
.org 0xc33e2
	ands r0, r1	@ 000c33e2 0840
.org 0xc33e4
	strb r0, [r2, #10]	@ 000c33e4 9072
.org 0xc33e6
	ldrb r0, [r3, #12]	@ 000c33e6 187b
.org 0xc33e8
	cmp r0, #1	@ 000c33e8 0128
.org 0xc33ea
	bhi.n 0xc33f6	@ 000c33ea 04d8
.org 0xc33ec
	adds r1, r3, #0	@ 000c33ec 191c
.org 0xc33ee
	adds r1, #180	@ 000c33ee b431
.org 0xc33f0
	ldrb r0, [r1, #0]	@ 000c33f0 0878
.org 0xc33f2
	subs r0, #1	@ 000c33f2 0138
.org 0xc33f4
	strb r0, [r1, #0]	@ 000c33f4 0870
.org 0xc33f6
	ldr r1, [pc, #20]	@ 000c33f6 0549
.org 0xc33f8
	ldrb r0, [r2, #9]	@ 000c33f8 507a
.org 0xc33fa
	lsls r0, r0, #2	@ 000c33fa 8000
.org 0xc33fc
	adds r0, r0, r1	@ 000c33fc 4018
.org 0xc33fe
	movs r1, #4	@ 000c33fe 0421
.org 0xc3400
	str r1, [r2, #12]	@ 000c3400 d160
.org 0xc3402
	ldr r0, [r0, #0]	@ 000c3402 0068
.org 0xc3404
	ldr r0, [r0, #16]	@ 000c3404 0069
.org 0xc3406
	str r0, [r2, #20]	@ 000c3406 5061
.org 0xc3408
	pop {r0}	@ 000c3408 01bc
.org 0xc340a
	bx r0	@ 000c340a 0047
