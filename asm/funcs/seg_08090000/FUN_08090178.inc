@ FUN_08090178  entry 0x08090178  size 20
.thumb
.org 0x90178
FUN_08090178:
	push {lr}	@ 00090178 00b5
.org 0x9017a
	ldr r2, [pc, #16]	@ 0009017a 044a
.org 0x9017c
	ldrb r1, [r0, #14]	@ 0009017c 817b
.org 0x9017e
	lsls r1, r1, #2	@ 0009017e 8900
.org 0x90180
	adds r1, r1, r2	@ 00090180 8918
.org 0x90182
	ldr r1, [r1, #0]	@ 00090182 0968
.org 0x90184
	bl 0x128f80	@ 00090184 98f0fcfe
.org 0x90188
	pop {r0}	@ 00090188 01bc
.org 0x9018a
	bx r0	@ 0009018a 0047
