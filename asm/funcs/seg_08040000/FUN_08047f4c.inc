@ FUN_08047f4c  entry 0x08047f4c  size 42
.thumb
.org 0x47f4c
FUN_08047f4c:
	push {lr}	@ 00047f4c 00b5
.org 0x47f4e
	adds r2, r0, #0	@ 00047f4e 021c
.org 0x47f50
	ldr r0, [r2, #20]	@ 00047f50 5069
.org 0x47f52
	movs r1, #1	@ 00047f52 0121
.org 0x47f54
	ands r0, r1	@ 00047f54 0840
.org 0x47f56
	cmp r0, #0	@ 00047f56 0028
.org 0x47f58
	beq.n 0x47f72	@ 00047f58 0bd0
.org 0x47f5a
	ldr r0, [r2, #12]	@ 00047f5a d068
.org 0x47f5c
	ldr r0, [r0, #44]	@ 00047f5c c06a
.org 0x47f5e
	ldr r2, [r2, #44]	@ 00047f5e d26a
.org 0x47f60
	movs r3, #0	@ 00047f60 0023
.org 0x47f62
	ldr r1, [r0, #84]	@ 00047f62 416d
.org 0x47f64
	ldr r0, [r2, #84]	@ 00047f64 506d
.org 0x47f66
	cmp r1, r0	@ 00047f66 8142
.org 0x47f68
	ble.n 0x47f6c	@ 00047f68 00dd
.org 0x47f6a
	movs r3, #1	@ 00047f6a 0123
.org 0x47f6c
	adds r0, r2, #0	@ 00047f6c 101c
.org 0x47f6e
	adds r0, #188	@ 00047f6e bc30
.org 0x47f70
	strb r3, [r0, #0]	@ 00047f70 0370
.org 0x47f72
	pop {r0}	@ 00047f72 01bc
.org 0x47f74
	bx r0	@ 00047f74 0047
