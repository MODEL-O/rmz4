@ FUN_080fa758  entry 0x080fa758  size 264
.thumb
.org 0xfa758
FUN_080fa758:
	push {r4, r5, r6, lr}	@ 000fa758 70b5
.org 0xfa75a
	sub sp, #8	@ 000fa75a 82b0
.org 0xfa75c
	adds r6, r0, #0	@ 000fa75c 061c
.org 0xfa75e
	ldrb r0, [r6, #15]	@ 000fa75e f07b
.org 0xfa760
	cmp r0, #0	@ 000fa760 0028
.org 0xfa762
	bne.n 0xfa7aa	@ 000fa762 22d1
.org 0xfa764
	ldr r1, [pc, #20]	@ 000fa764 0549
.org 0xfa766
	adds r0, r6, #0	@ 000fa766 301c
.org 0xfa768
	bl 0x1cf00	@ 000fa768 22f7cafb
.org 0xfa76c
	ldrb r1, [r6, #10]	@ 000fa76c b17a
.org 0xfa76e
	movs r2, #16	@ 000fa76e 1022
.org 0xfa770
	adds r0, r2, #0	@ 000fa770 101c
.org 0xfa772
	ands r0, r1	@ 000fa772 0840
.org 0xfa774
	cmp r0, #0	@ 000fa774 0028
.org 0xfa776
	beq.n 0xfa780	@ 000fa776 03d0
.org 0xfa778
	str r2, [r6, #100]	@ 000fa778 7266
.org 0xfa77a
	b.n 0xfa786	@ 000fa77a 04e0
.org 0xfa77c
	.byte 0x06,0x8c,0x00,0x00	@ 000fa77c data
.org 0xfa780
	movs r0, #16	@ 000fa780 1020
.org 0xfa782
	negs r0, r0	@ 000fa782 4042
.org 0xfa784
	str r0, [r6, #100]	@ 000fa784 7066
.org 0xfa786
	ldr r0, [r6, #100]	@ 000fa786 706e
.org 0xfa788
	lsls r0, r0, #4	@ 000fa788 0001
.org 0xfa78a
	str r0, [r6, #92]	@ 000fa78a f065
.org 0xfa78c
	adds r0, r6, #0	@ 000fa78c 301c
.org 0xfa78e
	adds r0, #84	@ 000fa78e 5430
.org 0xfa790
	ldrb r3, [r6, #10]	@ 000fa790 b37a
.org 0xfa792
	lsrs r3, r3, #4	@ 000fa792 1b09
.org 0xfa794
	movs r1, #1	@ 000fa794 0121
.org 0xfa796
	ands r3, r1	@ 000fa796 0b40
.org 0xfa798
	movs r1, #5	@ 000fa798 0521
.org 0xfa79a
	movs r2, #0	@ 000fa79a 0022
.org 0xfa79c
	bl 0xdd574	@ 000fa79c e2f7eafe
.org 0xfa7a0
	movs r0, #16	@ 000fa7a0 1020
.org 0xfa7a2
	strb r0, [r6, #18]	@ 000fa7a2 b074
.org 0xfa7a4
	ldrb r0, [r6, #15]	@ 000fa7a4 f07b
.org 0xfa7a6
	adds r0, #1	@ 000fa7a6 0130
.org 0xfa7a8
	strb r0, [r6, #15]	@ 000fa7a8 f073
.org 0xfa7aa
	adds r0, r6, #0	@ 000fa7aa 301c
.org 0xfa7ac
	bl 0x1cff0	@ 000fa7ac 22f720fc
.org 0xfa7b0
	ldr r1, [r6, #84]	@ 000fa7b0 716d
.org 0xfa7b2
	ldr r0, [r6, #92]	@ 000fa7b2 f06d
.org 0xfa7b4
	adds r2, r1, r0	@ 000fa7b4 0a18
.org 0xfa7b6
	str r2, [r6, #84]	@ 000fa7b6 7265
.org 0xfa7b8
	ldr r1, [r6, #100]	@ 000fa7b8 716e
.org 0xfa7ba
	subs r0, r0, r1	@ 000fa7ba 401a
.org 0xfa7bc
	str r0, [r6, #92]	@ 000fa7bc f065
.org 0xfa7be
	ldrb r0, [r6, #18]	@ 000fa7be b07c
.org 0xfa7c0
	subs r0, #1	@ 000fa7c0 0138
.org 0xfa7c2
	strb r0, [r6, #18]	@ 000fa7c2 b074
.org 0xfa7c4
	lsls r0, r0, #24	@ 000fa7c4 0006
.org 0xfa7c6
	lsrs r0, r0, #24	@ 000fa7c6 000e
.org 0xfa7c8
	cmp r0, #255	@ 000fa7c8 ff28
.org 0xfa7ca
	bne.n 0xfa85c	@ 000fa7ca 47d1
.org 0xfa7cc
	str r2, [sp, #0]	@ 000fa7cc 0092
.org 0xfa7ce
	ldr r0, [r6, #88]	@ 000fa7ce b06d
.org 0xfa7d0
	ldr r1, [pc, #144]	@ 000fa7d0 2449
.org 0xfa7d2
	adds r0, r0, r1	@ 000fa7d2 4018
.org 0xfa7d4
	str r0, [sp, #4]	@ 000fa7d4 0190
.org 0xfa7d6
	ldr r5, [pc, #144]	@ 000fa7d6 244d
.org 0xfa7d8
	ldrb r0, [r6, #10]	@ 000fa7d8 b07a
.org 0xfa7da
	movs r4, #16	@ 000fa7da 1024
.org 0xfa7dc
	adds r3, r4, #0	@ 000fa7dc 231c
.org 0xfa7de
	ands r3, r0	@ 000fa7de 0340
.org 0xfa7e0
	lsls r3, r3, #24	@ 000fa7e0 1b06
.org 0xfa7e2
	lsrs r3, r3, #24	@ 000fa7e2 1b0e
.org 0xfa7e4
	mov r0, sp	@ 000fa7e4 6846
.org 0xfa7e6
	adds r1, r5, #0	@ 000fa7e6 291c
.org 0xfa7e8
	movs r2, #0	@ 000fa7e8 0022
.org 0xfa7ea
	bl 0xd4c8c	@ 000fa7ea daf74ffa
.org 0xfa7ee
	adds r1, r5, #0	@ 000fa7ee 291c
.org 0xfa7f0
	adds r1, #28	@ 000fa7f0 1c31
.org 0xfa7f2
	ldrb r0, [r6, #10]	@ 000fa7f2 b07a
.org 0xfa7f4
	adds r3, r4, #0	@ 000fa7f4 231c
.org 0xfa7f6
	ands r3, r0	@ 000fa7f6 0340
.org 0xfa7f8
	lsls r3, r3, #24	@ 000fa7f8 1b06
.org 0xfa7fa
	lsrs r3, r3, #24	@ 000fa7fa 1b0e
.org 0xfa7fc
	mov r0, sp	@ 000fa7fc 6846
.org 0xfa7fe
	movs r2, #0	@ 000fa7fe 0022
.org 0xfa800
	bl 0xd4c8c	@ 000fa800 daf744fa
.org 0xfa804
	adds r1, r5, #0	@ 000fa804 291c
.org 0xfa806
	adds r1, #56	@ 000fa806 3831
.org 0xfa808
	ldrb r0, [r6, #10]	@ 000fa808 b07a
.org 0xfa80a
	adds r3, r4, #0	@ 000fa80a 231c
.org 0xfa80c
	ands r3, r0	@ 000fa80c 0340
.org 0xfa80e
	lsls r3, r3, #24	@ 000fa80e 1b06
.org 0xfa810
	lsrs r3, r3, #24	@ 000fa810 1b0e
.org 0xfa812
	mov r0, sp	@ 000fa812 6846
.org 0xfa814
	movs r2, #0	@ 000fa814 0022
.org 0xfa816
	bl 0xd4c8c	@ 000fa816 daf739fa
.org 0xfa81a
	adds r5, #84	@ 000fa81a 5435
.org 0xfa81c
	ldrb r0, [r6, #10]	@ 000fa81c b07a
.org 0xfa81e
	ands r4, r0	@ 000fa81e 0440
.org 0xfa820
	lsls r4, r4, #24	@ 000fa820 2406
.org 0xfa822
	lsrs r4, r4, #24	@ 000fa822 240e
.org 0xfa824
	mov r0, sp	@ 000fa824 6846
.org 0xfa826
	adds r1, r5, #0	@ 000fa826 291c
.org 0xfa828
	movs r2, #0	@ 000fa828 0022
.org 0xfa82a
	adds r3, r4, #0	@ 000fa82a 231c
.org 0xfa82c
	bl 0xd4c8c	@ 000fa82c daf72efa
.org 0xfa830
	movs r0, #1	@ 000fa830 0120
.org 0xfa832
	mov r1, sp	@ 000fa832 6946
.org 0xfa834
	bl 0xd0c88	@ 000fa834 d6f728fa
.org 0xfa838
	movs r0, #42	@ 000fa838 2a20
.org 0xfa83a
	bl 0x2b10	@ 000fa83a 08f769f9
.org 0xfa83e
	adds r2, r6, #0	@ 000fa83e 321c
.org 0xfa840
	adds r2, #84	@ 000fa840 5432
.org 0xfa842
	movs r0, #0	@ 000fa842 0020
.org 0xfa844
	movs r1, #255	@ 000fa844 ff21
.org 0xfa846
	bl 0x2ab88	@ 000fa846 30f79ff9
.org 0xfa84a
	ldr r1, [pc, #32]	@ 000fa84a 0849
.org 0xfa84c
	ldrb r0, [r6, #9]	@ 000fa84c 707a
.org 0xfa84e
	lsls r0, r0, #2	@ 000fa84e 8000
.org 0xfa850
	adds r0, r0, r1	@ 000fa850 4018
.org 0xfa852
	movs r1, #4	@ 000fa852 0421
.org 0xfa854
	str r1, [r6, #12]	@ 000fa854 f160
.org 0xfa856
	ldr r0, [r0, #0]	@ 000fa856 0068
.org 0xfa858
	ldr r0, [r0, #16]	@ 000fa858 0069
.org 0xfa85a
	str r0, [r6, #20]	@ 000fa85a 7061
.org 0xfa85c
	add sp, #8	@ 000fa85c 02b0
.org 0xfa85e
	pop {r4, r5, r6}	@ 000fa85e 70bc
