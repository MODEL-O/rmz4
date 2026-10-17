@ FUN_0801ae28  entry 0x0801ae28  size 58
.thumb
.org 0x1ae28
FUN_0801ae28:
	push {r4, lr}	@ 0001ae28 10b5
.org 0x1ae2a
	adds r3, r0, #0	@ 0001ae2a 031c
.org 0x1ae2c
	ldrb r4, [r3, #14]	@ 0001ae2c 9c7b
.org 0x1ae2e
	cmp r4, #0	@ 0001ae2e 002c
.org 0x1ae30
	bne.n 0x1ae5c	@ 0001ae30 14d1
.org 0x1ae32
	ldr r1, [r3, #92]	@ 0001ae32 d96d
.org 0x1ae34
	lsrs r1, r1, #4	@ 0001ae34 0909
.org 0x1ae36
	lsls r1, r1, #1	@ 0001ae36 4900
.org 0x1ae38
	ldr r0, [pc, #40]	@ 0001ae38 0a48
.org 0x1ae3a
	adds r1, r1, r0	@ 0001ae3a 0918
.org 0x1ae3c
	ldrh r2, [r1, #0]	@ 0001ae3c 0a88
.org 0x1ae3e
	ldr r0, [pc, #40]	@ 0001ae3e 0a48
.org 0x1ae40
	ands r0, r2	@ 0001ae40 1040
.org 0x1ae42
	movs r2, #3	@ 0001ae42 0322
.org 0x1ae44
	orrs r0, r2	@ 0001ae44 1043
.org 0x1ae46
	strh r0, [r1, #0]	@ 0001ae46 0880
.org 0x1ae48
	ldr r0, [pc, #32]	@ 0001ae48 0848
.org 0x1ae4a
	str r0, [r3, #76]	@ 0001ae4a d864
.org 0x1ae4c
	movs r0, #160	@ 0001ae4c a020
.org 0x1ae4e
	lsls r0, r0, #1	@ 0001ae4e 4000
.org 0x1ae50
	str r0, [r3, #80]	@ 0001ae50 1865
.org 0x1ae52
	str r4, [r3, #68]	@ 0001ae52 5c64
.org 0x1ae54
	str r4, [r3, #72]	@ 0001ae54 9c64
.org 0x1ae56
	ldrb r0, [r3, #14]	@ 0001ae56 987b
.org 0x1ae58
	adds r0, #1	@ 0001ae58 0130
.org 0x1ae5a
	strb r0, [r3, #14]	@ 0001ae5a 9873
.org 0x1ae5c
	pop {r4}	@ 0001ae5c 10bc
.org 0x1ae5e
	pop {r0}	@ 0001ae5e 01bc
.org 0x1ae60
	bx r0	@ 0001ae60 0047
