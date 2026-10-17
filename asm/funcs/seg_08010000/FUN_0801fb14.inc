@ FUN_0801fb14  entry 0x0801fb14  size 74
.thumb
.org 0x1fb14
FUN_0801fb14:
	push {r4, lr}	@ 0001fb14 10b5
.org 0x1fb16
	adds r3, r0, #0	@ 0001fb16 031c
.org 0x1fb18
	adds r4, r1, #0	@ 0001fb18 0c1c
.org 0x1fb1a
	ldr r1, [r3, #56]	@ 0001fb1a 996b
.org 0x1fb1c
	ldr r0, [r4, #0]	@ 0001fb1c 2068
.org 0x1fb1e
	subs r2, r1, r0	@ 0001fb1e 0a1a
.org 0x1fb20
	cmp r2, #0	@ 0001fb20 002a
.org 0x1fb22
	bge.n 0x1fb30	@ 0001fb22 05da
.org 0x1fb24
	ldr r0, [pc, #4]	@ 0001fb24 0148
.org 0x1fb26
	subs r2, r0, r2	@ 0001fb26 821a
.org 0x1fb28
	b.n 0x1fb34	@ 0001fb28 04e0
.org 0x1fb2a
	.byte 0x00	@ 0001fb2a data
.org 0x1fb2b
	.byte 0x00	@ 0001fb2b data
.org 0x1fb2c
	.byte 0x00,0x88,0xff,0xff	@ 0001fb2c data
.org 0x1fb30
	ldr r0, [pc, #24]	@ 0001fb30 0648
.org 0x1fb32
	adds r2, r2, r0	@ 0001fb32 1218
.org 0x1fb34
	cmp r2, #0	@ 0001fb34 002a
.org 0x1fb36
	bge.n 0x1fb3a	@ 0001fb36 00da
.org 0x1fb38
	movs r2, #0	@ 0001fb38 0022
.org 0x1fb3a
	ldr r1, [r3, #60]	@ 0001fb3a d96b
.org 0x1fb3c
	ldr r0, [r4, #4]	@ 0001fb3c 6068
.org 0x1fb3e
	subs r1, r1, r0	@ 0001fb3e 091a
.org 0x1fb40
	cmp r1, #0	@ 0001fb40 0029
.org 0x1fb42
	bge.n 0x1fb54	@ 0001fb42 07da
.org 0x1fb44
	ldr r0, [pc, #8]	@ 0001fb44 0248
.org 0x1fb46
	subs r1, r0, r1	@ 0001fb46 411a
.org 0x1fb48
	b.n 0x1fb58	@ 0001fb48 06e0
.org 0x1fb4a
	.byte 0x00	@ 0001fb4a data
.org 0x1fb4b
	.byte 0x00	@ 0001fb4b data
.org 0x1fb4c
	.byte 0x00,0x88,0xff,0xff	@ 0001fb4c data
.org 0x1fb50
	.byte 0x00,0xb0,0xff,0xff	@ 0001fb50 data
.org 0x1fb54
	ldr r0, [pc, #16]	@ 0001fb54 0448
.org 0x1fb56
	adds r1, r1, r0	@ 0001fb56 0918
.org 0x1fb58
	cmp r1, #0	@ 0001fb58 0029
.org 0x1fb5a
	bge.n 0x1fb5e	@ 0001fb5a 00da
.org 0x1fb5c
	movs r1, #0	@ 0001fb5c 0021
