@ FUN_080f5778  entry 0x080f5778  size 44
.thumb
.org 0xf5778
FUN_080f5778:
	push {lr}	@ 000f5778 00b5
.org 0xf577a
	adds r2, r0, #0	@ 000f577a 021c
.org 0xf577c
	ldr r0, [r2, #20]	@ 000f577c 5069
.org 0xf577e
	movs r1, #4	@ 000f577e 0421
.org 0xf5780
	ands r0, r1	@ 000f5780 0840
.org 0xf5782
	cmp r0, #0	@ 000f5782 0028
.org 0xf5784
	beq.n 0xf57a0	@ 000f5784 0cd0
.org 0xf5786
	ldr r0, [r2, #12]	@ 000f5786 d068
.org 0xf5788
	ldr r1, [r0, #44]	@ 000f5788 c16a
.org 0xf578a
	ldr r2, [r2, #44]	@ 000f578a d26a
.org 0xf578c
	movs r0, #8	@ 000f578c 0820
.org 0xf578e
	ldrsb r0, [r1, r0]	@ 000f578e 0856
.org 0xf5790
	cmp r0, #0	@ 000f5790 0028
.org 0xf5792
	bne.n 0xf57a0	@ 000f5792 05d1
.org 0xf5794
	ldrb r0, [r1, #9]	@ 000f5794 487a
.org 0xf5796
	cmp r0, #0	@ 000f5796 0028
.org 0xf5798
	bne.n 0xf57a0	@ 000f5798 02d1
.org 0xf579a
	adds r0, r2, #0	@ 000f579a 101c
.org 0xf579c
	adds r0, #188	@ 000f579c bc30
.org 0xf579e
	str r1, [r0, #0]	@ 000f579e 0160
.org 0xf57a0
	pop {r0}	@ 000f57a0 01bc
.org 0xf57a2
	bx r0	@ 000f57a2 0047
