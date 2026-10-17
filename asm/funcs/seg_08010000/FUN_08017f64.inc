@ FUN_08017f64  entry 0x08017f64  size 42
.thumb
.org 0x17f64
FUN_08017f64:
	push {lr}	@ 00017f64 00b5
.org 0x17f66
	adds r3, r0, #0	@ 00017f66 031c
.org 0x17f68
	ldrb r0, [r3, #14]	@ 00017f68 987b
.org 0x17f6a
	cmp r0, #0	@ 00017f6a 0028
.org 0x17f6c
	bne.n 0x17f8a	@ 00017f6c 0dd1
.org 0x17f6e
	ldr r1, [r3, #92]	@ 00017f6e d96d
.org 0x17f70
	lsrs r1, r1, #4	@ 00017f70 0909
.org 0x17f72
	lsls r1, r1, #1	@ 00017f72 4900
.org 0x17f74
	ldr r0, [pc, #24]	@ 00017f74 0648
.org 0x17f76
	adds r1, r1, r0	@ 00017f76 0918
.org 0x17f78
	ldrh r2, [r1, #0]	@ 00017f78 0a88
.org 0x17f7a
	ldr r0, [pc, #24]	@ 00017f7a 0648
.org 0x17f7c
	ands r0, r2	@ 00017f7c 1040
.org 0x17f7e
	movs r2, #1	@ 00017f7e 0122
.org 0x17f80
	orrs r0, r2	@ 00017f80 1043
.org 0x17f82
	strh r0, [r1, #0]	@ 00017f82 0880
.org 0x17f84
	ldrb r0, [r3, #14]	@ 00017f84 987b
.org 0x17f86
	adds r0, #1	@ 00017f86 0130
.org 0x17f88
	strb r0, [r3, #14]	@ 00017f88 9873
.org 0x17f8a
	pop {r0}	@ 00017f8a 01bc
.org 0x17f8c
	bx r0	@ 00017f8c 0047
