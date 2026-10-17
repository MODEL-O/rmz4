@ FUN_08095cd8  entry 0x08095cd8  size 62
.thumb
.org 0x95cd8
FUN_08095cd8:
	push {r4, lr}	@ 00095cd8 10b5
.org 0x95cda
	adds r3, r0, #0	@ 00095cda 031c
.org 0x95cdc
	adds r2, r3, #0	@ 00095cdc 1a1c
.org 0x95cde
	adds r2, #180	@ 00095cde b432
.org 0x95ce0
	adds r4, r3, #0	@ 00095ce0 1c1c
.org 0x95ce2
	adds r4, #184	@ 00095ce2 b834
.org 0x95ce4
	ldrh r0, [r4, #0]	@ 00095ce4 2088
.org 0x95ce6
	lsls r0, r0, #16	@ 00095ce6 0004
.org 0x95ce8
	asrs r0, r0, #24	@ 00095ce8 0016
.org 0x95cea
	ldrb r1, [r2, #0]	@ 00095cea 1178
.org 0x95cec
	subs r1, r1, r0	@ 00095cec 091a
.org 0x95cee
	strb r1, [r2, #0]	@ 00095cee 1170
.org 0x95cf0
	adds r0, r3, #0	@ 00095cf0 181c
.org 0x95cf2
	adds r0, #36	@ 00095cf2 2430
.org 0x95cf4
	strb r1, [r0, #0]	@ 00095cf4 0170
.org 0x95cf6
	movs r1, #128	@ 00095cf6 8021
.org 0x95cf8
	lsls r1, r1, #2	@ 00095cf8 8900
.org 0x95cfa
	adds r0, r1, #0	@ 00095cfa 081c
.org 0x95cfc
	ldrh r1, [r4, #0]	@ 00095cfc 2188
.org 0x95cfe
	adds r0, r0, r1	@ 00095cfe 4018
.org 0x95d00
	strh r0, [r4, #0]	@ 00095d00 2080
.org 0x95d02
	lsls r0, r0, #16	@ 00095d02 0004
.org 0x95d04
	asrs r0, r0, #16	@ 00095d04 0014
.org 0x95d06
	movs r1, #128	@ 00095d06 8021
.org 0x95d08
	lsls r1, r1, #7	@ 00095d08 c901
.org 0x95d0a
	cmp r0, r1	@ 00095d0a 8842
.org 0x95d0c
	ble.n 0x95d10	@ 00095d0c 00dd
.org 0x95d0e
	strh r1, [r4, #0]	@ 00095d0e 2180
.org 0x95d10
	pop {r4}	@ 00095d10 10bc
.org 0x95d12
	pop {r0}	@ 00095d12 01bc
.org 0x95d14
	bx r0	@ 00095d14 0047
