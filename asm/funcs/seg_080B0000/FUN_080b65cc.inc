@ FUN_080b65cc  entry 0x080b65cc  size 144
.thumb
.org 0xb65cc
FUN_080b65cc:
	push {r4, r5, r6, r7, lr}	@ 000b65cc f0b5
.org 0xb65ce
	sub sp, #8	@ 000b65ce 82b0
.org 0xb65d0
	adds r7, r0, #0	@ 000b65d0 071c
.org 0xb65d2
	ldr r0, [pc, #136]	@ 000b65d2 2248
.org 0xb65d4
	ldr r1, [r0, #4]	@ 000b65d4 4168
.org 0xb65d6
	ldr r0, [r0, #0]	@ 000b65d6 0068
.org 0xb65d8
	str r0, [sp, #0]	@ 000b65d8 0090
.org 0xb65da
	str r1, [sp, #4]	@ 000b65da 0191
.org 0xb65dc
	ldrb r5, [r7, #16]	@ 000b65dc 3d7c
.org 0xb65de
	movs r6, #0	@ 000b65de 0026
.org 0xb65e0
	ldr r1, [pc, #124]	@ 000b65e0 1f49
.org 0xb65e2
	ldrb r0, [r7, #9]	@ 000b65e2 787a
.org 0xb65e4
	lsls r0, r0, #2	@ 000b65e4 8000
.org 0xb65e6
	adds r0, r0, r1	@ 000b65e6 4018
.org 0xb65e8
	movs r1, #1	@ 000b65e8 0121
.org 0xb65ea
	str r1, [r7, #12]	@ 000b65ea f960
.org 0xb65ec
	ldr r0, [r0, #0]	@ 000b65ec 0068
.org 0xb65ee
	ldr r0, [r0, #4]	@ 000b65ee 4068
.org 0xb65f0
	str r0, [r7, #20]	@ 000b65f0 7861
.org 0xb65f2
	strb r6, [r7, #13]	@ 000b65f2 7e73
.org 0xb65f4
	strb r6, [r7, #14]	@ 000b65f4 be73
.org 0xb65f6
	strb r6, [r7, #15]	@ 000b65f6 fe73
.org 0xb65f8
	ldrb r0, [r7, #10]	@ 000b65f8 b87a
.org 0xb65fa
	orrs r0, r1	@ 000b65fa 0843
.org 0xb65fc
	movs r1, #2	@ 000b65fc 0221
.org 0xb65fe
	orrs r0, r1	@ 000b65fe 0843
.org 0xb6600
	strb r0, [r7, #10]	@ 000b6600 b872
.org 0xb6602
	adds r0, r7, #0	@ 000b6602 381c
.org 0xb6604
	bl 0x1cc9c	@ 000b6604 66f74afb
.org 0xb6608
	adds r1, r7, #0	@ 000b6608 391c
.org 0xb660a
	adds r1, #37	@ 000b660a 2531
.org 0xb660c
	movs r0, #8	@ 000b660c 0820
.org 0xb660e
	strb r0, [r1, #0]	@ 000b660e 0870
.org 0xb6610
	ldrb r1, [r7, #10]	@ 000b6610 b97a
.org 0xb6612
	movs r0, #239	@ 000b6612 ef20
.org 0xb6614
	ands r0, r1	@ 000b6614 0840
.org 0xb6616
	strb r0, [r7, #10]	@ 000b6616 b872
.org 0xb6618
	adds r0, r7, #0	@ 000b6618 381c
.org 0xb661a
	adds r0, #76	@ 000b661a 4c30
.org 0xb661c
	strb r6, [r0, #0]	@ 000b661c 0670
.org 0xb661e
	adds r2, r7, #0	@ 000b661e 3a1c
.org 0xb6620
	adds r2, #74	@ 000b6620 4a32
.org 0xb6622
	ldrb r1, [r2, #0]	@ 000b6622 1178
.org 0xb6624
	movs r0, #17	@ 000b6624 1120
.org 0xb6626
	negs r0, r0	@ 000b6626 4042
.org 0xb6628
	ands r0, r1	@ 000b6628 0840
.org 0xb662a
	strb r0, [r2, #0]	@ 000b662a 1070
.org 0xb662c
	ldrb r1, [r7, #10]	@ 000b662c b97a
.org 0xb662e
	movs r0, #4	@ 000b662e 0420
.org 0xb6630
	orrs r0, r1	@ 000b6630 0843
.org 0xb6632
	strb r0, [r7, #10]	@ 000b6632 b872
.org 0xb6634
	adds r4, r7, #0	@ 000b6634 3c1c
.org 0xb6636
	adds r4, #116	@ 000b6636 7434
.org 0xb6638
	ldr r1, [pc, #40]	@ 000b6638 0a49
.org 0xb663a
	adds r2, #10	@ 000b663a 0a32
.org 0xb663c
	lsls r5, r5, #2	@ 000b663c ad00
.org 0xb663e
	add r5, sp	@ 000b663e 6d44
.org 0xb6640
	movs r0, #0	@ 000b6640 0020
.org 0xb6642
	ldrsh r3, [r5, r0]	@ 000b6642 2b5e
.org 0xb6644
	adds r0, r4, #0	@ 000b6644 201c
.org 0xb6646
	bl 0x5760	@ 000b6646 4ff78bf8
.org 0xb664a
	str r7, [r4, #44]	@ 000b664a e762
.org 0xb664c
	str r6, [r4, #36]	@ 000b664c 6662
.org 0xb664e
	adds r0, r7, #0	@ 000b664e 381c
.org 0xb6650
	bl 0xb6668	@ 000b6650 00f00af8
.org 0xb6654
	add sp, #8	@ 000b6654 02b0
.org 0xb6656
	pop {r4, r5, r6, r7}	@ 000b6656 f0bc
.org 0xb6658
	pop {r0}	@ 000b6658 01bc
.org 0xb665a
	bx r0	@ 000b665a 0047
