@ FUN_08089938  entry 0x08089938  size 84
.thumb
.org 0x89938
FUN_08089938:
	push {r4, r5, lr}	@ 00089938 30b5
.org 0x8993a
	adds r4, r0, #0	@ 0008993a 041c
.org 0x8993c
	ldrb r5, [r4, #14]	@ 0008993c a57b
.org 0x8993e
	cmp r5, #0	@ 0008993e 002d
.org 0x89940
	bne.n 0x89952	@ 00089940 07d1
.org 0x89942
	adds r0, #116	@ 00089942 7430
.org 0x89944
	ldr r1, [pc, #68]	@ 00089944 1149
.org 0x89946
	bl 0x5784	@ 00089946 7bf71dff
.org 0x8994a
	str r5, [r4, #96]	@ 0008994a 2566
.org 0x8994c
	ldrb r0, [r4, #14]	@ 0008994c a07b
.org 0x8994e
	adds r0, #1	@ 0008994e 0130
.org 0x89950
	strb r0, [r4, #14]	@ 00089950 a073
.org 0x89952
	adds r5, r4, #0	@ 00089952 251c
.org 0x89954
	adds r5, #188	@ 00089954 bc35
.org 0x89956
	ldr r0, [r5, #0]	@ 00089956 2868
.org 0x89958
	bl 0x2b3e4	@ 00089958 a1f744fd
.org 0x8995c
	cmp r0, #0	@ 0008995c 0028
.org 0x8995e
	beq.n 0x89986	@ 0008995e 12d0
.org 0x89960
	adds r0, r4, #0	@ 00089960 201c
.org 0x89962
	adds r0, #116	@ 00089962 7430
.org 0x89964
	ldr r2, [pc, #40]	@ 00089964 0a4a
.org 0x89966
	adds r1, r4, #0	@ 00089966 211c
.org 0x89968
	adds r1, #192	@ 00089968 c031
.org 0x8996a
	ldrb r1, [r1, #0]	@ 0008996a 0978
.org 0x8996c
	adds r1, r1, r2	@ 0008996c 8918
.org 0x8996e
	ldrb r2, [r1, #0]	@ 0008996e 0a78
.org 0x89970
	lsls r1, r2, #1	@ 00089970 5100
.org 0x89972
	adds r1, r1, r2	@ 00089972 8918
.org 0x89974
	lsls r1, r1, #3	@ 00089974 c900
.org 0x89976
	ldr r2, [pc, #28]	@ 00089976 074a
.org 0x89978
	adds r1, r1, r2	@ 00089978 8918
.org 0x8997a
	bl 0x5784	@ 0008997a 7bf703ff
.org 0x8997e
	movs r0, #0	@ 0008997e 0020
.org 0x89980
	str r0, [r5, #0]	@ 00089980 2860
.org 0x89982
	strb r0, [r4, #13]	@ 00089982 6073
.org 0x89984
	strb r0, [r4, #14]	@ 00089984 a073
.org 0x89986
	pop {r4, r5}	@ 00089986 30bc
.org 0x89988
	pop {r0}	@ 00089988 01bc
.org 0x8998a
	bx r0	@ 0008998a 0047
