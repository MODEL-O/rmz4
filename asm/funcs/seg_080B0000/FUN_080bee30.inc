@ FUN_080bee30  entry 0x080bee30  size 144
.thumb
.org 0xbee30
FUN_080bee30:
	push {r4, r5, r6, r7, lr}	@ 000bee30 f0b5
.org 0xbee32
	adds r5, r0, #0	@ 000bee32 051c
.org 0xbee34
	adds r6, r1, #0	@ 000bee34 0e1c
.org 0xbee36
	lsls r2, r2, #24	@ 000bee36 1206
.org 0xbee38
	lsrs r7, r2, #24	@ 000bee38 170e
.org 0xbee3a
	lsls r3, r3, #24	@ 000bee3a 1b06
.org 0xbee3c
	lsrs r4, r3, #24	@ 000bee3c 1c0e
.org 0xbee3e
	ldr r0, [pc, #80]	@ 000bee3e 1448
.org 0xbee40
	ldr r0, [r0, #0]	@ 000bee40 0068
.org 0xbee42
	bl 0x5500	@ 000bee42 46f75dfb
.org 0xbee46
	adds r3, r0, #0	@ 000bee46 031c
.org 0xbee48
	cmp r3, #0	@ 000bee48 002b
.org 0xbee4a
	beq.n 0xbeec0	@ 000bee4a 39d0
.org 0xbee4c
	adds r1, r3, #0	@ 000bee4c 191c
.org 0xbee4e
	adds r1, #37	@ 000bee4e 2531
.org 0xbee50
	movs r2, #0	@ 000bee50 0022
.org 0xbee52
	movs r0, #8	@ 000bee52 0820
.org 0xbee54
	strb r0, [r1, #0]	@ 000bee54 0870
.org 0xbee56
	ldr r1, [pc, #60]	@ 000bee56 0f49
.org 0xbee58
	movs r0, #6	@ 000bee58 0620
.org 0xbee5a
	strb r0, [r3, #9]	@ 000bee5a 5872
.org 0xbee5c
	ldr r0, [r1, #24]	@ 000bee5c 8869
.org 0xbee5e
	ldr r0, [r0, #0]	@ 000bee5e 0068
.org 0xbee60
	str r0, [r3, #20]	@ 000bee60 5861
.org 0xbee62
	movs r0, #0	@ 000bee62 0020
.org 0xbee64
	strh r2, [r3, #32]	@ 000bee64 1a84
.org 0xbee66
	adds r1, r3, #0	@ 000bee66 191c
.org 0xbee68
	adds r1, #34	@ 000bee68 2231
.org 0xbee6a
	strb r0, [r1, #0]	@ 000bee6a 0870
.org 0xbee6c
	ldr r0, [r5, #0]	@ 000bee6c 2868
.org 0xbee6e
	ldr r1, [r5, #4]	@ 000bee6e 6968
.org 0xbee70
	str r0, [r3, #84]	@ 000bee70 5865
.org 0xbee72
	str r1, [r3, #88]	@ 000bee72 9965
.org 0xbee74
	ldr r0, [r6, #0]	@ 000bee74 3068
.org 0xbee76
	ldr r1, [r6, #4]	@ 000bee76 7168
.org 0xbee78
	str r0, [r3, #100]	@ 000bee78 5866
.org 0xbee7a
	str r1, [r3, #104]	@ 000bee7a 9966
.org 0xbee7c
	movs r0, #1	@ 000bee7c 0120
.org 0xbee7e
	strb r0, [r3, #16]	@ 000bee7e 1874
.org 0xbee80
	strb r4, [r3, #17]	@ 000bee80 5c74
.org 0xbee82
	adds r2, r7, #0	@ 000bee82 3a1c
.org 0xbee84
	cmp r2, #0	@ 000bee84 002a
.org 0xbee86
	beq.n 0xbee98	@ 000bee86 07d0
.org 0xbee88
	ldrb r0, [r3, #10]	@ 000bee88 987a
.org 0xbee8a
	movs r1, #16	@ 000bee8a 1021
.org 0xbee8c
	orrs r0, r1	@ 000bee8c 0843
.org 0xbee8e
	b.n 0xbee9e	@ 000bee8e 06e0
.org 0xbee90
	.byte 0x94,0xed,0x02,0x02	@ 000bee90 data
.org 0xbee94
	.byte 0xf4,0x49,0x86,0x08	@ 000bee94 data
.org 0xbee98
	ldrb r1, [r3, #10]	@ 000bee98 997a
.org 0xbee9a
	movs r0, #239	@ 000bee9a ef20
.org 0xbee9c
	ands r0, r1	@ 000bee9c 0840
.org 0xbee9e
	strb r0, [r3, #10]	@ 000bee9e 9872
.org 0xbeea0
	movs r1, #1	@ 000beea0 0121
.org 0xbeea2
	ands r1, r2	@ 000beea2 1140
.org 0xbeea4
	adds r0, r3, #0	@ 000beea4 181c
.org 0xbeea6
	adds r0, #76	@ 000beea6 4c30
.org 0xbeea8
	strb r1, [r0, #0]	@ 000beea8 0170
.org 0xbeeaa
	movs r0, #74	@ 000beeaa 4a20
.org 0xbeeac
	adds r0, r0, r3	@ 000beeac c018
.org 0xbeeae
	mov ip, r0	@ 000beeae 8446
.org 0xbeeb0
	lsls r1, r1, #4	@ 000beeb0 0901
.org 0xbeeb2
	ldrb r2, [r0, #0]	@ 000beeb2 0278
.org 0xbeeb4
	movs r0, #17	@ 000beeb4 1120
.org 0xbeeb6
	negs r0, r0	@ 000beeb6 4042
.org 0xbeeb8
	ands r0, r2	@ 000beeb8 1040
.org 0xbeeba
	orrs r0, r1	@ 000beeba 0843
.org 0xbeebc
	mov r1, ip	@ 000beebc 6146
.org 0xbeebe
	strb r0, [r1, #0]	@ 000beebe 0870
