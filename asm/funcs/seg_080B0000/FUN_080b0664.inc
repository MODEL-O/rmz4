@ FUN_080b0664  entry 0x080b0664  size 84
.thumb
.org 0xb0664
FUN_080b0664:
	push {r4, r5, r6, lr}	@ 000b0664 70b5
.org 0xb0666
	adds r6, r0, #0	@ 000b0666 061c
.org 0xb0668
	ldr r0, [r6, #84]	@ 000b0668 706d
.org 0xb066a
	ldr r1, [r6, #88]	@ 000b066a b16d
.org 0xb066c
	bl 0x8534	@ 000b066c 57f762ff
.org 0xb0670
	str r0, [r6, #88]	@ 000b0670 b065
.org 0xb0672
	adds r0, r6, #0	@ 000b0672 301c
.org 0xb0674
	adds r0, #183	@ 000b0674 b730
.org 0xb0676
	movs r5, #0	@ 000b0676 0025
.org 0xb0678
	strb r5, [r0, #0]	@ 000b0678 0570
.org 0xb067a
	subs r0, #2	@ 000b067a 0238
.org 0xb067c
	strb r5, [r0, #0]	@ 000b067c 0570
.org 0xb067e
	movs r0, #255	@ 000b067e ff20
.org 0xb0680
	strb r0, [r6, #18]	@ 000b0680 b074
.org 0xb0682
	movs r0, #2	@ 000b0682 0220
.org 0xb0684
	strb r0, [r6, #17]	@ 000b0684 7074
.org 0xb0686
	movs r1, #178	@ 000b0686 b221
.org 0xb0688
	lsls r1, r1, #8	@ 000b0688 0902
.org 0xb068a
	adds r0, r6, #0	@ 000b068a 301c
.org 0xb068c
	bl 0x1cf00	@ 000b068c 6cf738fc
.org 0xb0690
	ldrb r1, [r6, #10]	@ 000b0690 b17a
.org 0xb0692
	movs r0, #4	@ 000b0692 0420
.org 0xb0694
	orrs r0, r1	@ 000b0694 0843
.org 0xb0696
	strb r0, [r6, #10]	@ 000b0696 b072
.org 0xb0698
	adds r4, r6, #0	@ 000b0698 341c
.org 0xb069a
	adds r4, #116	@ 000b069a 7434
.org 0xb069c
	ldr r1, [pc, #24]	@ 000b069c 0649
.org 0xb069e
	adds r2, r6, #0	@ 000b069e 321c
.org 0xb06a0
	adds r2, #84	@ 000b06a0 5432
.org 0xb06a2
	adds r0, r4, #0	@ 000b06a2 201c
.org 0xb06a4
	movs r3, #12	@ 000b06a4 0c23
.org 0xb06a6
	bl 0x5760	@ 000b06a6 55f75bf8
.org 0xb06aa
	str r6, [r4, #44]	@ 000b06aa e662
.org 0xb06ac
	ldr r0, [pc, #12]	@ 000b06ac 0348
.org 0xb06ae
	str r0, [r4, #36]	@ 000b06ae 6062
.org 0xb06b0
	strb r5, [r6, #13]	@ 000b06b0 7573
.org 0xb06b2
	pop {r4, r5, r6}	@ 000b06b2 70bc
.org 0xb06b4
	pop {r0}	@ 000b06b4 01bc
.org 0xb06b6
	bx r0	@ 000b06b6 0047
