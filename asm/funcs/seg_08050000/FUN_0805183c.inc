@ FUN_0805183c  entry 0x0805183c  size 186
.thumb
.org 0x5183c
FUN_0805183c:
	push {r4, r5, lr}	@ 0005183c 30b5
.org 0x5183e
	adds r4, r0, #0	@ 0005183e 041c
.org 0x51840
	ldrb r0, [r4, #14]	@ 00051840 a07b
.org 0x51842
	cmp r0, #0	@ 00051842 0028
.org 0x51844
	bne.n 0x51886	@ 00051844 1fd1
.org 0x51846
	adds r0, r4, #0	@ 00051846 201c
.org 0x51848
	adds r0, #116	@ 00051848 7430
.org 0x5184a
	ldr r1, [pc, #24]	@ 0005184a 0649
.org 0x5184c
	bl 0x5784	@ 0005184c b3f79aff
.org 0x51850
	adds r0, r4, #0	@ 00051850 201c
.org 0x51852
	adds r0, #164	@ 00051852 a430
.org 0x51854
	movs r1, #0	@ 00051854 0021
.org 0x51856
	ldrsh r0, [r0, r1]	@ 00051856 405e
.org 0x51858
	cmp r0, #16	@ 00051858 1028
.org 0x5185a
	ble.n 0x51868	@ 0005185a 05dd
.org 0x5185c
	movs r0, #192	@ 0005185c c020
.org 0x5185e
	lsls r0, r0, #2	@ 0005185e 8000
.org 0x51860
	b.n 0x5186c	@ 00051860 04e0
.org 0x51862
	.byte 0x00	@ 00051862 data
.org 0x51863
	.byte 0x00	@ 00051863 data
.org 0x51864
	.byte 0x84,0x7e,0x85,0x08	@ 00051864 data
.org 0x51868
	movs r0, #208	@ 00051868 d020
.org 0x5186a
	lsls r0, r0, #2	@ 0005186a 8000
.org 0x5186c
	str r0, [r4, #92]	@ 0005186c e065
.org 0x5186e
	movs r2, #0	@ 0005186e 0022
.org 0x51870
	ldr r0, [pc, #76]	@ 00051870 1348
.org 0x51872
	ldr r0, [r0, #0]	@ 00051872 0068
.org 0x51874
	ldr r1, [r4, #84]	@ 00051874 616d
.org 0x51876
	ldr r0, [r0, #84]	@ 00051876 406d
.org 0x51878
	cmp r1, r0	@ 00051878 8142
.org 0x5187a
	bge.n 0x5187e	@ 0005187a 00da
.org 0x5187c
	movs r2, #1	@ 0005187c 0122
.org 0x5187e
	strb r2, [r4, #15]	@ 0005187e e273
.org 0x51880
	ldrb r0, [r4, #14]	@ 00051880 a07b
.org 0x51882
	adds r0, #1	@ 00051882 0130
.org 0x51884
	strb r0, [r4, #14]	@ 00051884 a073
.org 0x51886
	adds r0, r4, #0	@ 00051886 201c
.org 0x51888
	bl 0x1cff0	@ 00051888 cbf7b2fb
.org 0x5188c
	movs r5, #0	@ 0005188c 0025
.org 0x5188e
	ldrb r0, [r4, #15]	@ 0005188e e07b
.org 0x51890
	cmp r0, #0	@ 00051890 0028
.org 0x51892
	beq.n 0x518c8	@ 00051892 19d0
.org 0x51894
	ldr r1, [r4, #84]	@ 00051894 616d
.org 0x51896
	ldr r0, [r4, #92]	@ 00051896 e06d
.org 0x51898
	adds r1, r1, r0	@ 00051898 0918
.org 0x5189a
	str r1, [r4, #84]	@ 0005189a 6165
.org 0x5189c
	ldr r0, [pc, #32]	@ 0005189c 0848
.org 0x5189e
	ldr r0, [r0, #0]	@ 0005189e 0068
.org 0x518a0
	ldr r0, [r0, #84]	@ 000518a0 406d
.org 0x518a2
	cmp r1, r0	@ 000518a2 8142
.org 0x518a4
	bgt.n 0x518da	@ 000518a4 19dc
.org 0x518a6
	movs r2, #140	@ 000518a6 8c22
.org 0x518a8
	lsls r2, r2, #6	@ 000518a8 9201
.org 0x518aa
	adds r0, r1, r2	@ 000518aa 8818
.org 0x518ac
	ldr r1, [r4, #88]	@ 000518ac a16d
.org 0x518ae
	ldr r2, [pc, #20]	@ 000518ae 054a
.org 0x518b0
	adds r1, r1, r2	@ 000518b0 8918
.org 0x518b2
	bl 0x7c7c	@ 000518b2 b6f7e3f9
.org 0x518b6
	lsls r0, r0, #16	@ 000518b6 0004
.org 0x518b8
	cmp r0, #0	@ 000518b8 0028
.org 0x518ba
	beq.n 0x518fa	@ 000518ba 1ed0
.org 0x518bc
	b.n 0x518fe	@ 000518bc 1fe0
.org 0x518be
	.byte 0x00	@ 000518be data
.org 0x518bf
	.byte 0x00	@ 000518bf data
.org 0x518c0
	.byte 0xf0,0xdb,0x02,0x02	@ 000518c0 data
.org 0x518c4
	.byte 0x00,0xe5,0xff,0xff	@ 000518c4 data
.org 0x518c8
	ldr r1, [r4, #84]	@ 000518c8 616d
.org 0x518ca
	ldr r0, [r4, #92]	@ 000518ca e06d
.org 0x518cc
	subs r1, r1, r0	@ 000518cc 091a
.org 0x518ce
	str r1, [r4, #84]	@ 000518ce 6165
.org 0x518d0
	ldr r0, [pc, #12]	@ 000518d0 0348
.org 0x518d2
	ldr r0, [r0, #0]	@ 000518d2 0068
.org 0x518d4
	ldr r0, [r0, #84]	@ 000518d4 406d
.org 0x518d6
	cmp r1, r0	@ 000518d6 8142
.org 0x518d8
	bge.n 0x518e4	@ 000518d8 04da
.org 0x518da
	str r0, [r4, #84]	@ 000518da 6065
.org 0x518dc
	b.n 0x518fe	@ 000518dc 0fe0
.org 0x518de
	.byte 0x00	@ 000518de data
.org 0x518df
	.byte 0x00	@ 000518df data
.org 0x518e0
	.byte 0xf0,0xdb,0x02,0x02	@ 000518e0 data
.org 0x518e4
	ldr r2, [pc, #36]	@ 000518e4 094a
.org 0x518e6
	adds r0, r1, r2	@ 000518e6 8818
.org 0x518e8
	ldr r1, [r4, #88]	@ 000518e8 a16d
.org 0x518ea
	ldr r2, [pc, #36]	@ 000518ea 094a
.org 0x518ec
	adds r1, r1, r2	@ 000518ec 8918
.org 0x518ee
	bl 0x7c7c	@ 000518ee b6f7c5f9
.org 0x518f2
	lsls r0, r0, #16	@ 000518f2 0004
.org 0x518f4
	cmp r0, #0	@ 000518f4 0028
