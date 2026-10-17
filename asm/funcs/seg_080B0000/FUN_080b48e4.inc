@ FUN_080b48e4  entry 0x080b48e4  size 290
.thumb
.org 0xb48e4
FUN_080b48e4:
	push {r4, r5, r6, lr}	@ 000b48e4 70b5
.org 0xb48e6
	sub sp, #8	@ 000b48e6 82b0
.org 0xb48e8
	adds r6, r0, #0	@ 000b48e8 061c
.org 0xb48ea
	ldrb r0, [r6, #10]	@ 000b48ea b07a
.org 0xb48ec
	movs r1, #254	@ 000b48ec fe21
.org 0xb48ee
	ands r1, r0	@ 000b48ee 0140
.org 0xb48f0
	strb r1, [r6, #10]	@ 000b48f0 b172
.org 0xb48f2
	ldr r0, [r6, #84]	@ 000b48f2 706d
.org 0xb48f4
	str r0, [sp, #0]	@ 000b48f4 0090
.org 0xb48f6
	ldr r0, [r6, #88]	@ 000b48f6 b06d
.org 0xb48f8
	ldr r2, [pc, #24]	@ 000b48f8 064a
.org 0xb48fa
	adds r0, r0, r2	@ 000b48fa 8018
.org 0xb48fc
	str r0, [sp, #4]	@ 000b48fc 0190
.org 0xb48fe
	ldr r2, [pc, #24]	@ 000b48fe 064a
.org 0xb4900
	adds r0, r6, #0	@ 000b4900 301c
.org 0xb4902
	adds r0, #188	@ 000b4902 bc30
.org 0xb4904
	ldrb r0, [r0, #0]	@ 000b4904 0078
.org 0xb4906
	movs r3, #16	@ 000b4906 1023
.org 0xb4908
	ands r1, r3	@ 000b4908 1940
.org 0xb490a
	cmp r1, #0	@ 000b490a 0029
.org 0xb490c
	beq.n 0xb491c	@ 000b490c 06d0
.org 0xb490e
	orrs r3, r0	@ 000b490e 0343
.org 0xb4910
	b.n 0xb491e	@ 000b4910 05e0
.org 0xb4912
	.byte 0x00	@ 000b4912 data
.org 0xb4913
	.byte 0x00	@ 000b4913 data
.org 0xb4914
	.byte 0x00,0xf8,0xff,0xff	@ 000b4914 data
.org 0xb4918
	.byte 0xb8,0x38,0x86,0x08	@ 000b4918 data
.org 0xb491c
	adds r3, r0, #0	@ 000b491c 031c
.org 0xb491e
	mov r0, sp	@ 000b491e 6846
.org 0xb4920
	adds r1, r2, #0	@ 000b4920 111c
.org 0xb4922
	movs r2, #0	@ 000b4922 0022
.org 0xb4924
	bl 0xd4c8c	@ 000b4924 20f0b2f9
.org 0xb4928
	ldrb r0, [r6, #16]	@ 000b4928 307c
.org 0xb492a
	cmp r0, #0	@ 000b492a 0028
.org 0xb492c
	bne.n 0xb4984	@ 000b492c 2ad1
.org 0xb492e
	ldr r5, [pc, #68]	@ 000b492e 114d
.org 0xb4930
	ldr r0, [r5, #0]	@ 000b4930 2868
.org 0xb4932
	ldr r4, [pc, #68]	@ 000b4932 114c
.org 0xb4934
	muls r0, r4	@ 000b4934 6043
.org 0xb4936
	ldr r2, [pc, #68]	@ 000b4936 114a
.org 0xb4938
	adds r0, r0, r2	@ 000b4938 8018
.org 0xb493a
	lsls r0, r0, #1	@ 000b493a 4000
.org 0xb493c
	lsrs r3, r0, #1	@ 000b493c 4308
.org 0xb493e
	lsrs r0, r0, #17	@ 000b493e 400c
.org 0xb4940
	movs r1, #1	@ 000b4940 0121
.org 0xb4942
	ands r0, r1	@ 000b4942 0840
.org 0xb4944
	lsls r1, r0, #3	@ 000b4944 c100
.org 0xb4946
	subs r1, r1, r0	@ 000b4946 091a
.org 0xb4948
	lsls r1, r1, #2	@ 000b4948 8900
.org 0xb494a
	ldr r0, [pc, #52]	@ 000b494a 0d48
.org 0xb494c
	adds r1, r1, r0	@ 000b494c 0918
.org 0xb494e
	muls r3, r4	@ 000b494e 6343
.org 0xb4950
	adds r3, r3, r2	@ 000b4950 9b18
.org 0xb4952
	lsls r3, r3, #1	@ 000b4952 5b00
.org 0xb4954
	lsrs r0, r3, #1	@ 000b4954 5808
.org 0xb4956
	str r0, [r5, #0]	@ 000b4956 2860
.org 0xb4958
	lsrs r3, r3, #17	@ 000b4958 5b0c
.org 0xb495a
	movs r0, #1	@ 000b495a 0120
.org 0xb495c
	ands r3, r0	@ 000b495c 0340
.org 0xb495e
	lsls r3, r3, #4	@ 000b495e 1b01
.org 0xb4960
	adds r0, r6, #0	@ 000b4960 301c
.org 0xb4962
	adds r0, #188	@ 000b4962 bc30
.org 0xb4964
	ldrb r0, [r0, #0]	@ 000b4964 0078
.org 0xb4966
	orrs r3, r0	@ 000b4966 0343
.org 0xb4968
	mov r0, sp	@ 000b4968 6846
.org 0xb496a
	movs r2, #0	@ 000b496a 0022
.org 0xb496c
	bl 0xd4c8c	@ 000b496c 20f08ef9
.org 0xb4970
	b.n 0xb49c6	@ 000b4970 29e0
.org 0xb4972
	.byte 0x00	@ 000b4972 data
.org 0xb4973
	.byte 0x00	@ 000b4973 data
.org 0xb4974
	.byte 0x38,0xdc,0x02,0x02	@ 000b4974 data
.org 0xb4978
	.byte 0xfd,0x43,0x03,0x00	@ 000b4978 data
.org 0xb497c
	.byte 0xc3,0x9e,0x26,0x00	@ 000b497c data
.org 0xb4980
	.byte 0xd4,0x38,0x86,0x08	@ 000b4980 data
.org 0xb4984
	ldr r5, [pc, #96]	@ 000b4984 184d
.org 0xb4986
	ldr r0, [r5, #0]	@ 000b4986 2868
.org 0xb4988
	ldr r4, [pc, #96]	@ 000b4988 184c
.org 0xb498a
	muls r0, r4	@ 000b498a 6043
.org 0xb498c
	ldr r2, [pc, #96]	@ 000b498c 184a
.org 0xb498e
	adds r0, r0, r2	@ 000b498e 8018
.org 0xb4990
	lsls r0, r0, #1	@ 000b4990 4000
.org 0xb4992
	lsrs r3, r0, #1	@ 000b4992 4308
.org 0xb4994
	lsrs r0, r0, #17	@ 000b4994 400c
.org 0xb4996
	movs r1, #1	@ 000b4996 0121
.org 0xb4998
	ands r0, r1	@ 000b4998 0840
.org 0xb499a
	lsls r1, r0, #3	@ 000b499a c100
.org 0xb499c
	subs r1, r1, r0	@ 000b499c 091a
.org 0xb499e
	lsls r1, r1, #2	@ 000b499e 8900
.org 0xb49a0
	ldr r0, [pc, #80]	@ 000b49a0 1448
.org 0xb49a2
	adds r1, r1, r0	@ 000b49a2 0918
.org 0xb49a4
	muls r3, r4	@ 000b49a4 6343
.org 0xb49a6
	adds r3, r3, r2	@ 000b49a6 9b18
.org 0xb49a8
	lsls r3, r3, #1	@ 000b49a8 5b00
.org 0xb49aa
	lsrs r0, r3, #1	@ 000b49aa 5808
.org 0xb49ac
	str r0, [r5, #0]	@ 000b49ac 2860
.org 0xb49ae
	lsrs r3, r3, #17	@ 000b49ae 5b0c
.org 0xb49b0
	movs r0, #1	@ 000b49b0 0120
.org 0xb49b2
	ands r3, r0	@ 000b49b2 0340
.org 0xb49b4
	lsls r3, r3, #4	@ 000b49b4 1b01
.org 0xb49b6
	adds r0, r6, #0	@ 000b49b6 301c
.org 0xb49b8
	adds r0, #188	@ 000b49b8 bc30
.org 0xb49ba
	ldrb r0, [r0, #0]	@ 000b49ba 0078
.org 0xb49bc
	orrs r3, r0	@ 000b49bc 0343
.org 0xb49be
	mov r0, sp	@ 000b49be 6846
.org 0xb49c0
	movs r2, #0	@ 000b49c0 0022
.org 0xb49c2
	bl 0xd4c8c	@ 000b49c2 20f063f9
.org 0xb49c6
	movs r0, #1	@ 000b49c6 0120
.org 0xb49c8
	mov r1, sp	@ 000b49c8 6946
.org 0xb49ca
	bl 0xd0c88	@ 000b49ca 1cf05df9
.org 0xb49ce
	movs r0, #42	@ 000b49ce 2a20
.org 0xb49d0
	bl 0x2b10	@ 000b49d0 4ef79ef8
.org 0xb49d4
	ldrb r0, [r6, #16]	@ 000b49d4 307c
.org 0xb49d6
	cmp r0, #0	@ 000b49d6 0028
.org 0xb49d8
	bne.n 0xb49f8	@ 000b49d8 0ed1
.org 0xb49da
	movs r0, #3	@ 000b49da 0320
.org 0xb49dc
	movs r1, #41	@ 000b49dc 2921
.org 0xb49de
	mov r2, sp	@ 000b49de 6a46
.org 0xb49e0
	bl 0x2ab88	@ 000b49e0 76f7d2f8
.org 0xb49e4
	b.n 0xb4a02	@ 000b49e4 0de0
.org 0xb49e6
	.byte 0x00	@ 000b49e6 data
.org 0xb49e7
	.byte 0x00	@ 000b49e7 data
.org 0xb49e8
	.byte 0x38,0xdc,0x02,0x02	@ 000b49e8 data
.org 0xb49ec
	.byte 0xfd,0x43,0x03,0x00	@ 000b49ec data
.org 0xb49f0
	.byte 0xc3,0x9e,0x26,0x00	@ 000b49f0 data
.org 0xb49f4
	.byte 0x0c,0x39,0x86,0x08	@ 000b49f4 data
.org 0xb49f8
	movs r0, #3	@ 000b49f8 0320
.org 0xb49fa
	movs r1, #40	@ 000b49fa 2821
.org 0xb49fc
	mov r2, sp	@ 000b49fc 6a46
.org 0xb49fe
	bl 0x2ab88	@ 000b49fe 76f7c3f8
.org 0xb4a02
	ldr r2, [pc, #48]	@ 000b4a02 0c4a
.org 0xb4a04
	ldrh r1, [r2, #12]	@ 000b4a04 9189
