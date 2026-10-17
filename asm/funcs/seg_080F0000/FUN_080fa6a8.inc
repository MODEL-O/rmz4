@ FUN_080fa6a8  entry 0x080fa6a8  size 164
.thumb
.org 0xfa6a8
FUN_080fa6a8:
	push {r4, r5, r6, lr}	@ 000fa6a8 70b5
.org 0xfa6aa
	sub sp, #8	@ 000fa6aa 82b0
.org 0xfa6ac
	adds r5, r0, #0	@ 000fa6ac 051c
.org 0xfa6ae
	bl 0x1cff0	@ 000fa6ae 22f79ffc
.org 0xfa6b2
	ldr r0, [r5, #84]	@ 000fa6b2 686d
.org 0xfa6b4
	str r0, [sp, #0]	@ 000fa6b4 0090
.org 0xfa6b6
	ldr r0, [r5, #88]	@ 000fa6b6 a86d
.org 0xfa6b8
	ldr r1, [pc, #144]	@ 000fa6b8 2449
.org 0xfa6ba
	adds r0, r0, r1	@ 000fa6ba 4018
.org 0xfa6bc
	str r0, [sp, #4]	@ 000fa6bc 0190
.org 0xfa6be
	ldr r6, [pc, #144]	@ 000fa6be 244e
.org 0xfa6c0
	ldrb r0, [r5, #10]	@ 000fa6c0 a87a
.org 0xfa6c2
	movs r4, #16	@ 000fa6c2 1024
.org 0xfa6c4
	adds r3, r4, #0	@ 000fa6c4 231c
.org 0xfa6c6
	ands r3, r0	@ 000fa6c6 0340
.org 0xfa6c8
	lsls r3, r3, #24	@ 000fa6c8 1b06
.org 0xfa6ca
	lsrs r3, r3, #24	@ 000fa6ca 1b0e
.org 0xfa6cc
	mov r0, sp	@ 000fa6cc 6846
.org 0xfa6ce
	adds r1, r6, #0	@ 000fa6ce 311c
.org 0xfa6d0
	movs r2, #0	@ 000fa6d0 0022
.org 0xfa6d2
	bl 0xd4c8c	@ 000fa6d2 daf7dbfa
.org 0xfa6d6
	adds r1, r6, #0	@ 000fa6d6 311c
.org 0xfa6d8
	adds r1, #28	@ 000fa6d8 1c31
.org 0xfa6da
	ldrb r0, [r5, #10]	@ 000fa6da a87a
.org 0xfa6dc
	adds r3, r4, #0	@ 000fa6dc 231c
.org 0xfa6de
	ands r3, r0	@ 000fa6de 0340
.org 0xfa6e0
	lsls r3, r3, #24	@ 000fa6e0 1b06
.org 0xfa6e2
	lsrs r3, r3, #24	@ 000fa6e2 1b0e
.org 0xfa6e4
	mov r0, sp	@ 000fa6e4 6846
.org 0xfa6e6
	movs r2, #0	@ 000fa6e6 0022
.org 0xfa6e8
	bl 0xd4c8c	@ 000fa6e8 daf7d0fa
.org 0xfa6ec
	adds r1, r6, #0	@ 000fa6ec 311c
.org 0xfa6ee
	adds r1, #56	@ 000fa6ee 3831
.org 0xfa6f0
	ldrb r0, [r5, #10]	@ 000fa6f0 a87a
.org 0xfa6f2
	adds r3, r4, #0	@ 000fa6f2 231c
.org 0xfa6f4
	ands r3, r0	@ 000fa6f4 0340
.org 0xfa6f6
	lsls r3, r3, #24	@ 000fa6f6 1b06
.org 0xfa6f8
	lsrs r3, r3, #24	@ 000fa6f8 1b0e
.org 0xfa6fa
	mov r0, sp	@ 000fa6fa 6846
.org 0xfa6fc
	movs r2, #0	@ 000fa6fc 0022
.org 0xfa6fe
	bl 0xd4c8c	@ 000fa6fe daf7c5fa
.org 0xfa702
	adds r6, #84	@ 000fa702 5436
.org 0xfa704
	ldrb r0, [r5, #10]	@ 000fa704 a87a
.org 0xfa706
	ands r4, r0	@ 000fa706 0440
.org 0xfa708
	lsls r4, r4, #24	@ 000fa708 2406
.org 0xfa70a
	lsrs r4, r4, #24	@ 000fa70a 240e
.org 0xfa70c
	mov r0, sp	@ 000fa70c 6846
.org 0xfa70e
	adds r1, r6, #0	@ 000fa70e 311c
.org 0xfa710
	movs r2, #0	@ 000fa710 0022
.org 0xfa712
	adds r3, r4, #0	@ 000fa712 231c
.org 0xfa714
	bl 0xd4c8c	@ 000fa714 daf7bafa
.org 0xfa718
	movs r0, #1	@ 000fa718 0120
.org 0xfa71a
	mov r1, sp	@ 000fa71a 6946
.org 0xfa71c
	bl 0xd0c88	@ 000fa71c d6f7b4fa
.org 0xfa720
	movs r0, #42	@ 000fa720 2a20
.org 0xfa722
	bl 0x2b10	@ 000fa722 08f7f5f9
.org 0xfa726
	adds r2, r5, #0	@ 000fa726 2a1c
.org 0xfa728
	adds r2, #84	@ 000fa728 5432
.org 0xfa72a
	movs r0, #0	@ 000fa72a 0020
.org 0xfa72c
	movs r1, #255	@ 000fa72c ff21
.org 0xfa72e
	bl 0x2ab88	@ 000fa72e 30f72bfa
.org 0xfa732
	ldr r1, [pc, #32]	@ 000fa732 0849
.org 0xfa734
	ldrb r0, [r5, #9]	@ 000fa734 687a
.org 0xfa736
	lsls r0, r0, #2	@ 000fa736 8000
.org 0xfa738
	adds r0, r0, r1	@ 000fa738 4018
.org 0xfa73a
	movs r1, #4	@ 000fa73a 0421
.org 0xfa73c
	str r1, [r5, #12]	@ 000fa73c e960
.org 0xfa73e
	ldr r0, [r0, #0]	@ 000fa73e 0068
.org 0xfa740
	ldr r0, [r0, #16]	@ 000fa740 0069
.org 0xfa742
	str r0, [r5, #20]	@ 000fa742 6861
.org 0xfa744
	add sp, #8	@ 000fa744 02b0
.org 0xfa746
	pop {r4, r5, r6}	@ 000fa746 70bc
.org 0xfa748
	pop {r0}	@ 000fa748 01bc
.org 0xfa74a
	bx r0	@ 000fa74a 0047
