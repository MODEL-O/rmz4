@ FUN_080e9758  entry 0x080e9758  size 88
.thumb
.org 0xe9758
FUN_080e9758:
	push {r4, lr}	@ 000e9758 10b5
.org 0xe975a
	adds r3, r0, #0	@ 000e975a 031c
.org 0xe975c
	ldrb r0, [r3, #14]	@ 000e975c 987b
.org 0xe975e
	cmp r0, #0	@ 000e975e 0028
.org 0xe9760
	bne.n 0xe979a	@ 000e9760 1bd1
.org 0xe9762
	adds r1, r3, #0	@ 000e9762 191c
.org 0xe9764
	adds r1, #140	@ 000e9764 8c31
.org 0xe9766
	ldr r2, [r1, #0]	@ 000e9766 0a68
.org 0xe9768
	movs r0, #128	@ 000e9768 8020
.org 0xe976a
	lsls r0, r0, #9	@ 000e976a 4002
.org 0xe976c
	ands r2, r0	@ 000e976c 0240
.org 0xe976e
	adds r4, r1, #0	@ 000e976e 0c1c
.org 0xe9770
	cmp r2, #0	@ 000e9770 002a
.org 0xe9772
	beq.n 0xe977a	@ 000e9772 02d0
.org 0xe9774
	movs r0, #1	@ 000e9774 0120
.org 0xe9776
	strb r0, [r3, #13]	@ 000e9776 5873
.org 0xe9778
	b.n 0xe977c	@ 000e9778 00e0
.org 0xe977a
	strb r2, [r3, #13]	@ 000e977a 5a73
.org 0xe977c
	movs r1, #0	@ 000e977c 0021
.org 0xe977e
	str r1, [r4, #0]	@ 000e977e 2160
.org 0xe9780
	adds r0, r3, #0	@ 000e9780 181c
.org 0xe9782
	adds r0, #144	@ 000e9782 9030
.org 0xe9784
	str r1, [r0, #0]	@ 000e9784 0160
.org 0xe9786
	adds r0, #4	@ 000e9786 0430
.org 0xe9788
	strb r1, [r0, #0]	@ 000e9788 0170
.org 0xe978a
	ldrb r1, [r3, #10]	@ 000e978a 997a
.org 0xe978c
	movs r0, #251	@ 000e978c fb20
.org 0xe978e
	ands r0, r1	@ 000e978e 0840
.org 0xe9790
	strb r0, [r3, #10]	@ 000e9790 9872
.org 0xe9792
	ldrb r1, [r3, #11]	@ 000e9792 d97a
.org 0xe9794
	movs r0, #247	@ 000e9794 f720
.org 0xe9796
	ands r0, r1	@ 000e9796 0840
.org 0xe9798
	strb r0, [r3, #11]	@ 000e9798 d872
.org 0xe979a
	ldr r0, [pc, #20]	@ 000e979a 0548
.org 0xe979c
	ldrb r1, [r3, #13]	@ 000e979c 597b
.org 0xe979e
	lsls r1, r1, #2	@ 000e979e 8900
.org 0xe97a0
	adds r1, r1, r0	@ 000e97a0 0918
.org 0xe97a2
	ldr r1, [r1, #0]	@ 000e97a2 0968
.org 0xe97a4
	adds r0, r3, #0	@ 000e97a4 181c
.org 0xe97a6
	bl 0x128f80	@ 000e97a6 3ff0ebfb
.org 0xe97aa
	pop {r4}	@ 000e97aa 10bc
.org 0xe97ac
	pop {r0}	@ 000e97ac 01bc
.org 0xe97ae
	bx r0	@ 000e97ae 0047
