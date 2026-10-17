@ FUN_0811f010  entry 0x0811f010  size 92
.thumb
.org 0x11f010
FUN_0811f010:
	push {r4, lr}	@ 0011f010 10b5
.org 0x11f012
	adds r3, r0, #0	@ 0011f012 031c
.org 0x11f014
	ldrh r0, [r3, #4]	@ 0011f014 9888
.org 0x11f016
	adds r0, #1	@ 0011f016 0130
.org 0x11f018
	adds r1, r0, #0	@ 0011f018 011c
.org 0x11f01a
	strh r0, [r3, #4]	@ 0011f01a 9880
.org 0x11f01c
	lsls r0, r0, #16	@ 0011f01c 0004
.org 0x11f01e
	asrs r0, r0, #16	@ 0011f01e 0014
.org 0x11f020
	cmp r0, #15	@ 0011f020 0f28
.org 0x11f022
	ble.n 0x11f058	@ 0011f022 19dd
.org 0x11f024
	ldr r1, [pc, #36]	@ 0011f024 0949
.org 0x11f026
	ldr r2, [pc, #40]	@ 0011f026 0a4a
.org 0x11f028
	adds r0, r1, r2	@ 0011f028 8818
.org 0x11f02a
	movs r2, #32	@ 0011f02a 2022
.org 0x11f02c
	strb r2, [r0, #0]	@ 0011f02c 0270
.org 0x11f02e
	ldr r4, [pc, #36]	@ 0011f02e 094c
.org 0x11f030
	adds r0, r1, r4	@ 0011f030 0819
.org 0x11f032
	strb r2, [r0, #0]	@ 0011f032 0270
.org 0x11f034
	movs r0, #128	@ 0011f034 8020
.org 0x11f036
	lsls r0, r0, #3	@ 0011f036 c000
.org 0x11f038
	adds r1, r1, r0	@ 0011f038 0918
.org 0x11f03a
	strb r2, [r1, #0]	@ 0011f03a 0a70
.org 0x11f03c
	movs r0, #2	@ 0011f03c 0220
.org 0x11f03e
	strb r0, [r3, #1]	@ 0011f03e 5870
.org 0x11f040
	movs r0, #0	@ 0011f040 0020
.org 0x11f042
	strb r0, [r3, #2]	@ 0011f042 9870
.org 0x11f044
	adds r0, r3, #0	@ 0011f044 181c
.org 0x11f046
	bl 0x11f084	@ 0011f046 00f01df8
.org 0x11f04a
	b.n 0x11f072	@ 0011f04a 12e0
.org 0x11f04c
	.byte 0xc0,0x2a,0x00,0x03	@ 0011f04c data
.org 0x11f050
	.byte 0x02,0x04,0x00,0x00	@ 0011f050 data
.org 0x11f054
	.byte 0x01,0x04,0x00,0x00	@ 0011f054 data
.org 0x11f058
	ldr r2, [pc, #28]	@ 0011f058 074a
.org 0x11f05a
	ldr r3, [pc, #32]	@ 0011f05a 084b
.org 0x11f05c
	adds r0, r2, r3	@ 0011f05c d018
.org 0x11f05e
	strb r1, [r0, #0]	@ 0011f05e 0170
.org 0x11f060
	movs r0, #255	@ 0011f060 ff20
.org 0x11f062
	ands r0, r1	@ 0011f062 0840
.org 0x11f064
	ldr r4, [pc, #24]	@ 0011f064 064c
.org 0x11f066
	adds r1, r2, r4	@ 0011f066 1119
.org 0x11f068
	strb r0, [r1, #0]	@ 0011f068 0870
.org 0x11f06a
	movs r1, #128	@ 0011f06a 8021
