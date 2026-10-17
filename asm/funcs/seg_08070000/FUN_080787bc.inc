@ FUN_080787bc  entry 0x080787bc  size 188
.thumb
.org 0x787bc
FUN_080787bc:
	push {r4, lr}	@ 000787bc 10b5
.org 0x787be
	adds r4, r0, #0	@ 000787be 041c
.org 0x787c0
	ldrb r0, [r4, #15]	@ 000787c0 e07b
.org 0x787c2
	cmp r0, #0	@ 000787c2 0028
.org 0x787c4
	bne.n 0x787f6	@ 000787c4 17d1
.org 0x787c6
	adds r1, r4, #0	@ 000787c6 211c
.org 0x787c8
	adds r1, #200	@ 000787c8 c831
.org 0x787ca
	ldr r0, [r1, #0]	@ 000787ca 0868
.org 0x787cc
	adds r0, #181	@ 000787cc b530
.org 0x787ce
	movs r3, #4	@ 000787ce 0423
.org 0x787d0
	strb r3, [r0, #0]	@ 000787d0 0370
.org 0x787d2
	ldr r0, [r1, #0]	@ 000787d2 0868
.org 0x787d4
	adds r0, #182	@ 000787d4 b630
.org 0x787d6
	movs r2, #1	@ 000787d6 0122
.org 0x787d8
	strb r2, [r0, #0]	@ 000787d8 0270
.org 0x787da
	adds r1, #4	@ 000787da 0431
.org 0x787dc
	ldr r0, [r1, #0]	@ 000787dc 0868
.org 0x787de
	adds r0, #182	@ 000787de b630
.org 0x787e0
	strb r3, [r0, #0]	@ 000787e0 0370
.org 0x787e2
	ldr r0, [r1, #0]	@ 000787e2 0868
.org 0x787e4
	adds r0, #185	@ 000787e4 b930
.org 0x787e6
	strb r2, [r0, #0]	@ 000787e6 0270
.org 0x787e8
	adds r0, r4, #0	@ 000787e8 201c
.org 0x787ea
	movs r1, #0	@ 000787ea 0021
.org 0x787ec
	bl 0x78fdc	@ 000787ec 00f0f6fb
.org 0x787f0
	ldrb r0, [r4, #15]	@ 000787f0 e07b
.org 0x787f2
	adds r0, #1	@ 000787f2 0130
.org 0x787f4
	strb r0, [r4, #15]	@ 000787f4 e073
.org 0x787f6
	adds r0, r4, #0	@ 000787f6 201c
.org 0x787f8
	bl 0x1cff0	@ 000787f8 a4f7fafb
.org 0x787fc
	adds r0, r4, #0	@ 000787fc 201c
.org 0x787fe
	adds r0, #116	@ 000787fe 7430
.org 0x78800
	ldr r3, [pc, #116]	@ 00078800 1d4b
.org 0x78802
	ldr r2, [pc, #120]	@ 00078802 1e4a
.org 0x78804
	adds r1, r4, #0	@ 00078804 211c
.org 0x78806
	adds r1, #196	@ 00078806 c431
.org 0x78808
	ldrb r1, [r1, #0]	@ 00078808 0978
.org 0x7880a
	lsls r1, r1, #1	@ 0007880a 4900
.org 0x7880c
	adds r1, r1, r2	@ 0007880c 8918
.org 0x7880e
	ldrh r2, [r1, #0]	@ 0007880e 0a88
.org 0x78810
	lsls r2, r2, #2	@ 00078810 9200
.org 0x78812
	adds r2, r2, r3	@ 00078812 d218
.org 0x78814
	adds r1, r4, #0	@ 00078814 211c
.org 0x78816
	adds r1, #113	@ 00078816 7131
.org 0x78818
	ldrb r1, [r1, #0]	@ 00078818 0978
.org 0x7881a
	lsls r1, r1, #24	@ 0007881a 0906
.org 0x7881c
	asrs r1, r1, #24	@ 0007881c 0916
.org 0x7881e
	ldr r2, [r2, #0]	@ 0007881e 1268
.org 0x78820
	lsls r1, r1, #2	@ 00078820 8900
.org 0x78822
	adds r1, r1, r2	@ 00078822 8918
.org 0x78824
	ldr r1, [r1, #0]	@ 00078824 0968
.org 0x78826
	bl 0x5784	@ 00078826 8cf7adff
.org 0x7882a
	adds r0, r4, #0	@ 0007882a 201c
.org 0x7882c
	bl 0x78f28	@ 0007882c 00f07cfb
.org 0x78830
	movs r0, #132	@ 00078830 8420
.org 0x78832
	bl 0x25d8	@ 00078832 89f7d1fe
.org 0x78836
	adds r0, r4, #0	@ 00078836 201c
.org 0x78838
	adds r0, #200	@ 00078838 c830
.org 0x7883a
	ldr r1, [r0, #0]	@ 0007883a 0168
.org 0x7883c
	adds r0, r1, #0	@ 0007883c 081c
.org 0x7883e
	adds r0, #180	@ 0007883e b430
.org 0x78840
	ldrb r0, [r0, #0]	@ 00078840 0078
.org 0x78842
	cmp r0, #0	@ 00078842 0028
.org 0x78844
	beq.n 0x78872	@ 00078844 15d0
.org 0x78846
	adds r0, r1, #0	@ 00078846 081c
.org 0x78848
	adds r0, #182	@ 00078848 b630
.org 0x7884a
	ldrb r0, [r0, #0]	@ 0007884a 0078
.org 0x7884c
	cmp r0, #0	@ 0007884c 0028
.org 0x7884e
	bne.n 0x78872	@ 0007884e 10d1
.org 0x78850
	adds r0, r4, #0	@ 00078850 201c
.org 0x78852
	adds r0, #204	@ 00078852 cc30
.org 0x78854
	ldr r1, [r0, #0]	@ 00078854 0168
.org 0x78856
	adds r0, r1, #0	@ 00078856 081c
.org 0x78858
	adds r0, #184	@ 00078858 b830
.org 0x7885a
	ldrb r0, [r0, #0]	@ 0007885a 0078
.org 0x7885c
	cmp r0, #0	@ 0007885c 0028
.org 0x7885e
	beq.n 0x78872	@ 0007885e 08d0
.org 0x78860
	adds r0, r1, #0	@ 00078860 081c
.org 0x78862
	adds r0, #185	@ 00078862 b930
.org 0x78864
	ldrb r1, [r0, #0]	@ 00078864 0178
.org 0x78866
	cmp r1, #0	@ 00078866 0029
.org 0x78868
	bne.n 0x78872	@ 00078868 03d1
.org 0x7886a
	ldrb r0, [r4, #14]	@ 0007886a a07b
.org 0x7886c
	adds r0, #1	@ 0007886c 0130
.org 0x7886e
	strb r0, [r4, #14]	@ 0007886e a073
.org 0x78870
	strb r1, [r4, #15]	@ 00078870 e173
.org 0x78872
	pop {r4}	@ 00078872 10bc
.org 0x78874
	pop {r0}	@ 00078874 01bc
.org 0x78876
	bx r0	@ 00078876 0047
