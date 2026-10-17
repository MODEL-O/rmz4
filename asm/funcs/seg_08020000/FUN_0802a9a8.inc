@ FUN_0802a9a8  entry 0x0802a9a8  size 136
.thumb
.org 0x2a9a8
FUN_0802a9a8:
	push {r4, lr}	@ 0002a9a8 10b5
.org 0x2a9aa
	ldr r0, [pc, #60]	@ 0002a9aa 0f48
.org 0x2a9ac
	ldrb r0, [r0, #25]	@ 0002a9ac 407e
.org 0x2a9ae
	cmp r0, #0	@ 0002a9ae 0028
.org 0x2a9b0
	beq.n 0x2a9f0	@ 0002a9b0 1ed0
.org 0x2a9b2
	movs r4, #6	@ 0002a9b2 0624
.org 0x2a9b4
	movs r0, #12	@ 0002a9b4 0c20
.org 0x2a9b6
	bl 0xa70	@ 0002a9b6 d6f75bf8
.org 0x2a9ba
	adds r3, r0, #0	@ 0002a9ba 031c
.org 0x2a9bc
	cmp r3, #0	@ 0002a9bc 002b
.org 0x2a9be
	beq.n 0x2aa34	@ 0002a9be 39d0
.org 0x2a9c0
	ldr r1, [pc, #40]	@ 0002a9c0 0a49
.org 0x2a9c2
	adds r0, r1, #0	@ 0002a9c2 081c
.org 0x2a9c4
	strh r0, [r3, #0]	@ 0002a9c4 1880
.org 0x2a9c6
	adds r1, #1	@ 0002a9c6 0131
.org 0x2a9c8
	adds r0, r1, #0	@ 0002a9c8 081c
.org 0x2a9ca
	strh r0, [r3, #2]	@ 0002a9ca 5880
.org 0x2a9cc
	adds r1, #1	@ 0002a9cc 0131
.org 0x2a9ce
	adds r0, r1, #0	@ 0002a9ce 081c
.org 0x2a9d0
	strh r0, [r3, #4]	@ 0002a9d0 9880
.org 0x2a9d2
	adds r1, #1	@ 0002a9d2 0131
.org 0x2a9d4
	adds r0, r1, #0	@ 0002a9d4 081c
.org 0x2a9d6
	strh r0, [r3, #6]	@ 0002a9d6 d880
.org 0x2a9d8
	adds r1, #1	@ 0002a9d8 0131
.org 0x2a9da
	adds r0, r1, #0	@ 0002a9da 081c
.org 0x2a9dc
	strh r0, [r3, #8]	@ 0002a9dc 1881
.org 0x2a9de
	adds r1, #1	@ 0002a9de 0131
.org 0x2a9e0
	adds r0, r1, #0	@ 0002a9e0 081c
.org 0x2a9e2
	strh r0, [r3, #10]	@ 0002a9e2 5881
.org 0x2a9e4
	b.n 0x2aa16	@ 0002a9e4 17e0
.org 0x2a9e6
	.byte 0x00	@ 0002a9e6 data
.org 0x2a9e7
	.byte 0x00	@ 0002a9e7 data
.org 0x2a9e8
	.byte 0xe0,0xe8,0x02,0x02	@ 0002a9e8 data
.org 0x2a9ec
	.byte 0x20,0x61,0x00,0x00	@ 0002a9ec data
.org 0x2a9f0
	movs r4, #4	@ 0002a9f0 0424
.org 0x2a9f2
	movs r0, #8	@ 0002a9f2 0820
.org 0x2a9f4
	bl 0xa70	@ 0002a9f4 d6f73cf8
.org 0x2a9f8
	adds r3, r0, #0	@ 0002a9f8 031c
.org 0x2a9fa
	cmp r3, #0	@ 0002a9fa 002b
.org 0x2a9fc
	beq.n 0x2aa34	@ 0002a9fc 1ad0
.org 0x2a9fe
	ldr r1, [pc, #60]	@ 0002a9fe 0f49
.org 0x2aa00
	adds r0, r1, #0	@ 0002aa00 081c
.org 0x2aa02
	strh r0, [r3, #0]	@ 0002aa02 1880
.org 0x2aa04
	adds r1, #1	@ 0002aa04 0131
.org 0x2aa06
	adds r0, r1, #0	@ 0002aa06 081c
.org 0x2aa08
	strh r0, [r3, #2]	@ 0002aa08 5880
.org 0x2aa0a
	adds r1, #1	@ 0002aa0a 0131
.org 0x2aa0c
	adds r0, r1, #0	@ 0002aa0c 081c
.org 0x2aa0e
	strh r0, [r3, #4]	@ 0002aa0e 9880
.org 0x2aa10
	adds r1, #1	@ 0002aa10 0131
.org 0x2aa12
	adds r0, r1, #0	@ 0002aa12 081c
.org 0x2aa14
	strh r0, [r3, #6]	@ 0002aa14 d880
.org 0x2aa16
	ldr r0, [pc, #40]	@ 0002aa16 0a48
.org 0x2aa18
	ldrh r0, [r0, #0]	@ 0002aa18 0088
.org 0x2aa1a
	movs r1, #248	@ 0002aa1a f821
.org 0x2aa1c
	lsls r1, r1, #5	@ 0002aa1c 4901
.org 0x2aa1e
	ands r1, r0	@ 0002aa1e 0140
.org 0x2aa20
	lsls r1, r1, #3	@ 0002aa20 c900
.org 0x2aa22
	movs r0, #137	@ 0002aa22 8920
.org 0x2aa24
	lsls r0, r0, #1	@ 0002aa24 4000
.org 0x2aa26
	subs r0, r0, r4	@ 0002aa26 001b
.org 0x2aa28
	lsls r0, r0, #1	@ 0002aa28 4000
.org 0x2aa2a
	adds r1, r1, r0	@ 0002aa2a 0918
.org 0x2aa2c
	lsls r2, r4, #1	@ 0002aa2c 6200
.org 0x2aa2e
	adds r0, r3, #0	@ 0002aa2e 181c
