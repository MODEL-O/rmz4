@ FUN_0806d94c  entry 0x0806d94c  size 42
.thumb
.org 0x6d94c
FUN_0806d94c:
	push {lr}	@ 0006d94c 00b5
.org 0x6d94e
	adds r2, r0, #0	@ 0006d94e 021c
.org 0x6d950
	ldr r0, [r2, #20]	@ 0006d950 5069
.org 0x6d952
	movs r1, #1	@ 0006d952 0121
.org 0x6d954
	ands r0, r1	@ 0006d954 0840
.org 0x6d956
	cmp r0, #0	@ 0006d956 0028
.org 0x6d958
	beq.n 0x6d972	@ 0006d958 0bd0
.org 0x6d95a
	ldr r0, [r2, #12]	@ 0006d95a d068
.org 0x6d95c
	ldr r0, [r0, #44]	@ 0006d95c c06a
.org 0x6d95e
	ldr r2, [r2, #44]	@ 0006d95e d26a
.org 0x6d960
	movs r3, #0	@ 0006d960 0023
.org 0x6d962
	ldr r1, [r0, #84]	@ 0006d962 416d
.org 0x6d964
	ldr r0, [r2, #84]	@ 0006d964 506d
.org 0x6d966
	cmp r1, r0	@ 0006d966 8142
.org 0x6d968
	ble.n 0x6d96c	@ 0006d968 00dd
.org 0x6d96a
	movs r3, #1	@ 0006d96a 0123
.org 0x6d96c
	adds r0, r2, #0	@ 0006d96c 101c
.org 0x6d96e
	adds r0, #224	@ 0006d96e e030
.org 0x6d970
	strb r3, [r0, #0]	@ 0006d970 0370
.org 0x6d972
	pop {r0}	@ 0006d972 01bc
.org 0x6d974
	bx r0	@ 0006d974 0047
