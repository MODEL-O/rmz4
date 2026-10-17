@ FUN_0807e940  entry 0x0807e940  size 50
.thumb
.org 0x7e940
FUN_0807e940:
	push {r4, r5, lr}	@ 0007e940 30b5
.org 0x7e942
	ldr r2, [pc, #32]	@ 0007e942 084a
.org 0x7e944
	adds r1, r1, r2	@ 0007e944 8918
.org 0x7e946
	adds r0, #180	@ 0007e946 b430
.org 0x7e948
	ldr r0, [r0, #0]	@ 0007e948 0068
.org 0x7e94a
	subs r1, r1, r0	@ 0007e94a 091a
.org 0x7e94c
	movs r3, #0	@ 0007e94c 0023
.org 0x7e94e
	ldr r5, [pc, #24]	@ 0007e94e 064d
.org 0x7e950
	ldr r4, [pc, #24]	@ 0007e950 064c
.org 0x7e952
	adds r2, r3, #1	@ 0007e952 5a1c
.org 0x7e954
	lsls r0, r2, #2	@ 0007e954 9000
.org 0x7e956
	adds r0, r0, r5	@ 0007e956 4019
.org 0x7e958
	ldr r0, [r0, #0]	@ 0007e958 0068
.org 0x7e95a
	adds r0, r0, r4	@ 0007e95a 0019
.org 0x7e95c
	cmp r1, r0	@ 0007e95c 8142
.org 0x7e95e
	bge.n 0x7e970	@ 0007e95e 07da
.org 0x7e960
	adds r0, r3, #0	@ 0007e960 181c
.org 0x7e962
	b.n 0x7e978	@ 0007e962 09e0
.org 0x7e964
	.byte 0x00,0x88,0xff,0xff	@ 0007e964 data
.org 0x7e968
	.byte 0x50,0xd8,0x85,0x08	@ 0007e968 data
.org 0x7e96c
	.byte 0x00,0xe8,0xff,0xff	@ 0007e96c data
.org 0x7e970
	adds r3, r2, #0	@ 0007e970 131c
