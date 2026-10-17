@ FUN_08080890  entry 0x08080890  size 204
.thumb
.org 0x80890
FUN_08080890:
	push {r4, r5, r6, lr}	@ 00080890 70b5
.org 0x80892
	adds r4, r0, #0	@ 00080892 041c
.org 0x80894
	adds r5, r4, #0	@ 00080894 251c
.org 0x80896
	adds r5, #140	@ 00080896 8c35
.org 0x80898
	ldr r0, [r5, #0]	@ 00080898 2868
.org 0x8089a
	movs r6, #1	@ 0008089a 0126
.org 0x8089c
	ands r0, r6	@ 0008089c 3040
.org 0x8089e
	cmp r0, #0	@ 0008089e 0028
.org 0x808a0
	beq.n 0x808a8	@ 000808a0 02d0
.org 0x808a2
	movs r0, #40	@ 000808a2 2820
.org 0x808a4
	bl 0x6984	@ 000808a4 86f76ef8
.org 0x808a8
	adds r0, r4, #0	@ 000808a8 201c
.org 0x808aa
	adds r0, #183	@ 000808aa b730
.org 0x808ac
	ldrb r2, [r0, #0]	@ 000808ac 0278
.org 0x808ae
	cmp r2, #0	@ 000808ae 002a
.org 0x808b0
	beq.n 0x808d4	@ 000808b0 10d0
.org 0x808b2
	ldr r1, [pc, #28]	@ 000808b2 0749
.org 0x808b4
	ldrb r0, [r4, #9]	@ 000808b4 607a
.org 0x808b6
	lsls r0, r0, #2	@ 000808b6 8000
.org 0x808b8
	adds r0, r0, r1	@ 000808b8 4018
.org 0x808ba
	movs r1, #2	@ 000808ba 0221
.org 0x808bc
	str r1, [r4, #12]	@ 000808bc e160
.org 0x808be
	ldr r0, [r0, #0]	@ 000808be 0068
.org 0x808c0
	ldr r0, [r0, #8]	@ 000808c0 8068
.org 0x808c2
	str r0, [r4, #20]	@ 000808c2 6061
.org 0x808c4
	movs r0, #0	@ 000808c4 0020
.org 0x808c6
	strb r6, [r4, #13]	@ 000808c6 6673
.org 0x808c8
	strb r0, [r4, #14]	@ 000808c8 a073
.org 0x808ca
	strb r0, [r4, #15]	@ 000808ca e073
.org 0x808cc
	b.n 0x80902	@ 000808cc 19e0
.org 0x808ce
	.byte 0x00	@ 000808ce data
.org 0x808cf
	.byte 0x00	@ 000808cf data
.org 0x808d0
	.byte 0x40,0xdb,0x85,0x08	@ 000808d0 data
.org 0x808d4
	adds r0, r4, #0	@ 000808d4 201c
.org 0x808d6
	adds r0, #180	@ 000808d6 b430
.org 0x808d8
	ldrb r0, [r0, #0]	@ 000808d8 0078
.org 0x808da
	cmp r0, #0	@ 000808da 0028
.org 0x808dc
	bne.n 0x808ea	@ 000808dc 05d1
.org 0x808de
	ldr r0, [r5, #0]	@ 000808de 2868
.org 0x808e0
	movs r5, #128	@ 000808e0 8025
.org 0x808e2
	lsls r5, r5, #2	@ 000808e2 ad00
.org 0x808e4
	ands r5, r0	@ 000808e4 0540
.org 0x808e6
	cmp r5, #0	@ 000808e6 002d
.org 0x808e8
	beq.n 0x80910	@ 000808e8 12d0
.org 0x808ea
	ldr r1, [pc, #32]	@ 000808ea 0849
.org 0x808ec
	ldrb r0, [r4, #9]	@ 000808ec 607a
.org 0x808ee
	lsls r0, r0, #2	@ 000808ee 8000
.org 0x808f0
	adds r0, r0, r1	@ 000808f0 4018
.org 0x808f2
	movs r1, #2	@ 000808f2 0221
.org 0x808f4
	str r1, [r4, #12]	@ 000808f4 e160
.org 0x808f6
	ldr r0, [r0, #0]	@ 000808f6 0068
.org 0x808f8
	ldr r0, [r0, #8]	@ 000808f8 8068
.org 0x808fa
	str r0, [r4, #20]	@ 000808fa 6061
.org 0x808fc
	strb r2, [r4, #13]	@ 000808fc 6273
.org 0x808fe
	strb r2, [r4, #14]	@ 000808fe a273
.org 0x80900
	strb r2, [r4, #15]	@ 00080900 e273
.org 0x80902
	adds r0, r4, #0	@ 00080902 201c
.org 0x80904
	bl 0x80fa0	@ 00080904 00f04cfb
.org 0x80908
	b.n 0x80962	@ 00080908 2be0
.org 0x8090a
	.byte 0x00	@ 0008090a data
.org 0x8090b
	.byte 0x00	@ 0008090b data
.org 0x8090c
	.byte 0x40,0xdb,0x85,0x08	@ 0008090c data
.org 0x80910
	ands r0, r6	@ 00080910 3040
.org 0x80912
	cmp r0, #0	@ 00080912 0028
.org 0x80914
	beq.n 0x80936	@ 00080914 0fd0
.org 0x80916
	ldr r0, [r4, #44]	@ 00080916 e06a
.org 0x80918
	cmp r0, #0	@ 00080918 0028
.org 0x8091a
	bne.n 0x80928	@ 0008091a 05d1
.org 0x8091c
	ldr r2, [pc, #72]	@ 0008091c 124a
.org 0x8091e
	movs r0, #0	@ 0008091e 0020
.org 0x80920
	adds r1, r4, #0	@ 00080920 211c
.org 0x80922
	bl 0x2adac	@ 00080922 aaf743fa
.org 0x80926
	str r0, [r4, #44]	@ 00080926 e062
.org 0x80928
	ldrb r0, [r4, #13]	@ 00080928 607b
.org 0x8092a
	cmp r0, #2	@ 0008092a 0228
.org 0x8092c
	beq.n 0x80936	@ 0008092c 03d0
.org 0x8092e
	movs r0, #2	@ 0008092e 0220
.org 0x80930
	strb r0, [r4, #13]	@ 00080930 6073
.org 0x80932
	strb r5, [r4, #14]	@ 00080932 a573
.org 0x80934
	strb r5, [r4, #15]	@ 00080934 e573
.org 0x80936
	ldr r1, [pc, #52]	@ 00080936 0d49
.org 0x80938
	ldrb r0, [r4, #13]	@ 00080938 607b
.org 0x8093a
	lsls r0, r0, #2	@ 0008093a 8000
.org 0x8093c
	adds r0, r0, r1	@ 0008093c 4018
.org 0x8093e
	ldr r1, [r0, #0]	@ 0008093e 0168
.org 0x80940
	adds r0, r4, #0	@ 00080940 201c
.org 0x80942
	bl 0x128f80	@ 00080942 a8f01dfb
.org 0x80946
	ldr r1, [pc, #40]	@ 00080946 0a49
.org 0x80948
	ldrb r0, [r4, #13]	@ 00080948 607b
.org 0x8094a
	lsls r0, r0, #2	@ 0008094a 8000
.org 0x8094c
	adds r0, r0, r1	@ 0008094c 4018
.org 0x8094e
	ldr r1, [r0, #0]	@ 0008094e 0168
.org 0x80950
	adds r0, r4, #0	@ 00080950 201c
.org 0x80952
	bl 0x128f80	@ 00080952 a8f015fb
.org 0x80956
	adds r1, r4, #0	@ 00080956 211c
.org 0x80958
	adds r1, #192	@ 00080958 c031
.org 0x8095a
	ldr r0, [pc, #24]	@ 0008095a 0648
