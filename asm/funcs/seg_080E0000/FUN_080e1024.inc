@ FUN_080e1024  entry 0x080e1024  size 40
.thumb
.org 0xe1024
FUN_080e1024:
	push {lr}	@ 000e1024 00b5
.org 0xe1026
	sub sp, #8	@ 000e1026 82b0
.org 0xe1028
	ldrb r3, [r0, #10]	@ 000e1028 837a
.org 0xe102a
	lsrs r3, r3, #4	@ 000e102a 1b09
.org 0xe102c
	movs r1, #1	@ 000e102c 0121
.org 0xe102e
	ands r3, r1	@ 000e102e 0b40
.org 0xe1030
	ldr r1, [r0, #84]	@ 000e1030 416d
.org 0xe1032
	str r1, [sp, #0]	@ 000e1032 0091
.org 0xe1034
	ldr r0, [r0, #88]	@ 000e1034 806d
.org 0xe1036
	str r0, [sp, #4]	@ 000e1036 0190
.org 0xe1038
	ldr r1, [pc, #16]	@ 000e1038 0449
.org 0xe103a
	lsls r0, r3, #4	@ 000e103a 1801
.org 0xe103c
	orrs r3, r0	@ 000e103c 0343
.org 0xe103e
	mov r0, sp	@ 000e103e 6846
.org 0xe1040
	movs r2, #0	@ 000e1040 0022
.org 0xe1042
	bl 0xd4c8c	@ 000e1042 f3f723fe
.org 0xe1046
	add sp, #8	@ 000e1046 02b0
.org 0xe1048
	pop {r0}	@ 000e1048 01bc
.org 0xe104a
	bx r0	@ 000e104a 0047
