@ FUN_08051790  entry 0x08051790  size 152
.thumb
.org 0x51790
FUN_08051790:
	push {r4, r5, lr}	@ 00051790 30b5
.org 0x51792
	adds r4, r0, #0	@ 00051792 041c
.org 0x51794
	ldrb r0, [r4, #14]	@ 00051794 a07b
.org 0x51796
	cmp r0, #0	@ 00051796 0028
.org 0x51798
	bne.n 0x517c2	@ 00051798 13d1
.org 0x5179a
	adds r0, r4, #0	@ 0005179a 201c
.org 0x5179c
	adds r0, #116	@ 0005179c 7430
.org 0x5179e
	ldr r1, [pc, #56]	@ 0005179e 0e49
.org 0x517a0
	bl 0x5784	@ 000517a0 b3f7f0ff
.org 0x517a4
	movs r0, #128	@ 000517a4 8020
.org 0x517a6
	str r0, [r4, #92]	@ 000517a6 e065
.org 0x517a8
	str r0, [r4, #96]	@ 000517a8 2066
.org 0x517aa
	movs r2, #0	@ 000517aa 0022
.org 0x517ac
	adds r0, r4, #0	@ 000517ac 201c
.org 0x517ae
	adds r0, #180	@ 000517ae b430
.org 0x517b0
	ldr r1, [r0, #16]	@ 000517b0 0169
.org 0x517b2
	ldr r0, [r4, #84]	@ 000517b2 606d
.org 0x517b4
	cmp r1, r0	@ 000517b4 8142
.org 0x517b6
	ble.n 0x517ba	@ 000517b6 00dd
.org 0x517b8
	movs r2, #1	@ 000517b8 0122
.org 0x517ba
	strb r2, [r4, #15]	@ 000517ba e273
.org 0x517bc
	ldrb r0, [r4, #14]	@ 000517bc a07b
.org 0x517be
	adds r0, #1	@ 000517be 0130
.org 0x517c0
	strb r0, [r4, #14]	@ 000517c0 a073
.org 0x517c2
	adds r0, r4, #0	@ 000517c2 201c
.org 0x517c4
	bl 0x1cff0	@ 000517c4 cbf714fc
.org 0x517c8
	ldrb r0, [r4, #15]	@ 000517c8 e07b
.org 0x517ca
	cmp r0, #0	@ 000517ca 0028
.org 0x517cc
	beq.n 0x517dc	@ 000517cc 06d0
.org 0x517ce
	ldr r0, [r4, #84]	@ 000517ce 606d
.org 0x517d0
	ldr r1, [r4, #92]	@ 000517d0 e16d
.org 0x517d2
	adds r0, r0, r1	@ 000517d2 4018
.org 0x517d4
	b.n 0x517e2	@ 000517d4 05e0
.org 0x517d6
	.byte 0x00	@ 000517d6 data
.org 0x517d7
	.byte 0x00	@ 000517d7 data
.org 0x517d8
	.byte 0x84,0x7e,0x85,0x08	@ 000517d8 data
.org 0x517dc
	ldr r0, [r4, #84]	@ 000517dc 606d
.org 0x517de
	ldr r1, [r4, #92]	@ 000517de e16d
.org 0x517e0
	subs r0, r0, r1	@ 000517e0 401a
.org 0x517e2
	str r0, [r4, #84]	@ 000517e2 6065
.org 0x517e4
	adds r2, r1, #0	@ 000517e4 0a1c
.org 0x517e6
	ldr r0, [r4, #88]	@ 000517e6 a06d
.org 0x517e8
	ldr r3, [r4, #96]	@ 000517e8 236e
.org 0x517ea
	subs r0, r0, r3	@ 000517ea c01a
.org 0x517ec
	str r0, [r4, #88]	@ 000517ec a065
.org 0x517ee
	adds r1, r4, #0	@ 000517ee 211c
.org 0x517f0
	adds r1, #180	@ 000517f0 b431
.org 0x517f2
	ldr r1, [r1, #4]	@ 000517f2 4968
.org 0x517f4
	ldr r5, [pc, #16]	@ 000517f4 044d
.org 0x517f6
	adds r1, r1, r5	@ 000517f6 4919
.org 0x517f8
	cmp r0, r1	@ 000517f8 8842
.org 0x517fa
	bge.n 0x5180c	@ 000517fa 07da
.org 0x517fc
	str r1, [r4, #88]	@ 000517fc a165
.org 0x517fe
	movs r1, #0	@ 000517fe 0021
.org 0x51800
	movs r0, #10	@ 00051800 0a20
.org 0x51802
	strb r0, [r4, #13]	@ 00051802 6073
.org 0x51804
	strb r1, [r4, #14]	@ 00051804 a173
.org 0x51806
	b.n 0x5182c	@ 00051806 11e0
.org 0x51808
	.byte 0x00,0xb0,0xff,0xff	@ 00051808 data
.org 0x5180c
	adds r1, r2, #0	@ 0005180c 111c
.org 0x5180e
	adds r1, #32	@ 0005180e 2031
.org 0x51810
	str r1, [r4, #92]	@ 00051810 e165
.org 0x51812
	ldr r0, [pc, #32]	@ 00051812 0848
.org 0x51814
	cmp r1, r0	@ 00051814 8142
.org 0x51816
	bgt.n 0x5181c	@ 00051816 01dc
.org 0x51818
	adds r0, #1	@ 00051818 0130
.org 0x5181a
	str r0, [r4, #92]	@ 0005181a e065
.org 0x5181c
	adds r1, r3, #0	@ 0005181c 191c
.org 0x5181e
	adds r1, #32	@ 0005181e 2031
.org 0x51820
	str r1, [r4, #96]	@ 00051820 2166
.org 0x51822
	ldr r0, [pc, #20]	@ 00051822 0548
.org 0x51824
	cmp r1, r0	@ 00051824 8142
.org 0x51826
	bgt.n 0x5182c	@ 00051826 01dc
