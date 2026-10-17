@ FUN_080ba87c  entry 0x080ba87c  size 210
.thumb
.org 0xba87c
FUN_080ba87c:
	push {r4, r5, lr}	@ 000ba87c 30b5
.org 0xba87e
	adds r5, r0, #0	@ 000ba87e 051c
.org 0xba880
	ldr r4, [r5, #40]	@ 000ba880 ac6a
.org 0xba882
	ldrb r0, [r5, #15]	@ 000ba882 e87b
.org 0xba884
	cmp r0, #0	@ 000ba884 0028
.org 0xba886
	bne.n 0xba92c	@ 000ba886 51d1
.org 0xba888
	adds r0, r5, #0	@ 000ba888 281c
.org 0xba88a
	adds r0, #116	@ 000ba88a 7430
.org 0xba88c
	ldr r1, [pc, #84]	@ 000ba88c 1549
.org 0xba88e
	bl 0x5784	@ 000ba88e 4af779ff
.org 0xba892
	ldr r1, [pc, #84]	@ 000ba892 1549
.org 0xba894
	ldr r0, [pc, #84]	@ 000ba894 1548
.org 0xba896
	strh r0, [r1, #0]	@ 000ba896 0880
.org 0xba898
	adds r2, r5, #0	@ 000ba898 2a1c
.org 0xba89a
	adds r2, #69	@ 000ba89a 4532
.org 0xba89c
	ldrb r1, [r2, #0]	@ 000ba89c 1178
.org 0xba89e
	movs r0, #13	@ 000ba89e 0d20
.org 0xba8a0
	negs r0, r0	@ 000ba8a0 4042
.org 0xba8a2
	ands r0, r1	@ 000ba8a2 0840
.org 0xba8a4
	movs r1, #4	@ 000ba8a4 0421
.org 0xba8a6
	orrs r0, r1	@ 000ba8a6 0843
.org 0xba8a8
	strb r0, [r2, #0]	@ 000ba8a8 1070
.org 0xba8aa
	adds r0, r5, #0	@ 000ba8aa 281c
.org 0xba8ac
	bl 0x1ceec	@ 000ba8ac 62f71efb
.org 0xba8b0
	ldr r1, [pc, #60]	@ 000ba8b0 0f49
.org 0xba8b2
	adds r0, r5, #0	@ 000ba8b2 281c
.org 0xba8b4
	bl 0x1cf00	@ 000ba8b4 62f724fb
.org 0xba8b8
	adds r1, r5, #0	@ 000ba8b8 291c
.org 0xba8ba
	adds r1, #37	@ 000ba8ba 2531
.org 0xba8bc
	movs r0, #24	@ 000ba8bc 1820
.org 0xba8be
	strb r0, [r1, #0]	@ 000ba8be 0870
.org 0xba8c0
	movs r2, #0	@ 000ba8c0 0022
.org 0xba8c2
	adds r0, r4, #0	@ 000ba8c2 201c
.org 0xba8c4
	adds r0, #180	@ 000ba8c4 b430
.org 0xba8c6
	ldr r0, [r0, #0]	@ 000ba8c6 0068
.org 0xba8c8
	movs r1, #240	@ 000ba8c8 f021
.org 0xba8ca
	lsls r1, r1, #7	@ 000ba8ca c901
.org 0xba8cc
	adds r0, r0, r1	@ 000ba8cc 4018
.org 0xba8ce
	ldr r1, [r5, #84]	@ 000ba8ce 696d
.org 0xba8d0
	cmp r0, r1	@ 000ba8d0 8842
.org 0xba8d2
	blt.n 0xba8d6	@ 000ba8d2 00db
.org 0xba8d4
	movs r2, #1	@ 000ba8d4 0122
.org 0xba8d6
	cmp r2, #0	@ 000ba8d6 002a
.org 0xba8d8
	beq.n 0xba8f4	@ 000ba8d8 0cd0
.org 0xba8da
	ldrb r0, [r5, #10]	@ 000ba8da a87a
.org 0xba8dc
	movs r1, #16	@ 000ba8dc 1021
.org 0xba8de
	orrs r0, r1	@ 000ba8de 0843
.org 0xba8e0
	b.n 0xba8fa	@ 000ba8e0 0be0
.org 0xba8e2
	.byte 0x00	@ 000ba8e2 data
.org 0xba8e3
	.byte 0x00	@ 000ba8e3 data
.org 0xba8e4
	.byte 0x18,0x45,0x86,0x08	@ 000ba8e4 data
.org 0xba8e8
	.byte 0x40,0x0a,0x00,0x02	@ 000ba8e8 data
.org 0xba8ec
	.byte 0x10,0x3f,0x00,0x00	@ 000ba8ec data
.org 0xba8f0
	.byte 0x01,0xbd,0x00,0x00	@ 000ba8f0 data
.org 0xba8f4
	ldrb r1, [r5, #10]	@ 000ba8f4 a97a
.org 0xba8f6
	movs r0, #239	@ 000ba8f6 ef20
.org 0xba8f8
	ands r0, r1	@ 000ba8f8 0840
.org 0xba8fa
	strb r0, [r5, #10]	@ 000ba8fa a872
.org 0xba8fc
	adds r1, r2, #0	@ 000ba8fc 111c
.org 0xba8fe
	adds r0, r5, #0	@ 000ba8fe 281c
.org 0xba900
	adds r0, #76	@ 000ba900 4c30
.org 0xba902
	strb r1, [r0, #0]	@ 000ba902 0170
.org 0xba904
	adds r3, r5, #0	@ 000ba904 2b1c
.org 0xba906
	adds r3, #74	@ 000ba906 4a33
.org 0xba908
	lsls r1, r1, #4	@ 000ba908 0901
.org 0xba90a
	ldrb r2, [r3, #0]	@ 000ba90a 1a78
.org 0xba90c
	movs r0, #17	@ 000ba90c 1120
.org 0xba90e
	negs r0, r0	@ 000ba90e 4042
.org 0xba910
	ands r0, r2	@ 000ba910 1040
.org 0xba912
	orrs r0, r1	@ 000ba912 0843
.org 0xba914
	strb r0, [r3, #0]	@ 000ba914 1870
.org 0xba916
	adds r0, r4, #0	@ 000ba916 201c
.org 0xba918
	adds r0, #184	@ 000ba918 b830
.org 0xba91a
	ldr r0, [r0, #0]	@ 000ba91a 0068
.org 0xba91c
	ldr r1, [pc, #64]	@ 000ba91c 1049
.org 0xba91e
	adds r0, r0, r1	@ 000ba91e 4018
.org 0xba920
	str r0, [r5, #88]	@ 000ba920 a865
.org 0xba922
	movs r0, #16	@ 000ba922 1020
.org 0xba924
	strb r0, [r5, #18]	@ 000ba924 a874
.org 0xba926
	ldrb r0, [r5, #15]	@ 000ba926 e87b
.org 0xba928
	adds r0, #1	@ 000ba928 0130
.org 0xba92a
	strb r0, [r5, #15]	@ 000ba92a e873
.org 0xba92c
	adds r0, r5, #0	@ 000ba92c 281c
.org 0xba92e
	bl 0x1cff0	@ 000ba92e 62f75ffb
.org 0xba932
	ldrb r3, [r5, #18]	@ 000ba932 ab7c
.org 0xba934
	subs r3, #1	@ 000ba934 013b
.org 0xba936
	strb r3, [r5, #18]	@ 000ba936 ab74
.org 0xba938
	ldrb r2, [r5, #18]	@ 000ba938 aa7c
.org 0xba93a
	ldr r4, [pc, #40]	@ 000ba93a 0a4c
.org 0xba93c
	movs r0, #16	@ 000ba93c 1020
.org 0xba93e
	subs r0, r0, r2	@ 000ba93e 801a
.org 0xba940
	movs r1, #31	@ 000ba940 1f21
.org 0xba942
	ands r0, r1	@ 000ba942 0840
.org 0xba944
	lsls r2, r2, #8	@ 000ba944 1202
.org 0xba946
	orrs r0, r2	@ 000ba946 1043
.org 0xba948
	movs r1, #0	@ 000ba948 0021
.org 0xba94a
	strh r0, [r4, #2]	@ 000ba94a 6080
.org 0xba94c
	lsls r3, r3, #24	@ 000ba94c 1b06
