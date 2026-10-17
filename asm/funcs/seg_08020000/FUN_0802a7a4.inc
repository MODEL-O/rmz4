@ FUN_0802a7a4  entry 0x0802a7a4  size 200
.thumb
.org 0x2a7a4
FUN_0802a7a4:
	push {r4, r5, r6, r7, lr}	@ 0002a7a4 f0b5
.org 0x2a7a6
	mov r7, r8	@ 0002a7a6 4746
.org 0x2a7a8
	push {r7}	@ 0002a7a8 80b4
.org 0x2a7aa
	adds r6, r0, #0	@ 0002a7aa 061c
.org 0x2a7ac
	movs r0, #16	@ 0002a7ac 1020
.org 0x2a7ae
	bl 0xa70	@ 0002a7ae d6f75ff9
.org 0x2a7b2
	adds r5, r0, #0	@ 0002a7b2 051c
.org 0x2a7b4
	cmp r5, #0	@ 0002a7b4 002d
.org 0x2a7b6
	beq.n 0x2a878	@ 0002a7b6 5fd0
.org 0x2a7b8
	ldrb r0, [r6, #24]	@ 0002a7b8 307e
.org 0x2a7ba
	cmp r0, #0	@ 0002a7ba 0028
.org 0x2a7bc
	bne.n 0x2a830	@ 0002a7bc 38d1
.org 0x2a7be
	ldrb r0, [r6, #25]	@ 0002a7be 707e
.org 0x2a7c0
	cmp r0, #0	@ 0002a7c0 0028
.org 0x2a7c2
	bne.n 0x2a7f0	@ 0002a7c2 15d1
.org 0x2a7c4
	movs r4, #0	@ 0002a7c4 0024
.org 0x2a7c6
	ldr r0, [pc, #32]	@ 0002a7c6 0848
.org 0x2a7c8
	mov r8, r0	@ 0002a7c8 8046
.org 0x2a7ca
	ldr r1, [pc, #32]	@ 0002a7ca 0849
.org 0x2a7cc
	adds r3, r1, #0	@ 0002a7cc 0b1c
.org 0x2a7ce
	lsls r0, r4, #16	@ 0002a7ce 2004
.org 0x2a7d0
	asrs r0, r0, #16	@ 0002a7d0 0014
.org 0x2a7d2
	lsls r1, r0, #1	@ 0002a7d2 4100
.org 0x2a7d4
	adds r1, r1, r5	@ 0002a7d4 4919
.org 0x2a7d6
	adds r2, r0, r3	@ 0002a7d6 c218
.org 0x2a7d8
	strh r2, [r1, #0]	@ 0002a7d8 0a80
.org 0x2a7da
	adds r0, #1	@ 0002a7da 0130
.org 0x2a7dc
	lsls r0, r0, #16	@ 0002a7dc 0004
.org 0x2a7de
	lsrs r4, r0, #16	@ 0002a7de 040c
.org 0x2a7e0
	asrs r0, r0, #16	@ 0002a7e0 0014
.org 0x2a7e2
	cmp r0, #7	@ 0002a7e2 0728
.org 0x2a7e4
	ble.n 0x2a7ce	@ 0002a7e4 f3dd
.org 0x2a7e6
	b.n 0x2a860	@ 0002a7e6 3be0
.org 0x2a7e8
	.byte 0x06,0x0a,0x00,0x02	@ 0002a7e8 data
.org 0x2a7ec
	.byte 0x78,0xf3,0xff,0xff	@ 0002a7ec data
.org 0x2a7f0
	movs r4, #0	@ 0002a7f0 0024
.org 0x2a7f2
	ldr r0, [pc, #48]	@ 0002a7f2 0c48
.org 0x2a7f4
	mov r8, r0	@ 0002a7f4 8046
.org 0x2a7f6
	ldr r1, [pc, #48]	@ 0002a7f6 0c49
.org 0x2a7f8
	mov ip, r1	@ 0002a7f8 8c46
.org 0x2a7fa
	ldr r0, [pc, #48]	@ 0002a7fa 0c48
.org 0x2a7fc
	adds r7, r0, #0	@ 0002a7fc 071c
.org 0x2a7fe
	lsls r2, r4, #16	@ 0002a7fe 2204
.org 0x2a800
	asrs r2, r2, #16	@ 0002a800 1214
.org 0x2a802
	lsls r3, r2, #1	@ 0002a802 5300
.org 0x2a804
	adds r3, r3, r5	@ 0002a804 5b19
.org 0x2a806
	ldrb r1, [r6, #25]	@ 0002a806 717e
.org 0x2a808
	lsls r1, r1, #1	@ 0002a808 4900
.org 0x2a80a
	add r1, ip	@ 0002a80a 6144
.org 0x2a80c
	adds r0, r7, r4	@ 0002a80c 3819
.org 0x2a80e
	ldrh r1, [r1, #0]	@ 0002a80e 0988
.org 0x2a810
	adds r0, r0, r1	@ 0002a810 4018
.org 0x2a812
	strh r0, [r3, #0]	@ 0002a812 1880
.org 0x2a814
	adds r2, #1	@ 0002a814 0132
.org 0x2a816
	lsls r2, r2, #16	@ 0002a816 1204
.org 0x2a818
	lsrs r4, r2, #16	@ 0002a818 140c
.org 0x2a81a
	asrs r2, r2, #16	@ 0002a81a 1214
.org 0x2a81c
	cmp r2, #7	@ 0002a81c 072a
.org 0x2a81e
	ble.n 0x2a7fe	@ 0002a81e eedd
.org 0x2a820
	b.n 0x2a860	@ 0002a820 1ee0
.org 0x2a822
	.byte 0x00	@ 0002a822 data
.org 0x2a823
	.byte 0x00	@ 0002a823 data
.org 0x2a824
	.byte 0x06,0x0a,0x00,0x02	@ 0002a824 data
.org 0x2a828
	.byte 0x16,0x1d,0x88,0x08	@ 0002a828 data
.org 0x2a82c
	.byte 0x00,0xf3,0xff,0xff	@ 0002a82c data
.org 0x2a830
	movs r4, #0	@ 0002a830 0024
.org 0x2a832
	ldr r1, [pc, #80]	@ 0002a832 1449
.org 0x2a834
	mov r8, r1	@ 0002a834 8846
.org 0x2a836
	ldr r0, [pc, #80]	@ 0002a836 1448
.org 0x2a838
	mov ip, r0	@ 0002a838 8446
.org 0x2a83a
	ldr r1, [pc, #80]	@ 0002a83a 1449
.org 0x2a83c
	adds r7, r1, #0	@ 0002a83c 0f1c
.org 0x2a83e
	lsls r2, r4, #16	@ 0002a83e 2204
.org 0x2a840
	asrs r2, r2, #16	@ 0002a840 1214
.org 0x2a842
	lsls r3, r2, #1	@ 0002a842 5300
.org 0x2a844
	adds r3, r3, r5	@ 0002a844 5b19
.org 0x2a846
	ldrb r1, [r6, #24]	@ 0002a846 317e
.org 0x2a848
	lsls r1, r1, #1	@ 0002a848 4900
.org 0x2a84a
	add r1, ip	@ 0002a84a 6144
.org 0x2a84c
	adds r0, r7, r4	@ 0002a84c 3819
.org 0x2a84e
	ldrh r1, [r1, #0]	@ 0002a84e 0988
.org 0x2a850
	adds r0, r0, r1	@ 0002a850 4018
.org 0x2a852
	strh r0, [r3, #0]	@ 0002a852 1880
.org 0x2a854
	adds r2, #1	@ 0002a854 0132
.org 0x2a856
	lsls r2, r2, #16	@ 0002a856 1204
.org 0x2a858
	lsrs r4, r2, #16	@ 0002a858 140c
.org 0x2a85a
	asrs r2, r2, #16	@ 0002a85a 1214
.org 0x2a85c
	cmp r2, #7	@ 0002a85c 072a
.org 0x2a85e
	ble.n 0x2a83e	@ 0002a85e eedd
.org 0x2a860
	mov r1, r8	@ 0002a860 4146
.org 0x2a862
	ldrh r0, [r1, #0]	@ 0002a862 0888
.org 0x2a864
	movs r1, #248	@ 0002a864 f821
.org 0x2a866
	lsls r1, r1, #5	@ 0002a866 4901
.org 0x2a868
	ands r1, r0	@ 0002a868 0140
.org 0x2a86a
	lsls r1, r1, #3	@ 0002a86a c900
