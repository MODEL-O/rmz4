@ FUN_0809e910  entry 0x0809e910  size 86
.thumb
.org 0x9e910
FUN_0809e910:
	push {r4, r5, r6, lr}	@ 0009e910 70b5
.org 0x9e912
	adds r4, r0, #0	@ 0009e912 041c
.org 0x9e914
	movs r5, #0	@ 0009e914 0025
.org 0x9e916
	lsls r2, r5, #24	@ 0009e916 2a06
.org 0x9e918
	lsrs r2, r2, #24	@ 0009e918 120e
.org 0x9e91a
	ldrb r3, [r4, #10]	@ 0009e91a a37a
.org 0x9e91c
	lsrs r3, r3, #4	@ 0009e91c 1b09
.org 0x9e91e
	movs r6, #1	@ 0009e91e 0126
.org 0x9e920
	ands r3, r6	@ 0009e920 3340
.org 0x9e922
	adds r0, r4, #0	@ 0009e922 201c
.org 0x9e924
	adds r0, #84	@ 0009e924 5430
.org 0x9e926
	movs r1, #1	@ 0009e926 0121
.org 0x9e928
	bl 0x9e5f4	@ 0009e928 fff764fe
.org 0x9e92c
	lsls r0, r5, #16	@ 0009e92c 2804
.org 0x9e92e
	movs r1, #128	@ 0009e92e 8021
.org 0x9e930
	lsls r1, r1, #9	@ 0009e930 4902
.org 0x9e932
	adds r0, r0, r1	@ 0009e932 4018
.org 0x9e934
	lsrs r5, r0, #16	@ 0009e934 050c
.org 0x9e936
	asrs r0, r0, #16	@ 0009e936 0014
.org 0x9e938
	cmp r0, #3	@ 0009e938 0328
.org 0x9e93a
	ble.n 0x9e916	@ 0009e93a ecdd
.org 0x9e93c
	movs r0, #157	@ 0009e93c 9d20
.org 0x9e93e
	lsls r0, r0, #1	@ 0009e93e 4000
.org 0x9e940
	bl 0x2b10	@ 0009e940 64f7e6f8
.org 0x9e944
	movs r0, #0	@ 0009e944 0020
.org 0x9e946
	strb r6, [r4, #13]	@ 0009e946 6673
.org 0x9e948
	str r0, [r4, #92]	@ 0009e948 e065
.org 0x9e94a
	ldrb r1, [r4, #10]	@ 0009e94a a17a
.org 0x9e94c
	movs r2, #16	@ 0009e94c 1022
.org 0x9e94e
	adds r0, r2, #0	@ 0009e94e 101c
.org 0x9e950
	ands r0, r1	@ 0009e950 0840
.org 0x9e952
	cmp r0, #0	@ 0009e952 0028
.org 0x9e954
	beq.n 0x9e95a	@ 0009e954 01d0
.org 0x9e956
	str r2, [r4, #100]	@ 0009e956 6266
.org 0x9e958
	b.n 0x9e960	@ 0009e958 02e0
.org 0x9e95a
	movs r0, #16	@ 0009e95a 1020
.org 0x9e95c
	negs r0, r0	@ 0009e95c 4042
.org 0x9e95e
	str r0, [r4, #100]	@ 0009e95e 6066
.org 0x9e960
	pop {r4, r5, r6}	@ 0009e960 70bc
.org 0x9e962
	pop {r0}	@ 0009e962 01bc
.org 0x9e964
	bx r0	@ 0009e964 0047
