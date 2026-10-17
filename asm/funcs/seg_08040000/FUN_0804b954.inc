@ FUN_0804b954  entry 0x0804b954  size 42
.thumb
.org 0x4b954
FUN_0804b954:
	push {lr}	@ 0004b954 00b5
.org 0x4b956
	adds r2, r0, #0	@ 0004b956 021c
.org 0x4b958
	ldr r0, [r2, #20]	@ 0004b958 5069
.org 0x4b95a
	movs r1, #1	@ 0004b95a 0121
.org 0x4b95c
	ands r0, r1	@ 0004b95c 0840
.org 0x4b95e
	cmp r0, #0	@ 0004b95e 0028
.org 0x4b960
	beq.n 0x4b97a	@ 0004b960 0bd0
.org 0x4b962
	ldr r0, [r2, #12]	@ 0004b962 d068
.org 0x4b964
	ldr r0, [r0, #44]	@ 0004b964 c06a
.org 0x4b966
	ldr r2, [r2, #44]	@ 0004b966 d26a
.org 0x4b968
	movs r3, #0	@ 0004b968 0023
.org 0x4b96a
	ldr r1, [r0, #84]	@ 0004b96a 416d
.org 0x4b96c
	ldr r0, [r2, #84]	@ 0004b96c 506d
.org 0x4b96e
	cmp r1, r0	@ 0004b96e 8142
.org 0x4b970
	ble.n 0x4b974	@ 0004b970 00dd
.org 0x4b972
	movs r3, #1	@ 0004b972 0123
.org 0x4b974
	adds r0, r2, #0	@ 0004b974 101c
.org 0x4b976
	adds r0, #188	@ 0004b976 bc30
.org 0x4b978
	strb r3, [r0, #0]	@ 0004b978 0370
.org 0x4b97a
	pop {r0}	@ 0004b97a 01bc
.org 0x4b97c
	bx r0	@ 0004b97c 0047
