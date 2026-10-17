@ FUN_0800d70c  entry 0x0800d70c  size 174
.thumb
.org 0xd70c
FUN_0800d70c:
	push {r4, r5, r6, r7, lr}	@ 0000d70c f0b5
.org 0xd70e
	mov r7, r8	@ 0000d70e 4746
.org 0xd710
	push {r7}	@ 0000d710 80b4
.org 0xd712
	sub sp, #8	@ 0000d712 82b0
.org 0xd714
	adds r7, r0, #0	@ 0000d714 071c
.org 0xd716
	ldr r0, [r7, #92]	@ 0000d716 f86d
.org 0xd718
	lsls r0, r0, #16	@ 0000d718 0004
.org 0xd71a
	mov r8, r0	@ 0000d71a 8046
.org 0xd71c
	lsrs r1, r0, #16	@ 0000d71c 010c
.org 0xd71e
	ldr r3, [pc, #156]	@ 0000d71e 274b
.org 0xd720
	ldr r2, [pc, #156]	@ 0000d720 274a
.org 0xd722
	adds r0, r3, r2	@ 0000d722 9818
.org 0xd724
	ldrb r0, [r0, #0]	@ 0000d724 0078
.org 0xd726
	cmp r0, #0	@ 0000d726 0028
.org 0xd728
	beq.n 0xd734	@ 0000d728 04d0
.org 0xd72a
	ldr r2, [pc, #152]	@ 0000d72a 264a
.org 0xd72c
	lsls r1, r1, #8	@ 0000d72c 0902
.org 0xd72e
	ldrh r0, [r2, #0]	@ 0000d72e 1088
.org 0xd730
	bics r0, r1	@ 0000d730 8843
.org 0xd732
	strh r0, [r2, #0]	@ 0000d732 1080
.org 0xd734
	ldr r1, [pc, #144]	@ 0000d734 2449
.org 0xd736
	adds r0, r3, r1	@ 0000d736 5818
.org 0xd738
	ldrh r0, [r0, #0]	@ 0000d738 0088
.org 0xd73a
	cmp r0, #0	@ 0000d73a 0028
.org 0xd73c
	beq.n 0xd784	@ 0000d73c 22d0
.org 0xd73e
	movs r2, #0	@ 0000d73e 0022
.org 0xd740
	mov r0, r8	@ 0000d740 4046
.org 0xd742
	lsrs r5, r0, #20	@ 0000d742 050d
.org 0xd744
	lsls r5, r5, #1	@ 0000d744 6d00
.org 0xd746
	ldr r0, [pc, #132]	@ 0000d746 2148
.org 0xd748
	adds r5, r5, r0	@ 0000d748 2d18
.org 0xd74a
	ldrh r0, [r5, #0]	@ 0000d74a 2888
.org 0xd74c
	movs r4, #248	@ 0000d74c f824
.org 0xd74e
	lsls r4, r4, #5	@ 0000d74e 6401
.org 0xd750
	adds r1, r4, #0	@ 0000d750 211c
.org 0xd752
	ands r1, r0	@ 0000d752 0140
.org 0xd754
	lsls r1, r1, #3	@ 0000d754 c900
.org 0xd756
	movs r0, #192	@ 0000d756 c020
.org 0xd758
	lsls r0, r0, #19	@ 0000d758 c004
.org 0xd75a
	adds r1, r1, r0	@ 0000d75a 0918
.org 0xd75c
	str r2, [sp, #0]	@ 0000d75c 0092
.org 0xd75e
	movs r6, #128	@ 0000d75e 8026
.org 0xd760
	lsls r6, r6, #2	@ 0000d760 b600
.org 0xd762
	ldr r2, [pc, #108]	@ 0000d762 1b4a
.org 0xd764
	mov r0, sp	@ 0000d764 6846
.org 0xd766
	bl 0x128be0	@ 0000d766 1bf13bfa
.org 0xd76a
	ldr r0, [pc, #104]	@ 0000d76a 1a48
.org 0xd76c
	ldr r0, [r0, #0]	@ 0000d76c 0068
.org 0xd76e
	ldr r1, [pc, #104]	@ 0000d76e 1a49
.org 0xd770
	adds r0, r0, r1	@ 0000d770 4018
.org 0xd772
	ldrh r1, [r5, #0]	@ 0000d772 2988
.org 0xd774
	ands r4, r1	@ 0000d774 0c40
.org 0xd776
	lsls r4, r4, #3	@ 0000d776 e400
.org 0xd778
	ldr r2, [pc, #96]	@ 0000d778 184a
.org 0xd77a
	adds r4, r4, r2	@ 0000d77a a418
.org 0xd77c
	adds r1, r4, #0	@ 0000d77c 211c
.org 0xd77e
	adds r2, r6, #0	@ 0000d77e 321c
.org 0xd780
	bl 0x128be0	@ 0000d780 1bf12efa
.org 0xd784
	mov r0, r8	@ 0000d784 4046
.org 0xd786
	lsrs r3, r0, #20	@ 0000d786 030d
.org 0xd788
	lsls r3, r3, #2	@ 0000d788 9b00
.org 0xd78a
	ldr r2, [pc, #84]	@ 0000d78a 154a
.org 0xd78c
	adds r4, r3, r2	@ 0000d78c 9c18
.org 0xd78e
	ldr r1, [r7, #52]	@ 0000d78e 796b
.org 0xd790
	ldr r0, [r7, #68]	@ 0000d790 786c
.org 0xd792
	muls r1, r0	@ 0000d792 4143
.org 0xd794
	asrs r1, r1, #8	@ 0000d794 0912
.org 0xd796
	ldr r0, [r7, #76]	@ 0000d796 f86c
.org 0xd798
	adds r0, r0, r1	@ 0000d798 4018
.org 0xd79a
	strh r0, [r4, #0]	@ 0000d79a 2080
.org 0xd79c
	adds r2, #2	@ 0000d79c 0232
.org 0xd79e
	adds r3, r3, r2	@ 0000d79e 9b18
.org 0xd7a0
	ldr r1, [r7, #56]	@ 0000d7a0 b96b
.org 0xd7a2
	ldr r0, [r7, #72]	@ 0000d7a2 b86c
.org 0xd7a4
	muls r1, r0	@ 0000d7a4 4143
.org 0xd7a6
	asrs r1, r1, #8	@ 0000d7a6 0912
.org 0xd7a8
	ldr r0, [r7, #80]	@ 0000d7a8 386d
.org 0xd7aa
	adds r0, r0, r1	@ 0000d7aa 4018
.org 0xd7ac
	strh r0, [r3, #0]	@ 0000d7ac 1880
.org 0xd7ae
	add sp, #8	@ 0000d7ae 02b0
.org 0xd7b0
	pop {r3}	@ 0000d7b0 08bc
.org 0xd7b2
	mov r8, r3	@ 0000d7b2 9846
.org 0xd7b4
	pop {r4, r5, r6, r7}	@ 0000d7b4 f0bc
.org 0xd7b6
	pop {r0}	@ 0000d7b6 01bc
.org 0xd7b8
	bx r0	@ 0000d7b8 0047
