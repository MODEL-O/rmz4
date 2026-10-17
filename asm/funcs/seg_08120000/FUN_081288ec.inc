@ FUN_081288ec  entry 0x081288ec  size 110
.thumb
.org 0x1288ec
FUN_081288ec:
	push {r4, r5, r6, r7, lr}	@ 001288ec f0b5
.org 0x1288ee
	mov r7, sl	@ 001288ee 5746
.org 0x1288f0
	mov r6, r9	@ 001288f0 4e46
.org 0x1288f2
	mov r5, r8	@ 001288f2 4546
.org 0x1288f4
	push {r5, r6, r7}	@ 001288f4 e0b4
.org 0x1288f6
	adds r6, r0, #0	@ 001288f6 061c
.org 0x1288f8
	lsls r1, r1, #16	@ 001288f8 0904
.org 0x1288fa
	lsrs r1, r1, #16	@ 001288fa 090c
.org 0x1288fc
	mov sl, r1	@ 001288fc 8a46
.org 0x1288fe
	lsls r2, r2, #24	@ 001288fe 1206
.org 0x128900
	lsrs r2, r2, #24	@ 00128900 120e
.org 0x128902
	mov r8, r2	@ 00128902 9046
.org 0x128904
	ldr r1, [r6, #52]	@ 00128904 716b
.org 0x128906
	ldr r0, [pc, #84]	@ 00128906 1548
.org 0x128908
	cmp r1, r0	@ 00128908 8142
.org 0x12890a
	bne.n 0x12894c	@ 0012890a 1fd1
.org 0x12890c
	adds r0, r1, #1	@ 0012890c 481c
.org 0x12890e
	str r0, [r6, #52]	@ 0012890e 7063
.org 0x128910
	ldrb r5, [r6, #8]	@ 00128910 357a
.org 0x128912
	ldr r4, [r6, #44]	@ 00128912 f46a
.org 0x128914
	movs r7, #1	@ 00128914 0127
.org 0x128916
	cmp r5, #0	@ 00128916 002d
.org 0x128918
	ble.n 0x128948	@ 00128918 16dd
.org 0x12891a
	mov r9, r8	@ 0012891a c146
.org 0x12891c
	mov r0, sl	@ 0012891c 5046
.org 0x12891e
	ands r0, r7	@ 0012891e 3840
.org 0x128920
	cmp r0, #0	@ 00128920 0028
.org 0x128922
	beq.n 0x12893e	@ 00128922 0cd0
.org 0x128924
	movs r0, #128	@ 00128924 8020
.org 0x128926
	ldrb r1, [r4, #0]	@ 00128926 2178
.org 0x128928
	ands r0, r1	@ 00128928 0840
.org 0x12892a
	cmp r0, #0	@ 0012892a 0028
.org 0x12892c
	beq.n 0x12893e	@ 0012892c 07d0
.org 0x12892e
	mov r0, r8	@ 0012892e 4046
.org 0x128930
	strb r0, [r4, #25]	@ 00128930 6076
.org 0x128932
	mov r1, r9	@ 00128932 4946
.org 0x128934
	cmp r1, #0	@ 00128934 0029
.org 0x128936
	bne.n 0x12893e	@ 00128936 02d1
.org 0x128938
	adds r0, r4, #0	@ 00128938 201c
.org 0x12893a
	bl 0x128858	@ 0012893a fff78dff
.org 0x12893e
	subs r5, #1	@ 0012893e 013d
.org 0x128940
	adds r4, #80	@ 00128940 5034
.org 0x128942
	lsls r7, r7, #1	@ 00128942 7f00
.org 0x128944
	cmp r5, #0	@ 00128944 002d
.org 0x128946
	bgt.n 0x12891c	@ 00128946 e9dc
.org 0x128948
	ldr r0, [pc, #16]	@ 00128948 0448
.org 0x12894a
	str r0, [r6, #52]	@ 0012894a 7063
.org 0x12894c
	pop {r3, r4, r5}	@ 0012894c 38bc
.org 0x12894e
	mov r8, r3	@ 0012894e 9846
.org 0x128950
	mov r9, r4	@ 00128950 a146
.org 0x128952
	mov sl, r5	@ 00128952 aa46
.org 0x128954
	pop {r4, r5, r6, r7}	@ 00128954 f0bc
.org 0x128956
	pop {r0}	@ 00128956 01bc
.org 0x128958
	bx r0	@ 00128958 0047
