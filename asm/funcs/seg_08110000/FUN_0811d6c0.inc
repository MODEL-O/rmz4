@ FUN_0811d6c0  entry 0x0811d6c0  size 78
.thumb
.org 0x11d6c0
FUN_0811d6c0:
	push {r4, r5, r6, r7, lr}	@ 0011d6c0 f0b5
.org 0x11d6c2
	mov ip, r0	@ 0011d6c2 8446
.org 0x11d6c4
	movs r6, #0	@ 0011d6c4 0026
.org 0x11d6c6
	movs r7, #15	@ 0011d6c6 0f27
.org 0x11d6c8
	ldr r0, [pc, #68]	@ 0011d6c8 1148
.org 0x11d6ca
	add r0, ip	@ 0011d6ca 6044
.org 0x11d6cc
	adds r5, r0, r6	@ 0011d6cc 8519
.org 0x11d6ce
	ldrb r2, [r5, #0]	@ 0011d6ce 2a78
.org 0x11d6d0
	cmp r2, #255	@ 0011d6d0 ff2a
.org 0x11d6d2
	beq.n 0x11d6fc	@ 0011d6d2 13d0
.org 0x11d6d4
	ldr r0, [pc, #60]	@ 0011d6d4 0f48
.org 0x11d6d6
	ldr r4, [r0, #0]	@ 0011d6d6 0468
.org 0x11d6d8
	lsrs r0, r2, #1	@ 0011d6d8 5008
.org 0x11d6da
	adds r4, r4, r0	@ 0011d6da 2418
.org 0x11d6dc
	ldrb r3, [r4, #0]	@ 0011d6dc 2378
.org 0x11d6de
	movs r0, #1	@ 0011d6de 0120
.org 0x11d6e0
	ands r2, r0	@ 0011d6e0 0240
.org 0x11d6e2
	lsls r2, r2, #2	@ 0011d6e2 9200
.org 0x11d6e4
	adds r1, r3, #0	@ 0011d6e4 191c
.org 0x11d6e6
	asrs r1, r2	@ 0011d6e6 1141
.org 0x11d6e8
	ands r1, r7	@ 0011d6e8 3940
.org 0x11d6ea
	adds r1, #1	@ 0011d6ea 0131
.org 0x11d6ec
	lsls r1, r2	@ 0011d6ec 9140
.org 0x11d6ee
	adds r0, r7, #0	@ 0011d6ee 381c
.org 0x11d6f0
	lsls r0, r2	@ 0011d6f0 9040
.org 0x11d6f2
	bics r3, r0	@ 0011d6f2 8343
.org 0x11d6f4
	orrs r1, r3	@ 0011d6f4 1943
.org 0x11d6f6
	strb r1, [r4, #0]	@ 0011d6f6 2170
.org 0x11d6f8
	movs r0, #255	@ 0011d6f8 ff20
.org 0x11d6fa
	strb r0, [r5, #0]	@ 0011d6fa 2870
.org 0x11d6fc
	adds r0, r6, #1	@ 0011d6fc 701c
.org 0x11d6fe
	lsls r0, r0, #24	@ 0011d6fe 0006
.org 0x11d700
	lsrs r6, r0, #24	@ 0011d700 060e
.org 0x11d702
	cmp r6, #3	@ 0011d702 032e
.org 0x11d704
	bls.n 0x11d6c8	@ 0011d704 e0d9
.org 0x11d706
	movs r0, #1	@ 0011d706 0120
.org 0x11d708
	pop {r4, r5, r6, r7}	@ 0011d708 f0bc
.org 0x11d70a
	pop {r1}	@ 0011d70a 02bc
.org 0x11d70c
	bx r1	@ 0011d70c 0847
