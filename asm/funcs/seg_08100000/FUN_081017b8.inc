@ FUN_081017b8  entry 0x081017b8  size 84
.thumb
.org 0x1017b8
FUN_081017b8:
	push {lr}	@ 001017b8 00b5
.org 0x1017ba
	adds r3, r0, #0	@ 001017ba 031c
.org 0x1017bc
	ldr r1, [pc, #52]	@ 001017bc 0d49
.org 0x1017be
	ldrb r2, [r3, #17]	@ 001017be 5a7c
.org 0x1017c0
	adds r2, #69	@ 001017c0 4532
.org 0x1017c2
	asrs r0, r2, #3	@ 001017c2 d010
.org 0x1017c4
	adds r1, #4	@ 001017c4 0431
.org 0x1017c6
	adds r0, r0, r1	@ 001017c6 4018
.org 0x1017c8
	ldrb r0, [r0, #0]	@ 001017c8 0078
.org 0x1017ca
	movs r1, #7	@ 001017ca 0721
.org 0x1017cc
	ands r2, r1	@ 001017cc 0a40
.org 0x1017ce
	asrs r0, r2	@ 001017ce 1041
.org 0x1017d0
	movs r2, #1	@ 001017d0 0122
.org 0x1017d2
	ands r0, r2	@ 001017d2 1040
.org 0x1017d4
	cmp r0, #0	@ 001017d4 0028
.org 0x1017d6
	beq.n 0x1017fc	@ 001017d6 11d0
.org 0x1017d8
	ldr r1, [pc, #28]	@ 001017d8 0749
.org 0x1017da
	ldrb r0, [r3, #9]	@ 001017da 587a
.org 0x1017dc
	lsls r0, r0, #2	@ 001017dc 8000
.org 0x1017de
	adds r0, r0, r1	@ 001017de 4018
.org 0x1017e0
	movs r1, #2	@ 001017e0 0221
.org 0x1017e2
	str r1, [r3, #12]	@ 001017e2 d960
.org 0x1017e4
	ldr r0, [r0, #0]	@ 001017e4 0068
.org 0x1017e6
	ldr r0, [r0, #8]	@ 001017e6 8068
.org 0x1017e8
	str r0, [r3, #20]	@ 001017e8 5861
.org 0x1017ea
	adds r0, r3, #0	@ 001017ea 181c
.org 0x1017ec
	bl 0x1017a0	@ 001017ec fff7d8ff
.org 0x1017f0
	b.n 0x101812	@ 001017f0 0fe0
.org 0x1017f2
	.byte 0x00	@ 001017f2 data
.org 0x1017f3
	.byte 0x00	@ 001017f3 data
.org 0x1017f4
	.byte 0xb0,0xe8,0x02,0x02	@ 001017f4 data
.org 0x1017f8
	.byte 0xfc,0x92,0x86,0x08	@ 001017f8 data
.org 0x1017fc
	ldr r1, [pc, #24]	@ 001017fc 0649
.org 0x1017fe
	ldrb r0, [r3, #9]	@ 001017fe 587a
.org 0x101800
	lsls r0, r0, #2	@ 00101800 8000
.org 0x101802
	adds r0, r0, r1	@ 00101802 4018
.org 0x101804
	str r2, [r3, #12]	@ 00101804 da60
.org 0x101806
	ldr r0, [r0, #0]	@ 00101806 0068
.org 0x101808
	ldr r0, [r0, #4]	@ 00101808 4068
.org 0x10180a
	str r0, [r3, #20]	@ 0010180a 5861
