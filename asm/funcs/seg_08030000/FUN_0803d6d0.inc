@ FUN_0803d6d0  entry 0x0803d6d0  size 100
.thumb
.org 0x3d6d0
FUN_0803d6d0:
	push {r4, r5, r6, lr}	@ 0003d6d0 70b5
.org 0x3d6d2
	adds r2, r0, #0	@ 0003d6d2 021c
.org 0x3d6d4
	ldr r0, [r2, #20]	@ 0003d6d4 5069
.org 0x3d6d6
	movs r1, #64	@ 0003d6d6 4021
.org 0x3d6d8
	ands r0, r1	@ 0003d6d8 0840
.org 0x3d6da
	cmp r0, #0	@ 0003d6da 0028
.org 0x3d6dc
	beq.n 0x3d72e	@ 0003d6dc 27d0
.org 0x3d6de
	ldr r0, [r2, #12]	@ 0003d6de d068
.org 0x3d6e0
	ldr r5, [r0, #44]	@ 0003d6e0 c56a
.org 0x3d6e2
	movs r0, #8	@ 0003d6e2 0820
.org 0x3d6e4
	ldrsb r0, [r5, r0]	@ 0003d6e4 2856
.org 0x3d6e6
	cmp r0, #4	@ 0003d6e6 0428
.org 0x3d6e8
	bne.n 0x3d72e	@ 0003d6e8 21d1
.org 0x3d6ea
	ldrb r0, [r5, #9]	@ 0003d6ea 687a
.org 0x3d6ec
	cmp r0, #0	@ 0003d6ec 0028
.org 0x3d6ee
	bne.n 0x3d72e	@ 0003d6ee 1ed1
.org 0x3d6f0
	ldr r6, [r2, #44]	@ 0003d6f0 d66a
.org 0x3d6f2
	adds r4, r6, #0	@ 0003d6f2 341c
.org 0x3d6f4
	adds r4, #180	@ 0003d6f4 b434
.org 0x3d6f6
	ldr r2, [r4, #0]	@ 0003d6f6 2268
.org 0x3d6f8
	adds r1, r2, #0	@ 0003d6f8 111c
.org 0x3d6fa
	adds r1, #180	@ 0003d6fa b431
.org 0x3d6fc
	ldrb r0, [r1, #15]	@ 0003d6fc c87b
.org 0x3d6fe
	cmp r0, #3	@ 0003d6fe 0328
.org 0x3d700
	bne.n 0x3d706	@ 0003d700 01d1
.org 0x3d702
	movs r0, #2	@ 0003d702 0220
.org 0x3d704
	strb r0, [r4, #15]	@ 0003d704 e073
.org 0x3d706
	ldrb r0, [r1, #15]	@ 0003d706 c87b
.org 0x3d708
	cmp r0, #2	@ 0003d708 0228
.org 0x3d70a
	bne.n 0x3d710	@ 0003d70a 01d1
.org 0x3d70c
	movs r0, #1	@ 0003d70c 0120
.org 0x3d70e
	strb r0, [r4, #16]	@ 0003d70e 2074
.org 0x3d710
	adds r0, r2, #0	@ 0003d710 101c
.org 0x3d712
	bl 0x3aadc	@ 0003d712 fdf7e3f9
.org 0x3d716
	lsls r0, r0, #24	@ 0003d716 0006
.org 0x3d718
	cmp r0, #0	@ 0003d718 0028
.org 0x3d71a
	beq.n 0x3d720	@ 0003d71a 01d0
.org 0x3d71c
	movs r0, #1	@ 0003d71c 0120
.org 0x3d71e
	strb r0, [r4, #16]	@ 0003d71e 2074
.org 0x3d720
	ldr r0, [r5, #84]	@ 0003d720 686d
.org 0x3d722
	ldr r1, [r5, #88]	@ 0003d722 a96d
.org 0x3d724
	str r0, [r6, #100]	@ 0003d724 7066
.org 0x3d726
	str r1, [r6, #104]	@ 0003d726 b166
.org 0x3d728
	ldrb r0, [r4, #13]	@ 0003d728 607b
.org 0x3d72a
	adds r0, #1	@ 0003d72a 0130
.org 0x3d72c
	strb r0, [r4, #13]	@ 0003d72c 6073
.org 0x3d72e
	pop {r4, r5, r6}	@ 0003d72e 70bc
.org 0x3d730
	pop {r0}	@ 0003d730 01bc
.org 0x3d732
	bx r0	@ 0003d732 0047
