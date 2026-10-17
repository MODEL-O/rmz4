@ FUN_080af910  entry 0x080af910  size 288
.thumb
.org 0xaf910
FUN_080af910:
	push {r4, r5, r6, lr}	@ 000af910 70b5
.org 0xaf912
	adds r6, r0, #0	@ 000af912 061c
.org 0xaf914
	bl 0x1cc9c	@ 000af914 6df7c2f9
.org 0xaf918
	ldrb r1, [r6, #10]	@ 000af918 b17a
.org 0xaf91a
	movs r0, #1	@ 000af91a 0120
.org 0xaf91c
	movs r4, #0	@ 000af91c 0024
.org 0xaf91e
	movs r2, #0	@ 000af91e 0022
.org 0xaf920
	orrs r1, r0	@ 000af920 0143
.org 0xaf922
	movs r0, #2	@ 000af922 0220
.org 0xaf924
	orrs r1, r0	@ 000af924 0143
.org 0xaf926
	orrs r1, r4	@ 000af926 2143
.org 0xaf928
	strb r1, [r6, #10]	@ 000af928 b172
.org 0xaf92a
	str r2, [r6, #44]	@ 000af92a f262
.org 0xaf92c
	ldrb r0, [r6, #16]	@ 000af92c 307c
.org 0xaf92e
	cmp r0, #0	@ 000af92e 0028
.org 0xaf930
	bne.n 0xaf980	@ 000af930 26d1
.org 0xaf932
	movs r0, #4	@ 000af932 0420
.org 0xaf934
	orrs r1, r0	@ 000af934 0143
.org 0xaf936
	strb r1, [r6, #10]	@ 000af936 b172
.org 0xaf938
	adds r4, r6, #0	@ 000af938 341c
.org 0xaf93a
	adds r4, #116	@ 000af93a 7434
.org 0xaf93c
	ldr r1, [pc, #52]	@ 000af93c 0d49
.org 0xaf93e
	adds r5, r6, #0	@ 000af93e 351c
.org 0xaf940
	adds r5, #84	@ 000af940 5435
.org 0xaf942
	adds r0, r4, #0	@ 000af942 201c
.org 0xaf944
	adds r2, r5, #0	@ 000af944 2a1c
.org 0xaf946
	movs r3, #4	@ 000af946 0423
.org 0xaf948
	bl 0x5760	@ 000af948 55f70aff
.org 0xaf94c
	str r6, [r4, #44]	@ 000af94c e662
.org 0xaf94e
	ldr r0, [pc, #40]	@ 000af94e 0a48
.org 0xaf950
	str r0, [r4, #36]	@ 000af950 6062
.org 0xaf952
	ldr r1, [pc, #40]	@ 000af952 0a49
.org 0xaf954
	ldrb r0, [r6, #17]	@ 000af954 707c
.org 0xaf956
	adds r0, r0, r1	@ 000af956 4018
.org 0xaf958
	ldrb r2, [r0, #0]	@ 000af958 0278
.org 0xaf95a
	adds r0, r5, #0	@ 000af95a 281c
.org 0xaf95c
	movs r1, #1	@ 000af95c 0121
.org 0xaf95e
	bl 0xaf8a8	@ 000af95e fff7a3ff
.org 0xaf962
	str r0, [r6, #44]	@ 000af962 f062
.org 0xaf964
	ldrb r1, [r0, #11]	@ 000af964 c17a
.org 0xaf966
	movs r2, #16	@ 000af966 1022
.org 0xaf968
	orrs r1, r2	@ 000af968 1143
.org 0xaf96a
	strb r1, [r0, #11]	@ 000af96a c172
.org 0xaf96c
	ldr r1, [r6, #44]	@ 000af96c f16a
.org 0xaf96e
	ldrb r0, [r6, #28]	@ 000af96e 307f
.org 0xaf970
	strb r0, [r1, #29]	@ 000af970 4877
.org 0xaf972
	b.n 0xaf996	@ 000af972 10e0
.org 0xaf974
	.byte 0xe4,0x31,0x86,0x08	@ 000af974 data
.org 0xaf978
	.byte 0x7d,0xfc,0x0a,0x08	@ 000af978 data
.org 0xaf97c
	.byte 0x44,0x32,0x86,0x08	@ 000af97c data
.org 0xaf980
	adds r0, r6, #0	@ 000af980 301c
.org 0xaf982
	adds r0, #140	@ 000af982 8c30
.org 0xaf984
	str r2, [r0, #0]	@ 000af984 0260
.org 0xaf986
	adds r0, #4	@ 000af986 0430
.org 0xaf988
	str r2, [r0, #0]	@ 000af988 0260
.org 0xaf98a
	adds r0, #4	@ 000af98a 0430
.org 0xaf98c
	strb r2, [r0, #0]	@ 000af98c 0270
.org 0xaf98e
	ldrb r1, [r6, #10]	@ 000af98e b17a
.org 0xaf990
	movs r0, #251	@ 000af990 fb20
.org 0xaf992
	ands r0, r1	@ 000af992 0840
.org 0xaf994
	strb r0, [r6, #10]	@ 000af994 b072
.org 0xaf996
	ldr r1, [pc, #72]	@ 000af996 1249
.org 0xaf998
	ldrb r0, [r6, #9]	@ 000af998 707a
.org 0xaf99a
	lsls r0, r0, #2	@ 000af99a 8000
.org 0xaf99c
	adds r0, r0, r1	@ 000af99c 4018
.org 0xaf99e
	movs r4, #1	@ 000af99e 0124
.org 0xaf9a0
	str r4, [r6, #12]	@ 000af9a0 f460
.org 0xaf9a2
	ldr r0, [r0, #0]	@ 000af9a2 0068
.org 0xaf9a4
	ldr r0, [r0, #4]	@ 000af9a4 4068
.org 0xaf9a6
	str r0, [r6, #20]	@ 000af9a6 7061
.org 0xaf9a8
	adds r2, r6, #0	@ 000af9a8 321c
.org 0xaf9aa
	adds r2, #183	@ 000af9aa b732
.org 0xaf9ac
	movs r3, #0	@ 000af9ac 0023
.org 0xaf9ae
	strb r3, [r2, #0]	@ 000af9ae 1370
.org 0xaf9b0
	adds r0, r6, #0	@ 000af9b0 301c
.org 0xaf9b2
	adds r0, #180	@ 000af9b2 b430
.org 0xaf9b4
	strb r3, [r0, #0]	@ 000af9b4 0370
.org 0xaf9b6
	adds r0, #1	@ 000af9b6 0130
.org 0xaf9b8
	strb r4, [r0, #0]	@ 000af9b8 0470
.org 0xaf9ba
	strb r3, [r6, #18]	@ 000af9ba b374
.org 0xaf9bc
	movs r0, #180	@ 000af9bc b420
.org 0xaf9be
	strb r0, [r6, #19]	@ 000af9be f074
.org 0xaf9c0
	str r3, [r6, #40]	@ 000af9c0 b362
.org 0xaf9c2
	str r3, [r6, #92]	@ 000af9c2 f365
.org 0xaf9c4
	str r3, [r6, #96]	@ 000af9c4 3366
.org 0xaf9c6
	str r3, [r6, #100]	@ 000af9c6 7366
.org 0xaf9c8
	str r3, [r6, #104]	@ 000af9c8 b366
.org 0xaf9ca
	ldr r0, [pc, #24]	@ 000af9ca 0648
.org 0xaf9cc
	ldr r0, [r0, #0]	@ 000af9cc 0068
.org 0xaf9ce
	ldr r1, [r0, #88]	@ 000af9ce 816d
.org 0xaf9d0
	ldr r0, [r6, #88]	@ 000af9d0 b06d
.org 0xaf9d2
	cmp r1, r0	@ 000af9d2 8142
.org 0xaf9d4
	ble.n 0xaf9e8	@ 000af9d4 08dd
.org 0xaf9d6
	adds r0, r6, #0	@ 000af9d6 301c
.org 0xaf9d8
	adds r0, #184	@ 000af9d8 b830
.org 0xaf9da
	strb r3, [r0, #0]	@ 000af9da 0370
.org 0xaf9dc
	b.n 0xaf9ee	@ 000af9dc 07e0
.org 0xaf9de
	.byte 0x00	@ 000af9de data
.org 0xaf9df
	.byte 0x00	@ 000af9df data
.org 0xaf9e0
	.byte 0x40,0xdb,0x85,0x08	@ 000af9e0 data
.org 0xaf9e4
	.byte 0xf0,0xdb,0x02,0x02	@ 000af9e4 data
.org 0xaf9e8
	adds r0, r6, #0	@ 000af9e8 301c
.org 0xaf9ea
	adds r0, #184	@ 000af9ea b830
.org 0xaf9ec
	strb r4, [r0, #0]	@ 000af9ec 0470
.org 0xaf9ee
	ldrb r0, [r6, #16]	@ 000af9ee 307c
.org 0xaf9f0
	cmp r0, #0	@ 000af9f0 0028
.org 0xaf9f2
	bne.n 0xaf9fa	@ 000af9f2 02d1
.org 0xaf9f4
	movs r0, #6	@ 000af9f4 0620
.org 0xaf9f6
	strb r0, [r2, #0]	@ 000af9f6 1070
.org 0xaf9f8
	b.n 0xafa0a	@ 000af9f8 07e0
.org 0xaf9fa
	adds r0, r6, #0	@ 000af9fa 301c
.org 0xaf9fc
	adds r0, #192	@ 000af9fc c030
.org 0xaf9fe
	movs r1, #3	@ 000af9fe 0321
.org 0xafa00
	strb r1, [r0, #0]	@ 000afa00 0170
.org 0xafa02
	adds r1, r6, #0	@ 000afa02 311c
.org 0xafa04
	adds r1, #193	@ 000afa04 c131
.org 0xafa06
	movs r0, #1	@ 000afa06 0120
.org 0xafa08
	strb r0, [r1, #0]	@ 000afa08 0870
.org 0xafa0a
	ldr r0, [pc, #24]	@ 000afa0a 0648
.org 0xafa0c
	ldr r1, [pc, #24]	@ 000afa0c 0649
.org 0xafa0e
	adds r0, r0, r1	@ 000afa0e 4018
.org 0xafa10
	ldrb r1, [r0, #0]	@ 000afa10 0178
.org 0xafa12
	movs r0, #15	@ 000afa12 0f20
.org 0xafa14
	ands r0, r1	@ 000afa14 0840
.org 0xafa16
	cmp r0, #2	@ 000afa16 0228
.org 0xafa18
	bne.n 0xafa2c	@ 000afa18 08d1
.org 0xafa1a
	adds r1, r6, #0	@ 000afa1a 311c
.org 0xafa1c
	adds r1, #188	@ 000afa1c bc31
.org 0xafa1e
	movs r0, #144	@ 000afa1e 9020
.org 0xafa20
	lsls r0, r0, #2	@ 000afa20 8000
.org 0xafa22
	b.n 0xafa34	@ 000afa22 07e0
.org 0xafa24
	.byte 0xb0,0x0a,0x00,0x02	@ 000afa24 data
.org 0xafa28
	.byte 0x10,0xc0,0x02,0x00	@ 000afa28 data
.org 0xafa2c
	adds r1, r6, #0	@ 000afa2c 311c
.org 0xafa2e
	adds r1, #188	@ 000afa2e bc31
