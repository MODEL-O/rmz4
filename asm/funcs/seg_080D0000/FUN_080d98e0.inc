@ FUN_080d98e0  entry 0x080d98e0  size 98
.thumb
.org 0xd98e0
FUN_080d98e0:
	push {r4, lr}	@ 000d98e0 10b5
.org 0xd98e2
	adds r4, r0, #0	@ 000d98e2 041c
.org 0xd98e4
	bl 0x1cff0	@ 000d98e4 43f784fb
.org 0xd98e8
	ldr r2, [r4, #96]	@ 000d98e8 226e
.org 0xd98ea
	adds r2, #64	@ 000d98ea 4032
.org 0xd98ec
	str r2, [r4, #96]	@ 000d98ec 2266
.org 0xd98ee
	ldr r0, [r4, #84]	@ 000d98ee 606d
.org 0xd98f0
	ldr r1, [r4, #92]	@ 000d98f0 e16d
.org 0xd98f2
	adds r0, r0, r1	@ 000d98f2 4018
.org 0xd98f4
	str r0, [r4, #84]	@ 000d98f4 6065
.org 0xd98f6
	ldr r0, [r4, #88]	@ 000d98f6 a06d
.org 0xd98f8
	adds r0, r0, r2	@ 000d98f8 8018
.org 0xd98fa
	str r0, [r4, #88]	@ 000d98fa a065
.org 0xd98fc
	ldrb r1, [r4, #18]	@ 000d98fc a17c
.org 0xd98fe
	movs r0, #1	@ 000d98fe 0120
.org 0xd9900
	ands r0, r1	@ 000d9900 0840
.org 0xd9902
	cmp r0, #0	@ 000d9902 0028
.org 0xd9904
	beq.n 0xd990e	@ 000d9904 03d0
.org 0xd9906
	ldrb r1, [r4, #10]	@ 000d9906 a17a
.org 0xd9908
	movs r0, #1	@ 000d9908 0120
.org 0xd990a
	orrs r0, r1	@ 000d990a 0843
.org 0xd990c
	b.n 0xd9914	@ 000d990c 02e0
.org 0xd990e
	ldrb r1, [r4, #10]	@ 000d990e a17a
.org 0xd9910
	movs r0, #254	@ 000d9910 fe20
.org 0xd9912
	ands r0, r1	@ 000d9912 0840
.org 0xd9914
	strb r0, [r4, #10]	@ 000d9914 a072
.org 0xd9916
	ldrb r0, [r4, #18]	@ 000d9916 a07c
.org 0xd9918
	subs r0, #1	@ 000d9918 0138
.org 0xd991a
	strb r0, [r4, #18]	@ 000d991a a074
.org 0xd991c
	lsls r0, r0, #24	@ 000d991c 0006
.org 0xd991e
	lsrs r0, r0, #24	@ 000d991e 000e
.org 0xd9920
	cmp r0, #255	@ 000d9920 ff28
.org 0xd9922
	bne.n 0xd993c	@ 000d9922 0bd1
.org 0xd9924
	ldr r1, [pc, #28]	@ 000d9924 0749
.org 0xd9926
	ldrb r0, [r4, #9]	@ 000d9926 607a
.org 0xd9928
	lsls r0, r0, #2	@ 000d9928 8000
.org 0xd992a
	adds r0, r0, r1	@ 000d992a 4018
.org 0xd992c
	movs r1, #2	@ 000d992c 0221
.org 0xd992e
	str r1, [r4, #12]	@ 000d992e e160
.org 0xd9930
	ldr r0, [r0, #0]	@ 000d9930 0068
.org 0xd9932
	ldr r0, [r0, #8]	@ 000d9932 8068
.org 0xd9934
	str r0, [r4, #20]	@ 000d9934 6061
.org 0xd9936
	adds r0, r4, #0	@ 000d9936 201c
.org 0xd9938
	bl 0xd9518	@ 000d9938 fff7eefd
.org 0xd993c
	pop {r4}	@ 000d993c 10bc
.org 0xd993e
	pop {r0}	@ 000d993e 01bc
.org 0xd9940
	bx r0	@ 000d9940 0047
