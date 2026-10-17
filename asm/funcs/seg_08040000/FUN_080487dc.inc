@ FUN_080487dc  entry 0x080487dc  size 104
.thumb
.org 0x487dc
FUN_080487dc:
	push {r4, lr}	@ 000487dc 10b5
.org 0x487de
	adds r4, r0, #0	@ 000487de 041c
.org 0x487e0
	bl 0x1cff0	@ 000487e0 d4f706fc
.org 0x487e4
	ldr r0, [r4, #84]	@ 000487e4 606d
.org 0x487e6
	ldr r1, [r4, #92]	@ 000487e6 e16d
.org 0x487e8
	adds r0, r0, r1	@ 000487e8 4018
.org 0x487ea
	str r0, [r4, #84]	@ 000487ea 6065
.org 0x487ec
	ldr r1, [r4, #88]	@ 000487ec a16d
.org 0x487ee
	ldr r2, [r4, #96]	@ 000487ee 226e
.org 0x487f0
	adds r1, r1, r2	@ 000487f0 8918
.org 0x487f2
	str r1, [r4, #88]	@ 000487f2 a165
.org 0x487f4
	bl 0x488e4	@ 000487f4 00f076f8
.org 0x487f8
	lsls r0, r0, #16	@ 000487f8 0004
.org 0x487fa
	lsrs r2, r0, #16	@ 000487fa 020c
.org 0x487fc
	ldrb r0, [r4, #18]	@ 000487fc a07c
.org 0x487fe
	subs r0, #1	@ 000487fe 0138
.org 0x48800
	strb r0, [r4, #18]	@ 00048800 a074
.org 0x48802
	lsls r0, r0, #24	@ 00048802 0006
.org 0x48804
	lsrs r0, r0, #24	@ 00048804 000e
.org 0x48806
	cmp r0, #255	@ 00048806 ff28
.org 0x48808
	beq.n 0x48826	@ 00048808 0dd0
.org 0x4880a
	adds r0, r4, #0	@ 0004880a 201c
.org 0x4880c
	adds r0, #140	@ 0004880c 8c30
.org 0x4880e
	ldr r1, [r0, #0]	@ 0004880e 0168
.org 0x48810
	movs r0, #4	@ 00048810 0420
.org 0x48812
	ands r0, r1	@ 00048812 0840
.org 0x48814
	cmp r0, #0	@ 00048814 0028
.org 0x48816
	bne.n 0x48826	@ 00048816 06d1
.org 0x48818
	cmp r2, #0	@ 00048818 002a
.org 0x4881a
	bne.n 0x48826	@ 0004881a 04d1
.org 0x4881c
	movs r0, #128	@ 0004881c 8020
.org 0x4881e
	lsls r0, r0, #5	@ 0004881e 4001
.org 0x48820
	ands r1, r0	@ 00048820 0140
.org 0x48822
	cmp r1, #0	@ 00048822 0029
.org 0x48824
	beq.n 0x4883e	@ 00048824 0bd0
.org 0x48826
	ldr r1, [pc, #28]	@ 00048826 0749
.org 0x48828
	ldrb r0, [r4, #9]	@ 00048828 607a
.org 0x4882a
	lsls r0, r0, #2	@ 0004882a 8000
.org 0x4882c
	adds r0, r0, r1	@ 0004882c 4018
.org 0x4882e
	movs r1, #2	@ 0004882e 0221
.org 0x48830
	str r1, [r4, #12]	@ 00048830 e160
.org 0x48832
	ldr r0, [r0, #0]	@ 00048832 0068
.org 0x48834
	ldr r0, [r0, #8]	@ 00048834 8068
.org 0x48836
	str r0, [r4, #20]	@ 00048836 6061
.org 0x48838
	adds r0, r4, #0	@ 00048838 201c
.org 0x4883a
	bl 0x48458	@ 0004883a fff70dfe
.org 0x4883e
	pop {r4}	@ 0004883e 10bc
.org 0x48840
	pop {r0}	@ 00048840 01bc
.org 0x48842
	bx r0	@ 00048842 0047
