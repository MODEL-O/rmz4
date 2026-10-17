@ FUN_080d48f0  entry 0x080d48f0  size 94
.thumb
.org 0xd48f0
FUN_080d48f0:
	push {lr}	@ 000d48f0 00b5
.org 0xd48f2
	adds r2, r0, #0	@ 000d48f2 021c
.org 0xd48f4
	ldrb r0, [r2, #18]	@ 000d48f4 907c
.org 0xd48f6
	adds r0, #1	@ 000d48f6 0130
.org 0xd48f8
	strb r0, [r2, #18]	@ 000d48f8 9074
.org 0xd48fa
	ldrb r1, [r2, #13]	@ 000d48fa 517b
.org 0xd48fc
	adds r3, r1, #0	@ 000d48fc 0b1c
.org 0xd48fe
	cmp r3, #0	@ 000d48fe 002b
.org 0xd4900
	bne.n 0xd4912	@ 000d4900 07d1
.org 0xd4902
	lsls r0, r0, #24	@ 000d4902 0006
.org 0xd4904
	lsrs r0, r0, #24	@ 000d4904 000e
.org 0xd4906
	cmp r0, #123	@ 000d4906 7b28
.org 0xd4908
	bls.n 0xd494a	@ 000d4908 1fd9
.org 0xd490a
	adds r0, r1, #1	@ 000d490a 481c
.org 0xd490c
	strb r0, [r2, #13]	@ 000d490c 5073
.org 0xd490e
	strb r3, [r2, #18]	@ 000d490e 9374
.org 0xd4910
	b.n 0xd494a	@ 000d4910 1be0
.org 0xd4912
	cmp r3, #1	@ 000d4912 012b
.org 0xd4914
	bne.n 0xd4928	@ 000d4914 08d1
.org 0xd4916
	lsls r0, r0, #24	@ 000d4916 0006
.org 0xd4918
	lsrs r0, r0, #24	@ 000d4918 000e
.org 0xd491a
	cmp r0, #20	@ 000d491a 1428
.org 0xd491c
	bls.n 0xd494a	@ 000d491c 15d9
.org 0xd491e
	adds r0, r1, #1	@ 000d491e 481c
.org 0xd4920
	strb r0, [r2, #13]	@ 000d4920 5073
.org 0xd4922
	movs r0, #0	@ 000d4922 0020
.org 0xd4924
	strb r0, [r2, #18]	@ 000d4924 9074
.org 0xd4926
	b.n 0xd494a	@ 000d4926 10e0
.org 0xd4928
	cmp r3, #2	@ 000d4928 022b
.org 0xd492a
	bne.n 0xd494a	@ 000d492a 0ed1
.org 0xd492c
	lsls r0, r0, #24	@ 000d492c 0006
.org 0xd492e
	lsrs r0, r0, #24	@ 000d492e 000e
.org 0xd4930
	cmp r0, #32	@ 000d4930 2028
.org 0xd4932
	bls.n 0xd494a	@ 000d4932 0ad9
.org 0xd4934
	ldr r1, [pc, #24]	@ 000d4934 0649
.org 0xd4936
	ldrb r0, [r2, #9]	@ 000d4936 507a
.org 0xd4938
	lsls r0, r0, #2	@ 000d4938 8000
.org 0xd493a
	adds r0, r0, r1	@ 000d493a 4018
.org 0xd493c
	str r3, [r2, #12]	@ 000d493c d360
.org 0xd493e
	ldr r0, [r0, #0]	@ 000d493e 0068
.org 0xd4940
	ldr r0, [r0, #8]	@ 000d4940 8068
.org 0xd4942
	str r0, [r2, #20]	@ 000d4942 5061
.org 0xd4944
	adds r0, r2, #0	@ 000d4944 101c
.org 0xd4946
	bl 0xd3f38	@ 000d4946 fff7f7fa
.org 0xd494a
	pop {r0}	@ 000d494a 01bc
.org 0xd494c
	bx r0	@ 000d494c 0047
