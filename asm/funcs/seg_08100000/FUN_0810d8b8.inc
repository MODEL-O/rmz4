@ FUN_0810d8b8  entry 0x0810d8b8  size 94
.thumb
.org 0x10d8b8
FUN_0810d8b8:
	push {r4, r5, r6, lr}	@ 0010d8b8 70b5
.org 0x10d8ba
	adds r4, r0, #0	@ 0010d8ba 041c
.org 0x10d8bc
	adds r5, r1, #0	@ 0010d8bc 0d1c
.org 0x10d8be
	lsls r3, r3, #16	@ 0010d8be 1b04
.org 0x10d8c0
	lsrs r3, r3, #16	@ 0010d8c0 1b0c
.org 0x10d8c2
	ldr r0, [pc, #84]	@ 0010d8c2 1548
.org 0x10d8c4
	mov ip, r0	@ 0010d8c4 8446
.org 0x10d8c6
	movs r1, #4	@ 0010d8c6 0421
.org 0x10d8c8
	ldrsh r0, [r0, r1]	@ 0010d8c8 405e
.org 0x10d8ca
	cmp r0, #95	@ 0010d8ca 5f28
.org 0x10d8cc
	bgt.n 0x10d910	@ 0010d8cc 20dc
.org 0x10d8ce
	mov r6, ip	@ 0010d8ce 6646
.org 0x10d8d0
	movs r1, #4	@ 0010d8d0 0421
.org 0x10d8d2
	ldrsh r0, [r6, r1]	@ 0010d8d2 705e
.org 0x10d8d4
	lsls r0, r0, #2	@ 0010d8d4 8000
.org 0x10d8d6
	mov r1, ip	@ 0010d8d6 6146
.org 0x10d8d8
	adds r1, #8	@ 0010d8d8 0831
.org 0x10d8da
	adds r0, r0, r1	@ 0010d8da 4018
.org 0x10d8dc
	str r4, [r0, #0]	@ 0010d8dc 0460
.org 0x10d8de
	movs r4, #4	@ 0010d8de 0424
.org 0x10d8e0
	ldrsh r0, [r6, r4]	@ 0010d8e0 305f
.org 0x10d8e2
	movs r1, #196	@ 0010d8e2 c421
.org 0x10d8e4
	lsls r1, r1, #1	@ 0010d8e4 4900
.org 0x10d8e6
	add r1, ip	@ 0010d8e6 6144
.org 0x10d8e8
	adds r0, r0, r1	@ 0010d8e8 4018
.org 0x10d8ea
	strb r5, [r0, #0]	@ 0010d8ea 0570
.org 0x10d8ec
	movs r1, #4	@ 0010d8ec 0421
.org 0x10d8ee
	ldrsh r0, [r6, r1]	@ 0010d8ee 705e
.org 0x10d8f0
	movs r1, #244	@ 0010d8f0 f421
.org 0x10d8f2
	lsls r1, r1, #1	@ 0010d8f2 4900
.org 0x10d8f4
	add r1, ip	@ 0010d8f4 6144
.org 0x10d8f6
	adds r0, r0, r1	@ 0010d8f6 4018
.org 0x10d8f8
	strb r2, [r0, #0]	@ 0010d8f8 0270
.org 0x10d8fa
	movs r2, #4	@ 0010d8fa 0422
.org 0x10d8fc
	ldrsh r0, [r6, r2]	@ 0010d8fc b05e
.org 0x10d8fe
	lsls r0, r0, #1	@ 0010d8fe 4000
.org 0x10d900
	movs r1, #146	@ 0010d900 9221
.org 0x10d902
	lsls r1, r1, #2	@ 0010d902 8900
.org 0x10d904
	add r1, ip	@ 0010d904 6144
.org 0x10d906
	adds r0, r0, r1	@ 0010d906 4018
.org 0x10d908
	strh r3, [r0, #0]	@ 0010d908 0380
.org 0x10d90a
	ldrh r0, [r6, #4]	@ 0010d90a b088
.org 0x10d90c
	adds r0, #1	@ 0010d90c 0130
.org 0x10d90e
	strh r0, [r6, #4]	@ 0010d90e b080
.org 0x10d910
	pop {r4, r5, r6}	@ 0010d910 70bc
.org 0x10d912
	pop {r0}	@ 0010d912 01bc
.org 0x10d914
	bx r0	@ 0010d914 0047
