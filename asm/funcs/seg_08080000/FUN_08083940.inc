@ FUN_08083940  entry 0x08083940  size 96
.thumb
.org 0x83940
FUN_08083940:
	push {lr}	@ 00083940 00b5
.org 0x83942
	adds r3, r0, #0	@ 00083942 031c
.org 0x83944
	ldr r0, [pc, #64]	@ 00083944 1048
.org 0x83946
	ldrb r1, [r0, #9]	@ 00083946 417a
.org 0x83948
	movs r0, #4	@ 00083948 0420
.org 0x8394a
	ands r0, r1	@ 0008394a 0840
.org 0x8394c
	cmp r0, #0	@ 0008394c 0028
.org 0x8394e
	beq.n 0x83990	@ 0008394e 1fd0
.org 0x83950
	ldrb r1, [r3, #10]	@ 00083950 997a
.org 0x83952
	movs r0, #254	@ 00083952 fe20
.org 0x83954
	ands r0, r1	@ 00083954 0840
.org 0x83956
	movs r2, #0	@ 00083956 0022
.org 0x83958
	movs r1, #253	@ 00083958 fd21
.org 0x8395a
	ands r0, r1	@ 0008395a 0840
.org 0x8395c
	strb r0, [r3, #10]	@ 0008395c 9872
.org 0x8395e
	adds r0, r3, #0	@ 0008395e 181c
.org 0x83960
	adds r0, #140	@ 00083960 8c30
.org 0x83962
	str r2, [r0, #0]	@ 00083962 0260
.org 0x83964
	adds r0, #4	@ 00083964 0430
.org 0x83966
	str r2, [r0, #0]	@ 00083966 0260
.org 0x83968
	adds r0, #4	@ 00083968 0430
.org 0x8396a
	strb r2, [r0, #0]	@ 0008396a 0270
.org 0x8396c
	ldrb r1, [r3, #10]	@ 0008396c 997a
.org 0x8396e
	movs r0, #251	@ 0008396e fb20
.org 0x83970
	ands r0, r1	@ 00083970 0840
.org 0x83972
	strb r0, [r3, #10]	@ 00083972 9872
.org 0x83974
	ldr r1, [pc, #20]	@ 00083974 0549
.org 0x83976
	ldrb r0, [r3, #9]	@ 00083976 587a
.org 0x83978
	lsls r0, r0, #2	@ 00083978 8000
.org 0x8397a
	adds r0, r0, r1	@ 0008397a 4018
.org 0x8397c
	movs r1, #3	@ 0008397c 0321
.org 0x8397e
	str r1, [r3, #12]	@ 0008397e d960
.org 0x83980
	ldr r0, [r0, #0]	@ 00083980 0068
.org 0x83982
	ldr r0, [r0, #12]	@ 00083982 c068
.org 0x83984
	str r0, [r3, #20]	@ 00083984 5861
.org 0x83986
	b.n 0x839a4	@ 00083986 0de0
.org 0x83988
	.byte 0xb0,0xe8,0x02,0x02	@ 00083988 data
.org 0x8398c
	.byte 0x40,0xdb,0x85,0x08	@ 0008398c data
.org 0x83990
	ldrb r0, [r3, #16]	@ 00083990 187c
.org 0x83992
	cmp r0, #0	@ 00083992 0028
.org 0x83994
	beq.n 0x8399e	@ 00083994 03d0
.org 0x83996
	adds r0, r3, #0	@ 00083996 181c
.org 0x83998
	bl 0x83c34	@ 00083998 00f04cf9
.org 0x8399c
	b.n 0x839a4	@ 0008399c 02e0
.org 0x8399e
	adds r0, r3, #0	@ 0008399e 181c
