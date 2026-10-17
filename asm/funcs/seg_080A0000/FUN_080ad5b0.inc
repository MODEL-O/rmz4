@ FUN_080ad5b0  entry 0x080ad5b0  size 64
.thumb
.org 0xad5b0
FUN_080ad5b0:
	push {r4, r5, lr}	@ 000ad5b0 30b5
.org 0xad5b2
	adds r5, r0, #0	@ 000ad5b2 051c
.org 0xad5b4
	ldr r1, [pc, #56]	@ 000ad5b4 0e49
.org 0xad5b6
	ldrb r0, [r5, #9]	@ 000ad5b6 687a
.org 0xad5b8
	lsls r0, r0, #2	@ 000ad5b8 8000
.org 0xad5ba
	adds r0, r0, r1	@ 000ad5ba 4018
.org 0xad5bc
	movs r1, #1	@ 000ad5bc 0121
.org 0xad5be
	str r1, [r5, #12]	@ 000ad5be e960
.org 0xad5c0
	ldr r0, [r0, #0]	@ 000ad5c0 0068
.org 0xad5c2
	ldr r0, [r0, #4]	@ 000ad5c2 4068
.org 0xad5c4
	str r0, [r5, #20]	@ 000ad5c4 6861
.org 0xad5c6
	ldrb r1, [r5, #10]	@ 000ad5c6 a97a
.org 0xad5c8
	movs r0, #254	@ 000ad5c8 fe20
.org 0xad5ca
	ands r0, r1	@ 000ad5ca 0840
.org 0xad5cc
	movs r1, #2	@ 000ad5cc 0221
.org 0xad5ce
	orrs r0, r1	@ 000ad5ce 0843
.org 0xad5d0
	strb r0, [r5, #10]	@ 000ad5d0 a872
.org 0xad5d2
	movs r4, #0	@ 000ad5d2 0024
.org 0xad5d4
	lsls r1, r4, #24	@ 000ad5d4 2106
.org 0xad5d6
	lsrs r1, r1, #24	@ 000ad5d6 090e
.org 0xad5d8
	adds r0, r5, #0	@ 000ad5d8 281c
.org 0xad5da
	bl 0xad538	@ 000ad5da fff7adff
.org 0xad5de
	adds r4, #1	@ 000ad5de 0134
.org 0xad5e0
	cmp r4, #3	@ 000ad5e0 032c
.org 0xad5e2
	ble.n 0xad5d4	@ 000ad5e2 f7dd
.org 0xad5e4
	adds r0, r5, #0	@ 000ad5e4 281c
.org 0xad5e6
	bl 0xad678	@ 000ad5e6 00f047f8
.org 0xad5ea
	pop {r4, r5}	@ 000ad5ea 30bc
.org 0xad5ec
	pop {r0}	@ 000ad5ec 01bc
.org 0xad5ee
	bx r0	@ 000ad5ee 0047
