@ FUN_0804beb4  entry 0x0804beb4  size 42
.thumb
.org 0x4beb4
FUN_0804beb4:
	push {lr}	@ 0004beb4 00b5
.org 0x4beb6
	adds r2, r0, #0	@ 0004beb6 021c
.org 0x4beb8
	ldr r0, [r2, #20]	@ 0004beb8 5069
.org 0x4beba
	movs r1, #1	@ 0004beba 0121
.org 0x4bebc
	ands r0, r1	@ 0004bebc 0840
.org 0x4bebe
	cmp r0, #0	@ 0004bebe 0028
.org 0x4bec0
	beq.n 0x4beda	@ 0004bec0 0bd0
.org 0x4bec2
	ldr r0, [r2, #12]	@ 0004bec2 d068
.org 0x4bec4
	ldr r0, [r0, #44]	@ 0004bec4 c06a
.org 0x4bec6
	ldr r2, [r2, #44]	@ 0004bec6 d26a
.org 0x4bec8
	movs r3, #0	@ 0004bec8 0023
.org 0x4beca
	ldr r1, [r0, #84]	@ 0004beca 416d
.org 0x4becc
	ldr r0, [r2, #84]	@ 0004becc 506d
.org 0x4bece
	cmp r1, r0	@ 0004bece 8142
.org 0x4bed0
	ble.n 0x4bed4	@ 0004bed0 00dd
.org 0x4bed2
	movs r3, #1	@ 0004bed2 0123
.org 0x4bed4
	adds r0, r2, #0	@ 0004bed4 101c
.org 0x4bed6
	adds r0, #188	@ 0004bed6 bc30
.org 0x4bed8
	strb r3, [r0, #0]	@ 0004bed8 0370
.org 0x4beda
	pop {r0}	@ 0004beda 01bc
.org 0x4bedc
	bx r0	@ 0004bedc 0047
