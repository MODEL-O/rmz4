@ FUN_080eab1c  entry 0x080eab1c  size 144
.thumb
.org 0xeab1c
FUN_080eab1c:
	push {r4, r5, r6, lr}	@ 000eab1c 70b5
.org 0xeab1e
	ldr r3, [r0, #44]	@ 000eab1e c36a
.org 0xeab20
	ldr r0, [r0, #12]	@ 000eab20 c068
.org 0xeab22
	ldr r5, [r0, #44]	@ 000eab22 c56a
.org 0xeab24
	adds r0, r3, #0	@ 000eab24 181c
.org 0xeab26
	adds r0, #186	@ 000eab26 ba30
.org 0xeab28
	ldrh r0, [r0, #0]	@ 000eab28 0088
.org 0xeab2a
	cmp r0, #0	@ 000eab2a 0028
.org 0xeab2c
	bne.n 0xeabac	@ 000eab2c 3ed1
.org 0xeab2e
	movs r0, #8	@ 000eab2e 0820
.org 0xeab30
	ldrsb r0, [r5, r0]	@ 000eab30 2856
.org 0xeab32
	cmp r0, #0	@ 000eab32 0028
.org 0xeab34
	bne.n 0xeabac	@ 000eab34 3ad1
.org 0xeab36
	ldrb r2, [r3, #16]	@ 000eab36 1a7c
.org 0xeab38
	movs r6, #2	@ 000eab38 0226
.org 0xeab3a
	adds r0, r6, #0	@ 000eab3a 301c
.org 0xeab3c
	ands r0, r2	@ 000eab3c 1040
.org 0xeab3e
	lsls r0, r0, #24	@ 000eab3e 0006
.org 0xeab40
	lsrs r4, r0, #24	@ 000eab40 040e
.org 0xeab42
	cmp r4, #0	@ 000eab42 002c
.org 0xeab44
	beq.n 0xeab72	@ 000eab44 15d0
.org 0xeab46
	ldr r0, [pc, #32]	@ 000eab46 0848
.org 0xeab48
	ldrb r1, [r0, #4]	@ 000eab48 0179
.org 0xeab4a
	movs r0, #8	@ 000eab4a 0820
.org 0xeab4c
	ands r0, r1	@ 000eab4c 0840
.org 0xeab4e
	lsls r0, r0, #24	@ 000eab4e 0006
.org 0xeab50
	lsrs r2, r0, #24	@ 000eab50 020e
.org 0xeab52
	cmp r2, #0	@ 000eab52 002a
.org 0xeab54
	bne.n 0xeabac	@ 000eab54 2ad1
.org 0xeab56
	ldr r1, [r3, #88]	@ 000eab56 996d
.org 0xeab58
	ldr r0, [r5, #88]	@ 000eab58 a86d
.org 0xeab5a
	cmp r1, r0	@ 000eab5a 8142
.org 0xeab5c
	ble.n 0xeab6c	@ 000eab5c 06dd
.org 0xeab5e
	movs r0, #1	@ 000eab5e 0120
.org 0xeab60
	strb r0, [r3, #13]	@ 000eab60 5873
.org 0xeab62
	strb r2, [r3, #14]	@ 000eab62 9a73
.org 0xeab64
	b.n 0xeab94	@ 000eab64 16e0
.org 0xeab66
	.byte 0x00	@ 000eab66 data
.org 0xeab67
	.byte 0x00	@ 000eab67 data
.org 0xeab68
	.byte 0xb0,0xe8,0x02,0x02	@ 000eab68 data
.org 0xeab6c
	strb r6, [r3, #13]	@ 000eab6c 5e73
.org 0xeab6e
	strb r2, [r3, #14]	@ 000eab6e 9a73
.org 0xeab70
	b.n 0xeab94	@ 000eab70 10e0
.org 0xeab72
	ldr r1, [r3, #88]	@ 000eab72 996d
.org 0xeab74
	ldr r0, [r5, #88]	@ 000eab74 a86d
.org 0xeab76
	cmp r1, r0	@ 000eab76 8142
.org 0xeab78
	ble.n 0xeab88	@ 000eab78 06dd
.org 0xeab7a
	movs r1, #1	@ 000eab7a 0121
.org 0xeab7c
	adds r0, r1, #0	@ 000eab7c 081c
.org 0xeab7e
	ands r0, r2	@ 000eab7e 1040
.org 0xeab80
	cmp r0, #0	@ 000eab80 0028
.org 0xeab82
	bne.n 0xeabac	@ 000eab82 13d1
.org 0xeab84
	strb r1, [r3, #13]	@ 000eab84 5973
.org 0xeab86
	b.n 0xeab92	@ 000eab86 04e0
.org 0xeab88
	movs r0, #1	@ 000eab88 0120
.org 0xeab8a
	ands r0, r2	@ 000eab8a 1040
.org 0xeab8c
	cmp r0, #0	@ 000eab8c 0028
.org 0xeab8e
	beq.n 0xeabac	@ 000eab8e 0dd0
.org 0xeab90
	strb r6, [r3, #13]	@ 000eab90 5e73
.org 0xeab92
	strb r4, [r3, #14]	@ 000eab92 9c73
.org 0xeab94
	ldr r0, [pc, #28]	@ 000eab94 0748
.org 0xeab96
	adds r1, r5, r0	@ 000eab96 2918
.org 0xeab98
	movs r0, #2	@ 000eab98 0220
.org 0xeab9a
	strb r0, [r1, #0]	@ 000eab9a 0870
.org 0xeab9c
	ldr r2, [pc, #24]	@ 000eab9c 064a
.org 0xeab9e
	ldrh r1, [r2, #20]	@ 000eab9e 918a
.org 0xeaba0
	movs r0, #1	@ 000eaba0 0120
.org 0xeaba2
	orrs r0, r1	@ 000eaba2 0843
.org 0xeaba4
	strh r0, [r2, #20]	@ 000eaba4 9082
.org 0xeaba6
	adds r0, r3, #0	@ 000eaba6 181c
.org 0xeaba8
	adds r0, #180	@ 000eaba8 b430
.org 0xeabaa
	str r5, [r0, #0]	@ 000eabaa 0560
