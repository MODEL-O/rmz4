@ FUN_080aea88  entry 0x080aea88  size 96
.thumb
.org 0xaea88
FUN_080aea88:
	push {r4, r5, r6, r7, lr}	@ 000aea88 f0b5
.org 0xaea8a
	adds r6, r0, #0	@ 000aea8a 061c
.org 0xaea8c
	adds r7, r1, #0	@ 000aea8c 0f1c
.org 0xaea8e
	lsls r2, r2, #24	@ 000aea8e 1206
.org 0xaea90
	lsrs r5, r2, #24	@ 000aea90 150e
.org 0xaea92
	lsls r3, r3, #24	@ 000aea92 1b06
.org 0xaea94
	lsrs r4, r3, #24	@ 000aea94 1c0e
.org 0xaea96
	ldr r0, [pc, #80]	@ 000aea96 1448
.org 0xaea98
	ldr r0, [r0, #0]	@ 000aea98 0068
.org 0xaea9a
	bl 0x5500	@ 000aea9a 56f731fd
.org 0xaea9e
	adds r3, r0, #0	@ 000aea9e 031c
.org 0xaeaa0
	cmp r3, #0	@ 000aeaa0 002b
.org 0xaeaa2
	beq.n 0xaeae2	@ 000aeaa2 1ed0
.org 0xaeaa4
	adds r1, r3, #0	@ 000aeaa4 191c
.org 0xaeaa6
	adds r1, #37	@ 000aeaa6 2531
.org 0xaeaa8
	movs r2, #0	@ 000aeaa8 0022
.org 0xaeaaa
	movs r0, #24	@ 000aeaaa 1820
.org 0xaeaac
	strb r0, [r1, #0]	@ 000aeaac 0870
.org 0xaeaae
	ldr r0, [pc, #60]	@ 000aeaae 0f48
.org 0xaeab0
	movs r1, #82	@ 000aeab0 5221
.org 0xaeab2
	strb r1, [r3, #9]	@ 000aeab2 5972
.org 0xaeab4
	adds r1, #246	@ 000aeab4 f631
.org 0xaeab6
	adds r0, r0, r1	@ 000aeab6 4018
.org 0xaeab8
	ldr r0, [r0, #0]	@ 000aeab8 0068
.org 0xaeaba
	ldr r0, [r0, #0]	@ 000aeaba 0068
.org 0xaeabc
	str r0, [r3, #20]	@ 000aeabc 5861
.org 0xaeabe
	movs r0, #0	@ 000aeabe 0020
.org 0xaeac0
	strh r2, [r3, #32]	@ 000aeac0 1a84
.org 0xaeac2
	adds r1, r3, #0	@ 000aeac2 191c
.org 0xaeac4
	adds r1, #34	@ 000aeac4 2231
.org 0xaeac6
	strb r0, [r1, #0]	@ 000aeac6 0870
.org 0xaeac8
	ldrb r1, [r3, #11]	@ 000aeac8 d97a
.org 0xaeaca
	movs r0, #16	@ 000aeaca 1020
.org 0xaeacc
	orrs r0, r1	@ 000aeacc 0843
.org 0xaeace
	strb r0, [r3, #11]	@ 000aeace d872
.org 0xaead0
	ldrb r0, [r3, #28]	@ 000aead0 187f
.org 0xaead2
	strb r0, [r3, #29]	@ 000aead2 5877
.org 0xaead4
	str r6, [r3, #40]	@ 000aead4 9e62
.org 0xaead6
	ldr r0, [r7, #0]	@ 000aead6 3868
.org 0xaead8
	ldr r1, [r7, #4]	@ 000aead8 7968
.org 0xaeada
	str r0, [r3, #84]	@ 000aeada 5865
.org 0xaeadc
	str r1, [r3, #88]	@ 000aeadc 9965
.org 0xaeade
	strb r5, [r3, #16]	@ 000aeade 1d74
.org 0xaeae0
	strb r4, [r3, #17]	@ 000aeae0 5c74
.org 0xaeae2
	pop {r4, r5, r6, r7}	@ 000aeae2 f0bc
.org 0xaeae4
	pop {r0}	@ 000aeae4 01bc
.org 0xaeae6
	bx r0	@ 000aeae6 0047
