@ FUN_08032924  entry 0x08032924  size 318
.thumb
.org 0x32924
FUN_08032924:
	push {r4, r5, r6, lr}	@ 00032924 70b5
.org 0x32926
	adds r6, r0, #0	@ 00032926 061c
.org 0x32928
	ldr r0, [pc, #36]	@ 00032928 0948
.org 0x3292a
	adds r1, r6, r0	@ 0003292a 3118
.org 0x3292c
	movs r0, #1	@ 0003292c 0120
.org 0x3292e
	strb r0, [r1, #0]	@ 0003292e 0870
.org 0x32930
	adds r0, r6, #0	@ 00032930 301c
.org 0x32932
	bl 0x396a8	@ 00032932 06f0b9fe
.org 0x32936
	lsls r0, r0, #24	@ 00032936 0006
.org 0x32938
	lsrs r2, r0, #24	@ 00032938 020e
.org 0x3293a
	cmp r2, #0	@ 0003293a 002a
.org 0x3293c
	beq.n 0x32988	@ 0003293c 24d0
.org 0x3293e
	adds r1, r6, #0	@ 0003293e 311c
.org 0x32940
	adds r1, #149	@ 00032940 9531
.org 0x32942
	ldrb r0, [r1, #0]	@ 00032942 0878
.org 0x32944
	cmp r0, #255	@ 00032944 ff28
.org 0x32946
	beq.n 0x32988	@ 00032946 1fd0
.org 0x32948
	cmp r0, r2	@ 00032948 9042
.org 0x3294a
	bcs.n 0x32954	@ 0003294a 03d2
.org 0x3294c
	movs r0, #0	@ 0003294c 0020
.org 0x3294e
	b.n 0x32956	@ 0003294e 02e0
.org 0x32950
	.byte 0xb9,0x01,0x00,0x00	@ 00032950 data
.org 0x32954
	subs r0, r0, r2	@ 00032954 801a
.org 0x32956
	strb r0, [r1, #0]	@ 00032956 0870
.org 0x32958
	ldrb r0, [r6, #30]	@ 00032958 b07f
.org 0x3295a
	lsls r0, r0, #8	@ 0003295a 0002
.org 0x3295c
	adds r1, r6, #0	@ 0003295c 311c
.org 0x3295e
	adds r1, #112	@ 0003295e 7031
.org 0x32960
	ldrb r1, [r1, #0]	@ 00032960 0978
.org 0x32962
	orrs r1, r0	@ 00032962 0143
.org 0x32964
	movs r2, #150	@ 00032964 9622
.org 0x32966
	lsls r2, r2, #7	@ 00032966 d201
.org 0x32968
	cmp r1, r2	@ 00032968 9142
.org 0x3296a
	bne.n 0x3297c	@ 0003296a 07d1
.org 0x3296c
	movs r1, #148	@ 0003296c 9421
.org 0x3296e
	lsls r1, r1, #7	@ 0003296e c901
.org 0x32970
	adds r0, r6, #0	@ 00032970 301c
.org 0x32972
	movs r2, #3	@ 00032972 0322
.org 0x32974
	movs r3, #4	@ 00032974 0423
.org 0x32976
	bl 0x1cfc8	@ 00032976 eaf727fb
.org 0x3297a
	b.n 0x32988	@ 0003297a 05e0
.org 0x3297c
	adds r0, r6, #0	@ 0003297c 301c
.org 0x3297e
	adds r1, r2, #0	@ 0003297e 111c
.org 0x32980
	movs r2, #3	@ 00032980 0322
.org 0x32982
	movs r3, #4	@ 00032982 0423
.org 0x32984
	bl 0x1cfc8	@ 00032984 eaf720fb
.org 0x32988
	ldr r1, [pc, #56]	@ 00032988 0e49
.org 0x3298a
	adds r0, r6, r1	@ 0003298a 7018
.org 0x3298c
	ldrb r1, [r0, #0]	@ 0003298c 0178
.org 0x3298e
	adds r4, r0, #0	@ 0003298e 041c
.org 0x32990
	cmp r1, #0	@ 00032990 0029
.org 0x32992
	beq.n 0x329ec	@ 00032992 2bd0
.org 0x32994
	movs r1, #185	@ 00032994 b921
.org 0x32996
	lsls r1, r1, #1	@ 00032996 4900
.org 0x32998
	adds r0, r6, r1	@ 00032998 7018
.org 0x3299a
	ldrb r0, [r0, #0]	@ 0003299a 0078
.org 0x3299c
	cmp r0, #0	@ 0003299c 0028
.org 0x3299e
	bne.n 0x329c8	@ 0003299e 13d1
.org 0x329a0
	ldrb r0, [r6, #30]	@ 000329a0 b07f
.org 0x329a2
	lsls r0, r0, #8	@ 000329a2 0002
.org 0x329a4
	adds r1, r6, #0	@ 000329a4 311c
.org 0x329a6
	adds r1, #112	@ 000329a6 7031
.org 0x329a8
	ldrb r1, [r1, #0]	@ 000329a8 0978
.org 0x329aa
	orrs r1, r0	@ 000329aa 0143
.org 0x329ac
	movs r2, #150	@ 000329ac 9622
.org 0x329ae
	lsls r2, r2, #7	@ 000329ae d201
.org 0x329b0
	cmp r1, r2	@ 000329b0 9142
.org 0x329b2
	beq.n 0x329e8	@ 000329b2 19d0
.org 0x329b4
	adds r0, r6, #0	@ 000329b4 301c
.org 0x329b6
	adds r1, r2, #0	@ 000329b6 111c
.org 0x329b8
	movs r2, #3	@ 000329b8 0322
.org 0x329ba
	movs r3, #4	@ 000329ba 0423
.org 0x329bc
	bl 0x1cfc8	@ 000329bc eaf704fb
.org 0x329c0
	b.n 0x329e8	@ 000329c0 12e0
.org 0x329c2
	.byte 0x00	@ 000329c2 data
.org 0x329c3
	.byte 0x00	@ 000329c3 data
.org 0x329c4
	.byte 0x71,0x01,0x00,0x00	@ 000329c4 data
.org 0x329c8
	ldrb r0, [r6, #30]	@ 000329c8 b07f
.org 0x329ca
	lsls r0, r0, #8	@ 000329ca 0002
.org 0x329cc
	adds r1, r6, #0	@ 000329cc 311c
.org 0x329ce
	adds r1, #112	@ 000329ce 7031
.org 0x329d0
	ldrb r1, [r1, #0]	@ 000329d0 0978
.org 0x329d2
	orrs r1, r0	@ 000329d2 0143
.org 0x329d4
	movs r2, #148	@ 000329d4 9422
.org 0x329d6
	lsls r2, r2, #7	@ 000329d6 d201
.org 0x329d8
	cmp r1, r2	@ 000329d8 9142
.org 0x329da
	beq.n 0x329e8	@ 000329da 05d0
.org 0x329dc
	adds r0, r6, #0	@ 000329dc 301c
.org 0x329de
	adds r1, r2, #0	@ 000329de 111c
.org 0x329e0
	movs r2, #3	@ 000329e0 0322
.org 0x329e2
	movs r3, #4	@ 000329e2 0423
.org 0x329e4
	bl 0x1cfc8	@ 000329e4 eaf7f0fa
.org 0x329e8
	movs r0, #0	@ 000329e8 0020
.org 0x329ea
	strb r0, [r4, #0]	@ 000329ea 2070
.org 0x329ec
	adds r0, r6, #0	@ 000329ec 301c
.org 0x329ee
	adds r0, #149	@ 000329ee 9530
.org 0x329f0
	ldrb r0, [r0, #0]	@ 000329f0 0078
.org 0x329f2
	cmp r0, #0	@ 000329f2 0028
.org 0x329f4
	beq.n 0x32a06	@ 000329f4 07d0
.org 0x329f6
	adds r0, r6, #0	@ 000329f6 301c
.org 0x329f8
	adds r0, #140	@ 000329f8 8c30
.org 0x329fa
	ldr r0, [r0, #0]	@ 000329fa 0068
.org 0x329fc
	movs r1, #128	@ 000329fc 8021
.org 0x329fe
	lsls r1, r1, #3	@ 000329fe c900
.org 0x32a00
	ands r0, r1	@ 00032a00 0840
.org 0x32a02
	cmp r0, #0	@ 00032a02 0028
.org 0x32a04
	bne.n 0x32a18	@ 00032a04 08d1
.org 0x32a06
	movs r0, #0	@ 00032a06 0020
.org 0x32a08
	strb r0, [r6, #13]	@ 00032a08 7073
.org 0x32a0a
	strb r0, [r6, #14]	@ 00032a0a b073
.org 0x32a0c
	strb r0, [r6, #15]	@ 00032a0c f073
.org 0x32a0e
	str r0, [r6, #96]	@ 00032a0e 3066
.org 0x32a10
	adds r0, r6, #0	@ 00032a10 301c
.org 0x32a12
	bl 0x30794	@ 00032a12 fdf7bffe
.org 0x32a16
	b.n 0x32a66	@ 00032a16 26e0
.org 0x32a18
	movs r0, #186	@ 00032a18 ba20
.org 0x32a1a
	lsls r0, r0, #1	@ 00032a1a 4000
.org 0x32a1c
	adds r5, r6, r0	@ 00032a1c 3518
.org 0x32a1e
	ldrb r1, [r5, #0]	@ 00032a1e 2978
.org 0x32a20
	lsls r1, r1, #3	@ 00032a20 c900
.org 0x32a22
	ldr r4, [pc, #72]	@ 00032a22 124c
.org 0x32a24
	adds r1, r1, r4	@ 00032a24 0919
.org 0x32a26
	adds r0, r6, #0	@ 00032a26 301c
.org 0x32a28
	movs r2, #0	@ 00032a28 0022
.org 0x32a2a
	bl 0x2b7f0	@ 00032a2a f8f7e1fe
.org 0x32a2e
	ldrb r1, [r5, #0]	@ 00032a2e 2978
.org 0x32a30
	lsls r1, r1, #3	@ 00032a30 c900
.org 0x32a32
	adds r1, r1, r4	@ 00032a32 0919
.org 0x32a34
	adds r0, r6, #0	@ 00032a34 301c
.org 0x32a36
	movs r2, #1	@ 00032a36 0122
.org 0x32a38
	bl 0x2b7f0	@ 00032a38 f8f7dafe
.org 0x32a3c
	ldrb r1, [r5, #0]	@ 00032a3c 2978
.org 0x32a3e
	lsls r1, r1, #3	@ 00032a3e c900
.org 0x32a40
	adds r1, r1, r4	@ 00032a40 0919
.org 0x32a42
	adds r0, r6, #0	@ 00032a42 301c
.org 0x32a44
	movs r2, #0	@ 00032a44 0022
.org 0x32a46
	bl 0x2baf0	@ 00032a46 f9f753f8
.org 0x32a4a
	ldrb r1, [r5, #0]	@ 00032a4a 2978
.org 0x32a4c
	lsls r1, r1, #3	@ 00032a4c c900
.org 0x32a4e
	adds r1, r1, r4	@ 00032a4e 0919
.org 0x32a50
	adds r0, r6, #0	@ 00032a50 301c
.org 0x32a52
	movs r2, #0	@ 00032a52 0022
.org 0x32a54
	bl 0x2c2d4	@ 00032a54 f9f73efc
.org 0x32a58
	lsls r0, r0, #16	@ 00032a58 0004
.org 0x32a5a
	lsrs r1, r0, #16	@ 00032a5a 010c
.org 0x32a5c
	cmp r1, #0	@ 00032a5c 0029
.org 0x32a5e
	bne.n 0x32a66	@ 00032a5e 02d1
.org 0x32a60
	movs r0, #2	@ 00032a60 0220
