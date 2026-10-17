@ FUN_0804d920  entry 0x0804d920  size 42
.thumb
.org 0x4d920
FUN_0804d920:
	push {lr}	@ 0004d920 00b5
.org 0x4d922
	adds r2, r0, #0	@ 0004d922 021c
.org 0x4d924
	ldr r0, [r2, #20]	@ 0004d924 5069
.org 0x4d926
	movs r1, #1	@ 0004d926 0121
.org 0x4d928
	ands r0, r1	@ 0004d928 0840
.org 0x4d92a
	cmp r0, #0	@ 0004d92a 0028
.org 0x4d92c
	beq.n 0x4d946	@ 0004d92c 0bd0
.org 0x4d92e
	ldr r0, [r2, #12]	@ 0004d92e d068
.org 0x4d930
	ldr r0, [r0, #44]	@ 0004d930 c06a
.org 0x4d932
	ldr r2, [r2, #44]	@ 0004d932 d26a
.org 0x4d934
	movs r3, #0	@ 0004d934 0023
.org 0x4d936
	ldr r1, [r0, #84]	@ 0004d936 416d
.org 0x4d938
	ldr r0, [r2, #84]	@ 0004d938 506d
.org 0x4d93a
	cmp r1, r0	@ 0004d93a 8142
.org 0x4d93c
	ble.n 0x4d940	@ 0004d93c 00dd
.org 0x4d93e
	movs r3, #1	@ 0004d93e 0123
.org 0x4d940
	adds r0, r2, #0	@ 0004d940 101c
.org 0x4d942
	adds r0, #188	@ 0004d942 bc30
.org 0x4d944
	strb r3, [r0, #0]	@ 0004d944 0370
.org 0x4d946
	pop {r0}	@ 0004d946 01bc
.org 0x4d948
	bx r0	@ 0004d948 0047
