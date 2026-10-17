@ FUN_08099730  entry 0x08099730  size 194
.thumb
.org 0x99730
FUN_08099730:
	push {r4, r5, r6, lr}	@ 00099730 70b5
.org 0x99732
	adds r4, r0, #0	@ 00099732 041c
.org 0x99734
	adds r0, #140	@ 00099734 8c30
.org 0x99736
	ldr r1, [r0, #0]	@ 00099736 0168
.org 0x99738
	movs r0, #128	@ 00099738 8020
.org 0x9973a
	lsls r0, r0, #2	@ 0009973a 8000
.org 0x9973c
	ands r0, r1	@ 0009973c 0840
.org 0x9973e
	cmp r0, #0	@ 0009973e 0028
.org 0x99740
	beq.n 0x99760	@ 00099740 0ed0
.org 0x99742
	ldr r1, [pc, #24]	@ 00099742 0649
.org 0x99744
	ldrb r0, [r4, #9]	@ 00099744 607a
.org 0x99746
	lsls r0, r0, #2	@ 00099746 8000
.org 0x99748
	adds r0, r0, r1	@ 00099748 4018
.org 0x9974a
	movs r1, #2	@ 0009974a 0221
.org 0x9974c
	str r1, [r4, #12]	@ 0009974c e160
.org 0x9974e
	ldr r0, [r0, #0]	@ 0009974e 0068
.org 0x99750
	ldr r0, [r0, #8]	@ 00099750 8068
.org 0x99752
	str r0, [r4, #20]	@ 00099752 6061
.org 0x99754
	adds r0, r4, #0	@ 00099754 201c
.org 0x99756
	bl 0x99808	@ 00099756 00f057f8
.org 0x9975a
	b.n 0x997fa	@ 0009975a 4ee0
.org 0x9975c
	.byte 0x40,0xdb,0x85,0x08	@ 0009975c data
.org 0x99760
	adds r0, r4, #0	@ 00099760 201c
.org 0x99762
	adds r0, #192	@ 00099762 c030
.org 0x99764
	ldr r5, [r0, #0]	@ 00099764 0568
.org 0x99766
	adds r6, r0, #0	@ 00099766 061c
.org 0x99768
	cmp r5, #0	@ 00099768 002d
.org 0x9976a
	bne.n 0x997a4	@ 0009976a 1bd1
.org 0x9976c
	movs r0, #1	@ 0009976c 0120
.org 0x9976e
	ands r1, r0	@ 0009976e 0140
.org 0x99770
	cmp r1, #0	@ 00099770 0029
.org 0x99772
	beq.n 0x9979e	@ 00099772 14d0
.org 0x99774
	ldr r2, [pc, #92]	@ 00099774 174a
.org 0x99776
	movs r0, #0	@ 00099776 0020
.org 0x99778
	adds r1, r4, #0	@ 00099778 211c
.org 0x9977a
	bl 0x2adac	@ 0009977a 91f717fb
.org 0x9977e
	str r0, [r6, #0]	@ 0009977e 3060
.org 0x99780
	cmp r0, #0	@ 00099780 0028
.org 0x99782
	beq.n 0x997ea	@ 00099782 32d0
.org 0x99784
	movs r1, #210	@ 00099784 d221
.org 0x99786
	lsls r1, r1, #7	@ 00099786 c901
.org 0x99788
	adds r0, r4, #0	@ 00099788 201c
.org 0x9978a
	bl 0x1cf00	@ 0009978a 83f7b9fb
.org 0x9978e
	adds r0, r4, #0	@ 0009978e 201c
.org 0x99790
	adds r0, #116	@ 00099790 7430
.org 0x99792
	ldr r1, [pc, #68]	@ 00099792 1149
.org 0x99794
	bl 0x5784	@ 00099794 6bf7f6ff
.org 0x99798
	str r5, [r4, #96]	@ 00099798 2566
.org 0x9979a
	strb r5, [r4, #13]	@ 0009979a 6573
.org 0x9979c
	strb r5, [r4, #14]	@ 0009979c a573
.org 0x9979e
	ldr r0, [r6, #0]	@ 0009979e 3068
.org 0x997a0
	cmp r0, #0	@ 000997a0 0028
.org 0x997a2
	beq.n 0x997ea	@ 000997a2 22d0
.org 0x997a4
	ldr r0, [r4, #88]	@ 000997a4 a06d
.org 0x997a6
	ldr r1, [r4, #96]	@ 000997a6 216e
.org 0x997a8
	adds r0, r0, r1	@ 000997a8 4018
.org 0x997aa
	str r0, [r4, #88]	@ 000997aa a065
.org 0x997ac
	adds r1, #64	@ 000997ac 4031
.org 0x997ae
	str r1, [r4, #96]	@ 000997ae 2166
.org 0x997b0
	adds r1, r4, #0	@ 000997b0 211c
.org 0x997b2
	adds r1, #184	@ 000997b2 b831
.org 0x997b4
	ldr r1, [r1, #0]	@ 000997b4 0968
.org 0x997b6
	cmp r0, r1	@ 000997b6 8842
.org 0x997b8
	ble.n 0x997c0	@ 000997b8 02dd
.org 0x997ba
	str r1, [r4, #88]	@ 000997ba a165
.org 0x997bc
	movs r0, #0	@ 000997bc 0020
.org 0x997be
	str r0, [r4, #96]	@ 000997be 2066
.org 0x997c0
	ldr r0, [r6, #0]	@ 000997c0 3068
.org 0x997c2
	bl 0x2b3e4	@ 000997c2 91f70ffe
.org 0x997c6
	cmp r0, #0	@ 000997c6 0028
.org 0x997c8
	bne.n 0x997dc	@ 000997c8 08d1
.org 0x997ca
	adds r0, r4, #0	@ 000997ca 201c
.org 0x997cc
	bl 0x1cff0	@ 000997cc 83f710fc
.org 0x997d0
	b.n 0x997fa	@ 000997d0 13e0
.org 0x997d2
	.byte 0x00	@ 000997d2 data
.org 0x997d3
	.byte 0x00	@ 000997d3 data
.org 0x997d4
	.byte 0x34,0x0e,0x86,0x08	@ 000997d4 data
.org 0x997d8
	.byte 0x7c,0x0d,0x86,0x08	@ 000997d8 data
.org 0x997dc
	adds r0, r4, #0	@ 000997dc 201c
.org 0x997de
	adds r0, #116	@ 000997de 7430
.org 0x997e0
	ldr r1, [pc, #28]	@ 000997e0 0749
.org 0x997e2
	bl 0x5784	@ 000997e2 6bf7cfff
.org 0x997e6
	movs r0, #0	@ 000997e6 0020
.org 0x997e8
	str r0, [r6, #0]	@ 000997e8 3060
.org 0x997ea
	ldr r0, [pc, #24]	@ 000997ea 0648
.org 0x997ec
	ldrb r1, [r4, #13]	@ 000997ec 617b
.org 0x997ee
	lsls r1, r1, #2	@ 000997ee 8900
.org 0x997f0
	adds r1, r1, r0	@ 000997f0 0918
