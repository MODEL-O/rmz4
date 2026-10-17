@ FUN_08067894  entry 0x08067894  size 176
.thumb
.org 0x67894
FUN_08067894:
	push {r4, lr}	@ 00067894 10b5
.org 0x67896
	adds r4, r0, #0	@ 00067896 041c
.org 0x67898
	ldrb r0, [r4, #14]	@ 00067898 a07b
.org 0x6789a
	cmp r0, #0	@ 0006789a 0028
.org 0x6789c
	bne.n 0x678bc	@ 0006789c 0ed1
.org 0x6789e
	ldr r1, [pc, #24]	@ 0006789e 0649
.org 0x678a0
	adds r0, r4, #0	@ 000678a0 201c
.org 0x678a2
	bl 0x1cf00	@ 000678a2 b5f72dfb
.org 0x678a6
	movs r0, #100	@ 000678a6 6420
.org 0x678a8
	bl 0x2b10	@ 000678a8 9bf732f9
.org 0x678ac
	ldr r0, [r4, #100]	@ 000678ac 606e
.org 0x678ae
	lsls r0, r0, #2	@ 000678ae 8000
.org 0x678b0
	str r0, [r4, #100]	@ 000678b0 6066
.org 0x678b2
	movs r0, #60	@ 000678b2 3c20
.org 0x678b4
	strb r0, [r4, #18]	@ 000678b4 a074
.org 0x678b6
	b.n 0x678fa	@ 000678b6 20e0
.org 0x678b8
	.byte 0x11,0xa9,0x00,0x00	@ 000678b8 data
.org 0x678bc
	cmp r0, #1	@ 000678bc 0128
.org 0x678be
	bne.n 0x67900	@ 000678be 1fd1
.org 0x678c0
	ldr r0, [pc, #36]	@ 000678c0 0948
.org 0x678c2
	ldr r2, [r0, #0]	@ 000678c2 0268
.org 0x678c4
	adds r0, r4, #0	@ 000678c4 201c
.org 0x678c6
	adds r0, #113	@ 000678c6 7130
.org 0x678c8
	ldrb r0, [r0, #0]	@ 000678c8 0078
.org 0x678ca
	lsls r0, r0, #24	@ 000678ca 0006
.org 0x678cc
	asrs r0, r0, #24	@ 000678cc 0016
.org 0x678ce
	cmp r0, #2	@ 000678ce 0228
.org 0x678d0
	ble.n 0x67900	@ 000678d0 16dd
.org 0x678d2
	cmp r2, #0	@ 000678d2 002a
.org 0x678d4
	beq.n 0x67900	@ 000678d4 14d0
.org 0x678d6
	ldrb r1, [r4, #10]	@ 000678d6 a17a
.org 0x678d8
	movs r0, #16	@ 000678d8 1020
.org 0x678da
	ands r0, r1	@ 000678da 0840
.org 0x678dc
	cmp r0, #0	@ 000678dc 0028
.org 0x678de
	beq.n 0x678f0	@ 000678de 07d0
.org 0x678e0
	adds r1, r2, #0	@ 000678e0 111c
.org 0x678e2
	adds r1, #180	@ 000678e2 b431
.org 0x678e4
	ldr r0, [pc, #4]	@ 000678e4 0148
.org 0x678e6
	b.n 0x678f8	@ 000678e6 07e0
.org 0x678e8
	.byte 0xf0,0xdb,0x02,0x02	@ 000678e8 data
.org 0x678ec
	.byte 0x50,0xfb,0xff,0xff	@ 000678ec data
.org 0x678f0
	adds r1, r2, #0	@ 000678f0 111c
.org 0x678f2
	adds r1, #180	@ 000678f2 b431
.org 0x678f4
	movs r0, #150	@ 000678f4 9620
.org 0x678f6
	lsls r0, r0, #3	@ 000678f6 c000
.org 0x678f8
	str r0, [r1, #56]	@ 000678f8 8863
.org 0x678fa
	ldrb r0, [r4, #14]	@ 000678fa a07b
.org 0x678fc
	adds r0, #1	@ 000678fc 0130
.org 0x678fe
	strb r0, [r4, #14]	@ 000678fe a073
.org 0x67900
	adds r0, r4, #0	@ 00067900 201c
.org 0x67902
	bl 0x1cff0	@ 00067902 b5f775fb
.org 0x67906
	ldr r1, [r4, #92]	@ 00067906 e16d
.org 0x67908
	cmp r1, #0	@ 00067908 0029
.org 0x6790a
	beq.n 0x67934	@ 0006790a 13d0
.org 0x6790c
	ldr r0, [r4, #84]	@ 0006790c 606d
.org 0x6790e
	adds r0, r0, r1	@ 0006790e 4018
.org 0x67910
	str r0, [r4, #84]	@ 00067910 6065
.org 0x67912
	ldr r0, [r4, #100]	@ 00067912 606e
.org 0x67914
	adds r2, r1, r0	@ 00067914 0a18
.org 0x67916
	str r2, [r4, #92]	@ 00067916 e265
.org 0x67918
	ldrb r1, [r4, #10]	@ 00067918 a17a
.org 0x6791a
	movs r0, #16	@ 0006791a 1020
.org 0x6791c
	ands r0, r1	@ 0006791c 0840
.org 0x6791e
	lsls r0, r0, #24	@ 0006791e 0006
.org 0x67920
	lsrs r0, r0, #24	@ 00067920 000e
.org 0x67922
	cmp r0, #0	@ 00067922 0028
.org 0x67924
	beq.n 0x6792e	@ 00067924 03d0
.org 0x67926
	cmp r2, #0	@ 00067926 002a
.org 0x67928
	ble.n 0x67934	@ 00067928 04dd
.org 0x6792a
	movs r0, #0	@ 0006792a 0020
.org 0x6792c
	b.n 0x67932	@ 0006792c 01e0
.org 0x6792e
	cmp r2, #0	@ 0006792e 002a
.org 0x67930
	bge.n 0x67934	@ 00067930 00da
.org 0x67932
	str r0, [r4, #92]	@ 00067932 e065
.org 0x67934
	ldrb r0, [r4, #18]	@ 00067934 a07c
.org 0x67936
	subs r0, #1	@ 00067936 0138
.org 0x67938
	strb r0, [r4, #18]	@ 00067938 a074
.org 0x6793a
	lsls r0, r0, #24	@ 0006793a 0006
.org 0x6793c
	lsrs r0, r0, #24	@ 0006793c 000e
.org 0x6793e
	cmp r0, #255	@ 0006793e ff28
.org 0x67940
	bne.n 0x6794a	@ 00067940 03d1
.org 0x67942
	movs r0, #17	@ 00067942 1120
