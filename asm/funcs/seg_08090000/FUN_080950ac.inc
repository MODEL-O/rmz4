@ FUN_080950ac  entry 0x080950ac  size 78
.thumb
.org 0x950ac
FUN_080950ac:
	push {r4, lr}	@ 000950ac 10b5
.org 0x950ae
	adds r4, r0, #0	@ 000950ae 041c
.org 0x950b0
	ldr r0, [r4, #40]	@ 000950b0 a06a
.org 0x950b2
	ldrb r0, [r0, #12]	@ 000950b2 007b
.org 0x950b4
	cmp r0, #4	@ 000950b4 0428
.org 0x950b6
	bne.n 0x950d8	@ 000950b6 0fd1
.org 0x950b8
	ldr r1, [pc, #24]	@ 000950b8 0649
.org 0x950ba
	ldrb r0, [r4, #9]	@ 000950ba 607a
.org 0x950bc
	lsls r0, r0, #2	@ 000950bc 8000
.org 0x950be
	adds r0, r0, r1	@ 000950be 4018
.org 0x950c0
	movs r1, #2	@ 000950c0 0221
.org 0x950c2
	str r1, [r4, #12]	@ 000950c2 e160
.org 0x950c4
	ldr r0, [r0, #0]	@ 000950c4 0068
.org 0x950c6
	ldr r0, [r0, #8]	@ 000950c6 8068
.org 0x950c8
	str r0, [r4, #20]	@ 000950c8 6061
.org 0x950ca
	adds r0, r4, #0	@ 000950ca 201c
.org 0x950cc
	bl 0x95100	@ 000950cc 00f018f8
.org 0x950d0
	b.n 0x950fa	@ 000950d0 13e0
.org 0x950d2
	.byte 0x00	@ 000950d2 data
.org 0x950d3
	.byte 0x00	@ 000950d3 data
.org 0x950d4
	.byte 0x40,0xdb,0x85,0x08	@ 000950d4 data
.org 0x950d8
	adds r0, r4, #0	@ 000950d8 201c
.org 0x950da
	bl 0x1cff0	@ 000950da 87f789ff
.org 0x950de
	ldrb r0, [r4, #18]	@ 000950de a07c
.org 0x950e0
	cmp r0, #0	@ 000950e0 0028
.org 0x950e2
	beq.n 0x950e8	@ 000950e2 01d0
.org 0x950e4
	subs r0, #1	@ 000950e4 0138
.org 0x950e6
	strb r0, [r4, #18]	@ 000950e6 a074
.org 0x950e8
	ldrb r1, [r4, #18]	@ 000950e8 a17c
.org 0x950ea
	ldr r0, [r4, #92]	@ 000950ea e06d
.org 0x950ec
	muls r0, r1	@ 000950ec 4843
.org 0x950ee
	movs r1, #56	@ 000950ee 3821
.org 0x950f0
	bl 0x128fb8	@ 000950f0 93f062ff
.org 0x950f4
	ldr r1, [r4, #84]	@ 000950f4 616d
.org 0x950f6
	adds r1, r1, r0	@ 000950f6 0918
.org 0x950f8
	str r1, [r4, #84]	@ 000950f8 6165
