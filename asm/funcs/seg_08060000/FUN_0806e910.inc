@ FUN_0806e910  entry 0x0806e910  size 70
.thumb
.org 0x6e910
FUN_0806e910:
	push {r4, r5, lr}	@ 0006e910 30b5
.org 0x6e912
	adds r4, r0, #0	@ 0006e912 041c
.org 0x6e914
	ldrb r0, [r4, #15]	@ 0006e914 e07b
.org 0x6e916
	cmp r0, #0	@ 0006e916 0028
.org 0x6e918
	bne.n 0x6e92e	@ 0006e918 09d1
.org 0x6e91a
	adds r0, r4, #0	@ 0006e91a 201c
.org 0x6e91c
	adds r0, #116	@ 0006e91c 7430
.org 0x6e91e
	ldr r1, [pc, #56]	@ 0006e91e 0e49
.org 0x6e920
	bl 0x5784	@ 0006e920 96f730ff
.org 0x6e924
	movs r0, #64	@ 0006e924 4020
.org 0x6e926
	strb r0, [r4, #18]	@ 0006e926 a074
.org 0x6e928
	ldrb r0, [r4, #15]	@ 0006e928 e07b
.org 0x6e92a
	adds r0, #1	@ 0006e92a 0130
.org 0x6e92c
	strb r0, [r4, #15]	@ 0006e92c e073
.org 0x6e92e
	movs r0, #118	@ 0006e92e 7620
.org 0x6e930
	bl 0x25d8	@ 0006e930 93f752fe
.org 0x6e934
	ldrb r0, [r4, #18]	@ 0006e934 a07c
.org 0x6e936
	subs r0, #1	@ 0006e936 0138
.org 0x6e938
	strb r0, [r4, #18]	@ 0006e938 a074
.org 0x6e93a
	lsls r0, r0, #24	@ 0006e93a 0006
.org 0x6e93c
	lsrs r5, r0, #24	@ 0006e93c 050e
.org 0x6e93e
	cmp r5, #0	@ 0006e93e 002d
.org 0x6e940
	bne.n 0x6e950	@ 0006e940 06d1
.org 0x6e942
	movs r0, #118	@ 0006e942 7620
.org 0x6e944
	bl 0x2624	@ 0006e944 93f76efe
.org 0x6e948
	movs r0, #1	@ 0006e948 0120
.org 0x6e94a
	strb r0, [r4, #13]	@ 0006e94a 6073
.org 0x6e94c
	strb r5, [r4, #14]	@ 0006e94c a573
.org 0x6e94e
	strb r5, [r4, #15]	@ 0006e94e e573
.org 0x6e950
	pop {r4, r5}	@ 0006e950 30bc
.org 0x6e952
	pop {r0}	@ 0006e952 01bc
.org 0x6e954
	bx r0	@ 0006e954 0047
