@ FUN_0804c03c  entry 0x0804c03c  size 64
.thumb
.org 0x4c03c
FUN_0804c03c:
	push {lr}	@ 0004c03c 00b5
.org 0x4c03e
	adds r2, r0, #0	@ 0004c03e 021c
.org 0x4c040
	adds r0, #140	@ 0004c040 8c30
.org 0x4c042
	ldr r0, [r0, #0]	@ 0004c042 0068
.org 0x4c044
	movs r1, #128	@ 0004c044 8021
.org 0x4c046
	lsls r1, r1, #2	@ 0004c046 8900
.org 0x4c048
	ands r0, r1	@ 0004c048 0840
.org 0x4c04a
	cmp r0, #0	@ 0004c04a 0028
.org 0x4c04c
	beq.n 0x4c06c	@ 0004c04c 0ed0
.org 0x4c04e
	ldr r1, [pc, #24]	@ 0004c04e 0649
.org 0x4c050
	ldrb r0, [r2, #9]	@ 0004c050 507a
.org 0x4c052
	lsls r0, r0, #2	@ 0004c052 8000
.org 0x4c054
	adds r0, r0, r1	@ 0004c054 4018
.org 0x4c056
	movs r1, #2	@ 0004c056 0221
.org 0x4c058
	str r1, [r2, #12]	@ 0004c058 d160
.org 0x4c05a
	ldr r0, [r0, #0]	@ 0004c05a 0068
.org 0x4c05c
	ldr r0, [r0, #8]	@ 0004c05c 8068
.org 0x4c05e
	str r0, [r2, #20]	@ 0004c05e 5061
.org 0x4c060
	adds r0, r2, #0	@ 0004c060 101c
.org 0x4c062
	bl 0x4c084	@ 0004c062 00f00ff8
.org 0x4c066
	b.n 0x4c07c	@ 0004c066 09e0
.org 0x4c068
	.byte 0xf8,0x39,0x85,0x08	@ 0004c068 data
.org 0x4c06c
	ldr r0, [pc, #16]	@ 0004c06c 0448
.org 0x4c06e
	ldrb r1, [r2, #16]	@ 0004c06e 117c
.org 0x4c070
	lsls r1, r1, #2	@ 0004c070 8900
.org 0x4c072
	adds r1, r1, r0	@ 0004c072 0918
.org 0x4c074
	ldr r1, [r1, #0]	@ 0004c074 0968
.org 0x4c076
	adds r0, r2, #0	@ 0004c076 101c
.org 0x4c078
	bl 0x128f80	@ 0004c078 dcf082ff
