@ FUN_08038034  entry 0x08038034  size 182
.thumb
.org 0x38034
FUN_08038034:
	push {r4, lr}	@ 00038034 10b5
.org 0x38036
	mov ip, r0	@ 00038036 8446
.org 0x38038
	movs r3, #0	@ 00038038 0023
.org 0x3803a
	strb r3, [r0, #12]	@ 0003803a 0373
.org 0x3803c
	movs r1, #2	@ 0003803c 0221
.org 0x3803e
	strb r1, [r0, #13]	@ 0003803e 4173
.org 0x38040
	strb r3, [r0, #15]	@ 00038040 c373
.org 0x38042
	strb r3, [r0, #14]	@ 00038042 8373
.org 0x38044
	movs r0, #255	@ 00038044 ff20
.org 0x38046
	mov r2, ip	@ 00038046 6246
.org 0x38048
	strb r0, [r2, #16]	@ 00038048 1074
.org 0x3804a
	movs r0, #1	@ 0003804a 0120
.org 0x3804c
	negs r0, r0	@ 0003804c 4042
.org 0x3804e
	strb r0, [r2, #17]	@ 0003804e 5074
.org 0x38050
	strb r0, [r2, #18]	@ 00038050 9074
.org 0x38052
	movs r2, #0	@ 00038052 0022
.org 0x38054
	mov r4, ip	@ 00038054 6446
.org 0x38056
	strh r3, [r4, #20]	@ 00038056 a382
.org 0x38058
	movs r0, #3	@ 00038058 0320
.org 0x3805a
	strb r0, [r4, #24]	@ 0003805a 2076
.org 0x3805c
	movs r0, #1	@ 0003805c 0120
.org 0x3805e
	strb r0, [r4, #25]	@ 0003805e 6076
.org 0x38060
	strb r0, [r4, #26]	@ 00038060 a076
.org 0x38062
	strb r0, [r4, #27]	@ 00038062 e076
.org 0x38064
	strh r3, [r4, #22]	@ 00038064 e382
.org 0x38066
	strh r0, [r4, #32]	@ 00038066 2084
.org 0x38068
	movs r0, #128	@ 00038068 8020
.org 0x3806a
	lsls r0, r0, #2	@ 0003806a 8000
.org 0x3806c
	strh r0, [r4, #34]	@ 0003806c 6084
.org 0x3806e
	movs r4, #2	@ 0003806e 0224
.org 0x38070
	mov r0, ip	@ 00038070 6046
.org 0x38072
	strh r1, [r0, #36]	@ 00038072 8184
.org 0x38074
	movs r0, #128	@ 00038074 8020
.org 0x38076
	lsls r0, r0, #1	@ 00038076 4000
.org 0x38078
	mov r1, ip	@ 00038078 6146
.org 0x3807a
	strh r0, [r1, #38]	@ 0003807a c884
.org 0x3807c
	movs r0, #4	@ 0003807c 0420
.org 0x3807e
	strh r0, [r1, #40]	@ 0003807e 0885
.org 0x38080
	mov r0, ip	@ 00038080 6046
.org 0x38082
	adds r0, #42	@ 00038082 2a30
.org 0x38084
	strb r2, [r0, #0]	@ 00038084 0270
.org 0x38086
	adds r0, #1	@ 00038086 0130
.org 0x38088
	strb r2, [r0, #0]	@ 00038088 0270
.org 0x3808a
	adds r0, #1	@ 0003808a 0130
.org 0x3808c
	strb r2, [r0, #0]	@ 0003808c 0270
.org 0x3808e
	adds r0, #1	@ 0003808e 0130
.org 0x38090
	strb r2, [r0, #0]	@ 00038090 0270
.org 0x38092
	adds r0, #3	@ 00038092 0330
.org 0x38094
	strb r2, [r0, #0]	@ 00038094 0270
.org 0x38096
	adds r0, #1	@ 00038096 0130
.org 0x38098
	strb r2, [r0, #0]	@ 00038098 0270
.org 0x3809a
	adds r0, #1	@ 0003809a 0130
.org 0x3809c
	strb r2, [r0, #0]	@ 0003809c 0270
.org 0x3809e
	strh r3, [r1, #6]	@ 0003809e cb80
.org 0x380a0
	movs r0, #1	@ 000380a0 0120
.org 0x380a2
	negs r0, r0	@ 000380a2 4042
.org 0x380a4
	strb r0, [r1, #8]	@ 000380a4 0872
.org 0x380a6
	strb r0, [r1, #9]	@ 000380a6 4872
.org 0x380a8
	strb r0, [r1, #10]	@ 000380a8 8872
.org 0x380aa
	strb r0, [r1, #11]	@ 000380aa c872
.org 0x380ac
	strh r3, [r1, #4]	@ 000380ac 8b80
.org 0x380ae
	adds r1, #52	@ 000380ae 3431
.org 0x380b0
	movs r0, #64	@ 000380b0 4020
.org 0x380b2
	strb r0, [r1, #0]	@ 000380b2 0870
.org 0x380b4
	mov r0, ip	@ 000380b4 6046
.org 0x380b6
	adds r0, #53	@ 000380b6 3530
.org 0x380b8
	strb r2, [r0, #0]	@ 000380b8 0270
.org 0x380ba
	mov r0, ip	@ 000380ba 6046
.org 0x380bc
	str r3, [r0, #56]	@ 000380bc 8363
.org 0x380be
	adds r0, #60	@ 000380be 3c30
.org 0x380c0
	strb r2, [r0, #0]	@ 000380c0 0270
.org 0x380c2
	adds r0, #1	@ 000380c2 0130
.org 0x380c4
	strb r2, [r0, #0]	@ 000380c4 0270
.org 0x380c6
	adds r0, #1	@ 000380c6 0130
.org 0x380c8
	strb r2, [r0, #0]	@ 000380c8 0270
.org 0x380ca
	adds r0, #1	@ 000380ca 0130
.org 0x380cc
	strb r2, [r0, #0]	@ 000380cc 0270
.org 0x380ce
	adds r0, #1	@ 000380ce 0130
.org 0x380d0
	strb r2, [r0, #0]	@ 000380d0 0270
.org 0x380d2
	adds r1, #13	@ 000380d2 0d31
.org 0x380d4
	movs r0, #1	@ 000380d4 0120
.org 0x380d6
	negs r0, r0	@ 000380d6 4042
.org 0x380d8
	strb r0, [r1, #0]	@ 000380d8 0870
.org 0x380da
	mov r0, ip	@ 000380da 6046
.org 0x380dc
	adds r0, #66	@ 000380dc 4230
.org 0x380de
	strb r4, [r0, #0]	@ 000380de 0470
.org 0x380e0
	mov r1, ip	@ 000380e0 6146
.org 0x380e2
	strb r2, [r1, #19]	@ 000380e2 ca74
.org 0x380e4
	pop {r4}	@ 000380e4 10bc
.org 0x380e6
	pop {r0}	@ 000380e6 01bc
.org 0x380e8
	bx r0	@ 000380e8 0047
