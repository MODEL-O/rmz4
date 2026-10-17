@ FUN_080386d4  entry 0x080386d4  size 100
.thumb
.org 0x386d4
FUN_080386d4:
	push {r4, r5, lr}	@ 000386d4 30b5
.org 0x386d6
	adds r4, r0, #0	@ 000386d6 041c
.org 0x386d8
	ldr r1, [pc, #20]	@ 000386d8 0549
.org 0x386da
	adds r0, r4, r1	@ 000386da 6018
.org 0x386dc
	ldrh r1, [r0, #0]	@ 000386dc 0188
.org 0x386de
	movs r0, #128	@ 000386de 8020
.org 0x386e0
	lsls r0, r0, #8	@ 000386e0 0002
.org 0x386e2
	ands r0, r1	@ 000386e2 0840
.org 0x386e4
	cmp r0, #0	@ 000386e4 0028
.org 0x386e6
	beq.n 0x386f4	@ 000386e6 05d0
.org 0x386e8
	movs r0, #128	@ 000386e8 8020
.org 0x386ea
	lsls r0, r0, #2	@ 000386ea 8000
.org 0x386ec
	b.n 0x38738	@ 000386ec 24e0
.org 0x386ee
	.byte 0x00	@ 000386ee data
.org 0x386ef
	.byte 0x00	@ 000386ef data
.org 0x386f0
	.byte 0x52,0x02,0x00,0x00	@ 000386f0 data
.org 0x386f4
	movs r5, #128	@ 000386f4 8025
.org 0x386f6
	lsls r5, r5, #2	@ 000386f6 ad00
.org 0x386f8
	adds r0, r4, #0	@ 000386f8 201c
.org 0x386fa
	bl 0x38ad8	@ 000386fa 00f0edf9
.org 0x386fe
	lsls r0, r0, #24	@ 000386fe 0006
.org 0x38700
	cmp r0, #0	@ 00038700 0028
.org 0x38702
	beq.n 0x38706	@ 00038702 00d0
.org 0x38704
	adds r5, #128	@ 00038704 8035
.org 0x38706
	movs r2, #159	@ 00038706 9f22
.org 0x38708
	lsls r2, r2, #1	@ 00038708 5200
.org 0x3870a
	adds r1, r4, r2	@ 0003870a a118
.org 0x3870c
	ldrb r0, [r1, #0]	@ 0003870c 0878
.org 0x3870e
	cmp r0, #0	@ 0003870e 0028
.org 0x38710
	bne.n 0x38720	@ 00038710 06d1
.org 0x38712
	movs r1, #221	@ 00038712 dd21
.org 0x38714
	lsls r1, r1, #1	@ 00038714 4900
.org 0x38716
	adds r0, r4, r1	@ 00038716 6018
.org 0x38718
	ldrb r0, [r0, #0]	@ 00038718 0078
.org 0x3871a
	asrs r5, r0	@ 0003871a 0541
.org 0x3871c
	adds r0, r5, #0	@ 0003871c 281c
.org 0x3871e
	b.n 0x38738	@ 0003871e 0be0
.org 0x38720
	ldrb r0, [r1, #0]	@ 00038720 0878
.org 0x38722
	movs r1, #128	@ 00038722 8021
.org 0x38724
	lsls r1, r1, #1	@ 00038724 4900
.org 0x38726
	subs r1, r1, r0	@ 00038726 091a
.org 0x38728
	adds r0, r5, #0	@ 00038728 281c
.org 0x3872a
	muls r0, r1	@ 0003872a 4843
.org 0x3872c
	asrs r0, r0, #8	@ 0003872c 0012
.org 0x3872e
	movs r2, #221	@ 0003872e dd22
.org 0x38730
	lsls r2, r2, #1	@ 00038730 5200
.org 0x38732
	adds r1, r4, r2	@ 00038732 a118
.org 0x38734
	ldrb r1, [r1, #0]	@ 00038734 0978
.org 0x38736
	asrs r0, r1	@ 00038736 0841
