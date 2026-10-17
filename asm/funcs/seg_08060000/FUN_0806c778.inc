@ FUN_0806c778  entry 0x0806c778  size 338
.thumb
.org 0x6c778
FUN_0806c778:
	push {r4, lr}	@ 0006c778 10b5
.org 0x6c77a
	adds r4, r0, #0	@ 0006c77a 041c
.org 0x6c77c
	ldrb r0, [r4, #14]	@ 0006c77c a07b
.org 0x6c77e
	cmp r0, #0	@ 0006c77e 0028
.org 0x6c780
	bne.n 0x6c7e6	@ 0006c780 31d1
.org 0x6c782
	ldr r1, [pc, #40]	@ 0006c782 0a49
.org 0x6c784
	adds r0, r4, #0	@ 0006c784 201c
.org 0x6c786
	bl 0x1cf00	@ 0006c786 b0f7bbfb
.org 0x6c78a
	movs r0, #204	@ 0006c78a cc20
.org 0x6c78c
	bl 0x2b10	@ 0006c78c 96f7c0f9
.org 0x6c790
	movs r0, #192	@ 0006c790 c020
.org 0x6c792
	lsls r0, r0, #3	@ 0006c792 c000
.org 0x6c794
	str r0, [r4, #92]	@ 0006c794 e065
.org 0x6c796
	movs r0, #32	@ 0006c796 2020
.org 0x6c798
	str r0, [r4, #100]	@ 0006c798 6066
.org 0x6c79a
	adds r0, r4, #0	@ 0006c79a 201c
.org 0x6c79c
	adds r0, #164	@ 0006c79c a430
.org 0x6c79e
	movs r1, #0	@ 0006c79e 0021
.org 0x6c7a0
	ldrsh r0, [r0, r1]	@ 0006c7a0 405e
.org 0x6c7a2
	cmp r0, #15	@ 0006c7a2 0f28
.org 0x6c7a4
	bgt.n 0x6c7b0	@ 0006c7a4 04dc
.org 0x6c7a6
	movs r0, #144	@ 0006c7a6 9020
.org 0x6c7a8
	lsls r0, r0, #3	@ 0006c7a8 c000
.org 0x6c7aa
	b.n 0x6c7be	@ 0006c7aa 08e0
.org 0x6c7ac
	.byte 0x1a,0xaa,0x00,0x00	@ 0006c7ac data
.org 0x6c7b0
	cmp r0, #31	@ 0006c7b0 1f28
.org 0x6c7b2
	bgt.n 0x6c7ba	@ 0006c7b2 02dc
.org 0x6c7b4
	movs r0, #136	@ 0006c7b4 8820
.org 0x6c7b6
	lsls r0, r0, #3	@ 0006c7b6 c000
.org 0x6c7b8
	b.n 0x6c7be	@ 0006c7b8 01e0
.org 0x6c7ba
	movs r0, #128	@ 0006c7ba 8020
.org 0x6c7bc
	lsls r0, r0, #3	@ 0006c7bc c000
.org 0x6c7be
	str r0, [r4, #96]	@ 0006c7be 2066
.org 0x6c7c0
	ldrb r1, [r4, #10]	@ 0006c7c0 a17a
.org 0x6c7c2
	movs r0, #16	@ 0006c7c2 1020
.org 0x6c7c4
	ands r0, r1	@ 0006c7c4 0840
.org 0x6c7c6
	cmp r0, #0	@ 0006c7c6 0028
.org 0x6c7c8
	beq.n 0x6c7ce	@ 0006c7c8 01d0
.org 0x6c7ca
	movs r0, #0	@ 0006c7ca 0020
.org 0x6c7cc
	b.n 0x6c7d0	@ 0006c7cc 00e0
.org 0x6c7ce
	movs r0, #128	@ 0006c7ce 8020
.org 0x6c7d0
	strb r0, [r4, #18]	@ 0006c7d0 a074
.org 0x6c7d2
	adds r0, r4, #0	@ 0006c7d2 201c
.org 0x6c7d4
	adds r0, #116	@ 0006c7d4 7430
.org 0x6c7d6
	ldr r1, [pc, #60]	@ 0006c7d6 0f49
.org 0x6c7d8
	bl 0x5784	@ 0006c7d8 98f7d4ff
.org 0x6c7dc
	movs r0, #0	@ 0006c7dc 0020
.org 0x6c7de
	strb r0, [r4, #15]	@ 0006c7de e073
.org 0x6c7e0
	ldrb r0, [r4, #14]	@ 0006c7e0 a07b
.org 0x6c7e2
	adds r0, #1	@ 0006c7e2 0130
.org 0x6c7e4
	strb r0, [r4, #14]	@ 0006c7e4 a073
.org 0x6c7e6
	adds r0, r4, #0	@ 0006c7e6 201c
.org 0x6c7e8
	bl 0x1cff0	@ 0006c7e8 b0f702fc
.org 0x6c7ec
	ldrb r0, [r4, #15]	@ 0006c7ec e07b
.org 0x6c7ee
	cmp r0, #0	@ 0006c7ee 0028
.org 0x6c7f0
	bne.n 0x6c81c	@ 0006c7f0 14d1
.org 0x6c7f2
	adds r0, r4, #0	@ 0006c7f2 201c
.org 0x6c7f4
	adds r0, #113	@ 0006c7f4 7130
.org 0x6c7f6
	ldrb r0, [r0, #0]	@ 0006c7f6 0078
.org 0x6c7f8
	lsls r0, r0, #24	@ 0006c7f8 0006
.org 0x6c7fa
	asrs r0, r0, #24	@ 0006c7fa 0016
.org 0x6c7fc
	cmp r0, #0	@ 0006c7fc 0028
.org 0x6c7fe
	ble.n 0x6c8da	@ 0006c7fe 6cdd
.org 0x6c800
	adds r0, r4, #0	@ 0006c800 201c
.org 0x6c802
	adds r0, #116	@ 0006c802 7430
.org 0x6c804
	ldr r1, [pc, #16]	@ 0006c804 0449
.org 0x6c806
	bl 0x5784	@ 0006c806 98f7bdff
.org 0x6c80a
	ldrb r0, [r4, #15]	@ 0006c80a e07b
.org 0x6c80c
	adds r0, #1	@ 0006c80c 0130
.org 0x6c80e
	strb r0, [r4, #15]	@ 0006c80e e073
.org 0x6c810
	b.n 0x6c8da	@ 0006c810 63e0
.org 0x6c812
	.byte 0x00	@ 0006c812 data
.org 0x6c813
	.byte 0x00	@ 0006c813 data
.org 0x6c814
	.byte 0x34,0xc4,0x85,0x08	@ 0006c814 data
.org 0x6c818
	.byte 0x1c,0xc4,0x85,0x08	@ 0006c818 data
.org 0x6c81c
	cmp r0, #1	@ 0006c81c 0128
.org 0x6c81e
	bne.n 0x6c84e	@ 0006c81e 16d1
.org 0x6c820
	adds r0, r4, #0	@ 0006c820 201c
.org 0x6c822
	adds r0, #113	@ 0006c822 7130
.org 0x6c824
	ldrb r0, [r0, #0]	@ 0006c824 0078
.org 0x6c826
	lsls r0, r0, #24	@ 0006c826 0006
.org 0x6c828
	asrs r0, r0, #24	@ 0006c828 0016
.org 0x6c82a
	cmp r0, #3	@ 0006c82a 0328
.org 0x6c82c
	ble.n 0x6c84e	@ 0006c82c 0fdd
.org 0x6c82e
	movs r0, #210	@ 0006c82e d220
.org 0x6c830
	bl 0x2b10	@ 0006c830 96f76ef9
.org 0x6c834
	adds r0, r4, #0	@ 0006c834 201c
.org 0x6c836
	movs r1, #0	@ 0006c836 0021
.org 0x6c838
	movs r2, #1	@ 0006c838 0122
.org 0x6c83a
	bl 0xca4c4	@ 0006c83a 5df043fe
.org 0x6c83e
	adds r0, r4, #0	@ 0006c83e 201c
.org 0x6c840
	movs r1, #0	@ 0006c840 0021
.org 0x6c842
	movs r2, #2	@ 0006c842 0222
.org 0x6c844
	bl 0xca4c4	@ 0006c844 5df03efe
.org 0x6c848
	ldrb r0, [r4, #15]	@ 0006c848 e07b
.org 0x6c84a
	adds r0, #1	@ 0006c84a 0130
.org 0x6c84c
	strb r0, [r4, #15]	@ 0006c84c e073
.org 0x6c84e
	ldr r2, [pc, #104]	@ 0006c84e 1a4a
.org 0x6c850
	ldrb r0, [r4, #18]	@ 0006c850 a07c
.org 0x6c852
	adds r0, #64	@ 0006c852 4030
.org 0x6c854
	lsls r0, r0, #24	@ 0006c854 0006
.org 0x6c856
	lsrs r0, r0, #23	@ 0006c856 c00d
.org 0x6c858
	adds r0, r0, r2	@ 0006c858 8018
.org 0x6c85a
	movs r3, #0	@ 0006c85a 0023
.org 0x6c85c
	ldrsh r0, [r0, r3]	@ 0006c85c c05e
.org 0x6c85e
	ldr r3, [r4, #92]	@ 0006c85e e36d
.org 0x6c860
	adds r1, r0, #0	@ 0006c860 011c
.org 0x6c862
	muls r1, r3	@ 0006c862 5943
.org 0x6c864
	asrs r1, r1, #8	@ 0006c864 0912
.org 0x6c866
	ldr r0, [r4, #84]	@ 0006c866 606d
.org 0x6c868
	adds r0, r0, r1	@ 0006c868 4018
.org 0x6c86a
	str r0, [r4, #84]	@ 0006c86a 6065
.org 0x6c86c
	ldrb r0, [r4, #18]	@ 0006c86c a07c
.org 0x6c86e
	lsls r0, r0, #1	@ 0006c86e 4000
.org 0x6c870
	adds r0, r0, r2	@ 0006c870 8018
.org 0x6c872
	movs r1, #0	@ 0006c872 0021
.org 0x6c874
	ldrsh r0, [r0, r1]	@ 0006c874 405e
.org 0x6c876
	adds r1, r0, #0	@ 0006c876 011c
.org 0x6c878
	muls r1, r3	@ 0006c878 5943
.org 0x6c87a
	asrs r1, r1, #8	@ 0006c87a 0912
.org 0x6c87c
	ldr r0, [r4, #88]	@ 0006c87c a06d
.org 0x6c87e
	adds r0, r0, r1	@ 0006c87e 4018
.org 0x6c880
	str r0, [r4, #88]	@ 0006c880 a065
.org 0x6c882
	ldr r0, [r4, #96]	@ 0006c882 206e
.org 0x6c884
	cmp r3, r0	@ 0006c884 8342
.org 0x6c886
	ble.n 0x6c88c	@ 0006c886 01dd
.org 0x6c888
	ldr r0, [r4, #100]	@ 0006c888 606e
.org 0x6c88a
	subs r0, r3, r0	@ 0006c88a 181a
.org 0x6c88c
	str r0, [r4, #92]	@ 0006c88c e065
.org 0x6c88e
	ldrb r1, [r4, #10]	@ 0006c88e a17a
.org 0x6c890
	movs r0, #16	@ 0006c890 1020
.org 0x6c892
	ands r0, r1	@ 0006c892 0840
.org 0x6c894
	lsls r0, r0, #24	@ 0006c894 0006
.org 0x6c896
	lsrs r2, r0, #24	@ 0006c896 020e
.org 0x6c898
	cmp r2, #0	@ 0006c898 002a
.org 0x6c89a
	beq.n 0x6c8c0	@ 0006c89a 11d0
.org 0x6c89c
	adds r0, r4, #0	@ 0006c89c 201c
.org 0x6c89e
	adds r0, #180	@ 0006c89e b430
.org 0x6c8a0
	ldr r0, [r0, #24]	@ 0006c8a0 8069
.org 0x6c8a2
	ldr r2, [pc, #24]	@ 0006c8a2 064a
.org 0x6c8a4
	adds r1, r0, r2	@ 0006c8a4 8118
.org 0x6c8a6
	ldr r0, [r4, #84]	@ 0006c8a6 606d
.org 0x6c8a8
	cmp r0, r1	@ 0006c8a8 8842
.org 0x6c8aa
	ble.n 0x6c8da	@ 0006c8aa 16dd
.org 0x6c8ac
	str r1, [r4, #84]	@ 0006c8ac 6165
.org 0x6c8ae
	movs r1, #0	@ 0006c8ae 0021
.org 0x6c8b0
	movs r0, #26	@ 0006c8b0 1a20
.org 0x6c8b2
	strb r0, [r4, #13]	@ 0006c8b2 6073
.org 0x6c8b4
	strb r1, [r4, #14]	@ 0006c8b4 a173
.org 0x6c8b6
	b.n 0x6c8da	@ 0006c8b6 10e0
.org 0x6c8b8
	.byte 0x0c,0x93,0x12,0x08	@ 0006c8b8 data
.org 0x6c8bc
	.byte 0x00,0xe8,0xff,0xff	@ 0006c8bc data
.org 0x6c8c0
	adds r0, r4, #0	@ 0006c8c0 201c
.org 0x6c8c2
	adds r0, #180	@ 0006c8c2 b430
.org 0x6c8c4
	ldr r0, [r0, #20]	@ 0006c8c4 4069
.org 0x6c8c6
	movs r3, #192	@ 0006c8c6 c023
.org 0x6c8c8
	lsls r3, r3, #5	@ 0006c8c8 5b01
