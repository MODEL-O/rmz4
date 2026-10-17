@ FUN_0804f95c  entry 0x0804f95c  size 42
.thumb
.org 0x4f95c
FUN_0804f95c:
	push {lr}	@ 0004f95c 00b5
.org 0x4f95e
	adds r2, r0, #0	@ 0004f95e 021c
.org 0x4f960
	ldr r0, [r2, #20]	@ 0004f960 5069
.org 0x4f962
	movs r1, #1	@ 0004f962 0121
.org 0x4f964
	ands r0, r1	@ 0004f964 0840
.org 0x4f966
	cmp r0, #0	@ 0004f966 0028
.org 0x4f968
	beq.n 0x4f982	@ 0004f968 0bd0
.org 0x4f96a
	ldr r0, [r2, #12]	@ 0004f96a d068
.org 0x4f96c
	ldr r0, [r0, #44]	@ 0004f96c c06a
.org 0x4f96e
	ldr r2, [r2, #44]	@ 0004f96e d26a
.org 0x4f970
	movs r3, #0	@ 0004f970 0023
.org 0x4f972
	ldr r1, [r0, #84]	@ 0004f972 416d
.org 0x4f974
	ldr r0, [r2, #84]	@ 0004f974 506d
.org 0x4f976
	cmp r1, r0	@ 0004f976 8142
.org 0x4f978
	ble.n 0x4f97c	@ 0004f978 00dd
.org 0x4f97a
	movs r3, #1	@ 0004f97a 0123
.org 0x4f97c
	adds r0, r2, #0	@ 0004f97c 101c
.org 0x4f97e
	adds r0, #188	@ 0004f97e bc30
.org 0x4f980
	strb r3, [r0, #0]	@ 0004f980 0370
.org 0x4f982
	pop {r0}	@ 0004f982 01bc
.org 0x4f984
	bx r0	@ 0004f984 0047
