@ FUN_0810cccc  entry 0x0810cccc  size 1138
.thumb
.org 0x10cccc
FUN_0810cccc:
	push {r4, r5, r6, r7, lr}	@ 0010cccc f0b5
.org 0x10ccce
	mov r7, sl	@ 0010ccce 5746
.org 0x10ccd0
	mov r6, r9	@ 0010ccd0 4e46
.org 0x10ccd2
	mov r5, r8	@ 0010ccd2 4546
.org 0x10ccd4
	push {r5, r6, r7}	@ 0010ccd4 e0b4
.org 0x10ccd6
	sub sp, #16	@ 0010ccd6 84b0
.org 0x10ccd8
	adds r7, r0, #0	@ 0010ccd8 071c
.org 0x10ccda
	ldr r0, [r7, #40]	@ 0010ccda b86a
.org 0x10ccdc
	mov sl, r0	@ 0010ccdc 8246
.org 0x10ccde
	ldr r1, [pc, #112]	@ 0010ccde 1c49
.org 0x10cce0
	ldrb r0, [r7, #9]	@ 0010cce0 787a
.org 0x10cce2
	lsls r0, r0, #2	@ 0010cce2 8000
.org 0x10cce4
	adds r0, r0, r1	@ 0010cce4 4018
.org 0x10cce6
	movs r1, #1	@ 0010cce6 0121
.org 0x10cce8
	str r1, [r7, #12]	@ 0010cce8 f960
.org 0x10ccea
	ldr r0, [r0, #0]	@ 0010ccea 0068
.org 0x10ccec
	movs r5, #4	@ 0010ccec 0425
.org 0x10ccee
	ldr r0, [r0, #4]	@ 0010ccee 4068
.org 0x10ccf0
	str r0, [r7, #20]	@ 0010ccf0 7861
.org 0x10ccf2
	ldrb r0, [r7, #17]	@ 0010ccf2 787c
.org 0x10ccf4
	cmp r0, #0	@ 0010ccf4 0028
.org 0x10ccf6
	beq.n 0x10cdc2	@ 0010ccf6 64d0
.org 0x10ccf8
	ldr r3, [pc, #88]	@ 0010ccf8 164b
.org 0x10ccfa
	adds r2, r7, #0	@ 0010ccfa 3a1c
.org 0x10ccfc
	adds r2, #120	@ 0010ccfc 7832
.org 0x10ccfe
	ldrh r0, [r2, #0]	@ 0010ccfe 1088
.org 0x10cd00
	lsrs r0, r0, #8	@ 0010cd00 000a
.org 0x10cd02
	lsls r0, r0, #1	@ 0010cd02 4000
.org 0x10cd04
	adds r0, r0, r3	@ 0010cd04 c018
.org 0x10cd06
	ldrh r0, [r0, #0]	@ 0010cd06 0088
.org 0x10cd08
	adds r1, r7, #0	@ 0010cd08 391c
.org 0x10cd0a
	adds r1, #122	@ 0010cd0a 7a31
.org 0x10cd0c
	strh r0, [r1, #0]	@ 0010cd0c 0880
.org 0x10cd0e
	ldr r4, [pc, #72]	@ 0010cd0e 124c
.org 0x10cd10
	ldrh r0, [r2, #0]	@ 0010cd10 1088
.org 0x10cd12
	lsrs r0, r0, #8	@ 0010cd12 000a
.org 0x10cd14
	lsls r0, r0, #1	@ 0010cd14 4000
.org 0x10cd16
	adds r0, r0, r4	@ 0010cd16 0019
.org 0x10cd18
	ldrh r0, [r0, #0]	@ 0010cd18 0088
.org 0x10cd1a
	adds r1, #4	@ 0010cd1a 0431
.org 0x10cd1c
	strb r0, [r1, #0]	@ 0010cd1c 0870
.org 0x10cd1e
	adds r0, r7, #0	@ 0010cd1e 381c
.org 0x10cd20
	adds r0, #127	@ 0010cd20 7f30
.org 0x10cd22
	ldrb r1, [r0, #0]	@ 0010cd22 0178
.org 0x10cd24
	mov r8, r2	@ 0010cd24 9046
.org 0x10cd26
	str r0, [sp, #12]	@ 0010cd26 0390
.org 0x10cd28
	cmp r1, #0	@ 0010cd28 0029
.org 0x10cd2a
	beq.n 0x10cdac	@ 0010cd2a 3fd0
.org 0x10cd2c
	ldrh r0, [r2, #0]	@ 0010cd2c 1088
.org 0x10cd2e
	lsls r2, r0, #16	@ 0010cd2e 0204
.org 0x10cd30
	lsrs r1, r2, #16	@ 0010cd30 110c
.org 0x10cd32
	movs r0, #206	@ 0010cd32 ce20
.org 0x10cd34
	lsls r0, r0, #8	@ 0010cd34 0002
.org 0x10cd36
	cmp r1, r0	@ 0010cd36 8142
.org 0x10cd38
	bne.n 0x10cd5c	@ 0010cd38 10d1
.org 0x10cd3a
	movs r1, #206	@ 0010cd3a ce21
.org 0x10cd3c
	lsls r1, r1, #1	@ 0010cd3c 4900
.org 0x10cd3e
	adds r2, r3, r1	@ 0010cd3e 5a18
.org 0x10cd40
	movs r0, #138	@ 0010cd40 8a20
.org 0x10cd42
	lsls r0, r0, #2	@ 0010cd42 8000
.org 0x10cd44
	strh r0, [r2, #0]	@ 0010cd44 1080
.org 0x10cd46
	adds r1, r4, r1	@ 0010cd46 6118
.org 0x10cd48
	movs r0, #5	@ 0010cd48 0520
.org 0x10cd4a
	strh r0, [r1, #0]	@ 0010cd4a 0880
.org 0x10cd4c
	b.n 0x10cf2a	@ 0010cd4c ede0
.org 0x10cd4e
	.byte 0x00	@ 0010cd4e data
.org 0x10cd4f
	.byte 0x00	@ 0010cd4f data
.org 0x10cd50
	.byte 0xf8,0xca,0x86,0x08	@ 0010cd50 data
.org 0x10cd54
	.byte 0x40,0xe2,0x02,0x02	@ 0010cd54 data
.org 0x10cd58
	.byte 0x40,0xdc,0x02,0x02	@ 0010cd58 data
.org 0x10cd5c
	movs r0, #207	@ 0010cd5c cf20
.org 0x10cd5e
	lsls r0, r0, #8	@ 0010cd5e 0002
.org 0x10cd60
	cmp r1, r0	@ 0010cd60 8142
.org 0x10cd62
	bne.n 0x10cd78	@ 0010cd62 09d1
.org 0x10cd64
	movs r1, #207	@ 0010cd64 cf21
.org 0x10cd66
	lsls r1, r1, #1	@ 0010cd66 4900
.org 0x10cd68
	adds r2, r3, r1	@ 0010cd68 5a18
.org 0x10cd6a
	movs r0, #155	@ 0010cd6a 9b20
.org 0x10cd6c
	lsls r0, r0, #2	@ 0010cd6c 8000
.org 0x10cd6e
	strh r0, [r2, #0]	@ 0010cd6e 1080
.org 0x10cd70
	adds r1, r4, r1	@ 0010cd70 6118
.org 0x10cd72
	movs r0, #6	@ 0010cd72 0620
.org 0x10cd74
	strh r0, [r1, #0]	@ 0010cd74 0880
.org 0x10cd76
	b.n 0x10cf2a	@ 0010cd76 d8e0
.org 0x10cd78
	movs r0, #208	@ 0010cd78 d020
.org 0x10cd7a
	lsls r0, r0, #8	@ 0010cd7a 0002
.org 0x10cd7c
	cmp r1, r0	@ 0010cd7c 8142
.org 0x10cd7e
	bne.n 0x10cd98	@ 0010cd7e 0bd1
.org 0x10cd80
	movs r1, #208	@ 0010cd80 d021
.org 0x10cd82
	lsls r1, r1, #1	@ 0010cd82 4900
.org 0x10cd84
	adds r2, r3, r1	@ 0010cd84 5a18
.org 0x10cd86
	ldr r0, [pc, #12]	@ 0010cd86 0348
.org 0x10cd88
	strh r0, [r2, #0]	@ 0010cd88 1080
.org 0x10cd8a
	adds r1, r4, r1	@ 0010cd8a 6118
.org 0x10cd8c
	movs r0, #7	@ 0010cd8c 0720
.org 0x10cd8e
	strh r0, [r1, #0]	@ 0010cd8e 0880
.org 0x10cd90
	b.n 0x10cf2a	@ 0010cd90 cbe0
.org 0x10cd92
	.byte 0x00	@ 0010cd92 data
.org 0x10cd93
	.byte 0x00	@ 0010cd93 data
.org 0x10cd94
	.byte 0xdd,0x02,0x00,0x00	@ 0010cd94 data
.org 0x10cd98
	lsrs r0, r2, #24	@ 0010cd98 100e
.org 0x10cd9a
	lsls r0, r0, #1	@ 0010cd9a 4000
.org 0x10cd9c
	adds r2, r0, r3	@ 0010cd9c c218
.org 0x10cd9e
	movs r1, #164	@ 0010cd9e a421
.org 0x10cda0
	lsls r1, r1, #2	@ 0010cda0 8900
.org 0x10cda2
	strh r1, [r2, #0]	@ 0010cda2 1180
.org 0x10cda4
	adds r0, r0, r4	@ 0010cda4 0019
.org 0x10cda6
	movs r1, #5	@ 0010cda6 0521
.org 0x10cda8
	strh r1, [r0, #0]	@ 0010cda8 0180
.org 0x10cdaa
	b.n 0x10cf2a	@ 0010cdaa bee0
.org 0x10cdac
	mov r1, r8	@ 0010cdac 4146
.org 0x10cdae
	ldrh r0, [r1, #0]	@ 0010cdae 0888
.org 0x10cdb0
	lsrs r0, r0, #8	@ 0010cdb0 000a
.org 0x10cdb2
	lsls r0, r0, #1	@ 0010cdb2 4000
.org 0x10cdb4
	adds r2, r0, r3	@ 0010cdb4 c218
.org 0x10cdb6
	movs r1, #128	@ 0010cdb6 8021
.org 0x10cdb8
	lsls r1, r1, #2	@ 0010cdb8 8900
.org 0x10cdba
	strh r1, [r2, #0]	@ 0010cdba 1180
.org 0x10cdbc
	adds r0, r0, r4	@ 0010cdbc 0019
.org 0x10cdbe
	strh r5, [r0, #0]	@ 0010cdbe 0580
.org 0x10cdc0
	b.n 0x10cf2a	@ 0010cdc0 b3e0
.org 0x10cdc2
	ldr r3, [pc, #84]	@ 0010cdc2 154b
.org 0x10cdc4
	adds r2, r7, #0	@ 0010cdc4 3a1c
.org 0x10cdc6
	adds r2, #120	@ 0010cdc6 7832
.org 0x10cdc8
	ldrh r0, [r2, #0]	@ 0010cdc8 1088
.org 0x10cdca
	lsrs r0, r0, #8	@ 0010cdca 000a
.org 0x10cdcc
	lsls r0, r0, #1	@ 0010cdcc 4000
.org 0x10cdce
	adds r0, r0, r3	@ 0010cdce c018
.org 0x10cdd0
	ldrh r0, [r0, #0]	@ 0010cdd0 0088
.org 0x10cdd2
	adds r1, r7, #0	@ 0010cdd2 391c
.org 0x10cdd4
	adds r1, #122	@ 0010cdd4 7a31
.org 0x10cdd6
	movs r4, #0	@ 0010cdd6 0024
.org 0x10cdd8
	strh r0, [r1, #0]	@ 0010cdd8 0880
.org 0x10cdda
	ldr r0, [pc, #64]	@ 0010cdda 1048
.org 0x10cddc
	mov r9, r0	@ 0010cddc 8146
.org 0x10cdde
	ldrh r0, [r2, #0]	@ 0010cdde 1088
.org 0x10cde0
	lsrs r0, r0, #8	@ 0010cde0 000a
.org 0x10cde2
	lsls r0, r0, #1	@ 0010cde2 4000
.org 0x10cde4
	add r0, r9	@ 0010cde4 4844
.org 0x10cde6
	ldrh r0, [r0, #0]	@ 0010cde6 0088
.org 0x10cde8
	adds r1, #4	@ 0010cde8 0431
.org 0x10cdea
	strb r0, [r1, #0]	@ 0010cdea 0870
.org 0x10cdec
	adds r0, r7, #0	@ 0010cdec 381c
.org 0x10cdee
	adds r0, #127	@ 0010cdee 7f30
.org 0x10cdf0
	ldrb r1, [r0, #0]	@ 0010cdf0 0178
.org 0x10cdf2
	mov r8, r2	@ 0010cdf2 9046
.org 0x10cdf4
	str r0, [sp, #12]	@ 0010cdf4 0390
.org 0x10cdf6
	adds r6, r3, #0	@ 0010cdf6 1e1c
.org 0x10cdf8
	cmp r1, #0	@ 0010cdf8 0029
.org 0x10cdfa
	beq.n 0x10ced8	@ 0010cdfa 6dd0
.org 0x10cdfc
	ldrh r0, [r2, #0]	@ 0010cdfc 1088
.org 0x10cdfe
	lsls r2, r0, #16	@ 0010cdfe 0204
.org 0x10ce00
	lsrs r1, r2, #16	@ 0010ce00 110c
.org 0x10ce02
	movs r0, #244	@ 0010ce02 f420
.org 0x10ce04
	lsls r0, r0, #8	@ 0010ce04 0002
.org 0x10ce06
	cmp r1, r0	@ 0010ce06 8142
.org 0x10ce08
	bne.n 0x10ce20	@ 0010ce08 0ad1
.org 0x10ce0a
	movs r1, #244	@ 0010ce0a f421
.org 0x10ce0c
	lsls r1, r1, #1	@ 0010ce0c 4900
.org 0x10ce0e
	adds r2, r3, r1	@ 0010ce0e 5a18
.org 0x10ce10
	movs r0, #148	@ 0010ce10 9420
.org 0x10ce12
	lsls r0, r0, #2	@ 0010ce12 8000
.org 0x10ce14
	b.n 0x10ce64	@ 0010ce14 26e0
.org 0x10ce16
	.byte 0x00	@ 0010ce16 data
.org 0x10ce17
	.byte 0x00	@ 0010ce17 data
.org 0x10ce18
	.byte 0x40,0xe0,0x02,0x02	@ 0010ce18 data
.org 0x10ce1c
	.byte 0x40,0xde,0x02,0x02	@ 0010ce1c data
.org 0x10ce20
	movs r0, #245	@ 0010ce20 f520
.org 0x10ce22
	lsls r0, r0, #8	@ 0010ce22 0002
.org 0x10ce24
	cmp r1, r0	@ 0010ce24 8142
.org 0x10ce26
	bne.n 0x10ce3c	@ 0010ce26 09d1
.org 0x10ce28
	movs r1, #245	@ 0010ce28 f521
.org 0x10ce2a
	lsls r1, r1, #1	@ 0010ce2a 4900
.org 0x10ce2c
	adds r2, r3, r1	@ 0010ce2c 5a18
.org 0x10ce2e
	movs r0, #160	@ 0010ce2e a020
.org 0x10ce30
	lsls r0, r0, #2	@ 0010ce30 8000
.org 0x10ce32
	strh r0, [r2, #0]	@ 0010ce32 1080
.org 0x10ce34
	add r1, r9	@ 0010ce34 4944
.org 0x10ce36
	movs r0, #6	@ 0010ce36 0620
.org 0x10ce38
	strh r0, [r1, #0]	@ 0010ce38 0880
.org 0x10ce3a
	b.n 0x10ce86	@ 0010ce3a 24e0
.org 0x10ce3c
	movs r0, #243	@ 0010ce3c f320
.org 0x10ce3e
	lsls r0, r0, #8	@ 0010ce3e 0002
.org 0x10ce40
	cmp r1, r0	@ 0010ce40 8142
.org 0x10ce42
	bne.n 0x10ce54	@ 0010ce42 07d1
.org 0x10ce44
	movs r1, #243	@ 0010ce44 f321
.org 0x10ce46
	lsls r1, r1, #1	@ 0010ce46 4900
.org 0x10ce48
	adds r2, r3, r1	@ 0010ce48 5a18
.org 0x10ce4a
	ldr r0, [pc, #4]	@ 0010ce4a 0148
.org 0x10ce4c
	b.n 0x10ce64	@ 0010ce4c 0ae0
.org 0x10ce4e
	.byte 0x00	@ 0010ce4e data
.org 0x10ce4f
	.byte 0x00	@ 0010ce4f data
.org 0x10ce50
	.byte 0xd2,0x02,0x00,0x00	@ 0010ce50 data
.org 0x10ce54
	movs r0, #242	@ 0010ce54 f220
.org 0x10ce56
	lsls r0, r0, #8	@ 0010ce56 0002
.org 0x10ce58
	cmp r1, r0	@ 0010ce58 8142
.org 0x10ce5a
	bne.n 0x10ce74	@ 0010ce5a 0bd1
.org 0x10ce5c
	movs r1, #242	@ 0010ce5c f221
.org 0x10ce5e
	lsls r1, r1, #1	@ 0010ce5e 4900
.org 0x10ce60
	adds r2, r3, r1	@ 0010ce60 5a18
.org 0x10ce62
	ldr r0, [pc, #12]	@ 0010ce62 0348
.org 0x10ce64
	strh r0, [r2, #0]	@ 0010ce64 1080
.org 0x10ce66
	add r1, r9	@ 0010ce66 4944
.org 0x10ce68
	movs r0, #5	@ 0010ce68 0520
.org 0x10ce6a
	strh r0, [r1, #0]	@ 0010ce6a 0880
.org 0x10ce6c
	b.n 0x10ce86	@ 0010ce6c 0be0
.org 0x10ce6e
	.byte 0x00	@ 0010ce6e data
.org 0x10ce6f
	.byte 0x00	@ 0010ce6f data
.org 0x10ce70
	.byte 0xcb,0x02,0x00,0x00	@ 0010ce70 data
.org 0x10ce74
	lsrs r0, r2, #24	@ 0010ce74 100e
.org 0x10ce76
	lsls r0, r0, #1	@ 0010ce76 4000
.org 0x10ce78
	adds r2, r0, r3	@ 0010ce78 c218
.org 0x10ce7a
	movs r1, #160	@ 0010ce7a a021
.org 0x10ce7c
	lsls r1, r1, #2	@ 0010ce7c 8900
.org 0x10ce7e
	strh r1, [r2, #0]	@ 0010ce7e 1180
.org 0x10ce80
	add r0, r9	@ 0010ce80 4844
.org 0x10ce82
	movs r1, #5	@ 0010ce82 0521
.org 0x10ce84
	strh r1, [r0, #0]	@ 0010ce84 0180
.org 0x10ce86
	mov r1, r8	@ 0010ce86 4146
.org 0x10ce88
	ldrh r4, [r1, #0]	@ 0010ce88 0c88
.org 0x10ce8a
	lsrs r4, r4, #8	@ 0010ce8a 240a
.org 0x10ce8c
	lsls r5, r4, #2	@ 0010ce8c a500
.org 0x10ce8e
	adds r5, r5, r4	@ 0010ce8e 2d19
.org 0x10ce90
	lsls r5, r5, #2	@ 0010ce90 ad00
.org 0x10ce92
	ldr r0, [pc, #56]	@ 0010ce92 0e48
.org 0x10ce94
	adds r0, r5, r0	@ 0010ce94 2818
.org 0x10ce96
	lsls r4, r4, #1	@ 0010ce96 6400
.org 0x10ce98
	adds r1, r4, r6	@ 0010ce98 a119
.org 0x10ce9a
	ldrh r1, [r1, #0]	@ 0010ce9a 0988
.org 0x10ce9c
	ldrh r2, [r0, #6]	@ 0010ce9c c288
.org 0x10ce9e
	lsrs r2, r2, #6	@ 0010ce9e 9209
.org 0x10cea0
	subs r1, r1, r2	@ 0010cea0 891a
.org 0x10cea2
	lsls r1, r1, #5	@ 0010cea2 4901
.org 0x10cea4
	movs r2, #128	@ 0010cea4 8022
.org 0x10cea6
	lsls r2, r2, #9	@ 0010cea6 5202
.org 0x10cea8
	adds r1, r1, r2	@ 0010cea8 8918
.org 0x10ceaa
	bl 0x1d30	@ 0010ceaa f4f641ff
.org 0x10ceae
	ldr r3, [pc, #32]	@ 0010ceae 084b
.org 0x10ceb0
	adds r5, r5, r3	@ 0010ceb0 ed18
.org 0x10ceb2
	ldr r0, [pc, #32]	@ 0010ceb2 0848
.org 0x10ceb4
	adds r4, r4, r0	@ 0010ceb4 2418
.org 0x10ceb6
	ldrh r1, [r4, #0]	@ 0010ceb6 2188
.org 0x10ceb8
	ldrb r0, [r5, #7]	@ 0010ceb8 e879
.org 0x10ceba
	subs r1, r1, r0	@ 0010ceba 091a
.org 0x10cebc
	lsls r1, r1, #5	@ 0010cebc 4901
.org 0x10cebe
	movs r0, #128	@ 0010cebe 8020
.org 0x10cec0
	lsls r0, r0, #2	@ 0010cec0 8000
.org 0x10cec2
	adds r1, r1, r0	@ 0010cec2 0918
.org 0x10cec4
	adds r0, r5, #0	@ 0010cec4 281c
.org 0x10cec6
	bl 0x2208	@ 0010cec6 f5f69ff9
.org 0x10ceca
	b.n 0x10cf2a	@ 0010ceca 2ee0
.org 0x10cecc
	.byte 0x00,0x40,0xc4,0x08	@ 0010cecc data
.org 0x10ced0
	.byte 0x0c,0x40,0xc4,0x08	@ 0010ced0 data
.org 0x10ced4
	.byte 0x40,0xde,0x02,0x02	@ 0010ced4 data
.org 0x10ced8
	mov r1, r8	@ 0010ced8 4146
.org 0x10ceda
	ldrh r0, [r1, #0]	@ 0010ceda 0888
.org 0x10cedc
	lsrs r0, r0, #8	@ 0010cedc 000a
.org 0x10cede
	lsls r0, r0, #1	@ 0010cede 4000
.org 0x10cee0
	adds r1, r0, r3	@ 0010cee0 c118
.org 0x10cee2
	movs r6, #128	@ 0010cee2 8026
.org 0x10cee4
	lsls r6, r6, #2	@ 0010cee4 b600
.org 0x10cee6
	strh r6, [r1, #0]	@ 0010cee6 0e80
.org 0x10cee8
	add r0, r9	@ 0010cee8 4844
.org 0x10ceea
	strh r5, [r0, #0]	@ 0010ceea 0580
.org 0x10ceec
	mov r2, r8	@ 0010ceec 4246
.org 0x10ceee
	ldrh r4, [r2, #0]	@ 0010ceee 1488
.org 0x10cef0
	lsrs r4, r4, #8	@ 0010cef0 240a
.org 0x10cef2
	lsls r5, r4, #2	@ 0010cef2 a500
.org 0x10cef4
	adds r5, r5, r4	@ 0010cef4 2d19
.org 0x10cef6
	lsls r5, r5, #2	@ 0010cef6 ad00
.org 0x10cef8
	ldr r0, [pc, #632]	@ 0010cef8 9e48
.org 0x10cefa
	adds r0, r5, r0	@ 0010cefa 2818
.org 0x10cefc
	lsls r4, r4, #1	@ 0010cefc 6400
.org 0x10cefe
	adds r1, r4, r3	@ 0010cefe e118
.org 0x10cf00
	ldrh r1, [r1, #0]	@ 0010cf00 0988
.org 0x10cf02
	ldrh r2, [r0, #6]	@ 0010cf02 c288
.org 0x10cf04
	lsrs r2, r2, #6	@ 0010cf04 9209
.org 0x10cf06
	subs r1, r1, r2	@ 0010cf06 891a
.org 0x10cf08
	lsls r1, r1, #5	@ 0010cf08 4901
.org 0x10cf0a
	movs r3, #128	@ 0010cf0a 8023
.org 0x10cf0c
	lsls r3, r3, #9	@ 0010cf0c 5b02
.org 0x10cf0e
	adds r1, r1, r3	@ 0010cf0e c918
.org 0x10cf10
	bl 0x1d30	@ 0010cf10 f4f60eff
.org 0x10cf14
	ldr r0, [pc, #608]	@ 0010cf14 9848
.org 0x10cf16
	adds r5, r5, r0	@ 0010cf16 2d18
.org 0x10cf18
	add r4, r9	@ 0010cf18 4c44
.org 0x10cf1a
	ldrh r1, [r4, #0]	@ 0010cf1a 2188
.org 0x10cf1c
	ldrb r0, [r5, #7]	@ 0010cf1c e879
.org 0x10cf1e
	subs r1, r1, r0	@ 0010cf1e 091a
.org 0x10cf20
	lsls r1, r1, #5	@ 0010cf20 4901
.org 0x10cf22
	adds r1, r1, r6	@ 0010cf22 8919
.org 0x10cf24
	adds r0, r5, #0	@ 0010cf24 281c
.org 0x10cf26
	bl 0x2208	@ 0010cf26 f5f66ff9
.org 0x10cf2a
	adds r0, r7, #0	@ 0010cf2a 381c
.org 0x10cf2c
	bl 0x1cc9c	@ 0010cf2c 0ff7b6fe
.org 0x10cf30
	ldrb r0, [r7, #17]	@ 0010cf30 787c
.org 0x10cf32
	cmp r0, #0	@ 0010cf32 0028
.org 0x10cf34
	beq.n 0x10cf3c	@ 0010cf34 02d0
.org 0x10cf36
	adds r0, r7, #0	@ 0010cf36 381c
.org 0x10cf38
	bl 0x1ceec	@ 0010cf38 0ff7d8ff
.org 0x10cf3c
	mov r2, r8	@ 0010cf3c 4246
.org 0x10cf3e
	ldrh r1, [r2, #0]	@ 0010cf3e 1188
.org 0x10cf40
	ldr r0, [pc, #568]	@ 0010cf40 8e48
.org 0x10cf42
	cmp r1, r0	@ 0010cf42 8142
.org 0x10cf44
	bne.n 0x10cf68	@ 0010cf44 10d1
.org 0x10cf46
	ldr r2, [pc, #568]	@ 0010cf46 8e4a
.org 0x10cf48
	ldr r1, [r2, #0]	@ 0010cf48 1168
.org 0x10cf4a
	ldr r0, [pc, #568]	@ 0010cf4a 8e48
.org 0x10cf4c
	muls r0, r1	@ 0010cf4c 4843
.org 0x10cf4e
	ldr r3, [pc, #568]	@ 0010cf4e 8e4b
.org 0x10cf50
	adds r0, r0, r3	@ 0010cf50 c018
.org 0x10cf52
	lsls r0, r0, #1	@ 0010cf52 4000
.org 0x10cf54
	lsrs r1, r0, #1	@ 0010cf54 4108
.org 0x10cf56
	str r1, [r2, #0]	@ 0010cf56 1160
.org 0x10cf58
	lsrs r0, r0, #17	@ 0010cf58 400c
.org 0x10cf5a
	movs r1, #255	@ 0010cf5a ff21
.org 0x10cf5c
	ands r0, r1	@ 0010cf5c 0840
.org 0x10cf5e
	cmp r0, #0	@ 0010cf5e 0028
.org 0x10cf60
	bne.n 0x10cf68	@ 0010cf60 02d1
.org 0x10cf62
	ldr r0, [pc, #552]	@ 0010cf62 8a48
.org 0x10cf64
	mov r1, r8	@ 0010cf64 4146
.org 0x10cf66
	strh r0, [r1, #0]	@ 0010cf66 0880
.org 0x10cf68
	mov r2, r8	@ 0010cf68 4246
.org 0x10cf6a
	ldrh r1, [r2, #0]	@ 0010cf6a 1188
.org 0x10cf6c
	adds r0, r7, #0	@ 0010cf6c 381c
.org 0x10cf6e
	bl 0x1cf00	@ 0010cf6e 0ff7c7ff
.org 0x10cf72
	ldrb r1, [r7, #10]	@ 0010cf72 b97a
.org 0x10cf74
	movs r0, #2	@ 0010cf74 0220
.org 0x10cf76
	movs r4, #0	@ 0010cf76 0024
.org 0x10cf78
	orrs r0, r1	@ 0010cf78 0843
.org 0x10cf7a
	movs r1, #1	@ 0010cf7a 0121
.org 0x10cf7c
	orrs r0, r1	@ 0010cf7c 0843
.org 0x10cf7e
	strb r0, [r7, #10]	@ 0010cf7e b872
.org 0x10cf80
	adds r5, r7, #0	@ 0010cf80 3d1c
.org 0x10cf82
	adds r5, #125	@ 0010cf82 7d35
.org 0x10cf84
	ldrb r1, [r5, #0]	@ 0010cf84 2978
.org 0x10cf86
	adds r1, #4	@ 0010cf86 0431
.org 0x10cf88
	lsls r1, r1, #24	@ 0010cf88 0906
.org 0x10cf8a
	lsrs r1, r1, #24	@ 0010cf8a 090e
.org 0x10cf8c
	adds r0, r7, #0	@ 0010cf8c 381c
.org 0x10cf8e
	bl 0x1d3d0	@ 0010cf8e 10f71ffa
.org 0x10cf92
	adds r0, r7, #0	@ 0010cf92 381c
.org 0x10cf94
	adds r0, #76	@ 0010cf94 4c30
.org 0x10cf96
	strb r4, [r0, #0]	@ 0010cf96 0470
.org 0x10cf98
	adds r2, r7, #0	@ 0010cf98 3a1c
.org 0x10cf9a
	adds r2, #74	@ 0010cf9a 4a32
.org 0x10cf9c
	ldrb r1, [r2, #0]	@ 0010cf9c 1178
.org 0x10cf9e
	movs r0, #17	@ 0010cf9e 1120
.org 0x10cfa0
	negs r0, r0	@ 0010cfa0 4042
.org 0x10cfa2
	ands r0, r1	@ 0010cfa2 0840
.org 0x10cfa4
	strb r0, [r2, #0]	@ 0010cfa4 1070
.org 0x10cfa6
	ldrb r1, [r7, #10]	@ 0010cfa6 b97a
.org 0x10cfa8
	movs r0, #239	@ 0010cfa8 ef20
.org 0x10cfaa
	ands r0, r1	@ 0010cfaa 0840
.org 0x10cfac
	strb r0, [r7, #10]	@ 0010cfac b872
.org 0x10cfae
	adds r0, r7, #0	@ 0010cfae 381c
.org 0x10cfb0
	adds r0, #77	@ 0010cfb0 4d30
.org 0x10cfb2
	strb r4, [r0, #0]	@ 0010cfb2 0470
.org 0x10cfb4
	ldrb r1, [r2, #0]	@ 0010cfb4 1178
.org 0x10cfb6
	movs r0, #33	@ 0010cfb6 2120
.org 0x10cfb8
	negs r0, r0	@ 0010cfb8 4042
.org 0x10cfba
	ands r0, r1	@ 0010cfba 0840
.org 0x10cfbc
	strb r0, [r2, #0]	@ 0010cfbc 1070
.org 0x10cfbe
	ldrb r1, [r7, #10]	@ 0010cfbe b97a
.org 0x10cfc0
	movs r0, #223	@ 0010cfc0 df20
.org 0x10cfc2
	ands r0, r1	@ 0010cfc2 0840
.org 0x10cfc4
	strb r0, [r7, #10]	@ 0010cfc4 b872
.org 0x10cfc6
	adds r0, r7, #0	@ 0010cfc6 381c
.org 0x10cfc8
	adds r0, #124	@ 0010cfc8 7c30
.org 0x10cfca
	strb r4, [r0, #0]	@ 0010cfca 0470
.org 0x10cfcc
	adds r1, r7, #0	@ 0010cfcc 391c
.org 0x10cfce
	adds r1, #128	@ 0010cfce 8031
.org 0x10cfd0
	strb r4, [r1, #0]	@ 0010cfd0 0c70
.org 0x10cfd2
	ldr r4, [sp, #12]	@ 0010cfd2 039c
.org 0x10cfd4
	ldrb r0, [r4, #0]	@ 0010cfd4 2078
.org 0x10cfd6
	adds r6, r1, #0	@ 0010cfd6 0e1c
.org 0x10cfd8
	cmp r0, #0	@ 0010cfd8 0028
.org 0x10cfda
	beq.n 0x10cfea	@ 0010cfda 06d0
.org 0x10cfdc
	subs r1, #91	@ 0010cfdc 5b39
.org 0x10cfde
	movs r0, #17	@ 0010cfde 1120
.org 0x10cfe0
	strb r0, [r1, #0]	@ 0010cfe0 0870
.org 0x10cfe2
	ldrb r0, [r4, #0]	@ 0010cfe2 2078
.org 0x10cfe4
	cmp r0, #0	@ 0010cfe4 0028
.org 0x10cfe6
	beq.n 0x10cfea	@ 0010cfe6 00d0
.org 0x10cfe8
	b.n 0x10d146	@ 0010cfe8 ade0
.org 0x10cfea
	ldrb r0, [r7, #16]	@ 0010cfea 387c
.org 0x10cfec
	cmp r0, #56	@ 0010cfec 3828
.org 0x10cfee
	bne.n 0x10d00a	@ 0010cfee 0cd1
.org 0x10cff0
	adds r1, r0, #0	@ 0010cff0 011c
.org 0x10cff2
	movs r3, #243	@ 0010cff2 f323
.org 0x10cff4
	lsls r3, r3, #8	@ 0010cff4 1b02
.org 0x10cff6
	ldr r0, [r7, #84]	@ 0010cff6 786d
.org 0x10cff8
	str r0, [sp, #0]	@ 0010cff8 0090
.org 0x10cffa
	ldr r0, [r7, #88]	@ 0010cffa b86d
.org 0x10cffc
	str r0, [sp, #4]	@ 0010cffc 0190
.org 0x10cffe
	movs r0, #1	@ 0010cffe 0120
.org 0x10d000
	str r0, [sp, #8]	@ 0010d000 0290
.org 0x10d002
	mov r0, sl	@ 0010d002 5046
.org 0x10d004
	movs r2, #0	@ 0010d004 0022
.org 0x10d006
	bl 0x10cc50	@ 0010d006 fff723fe
.org 0x10d00a
	ldrb r0, [r4, #0]	@ 0010d00a 2078
.org 0x10d00c
	cmp r0, #0	@ 0010d00c 0028
.org 0x10d00e
	beq.n 0x10d012	@ 0010d00e 00d0
.org 0x10d010
	b.n 0x10d146	@ 0010d010 99e0
.org 0x10d012
	ldrb r0, [r7, #16]	@ 0010d012 387c
.org 0x10d014
	cmp r0, #58	@ 0010d014 3a28
.org 0x10d016
	bne.n 0x10d032	@ 0010d016 0cd1
.org 0x10d018
	adds r1, r0, #0	@ 0010d018 011c
.org 0x10d01a
	movs r3, #156	@ 0010d01a 9c23
.org 0x10d01c
	lsls r3, r3, #8	@ 0010d01c 1b02
.org 0x10d01e
	ldr r0, [r7, #84]	@ 0010d01e 786d
.org 0x10d020
	str r0, [sp, #0]	@ 0010d020 0090
.org 0x10d022
	ldr r0, [r7, #88]	@ 0010d022 b86d
.org 0x10d024
	str r0, [sp, #4]	@ 0010d024 0190
.org 0x10d026
	movs r0, #1	@ 0010d026 0120
.org 0x10d028
	str r0, [sp, #8]	@ 0010d028 0290
.org 0x10d02a
	mov r0, sl	@ 0010d02a 5046
.org 0x10d02c
	movs r2, #0	@ 0010d02c 0022
.org 0x10d02e
	bl 0x10cc50	@ 0010d02e fff70ffe
.org 0x10d032
	ldrb r0, [r4, #0]	@ 0010d032 2078
.org 0x10d034
	cmp r0, #0	@ 0010d034 0028
.org 0x10d036
	beq.n 0x10d03a	@ 0010d036 00d0
.org 0x10d038
	b.n 0x10d146	@ 0010d038 85e0
.org 0x10d03a
	ldrb r0, [r7, #16]	@ 0010d03a 387c
.org 0x10d03c
	cmp r0, #59	@ 0010d03c 3b28
.org 0x10d03e
	bne.n 0x10d058	@ 0010d03e 0bd1
.org 0x10d040
	adds r1, r0, #0	@ 0010d040 011c
.org 0x10d042
	ldr r3, [pc, #332]	@ 0010d042 534b
.org 0x10d044
	ldr r0, [r7, #84]	@ 0010d044 786d
.org 0x10d046
	str r0, [sp, #0]	@ 0010d046 0090
.org 0x10d048
	ldr r0, [r7, #88]	@ 0010d048 b86d
.org 0x10d04a
	str r0, [sp, #4]	@ 0010d04a 0190
.org 0x10d04c
	movs r0, #1	@ 0010d04c 0120
.org 0x10d04e
	str r0, [sp, #8]	@ 0010d04e 0290
.org 0x10d050
	mov r0, sl	@ 0010d050 5046
.org 0x10d052
	movs r2, #0	@ 0010d052 0022
.org 0x10d054
	bl 0x10cc50	@ 0010d054 fff7fcfd
.org 0x10d058
	ldrb r0, [r4, #0]	@ 0010d058 2078
.org 0x10d05a
	cmp r0, #0	@ 0010d05a 0028
.org 0x10d05c
	bne.n 0x10d146	@ 0010d05c 73d1
.org 0x10d05e
	ldrb r0, [r7, #16]	@ 0010d05e 387c
.org 0x10d060
	cmp r0, #60	@ 0010d060 3c28
.org 0x10d062
	bne.n 0x10d07e	@ 0010d062 0cd1
.org 0x10d064
	adds r1, r0, #0	@ 0010d064 011c
.org 0x10d066
	movs r3, #164	@ 0010d066 a423
.org 0x10d068
	lsls r3, r3, #8	@ 0010d068 1b02
.org 0x10d06a
	ldr r0, [r7, #84]	@ 0010d06a 786d
.org 0x10d06c
	str r0, [sp, #0]	@ 0010d06c 0090
.org 0x10d06e
	ldr r0, [r7, #88]	@ 0010d06e b86d
.org 0x10d070
	str r0, [sp, #4]	@ 0010d070 0190
.org 0x10d072
	movs r0, #1	@ 0010d072 0120
.org 0x10d074
	str r0, [sp, #8]	@ 0010d074 0290
.org 0x10d076
	mov r0, sl	@ 0010d076 5046
.org 0x10d078
	movs r2, #1	@ 0010d078 0122
.org 0x10d07a
	bl 0x10cc50	@ 0010d07a fff7e9fd
.org 0x10d07e
	ldrb r0, [r4, #0]	@ 0010d07e 2078
.org 0x10d080
	cmp r0, #0	@ 0010d080 0028
.org 0x10d082
	bne.n 0x10d146	@ 0010d082 60d1
.org 0x10d084
	ldrb r0, [r7, #16]	@ 0010d084 387c
.org 0x10d086
	cmp r0, #64	@ 0010d086 4028
.org 0x10d088
	bne.n 0x10d0d8	@ 0010d088 26d1
.org 0x10d08a
	adds r1, r0, #0	@ 0010d08a 011c
.org 0x10d08c
	movs r3, #206	@ 0010d08c ce23
.org 0x10d08e
	lsls r3, r3, #8	@ 0010d08e 1b02
.org 0x10d090
	ldr r0, [r7, #84]	@ 0010d090 786d
.org 0x10d092
	str r0, [sp, #0]	@ 0010d092 0090
.org 0x10d094
	ldr r0, [r7, #88]	@ 0010d094 b86d
.org 0x10d096
	str r0, [sp, #4]	@ 0010d096 0190
.org 0x10d098
	movs r0, #1	@ 0010d098 0120
.org 0x10d09a
	str r0, [sp, #8]	@ 0010d09a 0290
.org 0x10d09c
	mov r0, sl	@ 0010d09c 5046
.org 0x10d09e
	movs r2, #1	@ 0010d09e 0122
.org 0x10d0a0
	bl 0x10cc50	@ 0010d0a0 fff7d6fd
.org 0x10d0a4
	ldrb r1, [r7, #16]	@ 0010d0a4 397c
.org 0x10d0a6
	movs r3, #207	@ 0010d0a6 cf23
.org 0x10d0a8
	lsls r3, r3, #8	@ 0010d0a8 1b02
.org 0x10d0aa
	ldr r0, [r7, #84]	@ 0010d0aa 786d
.org 0x10d0ac
	str r0, [sp, #0]	@ 0010d0ac 0090
.org 0x10d0ae
	ldr r0, [r7, #88]	@ 0010d0ae b86d
.org 0x10d0b0
	str r0, [sp, #4]	@ 0010d0b0 0190
.org 0x10d0b2
	movs r0, #2	@ 0010d0b2 0220
.org 0x10d0b4
	str r0, [sp, #8]	@ 0010d0b4 0290
.org 0x10d0b6
	mov r0, sl	@ 0010d0b6 5046
.org 0x10d0b8
	movs r2, #1	@ 0010d0b8 0122
.org 0x10d0ba
	bl 0x10cc50	@ 0010d0ba fff7c9fd
.org 0x10d0be
	ldrb r1, [r7, #16]	@ 0010d0be 397c
.org 0x10d0c0
	movs r3, #208	@ 0010d0c0 d023
.org 0x10d0c2
	lsls r3, r3, #8	@ 0010d0c2 1b02
.org 0x10d0c4
	ldr r0, [r7, #84]	@ 0010d0c4 786d
.org 0x10d0c6
	str r0, [sp, #0]	@ 0010d0c6 0090
.org 0x10d0c8
	ldr r0, [r7, #88]	@ 0010d0c8 b86d
.org 0x10d0ca
	str r0, [sp, #4]	@ 0010d0ca 0190
.org 0x10d0cc
	movs r0, #3	@ 0010d0cc 0320
.org 0x10d0ce
	str r0, [sp, #8]	@ 0010d0ce 0290
.org 0x10d0d0
	mov r0, sl	@ 0010d0d0 5046
.org 0x10d0d2
	movs r2, #1	@ 0010d0d2 0122
.org 0x10d0d4
	bl 0x10cc50	@ 0010d0d4 fff7bcfd
.org 0x10d0d8
	ldrb r0, [r4, #0]	@ 0010d0d8 2078
.org 0x10d0da
	cmp r0, #0	@ 0010d0da 0028
.org 0x10d0dc
	bne.n 0x10d146	@ 0010d0dc 33d1
.org 0x10d0de
	ldrb r0, [r7, #16]	@ 0010d0de 387c
.org 0x10d0e0
	cmp r0, #69	@ 0010d0e0 4528
.org 0x10d0e2
	bne.n 0x10d0fe	@ 0010d0e2 0cd1
.org 0x10d0e4
	adds r1, r0, #0	@ 0010d0e4 011c
.org 0x10d0e6
	movs r3, #242	@ 0010d0e6 f223
.org 0x10d0e8
	lsls r3, r3, #8	@ 0010d0e8 1b02
.org 0x10d0ea
	ldr r0, [r7, #84]	@ 0010d0ea 786d
.org 0x10d0ec
	str r0, [sp, #0]	@ 0010d0ec 0090
.org 0x10d0ee
	ldr r0, [r7, #88]	@ 0010d0ee b86d
.org 0x10d0f0
	str r0, [sp, #4]	@ 0010d0f0 0190
.org 0x10d0f2
	movs r0, #1	@ 0010d0f2 0120
.org 0x10d0f4
	str r0, [sp, #8]	@ 0010d0f4 0290
.org 0x10d0f6
	mov r0, sl	@ 0010d0f6 5046
.org 0x10d0f8
	movs r2, #0	@ 0010d0f8 0022
.org 0x10d0fa
	bl 0x10cc50	@ 0010d0fa fff7a9fd
.org 0x10d0fe
	ldr r3, [sp, #12]	@ 0010d0fe 039b
.org 0x10d100
	ldrb r0, [r3, #0]	@ 0010d100 1878
.org 0x10d102
	cmp r0, #0	@ 0010d102 0028
.org 0x10d104
	bne.n 0x10d146	@ 0010d104 1fd1
.org 0x10d106
	ldrb r0, [r7, #16]	@ 0010d106 387c
.org 0x10d108
	cmp r0, #79	@ 0010d108 4f28
.org 0x10d10a
	bne.n 0x10d146	@ 0010d10a 1cd1
.org 0x10d10c
	adds r1, r0, #0	@ 0010d10c 011c
.org 0x10d10e
	movs r3, #244	@ 0010d10e f423
.org 0x10d110
	lsls r3, r3, #8	@ 0010d110 1b02
.org 0x10d112
	ldr r0, [r7, #84]	@ 0010d112 786d
.org 0x10d114
	str r0, [sp, #0]	@ 0010d114 0090
.org 0x10d116
	ldr r0, [r7, #88]	@ 0010d116 b86d
.org 0x10d118
	str r0, [sp, #4]	@ 0010d118 0190
.org 0x10d11a
	movs r0, #1	@ 0010d11a 0120
.org 0x10d11c
	str r0, [sp, #8]	@ 0010d11c 0290
.org 0x10d11e
	mov r0, sl	@ 0010d11e 5046
.org 0x10d120
	movs r2, #0	@ 0010d120 0022
.org 0x10d122
	bl 0x10cc50	@ 0010d122 fff795fd
.org 0x10d126
	ldrb r1, [r7, #16]	@ 0010d126 397c
.org 0x10d128
	movs r3, #245	@ 0010d128 f523
.org 0x10d12a
	lsls r3, r3, #8	@ 0010d12a 1b02
.org 0x10d12c
	ldr r0, [r7, #84]	@ 0010d12c 786d
.org 0x10d12e
	str r0, [sp, #0]	@ 0010d12e 0090
.org 0x10d130
	ldr r0, [r7, #88]	@ 0010d130 b86d
.org 0x10d132
	movs r2, #128	@ 0010d132 8022
.org 0x10d134
	lsls r2, r2, #5	@ 0010d134 5201
.org 0x10d136
	adds r0, r0, r2	@ 0010d136 8018
.org 0x10d138
	str r0, [sp, #4]	@ 0010d138 0190
.org 0x10d13a
	movs r0, #2	@ 0010d13a 0220
.org 0x10d13c
	str r0, [sp, #8]	@ 0010d13c 0290
