@ FUN_080bc8c4  entry 0x080bc8c4  size 86
.thumb
.org 0xbc8c4
FUN_080bc8c4:
	push {r4, lr}	@ 000bc8c4 10b5
.org 0xbc8c6
	adds r4, r0, #0	@ 000bc8c6 041c
.org 0xbc8c8
	ldr r0, [r4, #40]	@ 000bc8c8 a06a
.org 0xbc8ca
	ldr r1, [pc, #80]	@ 000bc8ca 1449
.org 0xbc8cc
	adds r2, r0, r1	@ 000bc8cc 4218
.org 0xbc8ce
	ldr r0, [r2, #52]	@ 000bc8ce 506b
.org 0xbc8d0
	subs r0, #1	@ 000bc8d0 0138
.org 0xbc8d2
	str r0, [r2, #52]	@ 000bc8d2 5063
.org 0xbc8d4
	movs r1, #1	@ 000bc8d4 0121
.org 0xbc8d6
	ldrb r3, [r4, #17]	@ 000bc8d6 637c
.org 0xbc8d8
	lsls r1, r3	@ 000bc8d8 9940
.org 0xbc8da
	ldr r0, [r2, #40]	@ 000bc8da 906a
.org 0xbc8dc
	bics r0, r1	@ 000bc8dc 8843
.org 0xbc8de
	str r0, [r2, #40]	@ 000bc8de 9062
.org 0xbc8e0
	ldr r0, [r2, #60]	@ 000bc8e0 d06b
.org 0xbc8e2
	cmp r0, #1	@ 000bc8e2 0128
.org 0xbc8e4
	bne.n 0xbc902	@ 000bc8e4 0dd1
.org 0xbc8e6
	ldr r1, [pc, #56]	@ 000bc8e6 0e49
.org 0xbc8e8
	ldrb r0, [r4, #16]	@ 000bc8e8 207c
.org 0xbc8ea
	lsls r0, r0, #2	@ 000bc8ea 8000
.org 0xbc8ec
	subs r0, #1	@ 000bc8ec 0138
.org 0xbc8ee
	ldrb r3, [r4, #18]	@ 000bc8ee a37c
.org 0xbc8f0
	adds r0, r0, r3	@ 000bc8f0 c018
.org 0xbc8f2
	adds r0, r0, r1	@ 000bc8f2 4018
.org 0xbc8f4
	ldrb r1, [r0, #0]	@ 000bc8f4 0178
.org 0xbc8f6
	ldr r0, [r2, #8]	@ 000bc8f6 9068
.org 0xbc8f8
	adds r0, r0, r1	@ 000bc8f8 4018
.org 0xbc8fa
	str r0, [r2, #8]	@ 000bc8fa 9060
.org 0xbc8fc
	ldr r0, [pc, #36]	@ 000bc8fc 0948
.org 0xbc8fe
	bl 0x2b10	@ 000bc8fe 46f707f9
.org 0xbc902
	ldr r1, [pc, #36]	@ 000bc902 0949
.org 0xbc904
	ldrb r0, [r4, #9]	@ 000bc904 607a
.org 0xbc906
	lsls r0, r0, #2	@ 000bc906 8000
.org 0xbc908
	adds r0, r0, r1	@ 000bc908 4018
.org 0xbc90a
	movs r1, #4	@ 000bc90a 0421
.org 0xbc90c
	str r1, [r4, #12]	@ 000bc90c e160
.org 0xbc90e
	ldr r0, [r0, #0]	@ 000bc90e 0068
.org 0xbc910
	ldr r0, [r0, #16]	@ 000bc910 0069
.org 0xbc912
	str r0, [r4, #20]	@ 000bc912 6061
.org 0xbc914
	pop {r4}	@ 000bc914 10bc
.org 0xbc916
	pop {r0}	@ 000bc916 01bc
.org 0xbc918
	bx r0	@ 000bc918 0047
