@ FUN_0810a024  entry 0x0810a024  size 86
.thumb
.org 0x10a024
FUN_0810a024:
	push {r4, lr}	@ 0010a024 10b5
.org 0x10a026
	adds r4, r0, #0	@ 0010a026 041c
.org 0x10a028
	ldr r0, [r4, #84]	@ 0010a028 606d
.org 0x10a02a
	ldr r1, [r4, #92]	@ 0010a02a e16d
.org 0x10a02c
	adds r0, r0, r1	@ 0010a02c 4018
.org 0x10a02e
	str r0, [r4, #84]	@ 0010a02e 6065
.org 0x10a030
	ldr r0, [r4, #88]	@ 0010a030 a06d
.org 0x10a032
	ldr r1, [r4, #96]	@ 0010a032 216e
.org 0x10a034
	adds r0, r0, r1	@ 0010a034 4018
.org 0x10a036
	str r0, [r4, #88]	@ 0010a036 a065
.org 0x10a038
	adds r0, r4, #0	@ 0010a038 201c
.org 0x10a03a
	bl 0x10a168	@ 0010a03a 00f095f8
.org 0x10a03e
	lsls r0, r0, #24	@ 0010a03e 0006
.org 0x10a040
	cmp r0, #0	@ 0010a040 0028
.org 0x10a042
	bne.n 0x10a062	@ 0010a042 0ed1
.org 0x10a044
	adds r0, r4, #0	@ 0010a044 201c
.org 0x10a046
	adds r0, #140	@ 0010a046 8c30
.org 0x10a048
	ldr r1, [r0, #0]	@ 0010a048 0168
.org 0x10a04a
	movs r0, #4	@ 0010a04a 0420
.org 0x10a04c
	ands r0, r1	@ 0010a04c 0840
.org 0x10a04e
	cmp r0, #0	@ 0010a04e 0028
.org 0x10a050
	bne.n 0x10a062	@ 0010a050 07d1
.org 0x10a052
	movs r0, #128	@ 0010a052 8020
.org 0x10a054
	lsls r0, r0, #5	@ 0010a054 4001
.org 0x10a056
	ands r1, r0	@ 0010a056 0140
.org 0x10a058
	cmp r1, #0	@ 0010a058 0029
.org 0x10a05a
	beq.n 0x10a074	@ 0010a05a 0bd0
.org 0x10a05c
	movs r0, #43	@ 0010a05c 2b20
.org 0x10a05e
	bl 0x2b10	@ 0010a05e f8f657fd
.org 0x10a062
	ldr r1, [pc, #24]	@ 0010a062 0649
.org 0x10a064
	ldrb r0, [r4, #9]	@ 0010a064 607a
.org 0x10a066
	lsls r0, r0, #2	@ 0010a066 8000
.org 0x10a068
	adds r0, r0, r1	@ 0010a068 4018
.org 0x10a06a
	movs r1, #2	@ 0010a06a 0221
.org 0x10a06c
	str r1, [r4, #12]	@ 0010a06c e160
.org 0x10a06e
	ldr r0, [r0, #0]	@ 0010a06e 0068
.org 0x10a070
	ldr r0, [r0, #8]	@ 0010a070 8068
.org 0x10a072
	str r0, [r4, #20]	@ 0010a072 6061
.org 0x10a074
	pop {r4}	@ 0010a074 10bc
.org 0x10a076
	pop {r0}	@ 0010a076 01bc
.org 0x10a078
	bx r0	@ 0010a078 0047
