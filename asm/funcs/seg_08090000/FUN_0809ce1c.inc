@ FUN_0809ce1c  entry 0x0809ce1c  size 64
.thumb
.org 0x9ce1c
FUN_0809ce1c:
	push {lr}	@ 0009ce1c 00b5
.org 0x9ce1e
	adds r2, r0, #0	@ 0009ce1e 021c
.org 0x9ce20
	ldr r1, [r2, #40]	@ 0009ce20 916a
.org 0x9ce22
	ldrb r0, [r2, #16]	@ 0009ce22 107c
.org 0x9ce24
	cmp r0, #2	@ 0009ce24 0228
.org 0x9ce26
	beq.n 0x9ce4c	@ 0009ce26 11d0
.org 0x9ce28
	ldrb r0, [r1, #12]	@ 0009ce28 087b
.org 0x9ce2a
	cmp r0, #1	@ 0009ce2a 0128
.org 0x9ce2c
	bls.n 0x9ce4c	@ 0009ce2c 0ed9
.org 0x9ce2e
	ldr r1, [pc, #24]	@ 0009ce2e 0649
.org 0x9ce30
	ldrb r0, [r2, #9]	@ 0009ce30 507a
.org 0x9ce32
	lsls r0, r0, #2	@ 0009ce32 8000
.org 0x9ce34
	adds r0, r0, r1	@ 0009ce34 4018
.org 0x9ce36
	movs r1, #2	@ 0009ce36 0221
.org 0x9ce38
	str r1, [r2, #12]	@ 0009ce38 d160
.org 0x9ce3a
	ldr r0, [r0, #0]	@ 0009ce3a 0068
.org 0x9ce3c
	ldr r0, [r0, #8]	@ 0009ce3c 8068
.org 0x9ce3e
	str r0, [r2, #20]	@ 0009ce3e 5061
.org 0x9ce40
	adds r0, r2, #0	@ 0009ce40 101c
.org 0x9ce42
	bl 0x9ce64	@ 0009ce42 00f00ff8
.org 0x9ce46
	b.n 0x9ce5c	@ 0009ce46 09e0
.org 0x9ce48
	.byte 0x40,0xdb,0x85,0x08	@ 0009ce48 data
.org 0x9ce4c
	ldr r0, [pc, #16]	@ 0009ce4c 0448
.org 0x9ce4e
	ldrb r1, [r2, #16]	@ 0009ce4e 117c
.org 0x9ce50
	lsls r1, r1, #2	@ 0009ce50 8900
.org 0x9ce52
	adds r1, r1, r0	@ 0009ce52 0918
.org 0x9ce54
	ldr r1, [r1, #0]	@ 0009ce54 0968
.org 0x9ce56
	adds r0, r2, #0	@ 0009ce56 101c
.org 0x9ce58
	bl 0x128f80	@ 0009ce58 8cf092f8
