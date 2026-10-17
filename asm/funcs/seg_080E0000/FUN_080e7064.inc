@ FUN_080e7064  entry 0x080e7064  size 108
.thumb
.org 0xe7064
FUN_080e7064:
	push {r4, lr}	@ 000e7064 10b5
.org 0xe7066
	adds r4, r0, #0	@ 000e7066 041c
.org 0xe7068
	ldr r0, [r4, #84]	@ 000e7068 606d
.org 0xe706a
	ldr r1, [r4, #92]	@ 000e706a e16d
.org 0xe706c
	adds r0, r0, r1	@ 000e706c 4018
.org 0xe706e
	str r0, [r4, #84]	@ 000e706e 6065
.org 0xe7070
	ldr r0, [r4, #88]	@ 000e7070 a06d
.org 0xe7072
	ldr r1, [r4, #96]	@ 000e7072 216e
.org 0xe7074
	adds r0, r0, r1	@ 000e7074 4018
.org 0xe7076
	str r0, [r4, #88]	@ 000e7076 a065
.org 0xe7078
	adds r1, #64	@ 000e7078 4031
.org 0xe707a
	str r1, [r4, #96]	@ 000e707a 2166
.org 0xe707c
	adds r3, r4, #0	@ 000e707c 231c
.org 0xe707e
	adds r3, #116	@ 000e707e 7433
.org 0xe7080
	ldrb r0, [r3, #0]	@ 000e7080 1878
.org 0xe7082
	cmp r0, #0	@ 000e7082 0028
.org 0xe7084
	bne.n 0xe7094	@ 000e7084 06d1
.org 0xe7086
	ldrb r0, [r4, #10]	@ 000e7086 a07a
.org 0xe7088
	movs r1, #254	@ 000e7088 fe21
.org 0xe708a
	ands r1, r0	@ 000e708a 0140
.org 0xe708c
	strb r1, [r4, #10]	@ 000e708c a172
.org 0xe708e
	movs r0, #1	@ 000e708e 0120
.org 0xe7090
	strb r0, [r3, #0]	@ 000e7090 1870
.org 0xe7092
	b.n 0xe70a0	@ 000e7092 05e0
.org 0xe7094
	ldrb r0, [r4, #10]	@ 000e7094 a07a
.org 0xe7096
	movs r1, #1	@ 000e7096 0121
.org 0xe7098
	movs r2, #0	@ 000e7098 0022
.org 0xe709a
	orrs r1, r0	@ 000e709a 0143
.org 0xe709c
	strb r1, [r4, #10]	@ 000e709c a172
.org 0xe709e
	strb r2, [r3, #0]	@ 000e709e 1a70
.org 0xe70a0
	ldr r0, [r4, #84]	@ 000e70a0 606d
.org 0xe70a2
	ldr r1, [r4, #88]	@ 000e70a2 a16d
.org 0xe70a4
	bl 0x7c7c	@ 000e70a4 20f7eafd
.org 0xe70a8
	lsls r0, r0, #16	@ 000e70a8 0004
.org 0xe70aa
	cmp r0, #0	@ 000e70aa 0028
.org 0xe70ac
	beq.n 0xe70ca	@ 000e70ac 0dd0
.org 0xe70ae
	adds r1, r4, #0	@ 000e70ae 211c
.org 0xe70b0
	adds r1, #84	@ 000e70b0 5431
.org 0xe70b2
	movs r0, #3	@ 000e70b2 0320
.org 0xe70b4
	bl 0xd0c88	@ 000e70b4 e9f7e8fd
.org 0xe70b8
	ldr r1, [pc, #20]	@ 000e70b8 0549
.org 0xe70ba
	ldrb r0, [r4, #9]	@ 000e70ba 607a
.org 0xe70bc
	lsls r0, r0, #2	@ 000e70bc 8000
.org 0xe70be
	adds r0, r0, r1	@ 000e70be 4018
.org 0xe70c0
	movs r1, #2	@ 000e70c0 0221
.org 0xe70c2
	str r1, [r4, #12]	@ 000e70c2 e160
.org 0xe70c4
	ldr r0, [r0, #0]	@ 000e70c4 0068
.org 0xe70c6
	ldr r0, [r0, #8]	@ 000e70c6 8068
.org 0xe70c8
	str r0, [r4, #20]	@ 000e70c8 6061
.org 0xe70ca
	pop {r4}	@ 000e70ca 10bc
.org 0xe70cc
	pop {r0}	@ 000e70cc 01bc
.org 0xe70ce
	bx r0	@ 000e70ce 0047
