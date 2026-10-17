@ FUN_0810a080  entry 0x0810a080  size 146
.thumb
.org 0x10a080
FUN_0810a080:
	push {r4, r5, lr}	@ 0010a080 30b5
.org 0x10a082
	adds r4, r0, #0	@ 0010a082 041c
.org 0x10a084
	adds r0, #180	@ 0010a084 b430
.org 0x10a086
	ldr r5, [r0, #0]	@ 0010a086 0568
.org 0x10a088
	ldr r0, [r4, #84]	@ 0010a088 606d
.org 0x10a08a
	ldr r1, [r4, #92]	@ 0010a08a e16d
.org 0x10a08c
	adds r0, r0, r1	@ 0010a08c 4018
.org 0x10a08e
	str r0, [r4, #84]	@ 0010a08e 6065
.org 0x10a090
	ldr r0, [r4, #88]	@ 0010a090 a06d
.org 0x10a092
	ldr r1, [r4, #96]	@ 0010a092 216e
.org 0x10a094
	adds r0, r0, r1	@ 0010a094 4018
.org 0x10a096
	str r0, [r4, #88]	@ 0010a096 a065
.org 0x10a098
	adds r1, #64	@ 0010a098 4031
.org 0x10a09a
	str r1, [r4, #96]	@ 0010a09a 2166
.org 0x10a09c
	movs r0, #224	@ 0010a09c e020
.org 0x10a09e
	lsls r0, r0, #3	@ 0010a09e c000
.org 0x10a0a0
	cmp r1, r0	@ 0010a0a0 8142
.org 0x10a0a2
	ble.n 0x10a0a6	@ 0010a0a2 00dd
.org 0x10a0a4
	str r0, [r4, #96]	@ 0010a0a4 2066
.org 0x10a0a6
	ldr r0, [r4, #92]	@ 0010a0a6 e06d
.org 0x10a0a8
	lsls r0, r0, #16	@ 0010a0a8 0004
.org 0x10a0aa
	asrs r0, r0, #16	@ 0010a0aa 0014
.org 0x10a0ac
	ldr r1, [r4, #96]	@ 0010a0ac 216e
.org 0x10a0ae
	lsls r1, r1, #16	@ 0010a0ae 0904
.org 0x10a0b0
	asrs r1, r1, #16	@ 0010a0b0 0914
.org 0x10a0b2
	bl 0x128bdc	@ 0010a0b2 1ef093fd
.org 0x10a0b6
	lsls r0, r0, #16	@ 0010a0b6 0004
.org 0x10a0b8
	lsrs r0, r0, #16	@ 0010a0b8 000c
.org 0x10a0ba
	movs r1, #128	@ 0010a0ba 8021
.org 0x10a0bc
	lsls r1, r1, #7	@ 0010a0bc c901
.org 0x10a0be
	adds r0, r0, r1	@ 0010a0be 4018
.org 0x10a0c0
	asrs r0, r0, #8	@ 0010a0c0 0012
.org 0x10a0c2
	adds r1, r4, #0	@ 0010a0c2 211c
.org 0x10a0c4
	adds r1, #36	@ 0010a0c4 2431
.org 0x10a0c6
	strb r0, [r1, #0]	@ 0010a0c6 0870
.org 0x10a0c8
	adds r0, r4, #0	@ 0010a0c8 201c
.org 0x10a0ca
	bl 0x10a168	@ 0010a0ca 00f04df8
.org 0x10a0ce
	lsls r0, r0, #24	@ 0010a0ce 0006
.org 0x10a0d0
	lsrs r0, r0, #24	@ 0010a0d0 000e
.org 0x10a0d2
	ldrb r1, [r4, #18]	@ 0010a0d2 a17c
.org 0x10a0d4
	subs r2, r1, #1	@ 0010a0d4 4a1e
.org 0x10a0d6
	strb r2, [r4, #18]	@ 0010a0d6 a274
.org 0x10a0d8
	cmp r0, #1	@ 0010a0d8 0128
.org 0x10a0da
	beq.n 0x10a0f0	@ 0010a0da 09d0
.org 0x10a0dc
	adds r0, r4, #0	@ 0010a0dc 201c
.org 0x10a0de
	adds r0, #140	@ 0010a0de 8c30
.org 0x10a0e0
	ldr r0, [r0, #0]	@ 0010a0e0 0068
.org 0x10a0e2
	ldr r1, [pc, #48]	@ 0010a0e2 0c49
.org 0x10a0e4
	ands r0, r1	@ 0010a0e4 0840
.org 0x10a0e6
	cmp r0, #0	@ 0010a0e6 0028
.org 0x10a0e8
	bne.n 0x10a0f0	@ 0010a0e8 02d1
.org 0x10a0ea
	lsls r0, r2, #24	@ 0010a0ea 1006
.org 0x10a0ec
	cmp r0, #0	@ 0010a0ec 0028
.org 0x10a0ee
	bne.n 0x10a10c	@ 0010a0ee 0dd1
.org 0x10a0f0
	adds r0, r5, #0	@ 0010a0f0 281c
.org 0x10a0f2
	adds r1, r4, #0	@ 0010a0f2 211c
.org 0x10a0f4
	movs r2, #3	@ 0010a0f4 0322
.org 0x10a0f6
	bl 0x1098d4	@ 0010a0f6 fff7edfb
.org 0x10a0fa
	ldr r1, [pc, #28]	@ 0010a0fa 0749
.org 0x10a0fc
	ldrb r0, [r4, #9]	@ 0010a0fc 607a
.org 0x10a0fe
	lsls r0, r0, #2	@ 0010a0fe 8000
.org 0x10a100
	adds r0, r0, r1	@ 0010a100 4018
.org 0x10a102
	movs r1, #2	@ 0010a102 0221
.org 0x10a104
	str r1, [r4, #12]	@ 0010a104 e160
.org 0x10a106
	ldr r0, [r0, #0]	@ 0010a106 0068
.org 0x10a108
	ldr r0, [r0, #8]	@ 0010a108 8068
.org 0x10a10a
	str r0, [r4, #20]	@ 0010a10a 6061
.org 0x10a10c
	pop {r4, r5}	@ 0010a10c 30bc
.org 0x10a10e
	pop {r0}	@ 0010a10e 01bc
.org 0x10a110
	bx r0	@ 0010a110 0047
