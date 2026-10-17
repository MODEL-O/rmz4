@ FUN_080e9884  entry 0x080e9884  size 240
.thumb
.org 0xe9884
FUN_080e9884:
	push {r4, r5, r6, lr}	@ 000e9884 70b5
.org 0xe9886
	sub sp, #8	@ 000e9886 82b0
.org 0xe9888
	adds r6, r0, #0	@ 000e9888 061c
.org 0xe988a
	ldrb r0, [r6, #14]	@ 000e988a b07b
.org 0xe988c
	cmp r0, #0	@ 000e988c 0028
.org 0xe988e
	bne.n 0xe98b0	@ 000e988e 0fd1
.org 0xe9890
	ldr r1, [pc, #184]	@ 000e9890 2e49
.org 0xe9892
	adds r0, r6, #0	@ 000e9892 301c
.org 0xe9894
	bl 0x1cf00	@ 000e9894 33f734fb
.org 0xe9898
	movs r0, #32	@ 000e9898 2020
.org 0xe989a
	strb r0, [r6, #18]	@ 000e989a b074
.org 0xe989c
	adds r0, r6, #0	@ 000e989c 301c
.org 0xe989e
	adds r0, #84	@ 000e989e 5430
.org 0xe98a0
	ldr r1, [pc, #172]	@ 000e98a0 2b49
.org 0xe98a2
	movs r2, #0	@ 000e98a2 0022
.org 0xe98a4
	movs r3, #0	@ 000e98a4 0023
.org 0xe98a6
	bl 0xd4c8c	@ 000e98a6 ebf7f1f9
.org 0xe98aa
	ldrb r0, [r6, #14]	@ 000e98aa b07b
.org 0xe98ac
	adds r0, #1	@ 000e98ac 0130
.org 0xe98ae
	strb r0, [r6, #14]	@ 000e98ae b073
.org 0xe98b0
	adds r0, r6, #0	@ 000e98b0 301c
.org 0xe98b2
	bl 0x1cff0	@ 000e98b2 33f79dfb
.org 0xe98b6
	ldrb r0, [r6, #18]	@ 000e98b6 b07c
.org 0xe98b8
	subs r0, #1	@ 000e98b8 0138
.org 0xe98ba
	strb r0, [r6, #18]	@ 000e98ba b074
.org 0xe98bc
	lsls r0, r0, #24	@ 000e98bc 0006
.org 0xe98be
	lsrs r0, r0, #24	@ 000e98be 000e
.org 0xe98c0
	cmp r0, #255	@ 000e98c0 ff28
.org 0xe98c2
	bne.n 0xe998c	@ 000e98c2 63d1
.org 0xe98c4
	ldr r0, [r6, #84]	@ 000e98c4 706d
.org 0xe98c6
	movs r1, #176	@ 000e98c6 b021
.org 0xe98c8
	lsls r1, r1, #4	@ 000e98c8 0901
.org 0xe98ca
	adds r0, r0, r1	@ 000e98ca 4018
.org 0xe98cc
	str r0, [sp, #0]	@ 000e98cc 0090
.org 0xe98ce
	ldr r0, [r6, #88]	@ 000e98ce b06d
.org 0xe98d0
	ldr r5, [pc, #128]	@ 000e98d0 204d
.org 0xe98d2
	adds r0, r0, r5	@ 000e98d2 4019
.org 0xe98d4
	str r0, [sp, #4]	@ 000e98d4 0190
.org 0xe98d6
	ldr r4, [pc, #128]	@ 000e98d6 204c
.org 0xe98d8
	mov r0, sp	@ 000e98d8 6846
.org 0xe98da
	adds r1, r4, #0	@ 000e98da 211c
.org 0xe98dc
	movs r2, #0	@ 000e98dc 0022
.org 0xe98de
	movs r3, #0	@ 000e98de 0023
.org 0xe98e0
	bl 0xd4c8c	@ 000e98e0 ebf7d4f9
.org 0xe98e4
	ldr r0, [r6, #84]	@ 000e98e4 706d
.org 0xe98e6
	str r0, [sp, #0]	@ 000e98e6 0090
.org 0xe98e8
	ldr r0, [r6, #88]	@ 000e98e8 b06d
.org 0xe98ea
	adds r0, r0, r5	@ 000e98ea 4019
.org 0xe98ec
	str r0, [sp, #4]	@ 000e98ec 0190
.org 0xe98ee
	adds r1, r4, #0	@ 000e98ee 211c
.org 0xe98f0
	adds r1, #28	@ 000e98f0 1c31
.org 0xe98f2
	mov r0, sp	@ 000e98f2 6846
.org 0xe98f4
	movs r2, #0	@ 000e98f4 0022
.org 0xe98f6
	movs r3, #0	@ 000e98f6 0023
.org 0xe98f8
	bl 0xd4c8c	@ 000e98f8 ebf7c8f9
.org 0xe98fc
	ldr r0, [r6, #84]	@ 000e98fc 706d
.org 0xe98fe
	ldr r1, [pc, #92]	@ 000e98fe 1749
.org 0xe9900
	adds r0, r0, r1	@ 000e9900 4018
.org 0xe9902
	str r0, [sp, #0]	@ 000e9902 0090
.org 0xe9904
	ldr r0, [r6, #88]	@ 000e9904 b06d
.org 0xe9906
	movs r1, #128	@ 000e9906 8021
.org 0xe9908
	lsls r1, r1, #1	@ 000e9908 4900
.org 0xe990a
	adds r0, r0, r1	@ 000e990a 4018
.org 0xe990c
	str r0, [sp, #4]	@ 000e990c 0190
.org 0xe990e
	adds r4, #56	@ 000e990e 3834
.org 0xe9910
	mov r0, sp	@ 000e9910 6846
.org 0xe9912
	adds r1, r4, #0	@ 000e9912 211c
.org 0xe9914
	movs r2, #0	@ 000e9914 0022
.org 0xe9916
	movs r3, #0	@ 000e9916 0023
.org 0xe9918
	bl 0xd4c8c	@ 000e9918 ebf7b8f9
.org 0xe991c
	ldr r0, [r6, #84]	@ 000e991c 706d
.org 0xe991e
	movs r1, #160	@ 000e991e a021
.org 0xe9920
	lsls r1, r1, #4	@ 000e9920 0901
.org 0xe9922
	adds r0, r0, r1	@ 000e9922 4018
.org 0xe9924
	str r0, [sp, #0]	@ 000e9924 0090
.org 0xe9926
	ldr r0, [r6, #88]	@ 000e9926 b06d
.org 0xe9928
	ldr r1, [pc, #52]	@ 000e9928 0d49
.org 0xe992a
	adds r0, r0, r1	@ 000e992a 4018
.org 0xe992c
	str r0, [sp, #4]	@ 000e992c 0190
.org 0xe992e
	movs r0, #1	@ 000e992e 0120
.org 0xe9930
	mov r1, sp	@ 000e9930 6946
.org 0xe9932
	bl 0xd0c88	@ 000e9932 e7f7a9f9
.org 0xe9936
	ldr r0, [pc, #44]	@ 000e9936 0b48
.org 0xe9938
	ldr r1, [pc, #44]	@ 000e9938 0b49
.org 0xe993a
	adds r0, r0, r1	@ 000e993a 4018
.org 0xe993c
	ldr r1, [r6, #88]	@ 000e993c b16d
.org 0xe993e
	ldr r0, [r0, #0]	@ 000e993e 0068
.org 0xe9940
	cmp r1, r0	@ 000e9940 8142
.org 0xe9942
	ble.n 0xe996c	@ 000e9942 13dd
.org 0xe9944
	movs r0, #49	@ 000e9944 3120
.org 0xe9946
	bl 0x2b10	@ 000e9946 19f7e3f8
.org 0xe994a
	b.n 0xe9972	@ 000e994a 12e0
.org 0xe994c
	.byte 0x02,0x08,0x00,0x00	@ 000e994c data
.org 0xe9950
	.byte 0xd0,0x94,0x86,0x08	@ 000e9950 data
.org 0xe9954
	.byte 0x00,0xf7,0xff,0xff	@ 000e9954 data
.org 0xe9958
	.byte 0x7c,0x94,0x86,0x08	@ 000e9958 data
.org 0xe995c
	.byte 0x00,0xfc,0xff,0xff	@ 000e995c data
.org 0xe9960
	.byte 0x00,0xf8,0xff,0xff	@ 000e9960 data
.org 0xe9964
	.byte 0xb0,0x0a,0x00,0x02	@ 000e9964 data
.org 0xe9968
	.byte 0x0c,0xc0,0x02,0x00	@ 000e9968 data
.org 0xe996c
	movs r0, #42	@ 000e996c 2a20
.org 0xe996e
	bl 0x2b10	@ 000e996e 19f7cff8
.org 0xe9972
	ldrb r1, [r6, #10]	@ 000e9972 b17a
