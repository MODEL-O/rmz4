@ FUN_081287f0  entry 0x081287f0  size 100
.thumb
.org 0x1287f0
FUN_081287f0:
	push {r4, r5, r6, r7, lr}	@ 001287f0 f0b5
.org 0x1287f2
	mov r7, r9	@ 001287f2 4f46
.org 0x1287f4
	mov r6, r8	@ 001287f4 4646
.org 0x1287f6
	push {r6, r7}	@ 001287f6 c0b4
.org 0x1287f8
	adds r4, r0, #0	@ 001287f8 041c
.org 0x1287fa
	lsls r1, r1, #16	@ 001287fa 0904
.org 0x1287fc
	lsrs r7, r1, #16	@ 001287fc 0f0c
.org 0x1287fe
	lsls r2, r2, #24	@ 001287fe 1206
.org 0x128800
	lsrs r6, r2, #24	@ 00128800 160e
.org 0x128802
	ldr r3, [r4, #52]	@ 00128802 636b
.org 0x128804
	ldr r0, [pc, #76]	@ 00128804 1348
.org 0x128806
	cmp r3, r0	@ 00128806 8342
.org 0x128808
	bne.n 0x128848	@ 00128808 1ed1
.org 0x12880a
	adds r0, r3, #1	@ 0012880a 581c
.org 0x12880c
	str r0, [r4, #52]	@ 0012880c 6063
.org 0x12880e
	ldrb r2, [r4, #8]	@ 0012880e 227a
.org 0x128810
	ldr r1, [r4, #44]	@ 00128810 e16a
.org 0x128812
	movs r5, #1	@ 00128812 0125
.org 0x128814
	cmp r2, #0	@ 00128814 002a
.org 0x128816
	ble.n 0x128844	@ 00128816 15dd
.org 0x128818
	movs r0, #128	@ 00128818 8020
.org 0x12881a
	mov r8, r0	@ 0012881a 8046
.org 0x12881c
	movs r0, #3	@ 0012881c 0320
.org 0x12881e
	mov ip, r0	@ 0012881e 8446
.org 0x128820
	adds r0, r7, #0	@ 00128820 381c
.org 0x128822
	ands r0, r5	@ 00128822 2840
.org 0x128824
	cmp r0, #0	@ 00128824 0028
.org 0x128826
	beq.n 0x12883a	@ 00128826 08d0
.org 0x128828
	ldrb r3, [r1, #0]	@ 00128828 0b78
.org 0x12882a
	mov r0, r8	@ 0012882a 4046
.org 0x12882c
	ands r0, r3	@ 0012882c 1840
.org 0x12882e
	cmp r0, #0	@ 0012882e 0028
.org 0x128830
	beq.n 0x12883a	@ 00128830 03d0
.org 0x128832
	strb r6, [r1, #21]	@ 00128832 4e75
.org 0x128834
	mov r0, ip	@ 00128834 6046
.org 0x128836
	orrs r0, r3	@ 00128836 1843
.org 0x128838
	strb r0, [r1, #0]	@ 00128838 0870
.org 0x12883a
	subs r2, #1	@ 0012883a 013a
.org 0x12883c
	adds r1, #80	@ 0012883c 5031
.org 0x12883e
	lsls r5, r5, #1	@ 0012883e 6d00
.org 0x128840
	cmp r2, #0	@ 00128840 002a
.org 0x128842
	bgt.n 0x128820	@ 00128842 eddc
.org 0x128844
	ldr r0, [pc, #12]	@ 00128844 0348
.org 0x128846
	str r0, [r4, #52]	@ 00128846 6063
.org 0x128848
	pop {r3, r4}	@ 00128848 18bc
.org 0x12884a
	mov r8, r3	@ 0012884a 9846
.org 0x12884c
	mov r9, r4	@ 0012884c a146
.org 0x12884e
	pop {r4, r5, r6, r7}	@ 0012884e f0bc
.org 0x128850
	pop {r0}	@ 00128850 01bc
.org 0x128852
	bx r0	@ 00128852 0047
