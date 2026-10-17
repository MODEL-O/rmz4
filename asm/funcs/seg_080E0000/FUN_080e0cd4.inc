@ FUN_080e0cd4  entry 0x080e0cd4  size 42
.thumb
.org 0xe0cd4
FUN_080e0cd4:
	push {lr}	@ 000e0cd4 00b5
.org 0xe0cd6
	adds r2, r0, #0	@ 000e0cd6 021c
.org 0xe0cd8
	ldrb r0, [r2, #18]	@ 000e0cd8 907c
.org 0xe0cda
	cmp r0, #0	@ 000e0cda 0028
.org 0xe0cdc
	beq.n 0xe0ce6	@ 000e0cdc 03d0
.org 0xe0cde
	subs r0, #1	@ 000e0cde 0138
.org 0xe0ce0
	strb r0, [r2, #18]	@ 000e0ce0 9074
.org 0xe0ce2
	movs r0, #0	@ 000e0ce2 0020
.org 0xe0ce4
	b.n 0xe0cfa	@ 000e0ce4 09e0
.org 0xe0ce6
	ldr r1, [pc, #24]	@ 000e0ce6 0649
.org 0xe0ce8
	ldrb r0, [r2, #9]	@ 000e0ce8 507a
.org 0xe0cea
	lsls r0, r0, #2	@ 000e0cea 8000
.org 0xe0cec
	adds r0, r0, r1	@ 000e0cec 4018
.org 0xe0cee
	movs r1, #2	@ 000e0cee 0221
.org 0xe0cf0
	str r1, [r2, #12]	@ 000e0cf0 d160
.org 0xe0cf2
	ldr r0, [r0, #0]	@ 000e0cf2 0068
.org 0xe0cf4
	ldr r0, [r0, #8]	@ 000e0cf4 8068
.org 0xe0cf6
	str r0, [r2, #20]	@ 000e0cf6 5061
.org 0xe0cf8
	movs r0, #1	@ 000e0cf8 0120
.org 0xe0cfa
	pop {r1}	@ 000e0cfa 02bc
.org 0xe0cfc
	bx r1	@ 000e0cfc 0847
