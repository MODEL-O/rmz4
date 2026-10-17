@ FUN_080aba4c  entry 0x080aba4c  size 140
.thumb
.org 0xaba4c
FUN_080aba4c:
	push {r4, r5, r6, lr}	@ 000aba4c 70b5
.org 0xaba4e
	adds r6, r0, #0	@ 000aba4e 061c
.org 0xaba50
	ldr r2, [r6, #40]	@ 000aba50 b26a
.org 0xaba52
	ldr r1, [pc, #132]	@ 000aba52 2149
.org 0xaba54
	ldrb r0, [r6, #9]	@ 000aba54 707a
.org 0xaba56
	lsls r0, r0, #2	@ 000aba56 8000
.org 0xaba58
	adds r0, r0, r1	@ 000aba58 4018
.org 0xaba5a
	movs r1, #1	@ 000aba5a 0121
.org 0xaba5c
	str r1, [r6, #12]	@ 000aba5c f160
.org 0xaba5e
	ldr r0, [r0, #0]	@ 000aba5e 0068
.org 0xaba60
	ldr r0, [r0, #4]	@ 000aba60 4068
.org 0xaba62
	str r0, [r6, #20]	@ 000aba62 7061
.org 0xaba64
	ldrb r1, [r6, #10]	@ 000aba64 b17a
.org 0xaba66
	movs r0, #1	@ 000aba66 0120
.org 0xaba68
	movs r5, #0	@ 000aba68 0025
.org 0xaba6a
	orrs r0, r1	@ 000aba6a 0843
.org 0xaba6c
	movs r1, #2	@ 000aba6c 0221
.org 0xaba6e
	orrs r0, r1	@ 000aba6e 0843
.org 0xaba70
	strb r0, [r6, #10]	@ 000aba70 b072
.org 0xaba72
	ldr r0, [r2, #84]	@ 000aba72 506d
.org 0xaba74
	str r0, [r6, #84]	@ 000aba74 7065
.org 0xaba76
	ldr r0, [r2, #88]	@ 000aba76 906d
.org 0xaba78
	ldr r1, [pc, #96]	@ 000aba78 1849
.org 0xaba7a
	adds r0, r0, r1	@ 000aba7a 4018
.org 0xaba7c
	str r0, [r6, #88]	@ 000aba7c b065
.org 0xaba7e
	adds r0, r6, #0	@ 000aba7e 301c
.org 0xaba80
	adds r0, #194	@ 000aba80 c230
.org 0xaba82
	movs r2, #0	@ 000aba82 0022
.org 0xaba84
	movs r1, #128	@ 000aba84 8021
.org 0xaba86
	lsls r1, r1, #1	@ 000aba86 4900
.org 0xaba88
	strh r1, [r0, #0]	@ 000aba88 0180
.org 0xaba8a
	subs r0, #2	@ 000aba8a 0238
.org 0xaba8c
	strh r1, [r0, #0]	@ 000aba8c 0180
.org 0xaba8e
	subs r0, #3	@ 000aba8e 0338
.org 0xaba90
	strb r2, [r0, #0]	@ 000aba90 0270
.org 0xaba92
	subs r0, #1	@ 000aba92 0138
.org 0xaba94
	strb r2, [r0, #0]	@ 000aba94 0270
.org 0xaba96
	adds r0, #2	@ 000aba96 0230
.org 0xaba98
	strb r2, [r0, #0]	@ 000aba98 0270
.org 0xaba9a
	ldrb r1, [r6, #10]	@ 000aba9a b17a
.org 0xaba9c
	movs r0, #4	@ 000aba9c 0420
.org 0xaba9e
	orrs r0, r1	@ 000aba9e 0843
.org 0xabaa0
	strb r0, [r6, #10]	@ 000abaa0 b072
.org 0xabaa2
	adds r4, r6, #0	@ 000abaa2 341c
.org 0xabaa4
	adds r4, #116	@ 000abaa4 7434
.org 0xabaa6
	ldr r1, [pc, #56]	@ 000abaa6 0e49
.org 0xabaa8
	adds r2, r6, #0	@ 000abaa8 321c
.org 0xabaaa
	adds r2, #84	@ 000abaaa 5432
.org 0xabaac
	adds r0, r4, #0	@ 000abaac 201c
.org 0xabaae
	movs r3, #64	@ 000abaae 4023
.org 0xabab0
	bl 0x5760	@ 000abab0 59f756fe
.org 0xabab4
	str r6, [r4, #44]	@ 000abab4 e662
.org 0xabab6
	str r5, [r4, #36]	@ 000abab6 6562
.org 0xabab8
	adds r0, r6, #0	@ 000abab8 301c
.org 0xababa
	adds r0, #52	@ 000ababa 3430
.org 0xababc
	ldr r1, [pc, #36]	@ 000ababc 0949
.org 0xababe
	bl 0x2c94	@ 000ababe 57f7e9f8
.org 0xabac2
	str r6, [r6, #60]	@ 000abac2 f663
.org 0xabac4
	ldrb r1, [r6, #10]	@ 000abac4 b17a
.org 0xabac6
	movs r0, #247	@ 000abac6 f720
.org 0xabac8
	ands r0, r1	@ 000abac8 0840
.org 0xabaca
	strb r0, [r6, #10]	@ 000abaca b072
.org 0xabacc
	adds r0, r6, #0	@ 000abacc 301c
.org 0xabace
	bl 0xabae8	@ 000abace 00f00bf8
.org 0xabad2
	pop {r4, r5, r6}	@ 000abad2 70bc
.org 0xabad4
	pop {r0}	@ 000abad4 01bc
.org 0xabad6
	bx r0	@ 000abad6 0047
