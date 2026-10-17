@ FUN_080fc7e4  entry 0x080fc7e4  size 44
.thumb
.org 0xfc7e4
FUN_080fc7e4:
	push {lr}	@ 000fc7e4 00b5
.org 0xfc7e6
	adds r2, r0, #0	@ 000fc7e6 021c
.org 0xfc7e8
	ldr r0, [r2, #20]	@ 000fc7e8 5069
.org 0xfc7ea
	movs r1, #4	@ 000fc7ea 0421
.org 0xfc7ec
	ands r0, r1	@ 000fc7ec 0840
.org 0xfc7ee
	cmp r0, #0	@ 000fc7ee 0028
.org 0xfc7f0
	beq.n 0xfc80c	@ 000fc7f0 0cd0
.org 0xfc7f2
	ldr r0, [r2, #12]	@ 000fc7f2 d068
.org 0xfc7f4
	ldr r1, [r0, #44]	@ 000fc7f4 c16a
.org 0xfc7f6
	ldr r2, [r2, #44]	@ 000fc7f6 d26a
.org 0xfc7f8
	movs r0, #8	@ 000fc7f8 0820
.org 0xfc7fa
	ldrsb r0, [r1, r0]	@ 000fc7fa 0856
.org 0xfc7fc
	cmp r0, #0	@ 000fc7fc 0028
.org 0xfc7fe
	bne.n 0xfc80c	@ 000fc7fe 05d1
.org 0xfc800
	ldrb r0, [r1, #9]	@ 000fc800 487a
.org 0xfc802
	cmp r0, #0	@ 000fc802 0028
.org 0xfc804
	bne.n 0xfc80c	@ 000fc804 02d1
.org 0xfc806
	adds r0, r2, #0	@ 000fc806 101c
.org 0xfc808
	adds r0, #192	@ 000fc808 c030
.org 0xfc80a
	str r1, [r0, #0]	@ 000fc80a 0160
.org 0xfc80c
	pop {r0}	@ 000fc80c 01bc
.org 0xfc80e
	bx r0	@ 000fc80e 0047
