@ FUN_080549b8  entry 0x080549b8  size 82
.thumb
.org 0x549b8
FUN_080549b8:
	push {r4, lr}	@ 000549b8 10b5
.org 0x549ba
	adds r4, r0, #0	@ 000549ba 041c
.org 0x549bc
	ldrb r0, [r4, #15]	@ 000549bc e07b
.org 0x549be
	cmp r0, #0	@ 000549be 0028
.org 0x549c0
	bne.n 0x549e2	@ 000549c0 0fd1
.org 0x549c2
	movs r0, #87	@ 000549c2 5720
.org 0x549c4
	bl 0x2b10	@ 000549c4 aef7a4f8
.org 0x549c8
	movs r1, #176	@ 000549c8 b021
.org 0x549ca
	lsls r1, r1, #6	@ 000549ca 8901
.org 0x549cc
	adds r0, r4, #0	@ 000549cc 201c
.org 0x549ce
	bl 0x1cf00	@ 000549ce c8f797fa
.org 0x549d2
	adds r0, r4, #0	@ 000549d2 201c
.org 0x549d4
	movs r1, #12	@ 000549d4 0c21
.org 0x549d6
	movs r2, #1	@ 000549d6 0122
.org 0x549d8
	bl 0x5516c	@ 000549d8 00f0c8fb
.org 0x549dc
	ldrb r0, [r4, #15]	@ 000549dc e07b
.org 0x549de
	adds r0, #1	@ 000549de 0130
.org 0x549e0
	strb r0, [r4, #15]	@ 000549e0 e073
.org 0x549e2
	adds r0, r4, #0	@ 000549e2 201c
.org 0x549e4
	bl 0x1cff0	@ 000549e4 c8f704fb
.org 0x549e8
	adds r0, r4, #0	@ 000549e8 201c
.org 0x549ea
	adds r0, #188	@ 000549ea bc30
.org 0x549ec
	ldr r1, [r0, #0]	@ 000549ec 0168
.org 0x549ee
	ldr r0, [pc, #28]	@ 000549ee 0748
.org 0x549f0
	adds r1, r1, r0	@ 000549f0 0918
.org 0x549f2
	adds r0, r4, #0	@ 000549f2 201c
.org 0x549f4
	bl 0x55188	@ 000549f4 00f0c8fb
.org 0x549f8
	adds r1, r0, #0	@ 000549f8 011c
.org 0x549fa
	cmp r1, #0	@ 000549fa 0029
.org 0x549fc
	bne.n 0x54a04	@ 000549fc 02d1
.org 0x549fe
	movs r0, #2	@ 000549fe 0220
.org 0x54a00
	strb r0, [r4, #14]	@ 00054a00 a073
.org 0x54a02
	strb r1, [r4, #15]	@ 00054a02 e173
.org 0x54a04
	pop {r4}	@ 00054a04 10bc
.org 0x54a06
	pop {r0}	@ 00054a06 01bc
.org 0x54a08
	bx r0	@ 00054a08 0047
