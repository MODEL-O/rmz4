@ FUN_0810dae0  entry 0x0810dae0  size 144
.thumb
.org 0x10dae0
FUN_0810dae0:
	push {r4, r5, r6, r7, lr}	@ 0010dae0 f0b5
.org 0x10dae2
	mov r7, sl	@ 0010dae2 5746
.org 0x10dae4
	mov r6, r9	@ 0010dae4 4e46
.org 0x10dae6
	mov r5, r8	@ 0010dae6 4546
.org 0x10dae8
	push {r5, r6, r7}	@ 0010dae8 e0b4
.org 0x10daea
	sub sp, #20	@ 0010daea 85b0
.org 0x10daec
	mov r8, r0	@ 0010daec 8046
.org 0x10daee
	lsls r1, r1, #16	@ 0010daee 0904
.org 0x10daf0
	lsrs r1, r1, #16	@ 0010daf0 090c
.org 0x10daf2
	mov r9, r1	@ 0010daf2 8946
.org 0x10daf4
	lsls r2, r2, #16	@ 0010daf4 1204
.org 0x10daf6
	lsrs r2, r2, #16	@ 0010daf6 120c
.org 0x10daf8
	mov sl, r2	@ 0010daf8 9246
.org 0x10dafa
	mov r6, r8	@ 0010dafa 4646
.org 0x10dafc
	cmp r6, #0	@ 0010dafc 002e
.org 0x10dafe
	bge.n 0x10db02	@ 0010dafe 00da
.org 0x10db00
	negs r6, r6	@ 0010db00 7642
.org 0x10db02
	mov r1, sp	@ 0010db02 6946
.org 0x10db04
	movs r0, #0	@ 0010db04 0020
.org 0x10db06
	strb r0, [r1, #16]	@ 0010db06 0874
.org 0x10db08
	movs r7, #15	@ 0010db08 0f27
.org 0x10db0a
	b.n 0x10db1c	@ 0010db0a 07e0
.org 0x10db0c
	adds r0, r6, #0	@ 0010db0c 301c
.org 0x10db0e
	movs r1, #10	@ 0010db0e 0a21
.org 0x10db10
	bl 0x128fb8	@ 0010db10 1bf052fa
.org 0x10db14
	adds r6, r0, #0	@ 0010db14 061c
.org 0x10db16
	subs r0, r5, #1	@ 0010db16 681e
.org 0x10db18
	lsls r0, r0, #16	@ 0010db18 0004
.org 0x10db1a
	lsrs r7, r0, #16	@ 0010db1a 070c
.org 0x10db1c
	lsls r0, r7, #16	@ 0010db1c 3804
.org 0x10db1e
	asrs r5, r0, #16	@ 0010db1e 0514
.org 0x10db20
	cmp r5, #0	@ 0010db20 002d
.org 0x10db22
	ble.n 0x10db38	@ 0010db22 09dd
.org 0x10db24
	mov r0, sp	@ 0010db24 6846
.org 0x10db26
	adds r4, r0, r5	@ 0010db26 4419
.org 0x10db28
	adds r0, r6, #0	@ 0010db28 301c
.org 0x10db2a
	movs r1, #10	@ 0010db2a 0a21
.org 0x10db2c
	bl 0x129050	@ 0010db2c 1bf090fa
.org 0x10db30
	adds r0, #48	@ 0010db30 3030
.org 0x10db32
	strb r0, [r4, #0]	@ 0010db32 2070
.org 0x10db34
	cmp r6, #9	@ 0010db34 092e
.org 0x10db36
	bgt.n 0x10db0c	@ 0010db36 e9dc
.org 0x10db38
	mov r2, r8	@ 0010db38 4246
.org 0x10db3a
	cmp r2, #0	@ 0010db3a 002a
.org 0x10db3c
	bge.n 0x10db4e	@ 0010db3c 07da
.org 0x10db3e
	subs r0, r5, #1	@ 0010db3e 681e
.org 0x10db40
	lsls r0, r0, #16	@ 0010db40 0004
.org 0x10db42
	lsrs r7, r0, #16	@ 0010db42 070c
.org 0x10db44
	asrs r0, r0, #16	@ 0010db44 0014
.org 0x10db46
	mov r2, sp	@ 0010db46 6a46
.org 0x10db48
	adds r1, r2, r0	@ 0010db48 1118
.org 0x10db4a
	movs r0, #45	@ 0010db4a 2d20
.org 0x10db4c
	strb r0, [r1, #0]	@ 0010db4c 0870
.org 0x10db4e
	lsls r1, r7, #16	@ 0010db4e 3904
.org 0x10db50
	asrs r1, r1, #16	@ 0010db50 0914
.org 0x10db52
	mov r2, sp	@ 0010db52 6a46
.org 0x10db54
	adds r0, r2, r1	@ 0010db54 5018
.org 0x10db56
	subs r1, #15	@ 0010db56 0f39
.org 0x10db58
	add r1, r9	@ 0010db58 4944
.org 0x10db5a
	mov r2, sl	@ 0010db5a 5246
.org 0x10db5c
	bl 0x10da2c	@ 0010db5c fff766ff
.org 0x10db60
	add sp, #20	@ 0010db60 05b0
.org 0x10db62
	pop {r3, r4, r5}	@ 0010db62 38bc
.org 0x10db64
	mov r8, r3	@ 0010db64 9846
.org 0x10db66
	mov r9, r4	@ 0010db66 a146
.org 0x10db68
	mov sl, r5	@ 0010db68 aa46
.org 0x10db6a
	pop {r4, r5, r6, r7}	@ 0010db6a f0bc
.org 0x10db6c
	pop {r0}	@ 0010db6c 01bc
.org 0x10db6e
	bx r0	@ 0010db6e 0047
