@ FUN_0803d8c8  entry 0x0803d8c8  size 106
.thumb
.org 0x3d8c8
FUN_0803d8c8:
	push {r4, lr}	@ 0003d8c8 10b5
.org 0x3d8ca
	adds r3, r0, #0	@ 0003d8ca 031c
.org 0x3d8cc
	adds r0, #180	@ 0003d8cc b430
.org 0x3d8ce
	ldr r4, [r0, #0]	@ 0003d8ce 0468
.org 0x3d8d0
	ldrb r0, [r4, #10]	@ 0003d8d0 a07a
.org 0x3d8d2
	lsrs r0, r0, #4	@ 0003d8d2 0009
.org 0x3d8d4
	movs r2, #1	@ 0003d8d4 0122
.org 0x3d8d6
	bics r2, r0	@ 0003d8d6 8243
.org 0x3d8d8
	cmp r2, #0	@ 0003d8d8 002a
.org 0x3d8da
	beq.n 0x3d8e4	@ 0003d8da 03d0
.org 0x3d8dc
	ldrb r1, [r3, #10]	@ 0003d8dc 997a
.org 0x3d8de
	movs r0, #16	@ 0003d8de 1020
.org 0x3d8e0
	orrs r0, r1	@ 0003d8e0 0843
.org 0x3d8e2
	b.n 0x3d8ea	@ 0003d8e2 02e0
.org 0x3d8e4
	ldrb r1, [r3, #10]	@ 0003d8e4 997a
.org 0x3d8e6
	movs r0, #239	@ 0003d8e6 ef20
.org 0x3d8e8
	ands r0, r1	@ 0003d8e8 0840
.org 0x3d8ea
	strb r0, [r3, #10]	@ 0003d8ea 9872
.org 0x3d8ec
	adds r1, r2, #0	@ 0003d8ec 111c
.org 0x3d8ee
	adds r0, r3, #0	@ 0003d8ee 181c
.org 0x3d8f0
	adds r0, #76	@ 0003d8f0 4c30
.org 0x3d8f2
	strb r1, [r0, #0]	@ 0003d8f2 0170
.org 0x3d8f4
	movs r0, #74	@ 0003d8f4 4a20
.org 0x3d8f6
	adds r0, r0, r3	@ 0003d8f6 c018
.org 0x3d8f8
	mov ip, r0	@ 0003d8f8 8446
.org 0x3d8fa
	lsls r1, r1, #4	@ 0003d8fa 0901
.org 0x3d8fc
	ldrb r2, [r0, #0]	@ 0003d8fc 0278
.org 0x3d8fe
	movs r0, #17	@ 0003d8fe 1120
.org 0x3d900
	negs r0, r0	@ 0003d900 4042
.org 0x3d902
	ands r0, r2	@ 0003d902 1040
.org 0x3d904
	orrs r0, r1	@ 0003d904 0843
.org 0x3d906
	mov r1, ip	@ 0003d906 6146
.org 0x3d908
	strb r0, [r1, #0]	@ 0003d908 0870
.org 0x3d90a
	ldrb r1, [r3, #10]	@ 0003d90a 997a
.org 0x3d90c
	movs r0, #16	@ 0003d90c 1020
.org 0x3d90e
	ands r0, r1	@ 0003d90e 0840
.org 0x3d910
	cmp r0, #0	@ 0003d910 0028
.org 0x3d912
	beq.n 0x3d91c	@ 0003d912 03d0
.org 0x3d914
	ldr r0, [r4, #84]	@ 0003d914 606d
.org 0x3d916
	movs r1, #224	@ 0003d916 e021
.org 0x3d918
	lsls r1, r1, #4	@ 0003d918 0901
.org 0x3d91a
	b.n 0x3d920	@ 0003d91a 01e0
.org 0x3d91c
	ldr r0, [r4, #84]	@ 0003d91c 606d
.org 0x3d91e
	ldr r1, [pc, #20]	@ 0003d91e 0549
.org 0x3d920
	adds r0, r0, r1	@ 0003d920 4018
.org 0x3d922
	str r0, [r3, #84]	@ 0003d922 5865
.org 0x3d924
	ldr r0, [r4, #88]	@ 0003d924 a06d
.org 0x3d926
	ldr r1, [pc, #16]	@ 0003d926 0449
.org 0x3d928
	adds r0, r0, r1	@ 0003d928 4018
.org 0x3d92a
	str r0, [r3, #88]	@ 0003d92a 9865
.org 0x3d92c
	pop {r4}	@ 0003d92c 10bc
.org 0x3d92e
	pop {r0}	@ 0003d92e 01bc
.org 0x3d930
	bx r0	@ 0003d930 0047
