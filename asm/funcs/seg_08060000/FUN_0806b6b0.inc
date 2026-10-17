@ FUN_0806b6b0  entry 0x0806b6b0  size 136
.thumb
.org 0x6b6b0
FUN_0806b6b0:
	push {r4, r5, lr}	@ 0006b6b0 30b5
.org 0x6b6b2
	adds r4, r0, #0	@ 0006b6b2 041c
.org 0x6b6b4
	ldrb r5, [r4, #14]	@ 0006b6b4 a57b
.org 0x6b6b6
	cmp r5, #0	@ 0006b6b6 002d
.org 0x6b6b8
	bne.n 0x6b6ce	@ 0006b6b8 09d1
.org 0x6b6ba
	ldr r1, [pc, #72]	@ 0006b6ba 1249
.org 0x6b6bc
	bl 0x1cf00	@ 0006b6bc b1f720fc
.org 0x6b6c0
	movs r0, #198	@ 0006b6c0 c620
.org 0x6b6c2
	bl 0x2b10	@ 0006b6c2 97f725fa
.org 0x6b6c6
	strb r5, [r4, #15]	@ 0006b6c6 e573
.org 0x6b6c8
	ldrb r0, [r4, #14]	@ 0006b6c8 a07b
.org 0x6b6ca
	adds r0, #1	@ 0006b6ca 0130
.org 0x6b6cc
	strb r0, [r4, #14]	@ 0006b6cc a073
.org 0x6b6ce
	adds r0, r4, #0	@ 0006b6ce 201c
.org 0x6b6d0
	bl 0x1cff0	@ 0006b6d0 b1f78efc
.org 0x6b6d4
	ldrb r0, [r4, #15]	@ 0006b6d4 e07b
.org 0x6b6d6
	cmp r0, #0	@ 0006b6d6 0028
.org 0x6b6d8
	bne.n 0x6b724	@ 0006b6d8 24d1
.org 0x6b6da
	adds r0, r4, #0	@ 0006b6da 201c
.org 0x6b6dc
	adds r0, #113	@ 0006b6dc 7130
.org 0x6b6de
	ldrb r0, [r0, #0]	@ 0006b6de 0078
.org 0x6b6e0
	lsls r0, r0, #24	@ 0006b6e0 0006
.org 0x6b6e2
	asrs r0, r0, #24	@ 0006b6e2 0016
.org 0x6b6e4
	cmp r0, #1	@ 0006b6e4 0128
.org 0x6b6e6
	ble.n 0x6b744	@ 0006b6e6 2ddd
.org 0x6b6e8
	adds r0, r4, #0	@ 0006b6e8 201c
.org 0x6b6ea
	adds r0, #116	@ 0006b6ea 7430
.org 0x6b6ec
	ldr r1, [pc, #24]	@ 0006b6ec 0649
.org 0x6b6ee
	bl 0x5784	@ 0006b6ee 9af749f8
.org 0x6b6f2
	ldrb r1, [r4, #10]	@ 0006b6f2 a17a
.org 0x6b6f4
	movs r0, #16	@ 0006b6f4 1020
.org 0x6b6f6
	ands r0, r1	@ 0006b6f6 0840
.org 0x6b6f8
	cmp r0, #0	@ 0006b6f8 0028
.org 0x6b6fa
	beq.n 0x6b70c	@ 0006b6fa 07d0
.org 0x6b6fc
	movs r0, #208	@ 0006b6fc d020
.org 0x6b6fe
	lsls r0, r0, #2	@ 0006b6fe 8000
.org 0x6b700
	b.n 0x6b70e	@ 0006b700 05e0
.org 0x6b702
	.byte 0x00	@ 0006b702 data
.org 0x6b703
	.byte 0x00	@ 0006b703 data
.org 0x6b704
	.byte 0x03,0xaa,0x00,0x00	@ 0006b704 data
.org 0x6b708
	.byte 0xdc,0xc1,0x85,0x08	@ 0006b708 data
.org 0x6b70c
	ldr r0, [pc, #12]	@ 0006b70c 0348
.org 0x6b70e
	str r0, [r4, #92]	@ 0006b70e e065
.org 0x6b710
	ldr r0, [pc, #12]	@ 0006b710 0348
.org 0x6b712
	str r0, [r4, #96]	@ 0006b712 2066
.org 0x6b714
	ldrb r0, [r4, #15]	@ 0006b714 e07b
.org 0x6b716
	adds r0, #1	@ 0006b716 0130
.org 0x6b718
	strb r0, [r4, #15]	@ 0006b718 e073
.org 0x6b71a
	b.n 0x6b744	@ 0006b71a 13e0
.org 0x6b71c
	.byte 0xc0,0xfc,0xff,0xff	@ 0006b71c data
.org 0x6b720
	.byte 0x00,0xfb,0xff,0xff	@ 0006b720 data
.org 0x6b724
	ldr r0, [r4, #84]	@ 0006b724 606d
.org 0x6b726
	ldr r1, [r4, #92]	@ 0006b726 e16d
.org 0x6b728
	adds r0, r0, r1	@ 0006b728 4018
.org 0x6b72a
	str r0, [r4, #84]	@ 0006b72a 6065
.org 0x6b72c
	ldr r0, [r4, #88]	@ 0006b72c a06d
.org 0x6b72e
	ldr r1, [r4, #96]	@ 0006b72e 216e
.org 0x6b730
	adds r0, r0, r1	@ 0006b730 4018
.org 0x6b732
	str r0, [r4, #88]	@ 0006b732 a065
.org 0x6b734
	adds r1, #64	@ 0006b734 4031
.org 0x6b736
	str r1, [r4, #96]	@ 0006b736 2166
