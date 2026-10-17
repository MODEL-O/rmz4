@ FUN_08019d8c  entry 0x08019d8c  size 52
.thumb
.org 0x19d8c
FUN_08019d8c:
	push {lr}	@ 00019d8c 00b5
.org 0x19d8e
	adds r3, r0, #0	@ 00019d8e 031c
.org 0x19d90
	ldrb r0, [r3, #14]	@ 00019d90 987b
.org 0x19d92
	cmp r0, #0	@ 00019d92 0028
.org 0x19d94
	bne.n 0x19dbc	@ 00019d94 12d1
.org 0x19d96
	ldr r1, [r3, #92]	@ 00019d96 d96d
.org 0x19d98
	lsrs r1, r1, #4	@ 00019d98 0909
.org 0x19d9a
	lsls r1, r1, #1	@ 00019d9a 4900
.org 0x19d9c
	ldr r0, [pc, #32]	@ 00019d9c 0848
.org 0x19d9e
	adds r1, r1, r0	@ 00019d9e 0918
.org 0x19da0
	ldrh r2, [r1, #0]	@ 00019da0 0a88
.org 0x19da2
	ldr r0, [pc, #32]	@ 00019da2 0848
.org 0x19da4
	ands r0, r2	@ 00019da4 1040
.org 0x19da6
	movs r2, #3	@ 00019da6 0322
.org 0x19da8
	orrs r0, r2	@ 00019da8 1043
.org 0x19daa
	strh r0, [r1, #0]	@ 00019daa 0880
.org 0x19dac
	movs r0, #240	@ 00019dac f020
.org 0x19dae
	lsls r0, r0, #1	@ 00019dae 4000
.org 0x19db0
	str r0, [r3, #80]	@ 00019db0 1865
.org 0x19db2
	movs r0, #192	@ 00019db2 c020
.org 0x19db4
	str r0, [r3, #72]	@ 00019db4 9864
.org 0x19db6
	ldrb r0, [r3, #14]	@ 00019db6 987b
.org 0x19db8
	adds r0, #1	@ 00019db8 0130
.org 0x19dba
	strb r0, [r3, #14]	@ 00019dba 9873
.org 0x19dbc
	pop {r0}	@ 00019dbc 01bc
.org 0x19dbe
	bx r0	@ 00019dbe 0047
