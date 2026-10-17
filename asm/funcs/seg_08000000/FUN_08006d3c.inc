@ FUN_08006d3c  entry 0x08006d3c  size 54
.thumb
.org 0x6d3c
FUN_08006d3c:
	push {r4, lr}	@ 00006d3c 10b5
.org 0x6d3e
	ldr r2, [pc, #52]	@ 00006d3e 0d4a
.org 0x6d40
	ldr r3, [pc, #52]	@ 00006d40 0d4b
.org 0x6d42
	ldrh r1, [r3, #0]	@ 00006d42 1988
.org 0x6d44
	movs r0, #240	@ 00006d44 f020
.org 0x6d46
	lsls r0, r0, #4	@ 00006d46 0001
.org 0x6d48
	ands r0, r1	@ 00006d48 0840
.org 0x6d4a
	lsrs r0, r0, #8	@ 00006d4a 000a
.org 0x6d4c
	movs r4, #251	@ 00006d4c fb24
.org 0x6d4e
	lsls r4, r4, #3	@ 00006d4e e400
.org 0x6d50
	adds r1, r2, r4	@ 00006d50 1119
.org 0x6d52
	strh r0, [r1, #0]	@ 00006d52 0880
.org 0x6d54
	ldrh r1, [r3, #6]	@ 00006d54 d988
.org 0x6d56
	adds r4, #2	@ 00006d56 0234
.org 0x6d58
	adds r0, r2, r4	@ 00006d58 1019
.org 0x6d5a
	strh r1, [r0, #0]	@ 00006d5a 0180
.org 0x6d5c
	ldrh r1, [r3, #8]	@ 00006d5c 1989
.org 0x6d5e
	adds r4, #2	@ 00006d5e 0234
.org 0x6d60
	adds r0, r2, r4	@ 00006d60 1019
.org 0x6d62
	strh r1, [r0, #0]	@ 00006d62 0180
.org 0x6d64
	ldrh r0, [r3, #10]	@ 00006d64 5889
.org 0x6d66
	ldr r1, [pc, #20]	@ 00006d66 0549
.org 0x6d68
	adds r2, r2, r1	@ 00006d68 5218
.org 0x6d6a
	strh r0, [r2, #0]	@ 00006d6a 1080
.org 0x6d6c
	pop {r4}	@ 00006d6c 10bc
.org 0x6d6e
	pop {r0}	@ 00006d6e 01bc
.org 0x6d70
	bx r0	@ 00006d70 0047
