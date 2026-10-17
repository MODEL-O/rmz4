@ FUN_080e6038  entry 0x080e6038  size 70
.thumb
.org 0xe6038
FUN_080e6038:
	push {r4, lr}	@ 000e6038 10b5
.org 0xe603a
	sub sp, #8	@ 000e603a 82b0
.org 0xe603c
	adds r4, r0, #0	@ 000e603c 041c
.org 0xe603e
	ldr r0, [r4, #84]	@ 000e603e 606d
.org 0xe6040
	str r0, [sp, #0]	@ 000e6040 0090
.org 0xe6042
	ldr r0, [r4, #88]	@ 000e6042 a06d
.org 0xe6044
	movs r1, #224	@ 000e6044 e021
.org 0xe6046
	lsls r1, r1, #5	@ 000e6046 4901
.org 0xe6048
	adds r0, r0, r1	@ 000e6048 4018
.org 0xe604a
	str r0, [sp, #4]	@ 000e604a 0190
.org 0xe604c
	movs r0, #1	@ 000e604c 0120
.org 0xe604e
	mov r1, sp	@ 000e604e 6946
.org 0xe6050
	bl 0xd0c88	@ 000e6050 eaf71afe
.org 0xe6054
	movs r0, #42	@ 000e6054 2a20
.org 0xe6056
	bl 0x2b10	@ 000e6056 1cf75bfd
.org 0xe605a
	movs r3, #1	@ 000e605a 0123
.org 0xe605c
	strb r3, [r4, #17]	@ 000e605c 6374
.org 0xe605e
	adds r0, r4, #0	@ 000e605e 201c
.org 0xe6060
	adds r0, #84	@ 000e6060 5430
.org 0xe6062
	movs r1, #129	@ 000e6062 8121
.org 0xe6064
	lsls r1, r1, #1	@ 000e6064 4900
.org 0xe6066
	ldrb r2, [r4, #10]	@ 000e6066 a27a
.org 0xe6068
	lsrs r2, r2, #4	@ 000e6068 1209
.org 0xe606a
	ands r2, r3	@ 000e606a 1a40
.org 0xe606c
	bl 0xe5d34	@ 000e606c fff762fe
.org 0xe6070
	adds r0, r4, #0	@ 000e6070 201c
.org 0xe6072
	bl 0xe5ed8	@ 000e6072 fff731ff
.org 0xe6076
	add sp, #8	@ 000e6076 02b0
.org 0xe6078
	pop {r4}	@ 000e6078 10bc
.org 0xe607a
	pop {r0}	@ 000e607a 01bc
.org 0xe607c
	bx r0	@ 000e607c 0047
