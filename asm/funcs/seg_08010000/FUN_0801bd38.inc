@ FUN_0801bd38  entry 0x0801bd38  size 42
.thumb
.org 0x1bd38
FUN_0801bd38:
	push {lr}	@ 0001bd38 00b5
.org 0x1bd3a
	adds r3, r0, #0	@ 0001bd3a 031c
.org 0x1bd3c
	ldrb r0, [r3, #14]	@ 0001bd3c 987b
.org 0x1bd3e
	cmp r0, #0	@ 0001bd3e 0028
.org 0x1bd40
	bne.n 0x1bd5e	@ 0001bd40 0dd1
.org 0x1bd42
	ldr r1, [r3, #92]	@ 0001bd42 d96d
.org 0x1bd44
	lsrs r1, r1, #4	@ 0001bd44 0909
.org 0x1bd46
	lsls r1, r1, #1	@ 0001bd46 4900
.org 0x1bd48
	ldr r0, [pc, #24]	@ 0001bd48 0648
.org 0x1bd4a
	adds r1, r1, r0	@ 0001bd4a 0918
.org 0x1bd4c
	ldrh r2, [r1, #0]	@ 0001bd4c 0a88
.org 0x1bd4e
	ldr r0, [pc, #24]	@ 0001bd4e 0648
.org 0x1bd50
	ands r0, r2	@ 0001bd50 1040
.org 0x1bd52
	movs r2, #2	@ 0001bd52 0222
.org 0x1bd54
	orrs r0, r2	@ 0001bd54 1043
.org 0x1bd56
	strh r0, [r1, #0]	@ 0001bd56 0880
.org 0x1bd58
	ldrb r0, [r3, #14]	@ 0001bd58 987b
.org 0x1bd5a
	adds r0, #1	@ 0001bd5a 0130
.org 0x1bd5c
	strb r0, [r3, #14]	@ 0001bd5c 9873
.org 0x1bd5e
	pop {r0}	@ 0001bd5e 01bc
.org 0x1bd60
	bx r0	@ 0001bd60 0047
