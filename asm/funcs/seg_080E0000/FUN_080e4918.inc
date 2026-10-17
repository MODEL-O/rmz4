@ FUN_080e4918  entry 0x080e4918  size 96
.thumb
.org 0xe4918
FUN_080e4918:
	push {r4, lr}	@ 000e4918 10b5
.org 0xe491a
	adds r4, r0, #0	@ 000e491a 041c
.org 0xe491c
	bl 0x1cff0	@ 000e491c 38f768fb
.org 0xe4920
	ldr r0, [r4, #84]	@ 000e4920 606d
.org 0xe4922
	ldr r1, [r4, #92]	@ 000e4922 e16d
.org 0xe4924
	adds r0, r0, r1	@ 000e4924 4018
.org 0xe4926
	str r0, [r4, #84]	@ 000e4926 6065
.org 0xe4928
	ldr r0, [r4, #88]	@ 000e4928 a06d
.org 0xe492a
	ldr r1, [r4, #96]	@ 000e492a 216e
.org 0xe492c
	adds r0, r0, r1	@ 000e492c 4018
.org 0xe492e
	str r0, [r4, #88]	@ 000e492e a065
.org 0xe4930
	adds r1, #64	@ 000e4930 4031
.org 0xe4932
	str r1, [r4, #96]	@ 000e4932 2166
.org 0xe4934
	ldrb r1, [r4, #18]	@ 000e4934 a17c
.org 0xe4936
	movs r0, #1	@ 000e4936 0120
.org 0xe4938
	ands r0, r1	@ 000e4938 0840
.org 0xe493a
	cmp r0, #0	@ 000e493a 0028
.org 0xe493c
	beq.n 0xe4946	@ 000e493c 03d0
.org 0xe493e
	ldrb r1, [r4, #10]	@ 000e493e a17a
.org 0xe4940
	movs r0, #254	@ 000e4940 fe20
.org 0xe4942
	ands r0, r1	@ 000e4942 0840
.org 0xe4944
	b.n 0xe494c	@ 000e4944 02e0
.org 0xe4946
	ldrb r0, [r4, #10]	@ 000e4946 a07a
.org 0xe4948
	movs r1, #1	@ 000e4948 0121
.org 0xe494a
	orrs r0, r1	@ 000e494a 0843
.org 0xe494c
	strb r0, [r4, #10]	@ 000e494c a072
.org 0xe494e
	ldrb r0, [r4, #18]	@ 000e494e a07c
.org 0xe4950
	subs r0, #1	@ 000e4950 0138
.org 0xe4952
	strb r0, [r4, #18]	@ 000e4952 a074
.org 0xe4954
	lsls r0, r0, #24	@ 000e4954 0006
.org 0xe4956
	cmp r0, #0	@ 000e4956 0028
.org 0xe4958
	bne.n 0xe4972	@ 000e4958 0bd1
.org 0xe495a
	ldr r1, [pc, #28]	@ 000e495a 0749
.org 0xe495c
	ldrb r0, [r4, #9]	@ 000e495c 607a
.org 0xe495e
	lsls r0, r0, #2	@ 000e495e 8000
.org 0xe4960
	adds r0, r0, r1	@ 000e4960 4018
.org 0xe4962
	movs r1, #2	@ 000e4962 0221
.org 0xe4964
	str r1, [r4, #12]	@ 000e4964 e160
.org 0xe4966
	ldr r0, [r0, #0]	@ 000e4966 0068
.org 0xe4968
	ldr r0, [r0, #8]	@ 000e4968 8068
.org 0xe496a
	str r0, [r4, #20]	@ 000e496a 6061
.org 0xe496c
	adds r0, r4, #0	@ 000e496c 201c
.org 0xe496e
	bl 0xe429c	@ 000e496e fff795fc
.org 0xe4972
	pop {r4}	@ 000e4972 10bc
.org 0xe4974
	pop {r0}	@ 000e4974 01bc
.org 0xe4976
	bx r0	@ 000e4976 0047
